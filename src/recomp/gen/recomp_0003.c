/**
 * DOAU1 - Recompiled code chunk 3
 * Functions: 250 (0x0002D3D0 - 0x00037000)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0002D3D0
 * Original: 0x0002D3D0 - 0x0002D53B (363 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D3D0: ;
    eax = MEM32(0x34CDEC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D535; /* je: equal / zero */

loc_0002D3E2: ;
    PUSH32(esp, 0x421C0000);
    ecx = 4;
    PUSH32(esp, 0x41900000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x2C) = 0x41800000;
    MEM32(esp + 0x30) = 0x42800000;
    MEM32(esp + 0x34) = 0x42A00000;
    MEM32(esp + 0x38) = 0x42C00000;
    MEM32(esp + 0x40) = 0x41900000;
    MEM32(esp + 0x44) = 0x421C0000;
    MEM32(esp + 0x48) = 0x42A00000;
    MEM32(esp + 0x4C) = 0x42800000;
    MEM32(esp + 0x50) = 0x43100000;
    MEM32(esp + 0x54) = 0x42C00000;
    MEM32(esp + 0x5C) = 0x41900000;
    MEM32(esp + 0x60) = 0x421C0000;
    ecx = 7;
    edi = esp;
    if (CMP_NE(_fa, _fb)) goto loc_0002D4D3; /* jne: not equal / not zero */

loc_0002D468: ;
    esi = esp + 0x2C;
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
    PUSH32(esp, 0x0002D473u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002D473: ;
    esi = ZX8(MEM8(0x30D9A1));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x41600000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x2C2FF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C2FF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
    edi = esp;
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
    PUSH32(esp, 0x0002D4A1u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002D4A1: ;
    eax = MEM32(0x30F9B4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D535; /* je: equal / zero */

loc_0002D4B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D4B8u); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0002D4B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D535; /* jne: not equal / not zero */

loc_0002D4BF: ;
    eax = MEM32(0x30F9B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D4CAu); RECOMP_ABI_CALL(0x0002CF50u, sub_0002CF50); /* call 0x0002CF50 */

loc_0002D4CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002D4D3: ;
    esi = esp + 0x48;
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
    PUSH32(esp, 0x0002D4DEu); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002D4DE: ;
    esi = ZX8(MEM8(0x30D9F9));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x41D00000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x2C2FF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C2FF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
    edi = esp;
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
    PUSH32(esp, 0x0002D50Cu); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002D50C: ;
    eax = MEM32(0x30F9B8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D535; /* je: equal / zero */

loc_0002D519: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D51Fu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0002D51F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D535; /* jne: not equal / not zero */

loc_0002D526: ;
    ecx = MEM32(0x30F9B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D532u); RECOMP_ABI_CALL(0x0002CF50u, sub_0002CF50); /* call 0x0002CF50 */

loc_0002D532: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D535: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002D540
 * Original: 0x0002D540 - 0x0002DB5C (1564 bytes, 298 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D540(void)
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

loc_0002D540: ;
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0x42A00000;
    MEM32(esp + 0x44) = 0x42000000;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = 0x40A00000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x42200000;
    MEM32(esp + 0x5C) = 0x43000000;
    MEM32(esp + 0x60) = 0x42900000;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = 0x40000000;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0x42F00000;
    MEM32(esp + 0x78) = 0x42D00000;
    MEM32(esp + 0x7C) = 0x43180000;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x88) = 0;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x90) = 0x42A00000;
    MEM32(esp + 0x94) = 0x42C00000;
    MEM32(esp + 0x98) = 0x42E00000;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = 0x40800000;
    MEM32(esp + 0xA4) = 0;
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0xAC) = 0x43200000;
    MEM32(esp + 0xB0) = 0x42D00000;
    MEM32(esp + 0xB4) = 0x43400000;
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0xBC) = 0;
    MEM32(esp + 0xC0) = 0;
    MEM32(esp + 0xC4) = 0;
    MEM32(esp + 0xC8) = 0;
    MEM32(esp + 0xCC) = 0x42000000;
    MEM32(esp + 0xD0) = 0x42000000;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = 0x41000000;
    MEM32(esp + 0xDC) = 0;
    MEM32(esp + 0xE0) = 0x42900000;
    MEM32(esp + 0xE4) = 0x42200000;
    MEM32(esp + 0xE8) = 0x43000000;
    MEM32(esp + 0xEC) = 0x42900000;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xF4) = 0x41C80000;
    MEM32(esp + 0xF8) = 0x42100000;
    MEM32(esp + 0xFC) = 0;
    MEM32(esp + 0x100) = 0x43480000;
    MEM32(esp + 0x104) = 0x42600000;
    MEM32(esp + 0x108) = 0x43680000;
    MEM32(esp + 0x10C) = eax;
    MEM32(esp + 0x110) = 0x41C80000;
    MEM32(esp + 0x114) = 0x41D00000;
    MEM32(esp + 0x118) = 0x42800000;
    MEM32(esp + 0x11C) = 0x43480000;
    MEM32(esp + 0x120) = 0x42F00000;
    MEM32(esp + 0x124) = 0x43680000;
    MEM32(esp + 0x128) = eax;
    MEM32(esp + 0x12C) = 0x41C80000;
    MEM32(esp + 0x130) = 0x41D00000;
    MEM32(esp + 0x134) = 0x42D20000;
    MEM32(esp + 0x138) = 0x3F800000;
    MEM32(esp + 0x13C) = 0x42DE0000;
    MEM32(esp + 0x140) = 0x41700000;
    MEM32(esp + 0x144) = eax;
    MEM32(esp + 0x148) = 0;
    MEM32(esp + 0x14C) = 0;
    MEM32(esp + 0x150) = 0x43690000;
    MEM32(esp + 0x154) = 0x3F800000;
    MEM32(esp + 0x158) = 0x436F0000;
    MEM32(esp + 0x15C) = 0x41700000;
    MEM32(esp + 0x160) = eax;
    MEM32(esp + 0x164) = 0;
    SET_LO8(eax, MEM8(0x3369F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x168) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAFB; /* je: equal / zero */

loc_0002D849: ;
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x160;
    edi = esp;
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
    PUSH32(esp, 0x0002D875u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002D875: ;
    ebp = 0x10;
    eax = esp + 0x64;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;

loc_0002D891: ;
    esi = MEM32(esp + 0x14);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = MEM32(esp + 0x18);
    ecx = 7;
    edi = esp + 0x1C;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x10);
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
    ecx = (uint32_t)(int32_t)SMEM16(0x2CD698);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = esp + 0x134;
    PUSH32(esp, 0x42000000);
    ecx = 7;
    if (CMP_NE(_fa, _fb)) goto loc_0002D95B; /* jne: not equal / not zero */

loc_0002D8D0: ;
    PUSH32(esp, 0x41000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
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
    PUSH32(esp, 0x0002D8E7u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002D8E7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x43200000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41400000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x17C;
    edi = esp;
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
    PUSH32(esp, 0x0002D912u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002D912: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x42000000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x160;
    edi = esp;
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
    PUSH32(esp, 0x0002D93Du); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002D93D: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002D972;

loc_0002D95B: ;
    PUSH32(esp, 0x43300000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
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
    PUSH32(esp, 0x0002D972u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002D972: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x41000000);
    edx = ebp + 4;
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0x43300000);
    PUSH32(esp, ecx);
    ecx = 7;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0x160;
    edi = esp;
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
    PUSH32(esp, 0x0002D9ABu); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002D9AB: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C18C)); /* fadd dword ptr [0x22c18c] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x40;
    edi = esp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002D9D2u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002D9D2: ;
    esi = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2E (32-bit) */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0002D891; /* jl: less (signed <) */

loc_0002D9F9: ;
    _fa = (uint32_t)(MEM16(0x2CD698)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x2CD698), 4 (16-bit) */
    ecx = 7;
    esi = esp + 0xE0;
    edi = esp + 0x1C;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002DA31; /* jne: not equal / not zero */

loc_0002DA15: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002DA31: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x40;
    edi = esp;
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
    PUSH32(esp, 0x0002DA50u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002DA50: ;
    SET_LO8(eax, MEM8(0x336A0D));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esp + 0x1C;
    ecx = 7;
    esi = esp + 0x118;
    if (CMP_NE(_fa, _fb)) goto loc_0002DA73; /* jne: not equal / not zero */

loc_0002DA6C: ;
    esi = esp + 0xFC;

loc_0002DA73: ;
    _fa = (uint32_t)(MEM16(0x2CD698)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x2CD698), 2 (16-bit) */
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
    if (CMP_NE(_fa, _fb)) goto loc_0002DA9B; /* jne: not equal / not zero */

loc_0002DA7F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C1D0)); /* fadd dword ptr [0x22c1d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002DA9B: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x40;
    edi = esp;
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
    PUSH32(esp, 0x0002DABAu); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002DABA: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 4 + 0x10;
    PUSH32(esp, 0x41800000);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x43300000);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    ecx = 7;
    esi = esp + 0x140;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
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
    PUSH32(esp, 0x0002DAF8u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002DAF8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DAFB: ;
    eax = MEM32(0x30F9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB2C; /* je: equal / zero */

loc_0002DB05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DB0Bu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0002DB0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DB2C; /* jne: not equal / not zero */

loc_0002DB12: ;
    edx = MEM32(0x30F9B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002DB1Eu); RECOMP_ABI_CALL(0x0002CF50u, sub_0002CF50); /* call 0x0002CF50 */

loc_0002DB1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002DB2C: ;
    eax = MEM32(0x30F9B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB51; /* je: equal / zero */

loc_0002DB36: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DB3Cu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0002DB3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DB51; /* jne: not equal / not zero */

loc_0002DB43: ;
    eax = MEM32(0x30F9B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DB4Eu); RECOMP_ABI_CALL(0x0002CF50u, sub_0002CF50); /* call 0x0002CF50 */

loc_0002DB4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DB51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002DB60
 * Original: 0x0002DB60 - 0x0002DBD8 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DB60: ;
    SET_LO8(eax, MEM8(0x331F25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBD7; /* je: equal / zero */

loc_0002DB69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB76; /* je: equal / zero */

loc_0002DB6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB76; /* je: equal / zero */

loc_0002DB71: ;
    PUSH32(esp, 0x0002DB76u); RECOMP_ABI_CALL(0x0002D160u, sub_0002D160); /* call 0x0002D160 */

loc_0002DB76: ;
    _fa = (uint32_t)(MEM8(0x30F9C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F9C2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DBCD; /* jne: not equal / not zero */

loc_0002DB7F: ;
    PUSH32(esp, 0x0002DB84u); RECOMP_ABI_CALL(0x0002B590u, sub_0002B590); /* call 0x0002B590 */

loc_0002DB84: ;
    PUSH32(esp, 0x0002DB89u); RECOMP_ABI_CALL(0x0002ABE0u, sub_0002ABE0); /* call 0x0002ABE0 */

loc_0002DB89: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DBA9; /* jne: not equal / not zero */

loc_0002DB92: ;
    SET_LO8(eax, MEM8(0x30F9BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DBA9; /* jne: not equal / not zero */

loc_0002DB9B: ;
    _fa = (uint32_t)(MEM8(0x331F25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x331F25), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBCD; /* je: equal / zero */

loc_0002DBA4: ;
    PUSH32(esp, 0x0002DBA9u); RECOMP_ABI_CALL(0x0002B160u, sub_0002B160); /* call 0x0002B160 */

loc_0002DBA9: ;
    SET_LO8(eax, MEM8(0x331F25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBCD; /* je: equal / zero */

loc_0002DBB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBCD; /* je: equal / zero */

loc_0002DBB6: ;
    SET_LO8(eax, MEM8(0x30AE36));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DBCD; /* jne: not equal / not zero */

loc_0002DBBF: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBCD; /* je: equal / zero */

loc_0002DBC8: ;
    PUSH32(esp, 0x0002DBCDu); RECOMP_ABI_CALL(0x00028C30u, sub_00028C30); /* call 0x00028C30 */

loc_0002DBCD: ;
    SET_LO8(eax, MEM8(0x30F9C2));
    MEM8(0x3321CC) = LO8(eax);

loc_0002DBD7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002DBE0
 * Original: 0x0002DBE0 - 0x0002DD4B (363 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DBE0: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    edx = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x3314AB) = LO8(eax);
    eax = SX8(LO8(eax));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ecx + 0x30D9F2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9F2), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC76; /* je: equal / zero */

loc_0002DC04: ;
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(ecx, MEM8(ecx + 0x30D9CD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC76; /* je: equal / zero */

loc_0002DC16: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC76; /* je: equal / zero */

loc_0002DC1B: ;
    SET_LO16(eax, MEM16(0x331900));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002DC4C; /* jle: less or equal (signed <=) */

loc_0002DC26: ;
    _fb = (uint32_t)(0xFFFB) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 0xFFFB);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x331F1C) = 0;
    MEM16(0x331900) = LO16(eax);
    if ((_fas >= 0)) goto loc_0002DC44; /* jns: not sign (positive) */

loc_0002DC3B: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    MEM16(0x331900) = LO16(eax);

loc_0002DC44: ;
    ecx = SX16(LO16(eax));
    goto loc_0002DD09;

loc_0002DC4C: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x331904);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002DC72u); RECOMP_ABI_CALL(0x0002D260u, sub_0002D260); /* call 0x0002D260 */

loc_0002DC72: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002DC76: ;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO16(eax, MEM16(eax + 0x30D9C2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD02; /* je: equal / zero */

loc_0002DC87: ;
    SET_LO8(ecx, MEM8(0x3369F8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD02; /* jne: not equal / not zero */

loc_0002DC91: ;
    SET_LO16(ecx, MEM16(0x331F1C));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(0x331904));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ecx) (16-bit) */
    MEM16(0x331F1C) = LO16(ecx);
    MEM16(0x331900) = LO16(ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DCC0; /* jge: greater or equal (signed >=) */

loc_0002DCB6: ;
    SET_LO16(esi, LO16(ecx));
    MEM16(0x331904) = LO16(esi);

loc_0002DCC0: ;
    ecx = SX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(esi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DCFDu); RECOMP_ABI_CALL(0x0002D260u, sub_0002D260); /* call 0x0002D260 */

loc_0002DCFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DD02: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x331900);

loc_0002DD09: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(0x331904);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DD47u); RECOMP_ABI_CALL(0x0002D260u, sub_0002D260); /* call 0x0002D260 */

loc_0002DD47: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DD50
 * Original: 0x0002DD50 - 0x0002DE64 (276 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DD50: ;
    SET_LO8(eax, MEM8(0x30AA64));
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD6A; /* jne: not equal / not zero */

loc_0002DD5F: ;
    PUSH32(esp, 0x0002DD64u); RECOMP_ABI_CALL(0x0002B840u, sub_0002B840); /* call 0x0002B840 */

loc_0002DD64: ;
    MEM8(0x30AA64) = LO8(ebx);

loc_0002DD6A: ;
    _fa = (uint32_t)(MEM8(0x315AD4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x315AD4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD8C; /* jne: not equal / not zero */

loc_0002DD73: ;
    MEM16(0x331F30) = LO16(ebx);
    MEM16(0x331F32) = LO16(ebx);
    PUSH32(esp, 0x0002DD86u); RECOMP_ABI_CALL(0x0002B590u, sub_0002B590); /* call 0x0002B590 */

loc_0002DD86: ;
    MEM8(0x315AD4) = LO8(ebx);

loc_0002DD8C: ;
    SET_LO8(eax, MEM8(0x331F25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD9D; /* je: equal / zero */

loc_0002DD95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD9D; /* je: equal / zero */

loc_0002DD99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DDBE; /* jne: not equal / not zero */

loc_0002DD9D: ;
    PUSH32(esp, 0x0002DDA2u); RECOMP_ABI_CALL(0x0002A4D0u, sub_0002A4D0); /* call 0x0002A4D0 */

loc_0002DDA2: ;
    PUSH32(esp, 0x0002DDA7u); RECOMP_ABI_CALL(0x0002AF50u, sub_0002AF50); /* call 0x0002AF50 */

loc_0002DDA7: ;
    PUSH32(esp, 0x0002DDACu); RECOMP_ABI_CALL(0x0002B840u, sub_0002B840); /* call 0x0002B840 */

loc_0002DDAC: ;
    _fa = (uint32_t)(MEM8(0x3321D2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321D2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDB9; /* je: equal / zero */

loc_0002DDB4: ;
    PUSH32(esp, 0x0002DDB9u); RECOMP_ABI_CALL(0x0002C040u, sub_0002C040); /* call 0x0002C040 */

loc_0002DDB9: ;
    SET_LO8(eax, MEM8(0x331F25));

loc_0002DDBE: ;
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* ja: above (unsigned >) */

loc_0002DDCA: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x2E120)); return; /* indirect tail jmp */

    _fa = (uint32_t)(MEM8(0x3321D4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321D4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* je: equal / zero */

loc_0002DDDD: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), LO8(ebx) (8-bit) */
    SET_LO8(ecx, 0xFF);
    MEM8(0x3320D0) = LO8(ebx);
    MEM8(0x3320D1) = LO8(ebx);
    MEM8(0x3320E0) = LO8(ebx);
    MEM8(0x3320E1) = LO8(ebx);
    MEM8(0x3321D8) = LO8(ebx);
    MEM8(0x3321D9) = LO8(ebx);
    MEM8(0x331F40) = LO8(ebx);
    MEM8(0x331F41) = LO8(ebx);
    MEM8(0x3320D4) = LO8(ebx);
    MEM8(0x3320D5) = LO8(ebx);
    MEM8(0x3321D0) = LO8(ebx);
    MEM8(0x3321D1) = LO8(ebx);
    MEM8(0x331F48) = LO8(ebx);
    MEM8(0x331F49) = LO8(ebx);
    MEM8(0x331F44) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* jne: not equal / not zero */

loc_0002DE41: ;
    _fa = (uint32_t)(MEM8(0x30F9BC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F9BC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* jne: not equal / not zero */

loc_0002DE49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* je: equal / zero */

loc_0002DE4D: ;
    MEM8(0x331F3B) = LO8(ecx);
    MEM8(0x3320D2) = LO8(ecx);
    MEM8(0x3320D6) = LO8(ecx);
    PUSH32(esp, 0x0002DE64u); RECOMP_ABI_CALL(0x0002B160u, sub_0002B160); /* call 0x0002B160 */

    g_seh_ebp = ebp; sub_0002DE64(); return; /* fallthrough 0x0002DE64 */

}

/**
 * sub_0002DDD1
 * Original: 0x0002DDD1 - 0x0002DE93 (194 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDD1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DDD1: ;
    _fa = (uint32_t)(MEM8(0x3321D4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321D4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE69; /* je: equal / zero */

loc_0002DDDD: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), LO8(ebx) (8-bit) */
    SET_LO8(ecx, 0xFF);
    MEM8(0x3320D0) = LO8(ebx);
    MEM8(0x3320D1) = LO8(ebx);
    MEM8(0x3320E0) = LO8(ebx);
    MEM8(0x3320E1) = LO8(ebx);
    MEM8(0x3321D8) = LO8(ebx);
    MEM8(0x3321D9) = LO8(ebx);
    MEM8(0x331F40) = LO8(ebx);
    MEM8(0x331F41) = LO8(ebx);
    MEM8(0x3320D4) = LO8(ebx);
    MEM8(0x3320D5) = LO8(ebx);
    MEM8(0x3321D0) = LO8(ebx);
    MEM8(0x3321D1) = LO8(ebx);
    MEM8(0x331F48) = LO8(ebx);
    MEM8(0x331F49) = LO8(ebx);
    MEM8(0x331F44) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE69; /* jne: not equal / not zero */

loc_0002DE41: ;
    _fa = (uint32_t)(MEM8(0x30F9BC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F9BC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DE69; /* jne: not equal / not zero */

loc_0002DE49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE69; /* je: equal / zero */

loc_0002DE4D: ;
    MEM8(0x331F3B) = LO8(ecx);
    MEM8(0x3320D2) = LO8(ecx);
    MEM8(0x3320D6) = LO8(ecx);
    PUSH32(esp, 0x0002DE64u); RECOMP_ABI_CALL(0x0002B160u, sub_0002B160); /* call 0x0002B160 */

loc_0002DE64: ;
    SET_LO8(eax, MEM8(0x331F25));

loc_0002DE69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(0x3321D4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE7A; /* je: equal / zero */

loc_0002DE72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE7A; /* je: equal / zero */

loc_0002DE76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DE7F; /* jne: not equal / not zero */

loc_0002DE7A: ;
    PUSH32(esp, 0x0002DE7Fu); RECOMP_ABI_CALL(0x0002DB60u, sub_0002DB60); /* call 0x0002DB60 */

loc_0002DE7F: ;
    PUSH32(esp, 0x0002DE84u); RECOMP_ABI_CALL(0x000925B0u, sub_000925B0); /* call 0x000925B0 */

loc_0002DE84: ;
    PUSH32(esp, 0x0002DE89u); RECOMP_ABI_CALL(0x0002D3D0u, sub_0002D3D0); /* call 0x0002D3D0 */

loc_0002DE89: ;
    PUSH32(esp, 0x0002DE8Eu); RECOMP_ABI_CALL(0x00094AD0u, sub_00094AD0); /* call 0x00094AD0 */

loc_0002DE8E: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DE64
 * Original: 0x0002DE64 - 0x0002DE69 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DE64: ;
    SET_LO8(eax, MEM8(0x331F25));

    g_seh_ebp = ebp; sub_0002DE69(); return; /* fallthrough 0x0002DE69 */

}

/**
 * sub_0002DE69
 * Original: 0x0002DE69 - 0x0002DE93 (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DE69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(0x3321D4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE7A; /* je: equal / zero */

loc_0002DE72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE7A; /* je: equal / zero */

loc_0002DE76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DE7F; /* jne: not equal / not zero */

loc_0002DE7A: ;
    PUSH32(esp, 0x0002DE7Fu); RECOMP_ABI_CALL(0x0002DB60u, sub_0002DB60); /* call 0x0002DB60 */

loc_0002DE7F: ;
    PUSH32(esp, 0x0002DE84u); RECOMP_ABI_CALL(0x000925B0u, sub_000925B0); /* call 0x000925B0 */

loc_0002DE84: ;
    PUSH32(esp, 0x0002DE89u); RECOMP_ABI_CALL(0x0002D3D0u, sub_0002D3D0); /* call 0x0002D3D0 */

loc_0002DE89: ;
    PUSH32(esp, 0x0002DE8Eu); RECOMP_ABI_CALL(0x00094AD0u, sub_00094AD0); /* call 0x00094AD0 */

loc_0002DE8E: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DE93
 * Original: 0x0002DE93 - 0x0002DEC7 (52 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DE93: ;
    _fa = (uint32_t)(MEM8(0x3321D4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321D4), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEB6; /* je: equal / zero */

loc_0002DE9C: ;
    MEM8(0x3320E0) = LO8(ebx);
    MEM8(0x3320E1) = LO8(ebx);
    MEM8(0x3320D9) = 0xFF;
    MEM8(0x331F4A) = 1;

loc_0002DEB6: ;
    PUSH32(esp, 0x0002DEBBu); RECOMP_ABI_CALL(0x0002C5A0u, sub_0002C5A0); /* call 0x0002C5A0 */

loc_0002DEBB: ;
    SET_LO8(eax, MEM8(0x30DAB5));
    MEM8(0x3320D9) = LO8(eax);
    g_seh_ebp = ebp; sub_0002DE64(); return; /* tail jmp 0x0002DE64 */

}

/**
 * sub_0002DEC7
 * Original: 0x0002DEC7 - 0x0002E0A1 (474 bytes, 117 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DEC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DEC7: ;
    _fa = (uint32_t)(MEM8(0x3321D4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321D4), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEF4; /* je: equal / zero */

loc_0002DED0: ;
    MEM8(0x3321D2) = LO8(ebx);
    MEM8(0x3320CE) = LO8(ebx);
    MEM8(0x331F38) = LO8(ebx);
    MEM8(0x331F39) = LO8(ebx);
    MEM8(0x30DAB5) = LO8(ebx);
    MEM8(0x331B12) = LO8(ebx);

loc_0002DEF4: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DF18; /* jne: not equal / not zero */

loc_0002DEFD: ;
    _fa = (uint32_t)(MEM8(0x30F9BC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F9BC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DF18; /* jne: not equal / not zero */

loc_0002DF05: ;
    _fa = (uint32_t)(MEM8(0x331B16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x331B16), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DF18; /* jne: not equal / not zero */

loc_0002DF0E: ;
    PUSH32(esp, 0x0002DF13u); RECOMP_ABI_CALL(0x0002BA90u, sub_0002BA90); /* call 0x0002BA90 */

loc_0002DF13: ;
    SET_LO8(eax, MEM8(0x331F25));

loc_0002DF18: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* jne: not equal / not zero */

loc_0002DF25: ;
    PUSH32(esp, 0x0002DF2Au); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_0002DF2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE64(); return; } /* jne: not equal / not zero */

loc_0002DF33: ;
    ecx = ZX8(MEM8(0x30EDC8));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    SET_LO8(eax, MEM8(edx + 0x30D9A3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x305B14)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x305B14) (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE64(); return; } /* jb: below (unsigned <) */

loc_0002DF51: ;
    eax = MEM32(0x3321E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE64(); return; } /* je: equal / zero */

loc_0002DF5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFE9; /* jne: not equal / not zero */

loc_0002DF67: ;
    _fa = (uint32_t)(MEM32(0x3322BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3322BC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFAA; /* jne: not equal / not zero */

loc_0002DF6F: ;
    _fa = (uint32_t)(MEM32(0x332280)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x332280), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFAA; /* jne: not equal / not zero */

loc_0002DF77: ;
    _fa = (uint32_t)(MEM32(0x3322C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3322C8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFAA; /* jne: not equal / not zero */

loc_0002DF7F: ;
    eax = MEM32(0x332208);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DF8Bu); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_0002DF8B: ;
    ecx = MEM32(eax * 4 + 0x2E6A70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22C850);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0002DFA5u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0002DFA5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E024;

loc_0002DFAA: ;
    eax = MEM32(0x332208);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFB6u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_0002DFB6: ;
    edx = MEM32(eax * 4 + 0x2E6A70);
    eax = MEM32(0x3322C8);
    ecx = MEM32(0x332280);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(0x3322BC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x22C7E0);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0002DFE4u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0002DFE4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E024;

loc_0002DFE9: ;
    eax = MEM32(0x3321EC);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFF5u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_0002DFF5: ;
    eax = MEM32(eax * 4 + 0x2E6A70);
    ecx = MEM32(0x3321F8);
    edx = MEM32(0x332278);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x22C788);
    PUSH32(esp, 0x331910);
    PUSH32(esp, 0x0002E021u); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_0002E021: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E024: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1540);
    PUSH32(esp, 0x2800);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x331910);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0002E03Eu); RECOMP_ABI_CALL(0x000298A0u, sub_000298A0); /* call 0x000298A0 */

loc_0002E03E: ;
    eax = esp + 0xC;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM8(esp + 0x24) = 0xA;
    PUSH32(esp, 0x0002E04Fu); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_0002E04F: ;
    ecx = MEM32(0x180E24);
    MEM32(esp + 0xC) = 0x40400000;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0002E06Eu); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0002E06E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x1C2);
    PUSH32(esp, 0x0002E089u); RECOMP_ABI_CALL(0x000692B0u, sub_000692B0); /* call 0x000692B0 */

loc_0002E089: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002E09Cu); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_0002E09C: ;
    g_seh_ebp = ebp; sub_0002DE64(); return; /* tail jmp 0x0002DE64 */

}

/**
 * sub_0002E0A1
 * Original: 0x0002E0A1 - 0x0002E11F (126 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E0A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E0A1: ;
    _fa = (uint32_t)(MEM8(0x3321D4)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3321D4), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0002DE69(); return; } /* je: equal / zero */

loc_0002E0AE: ;
    MEM8(0x3321D2) = LO8(ebx);
    MEM8(0x3320CE) = LO8(ebx);
    MEM8(0x331F38) = LO8(ebx);
    MEM8(0x331F39) = LO8(ebx);
    MEM8(0x331F3A) = LO8(ebx);
    MEM8(0x331F34) = LO8(ebx);
    MEM8(0x3320D0) = LO8(ebx);
    MEM8(0x3320D1) = LO8(ebx);
    MEM8(0x3320E0) = LO8(ebx);
    MEM8(0x3320E1) = LO8(ebx);
    MEM8(0x3321D8) = LO8(ebx);
    MEM8(0x3321D9) = LO8(ebx);
    MEM8(0x331F40) = LO8(ebx);
    MEM8(0x331F41) = LO8(ebx);
    MEM8(0x3320D4) = LO8(ebx);
    MEM8(0x3320D5) = LO8(ebx);
    MEM8(0x3321D0) = LO8(ebx);
    MEM8(0x3321D1) = LO8(ebx);
    g_seh_ebp = ebp; sub_0002DE69(); return; /* tail jmp 0x0002DE69 */

}

/**
 * sub_0002E140
 * Original: 0x0002E140 - 0x0002E3D9 (665 bytes, 151 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E140: ;
    SET_LO8(ecx, MEM8(0x30AE18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E151; /* jne: not equal / not zero */

loc_0002E14B: ;
    SET_LO8(ecx, MEM8(0x305B15));

loc_0002E151: ;
    SET_LO8(edx, MEM8(0x30C680));
    eax = ZX8(LO8(edx));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM8(0x331F25) = LO8(ecx);
    if (CMP_A(_fa, _fb)) goto loc_0002E361; /* ja: above (unsigned >) */

loc_0002E16C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2E3DC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0002E173u) goto loc_0002E173;
    if (_jt == 0x0002E21Cu) goto loc_0002E21C;
    if (_jt == 0x0002E24Du) goto loc_0002E24D;
    if (_jt == 0x0002E350u) goto loc_0002E350;
    if (_jt == 0x0002E357u) goto loc_0002E357;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002E173: ;
    _fa = (uint32_t)(MEM8(0x3320D8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3320D8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E210; /* je: equal / zero */

loc_0002E17F: ;
    MEM8(0x3321D3) = LO8(ebx);
    MEM8(0x331F35) = LO8(ebx);
    MEM8(0x331F3C) = LO8(ebx);
    MEM8(0x3320DA) = LO8(ebx);
    MEM8(0x3320CC) = LO8(ebx);
    MEM8(0x3320CD) = LO8(ebx);
    MEM8(0x3320D0) = LO8(ebx);
    MEM8(0x3320D1) = LO8(ebx);
    MEM8(0x3320E0) = LO8(ebx);
    MEM8(0x3320E1) = LO8(ebx);
    MEM8(0x3321D8) = LO8(ebx);
    MEM8(0x3321D9) = LO8(ebx);
    MEM8(0x331F40) = LO8(ebx);
    MEM8(0x331F41) = LO8(ebx);
    MEM8(0x3320D4) = LO8(ebx);
    MEM8(0x3320D5) = LO8(ebx);
    MEM8(0x3321D0) = LO8(ebx);
    MEM8(0x3321D1) = LO8(ebx);
    MEM8(0x331908) = LO8(ebx);
    MEM8(0x331909) = LO8(ebx);
    MEM8(0x3320DB) = LO8(ebx);
    MEM16(0x331F2C) = LO16(ebx);
    MEM8(0x331B11) = LO8(ebx);
    MEM8(0x331F26) = LO8(ebx);

loc_0002E210: ;
    MEM8(0x3321D4) = 0xFF;
    goto loc_0002E361;

loc_0002E21C: ;
    _fa = (uint32_t)(MEM8(0x3320D8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3320D8), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E361; /* je: equal / zero */

loc_0002E229: ;
    MEM8(0x331F42) = 0xFF;
    MEM8(0x3321D3) = LO8(ebx);
    MEM8(0x331F35) = LO8(ebx);
    MEM8(0x331F3C) = LO8(ebx);
    MEM8(0x3320DA) = LO8(ebx);
    goto loc_0002E361;

loc_0002E24D: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27B; /* je: equal / zero */

loc_0002E256: ;
    _fa = (uint32_t)(MEM8(0x3320D8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3320D8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E26C; /* je: equal / zero */

loc_0002E25F: ;
    MEM8(0x3320D8) = LO8(edx);
    MEM8(0x331F42) = 0xFF;

loc_0002E26C: ;
    PUSH32(esp, 0x0002E271u); RECOMP_ABI_CALL(0x000299B0u, sub_000299B0); /* call 0x000299B0 */

loc_0002E271: ;
    PUSH32(esp, 0x0002E276u); RECOMP_ABI_CALL(0x0002DD50u, sub_0002DD50); /* call 0x0002DD50 */

loc_0002E276: ;
    goto loc_0002E361;

loc_0002E27B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E2E6; /* jne: not equal / not zero */

loc_0002E280: ;
    MEM8(0x331F42) = 0xFF;
    MEM8(0x3320D0) = LO8(ebx);
    MEM8(0x3320D1) = LO8(ebx);
    MEM8(0x3320E0) = LO8(ebx);
    MEM8(0x3320E1) = LO8(ebx);
    MEM8(0x3321D8) = LO8(ebx);
    MEM8(0x3321D9) = LO8(ebx);
    MEM8(0x331F40) = LO8(ebx);
    MEM8(0x331F41) = LO8(ebx);
    MEM8(0x3320D4) = LO8(ebx);
    MEM8(0x3320D5) = LO8(ebx);
    MEM8(0x3321D0) = LO8(ebx);
    MEM8(0x3321D1) = LO8(ebx);
    MEM16(0x331F1C) = LO16(ebx);
    MEM16(0x331900) = LO16(ebx);
    MEM16(0x331904) = LO16(ebx);
    goto loc_0002E361;

loc_0002E2E6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E2F5; /* jne: not equal / not zero */

loc_0002E2EA: ;
    PUSH32(esp, 0x0002E2EFu); RECOMP_ABI_CALL(0x00029A50u, sub_00029A50); /* call 0x00029A50 */

loc_0002E2EF: ;
    SET_LO8(ecx, MEM8(0x331F25));

loc_0002E2F5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E303; /* je: equal / zero */

loc_0002E2FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E303; /* je: equal / zero */

loc_0002E2FF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E361; /* jne: not equal / not zero */

loc_0002E303: ;
    _fa = (uint32_t)(MEM16(0x2CD698)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x2CD698), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E316; /* jne: not equal / not zero */

loc_0002E30D: ;
    _fa = (uint32_t)(MEM16(0x336A00)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x336A00), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E361; /* jne: not equal / not zero */

loc_0002E316: ;
    PUSH32(esp, 0x0002E31Bu); RECOMP_ABI_CALL(0x0002DBE0u, sub_0002DBE0); /* call 0x0002DBE0 */

loc_0002E31B: ;
    PUSH32(esp, 0x0002E320u); RECOMP_ABI_CALL(0x0002D160u, sub_0002D160); /* call 0x0002D160 */

loc_0002E320: ;
    PUSH32(esp, 0x0002E325u); RECOMP_ABI_CALL(0x0003DD60u, sub_0003DD60); /* call 0x0003DD60 */

loc_0002E325: ;
    PUSH32(esp, 0x0002E32Au); RECOMP_ABI_CALL(0x0002CA90u, sub_0002CA90); /* call 0x0002CA90 */

loc_0002E32A: ;
    PUSH32(esp, 0x0002E32Fu); RECOMP_ABI_CALL(0x0002D540u, sub_0002D540); /* call 0x0002D540 */

loc_0002E32F: ;
    _fa = (uint32_t)(MEM16(0x2CD698)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x2CD698), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E361; /* jne: not equal / not zero */

loc_0002E338: ;
    _fa = (uint32_t)(MEM32(0x3369EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3369EC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E361; /* je: equal / zero */

loc_0002E340: ;
    eax = MEM32(0x3369F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E34Bu); RECOMP_ABI_CALL(0x000256D0u, sub_000256D0); /* call 0x000256D0 */

loc_0002E34B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E361;

loc_0002E350: ;
    PUSH32(esp, 0x0002E355u); RECOMP_ABI_CALL(0x000299B0u, sub_000299B0); /* call 0x000299B0 */

loc_0002E355: ;
    goto loc_0002E361;

loc_0002E357: ;
    PUSH32(esp, 0x0002E35Cu); RECOMP_ABI_CALL(0x000299B0u, sub_000299B0); /* call 0x000299B0 */

loc_0002E35C: ;
    PUSH32(esp, 0x0002E361u); RECOMP_ABI_CALL(0x0002CBC0u, sub_0002CBC0); /* call 0x0002CBC0 */

loc_0002E361: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E3D7; /* je: equal / zero */

loc_0002E36A: ;
    PUSH32(esp, 0x0002E36Fu); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0002E36F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0002E37C; /* js: sign (negative) */

loc_0002E373: ;
    PUSH32(esp, 0x0002E378u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0002E378: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E3D7; /* je: equal / zero */

loc_0002E37C: ;
    ecx = MEM32(0x33489C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E388u); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0002E388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E3A0; /* jne: not equal / not zero */

loc_0002E38F: ;
    edx = MEM32(0x33489C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002E39Bu); RECOMP_ABI_CALL(0x0002CF50u, sub_0002CF50); /* call 0x0002CF50 */

loc_0002E39B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E3A0: ;
    PUSH32(esp, 0x0002E3A5u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_0002E3A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0002E3CC; /* jns: not sign (positive) */

loc_0002E3A9: ;
    PUSH32(esp, 0x0002E3AEu); RECOMP_ABI_CALL(0x0007DAF0u, sub_0007DAF0); /* call 0x0007DAF0 */

loc_0002E3AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0002E3C0; /* jne: not equal / not zero */

loc_0002E3B4: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x0002E3BBu); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0002E3BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E3C0: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0002E3C7u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0002E3C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E3CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x0002E3D4u); RECOMP_ABI_CALL(0x00086DB0u, sub_00086DB0); /* call 0x00086DB0 */

loc_0002E3D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E3D7: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E400
 * Original: 0x0002E400 - 0x0002E455 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E400: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E42E; /* jne: not equal / not zero */

loc_0002E408: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x15);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x2C3FA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C3FA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E42Au); RECOMP_ABI_CALL(0x0005D2D0u, sub_0005D2D0); /* call 0x0005D2D0 */

loc_0002E42A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002E42E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esp + 0xC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2C4108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C4108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E451u); RECOMP_ABI_CALL(0x0005D300u, sub_0005D300); /* call 0x0005D300 */

loc_0002E451: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002E460
 * Original: 0x0002E460 - 0x0002E5A6 (326 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E460(void)
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

loc_0002E460: ;
    SET_LO8(eax, MEM8(0x331F26));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E477; /* je: equal / zero */

loc_0002E46F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x11 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E59F; /* jne: not equal / not zero */

loc_0002E477: ;
    SET_LO8(eax, MEM8(0x30AE36));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E4A1; /* jne: not equal / not zero */

loc_0002E482: ;
    SET_LO8(eax, MEM8(0x331B11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E4A1; /* je: equal / zero */

loc_0002E48B: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0002E496; /* jle: less or equal (signed <=) */

loc_0002E48D: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x331B11) = LO8(eax);
    goto loc_0002E49F;

loc_0002E496: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x331B11) = LO8(eax);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */

loc_0002E49F: ;
    SET_LO8(ecx, LO8(eax));

loc_0002E4A1: ;
    SET_LO8(edx, MEM8(0x30F9BC));
    PUSH32(esp, 0x41F00000);
    eax = 3;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x43200000;
    MEM32(esp + 0x3C) = 0x43200000;
    MEM32(esp + 0x40) = 0x43400000;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x43400000;
    MEM32(esp + 0x58) = 0x42E00000;
    MEM32(esp + 0x5C) = 0x43600000;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    esi = esp + 0x34;
    ebx = ZX8(LO8(ecx));
    edi = esp;
    if (CMP_NE(_fa, _fb)) goto loc_0002E555; /* jne: not equal / not zero */

loc_0002E52A: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    ecx = 7;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002E544u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E544: ;
    eax = 0x19;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    goto loc_0002E57B;

loc_0002E555: ;
    ecx = ebx + 3;
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    ecx = 7;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002E570u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E570: ;
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x19;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = ebx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */

loc_0002E57B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x41F00000);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0x50;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = esp;
    ecx = 7;
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
    PUSH32(esp, 0x0002E59Cu); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E59C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E59F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E5B0
 * Original: 0x0002E5B0 - 0x0002E5F9 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E5B0(void)
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

loc_0002E5B0: ;
    eax = ZX16(MEM16(esp + 0xC));
    ecx = ZX16(MEM16(esp + 8));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 8));
    MEM32(esp + 0x10) = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x38) = ecx;
    _fb = (uint32_t)(0x2C42C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C42C0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 7;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    edi = esp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002E5F3u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E5F3: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0002E600
 * Original: 0x0002E600 - 0x0002E601 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E600(void)
{

loc_0002E600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E610
 * Original: 0x0002E610 - 0x0002E7D7 (455 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E610(void)
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

loc_0002E610: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 3;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x70) = eax;
    eax = ZX8(MEM8(esp + 0x80));
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esp + 0x88));
    MEM32(esp + 4) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, edi);
    ecx = 7;
    esi = esp + 0x38;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    edi = esp + 0x1C;
    MEM32(esp + 0x38) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    MEM32(esp + 0x3C) = 0x43600000;
    MEM32(esp + 0x40) = 0x41800000;
    MEM32(esp + 0x44) = 0x43800000;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x42400000;
    MEM32(esp + 0x58) = 0x42000000;
    MEM32(esp + 0x5C) = 0x42900000;
    MEM32(esp + 0x60) = 0x42800000;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0x42000000;
    MEM32(esp + 0x78) = 0x42400000;
    MEM32(esp + 0x7C) = 0x42800000;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x88) = 0;
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
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX16(MEM16(esp + 0x98));
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ebx;
    ecx = 7;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    esi = esp + 0x1C;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x14);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002E73Du); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E73D: ;
    ecx = 7;
    esi = esp + 0x78;
    edi = esp + 0x40;
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
    ecx = MEM32(esp + 0x34);
    eax = 3;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002E760; /* jle: less or equal (signed <=) */

loc_0002E75C: ;
    MEM32(esp + 0x10) = eax;

loc_0002E760: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = ebx + 2;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1D8)); /* fmul dword ptr [0x22c1d8] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ecx = 7;
    esi = esp + 0x40;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    edi = esp;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002E7A1u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E7A1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, ebp);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x94;
    edi = esp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002E7CCu); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002E7CC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E7E0
 * Original: 0x0002E7E0 - 0x0002EB57 (887 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E7E0(void)
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

loc_0002E7E0: ;
    eax = MEM32(0x33227C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0002EB50; /* jne: not equal / not zero */

loc_0002E7F4: ;
    _fa = (uint32_t)(MEM8(0x305532)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x305532), 8 (8-bit) */
    MEM32(esp + 0x18) = 0x43210000;
    MEM32(esp + 0x1C) = 0x42820000;
    MEM32(esp + 0x20) = 0x43270000;
    MEM32(esp + 0x24) = 0x428E0000;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x41300000;
    MEM32(esp + 0x30) = 0x41E00000;
    if (CMP_NE(_fa, _fb)) goto loc_0002E842; /* jne: not equal / not zero */

loc_0002E835: ;
    MEM8(0x331F27) = MEM8(0x331F27) + 1;
    _fa = (uint32_t)(MEM8(0x331F27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002E842: ;
    PUSH32(esp, 0x43600000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x41E00000);
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x44;
    edi = esp;
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
    PUSH32(esp, 0x0002E86Bu); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002E86B: ;
    eax = ZX8(MEM8(0x30AE54));
    ecx = ZX8(MEM8(0x30554C));
    edx = ZX8(MEM8(ecx + 0x2C568C));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E8AB; /* jne: not equal / not zero */

loc_0002E8A5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002E8AD;

loc_0002E8AB: ;
    fp_pop(); /* fstp st(0) */

loc_0002E8AD: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C8FC);
    PUSH32(esp, 0x0002E8BDu); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002E8BD: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0x0002E8C6u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0002E8C6: ;
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1E);
    esi = eax;
    PUSH32(esp, 0x1D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E8D6u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002E8D6: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x22C8F8);
    PUSH32(esp, 0x0002E8E6u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002E8E6: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x22C8F0);
    PUSH32(esp, 0x0002E8F6u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002E8F6: ;
    eax = (uint32_t)(int32_t)SMEM8(0x331F27);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E90Eu); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002E90E: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x331F27);
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    PUSH32(esp, 0x23);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E925u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002E925: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C8D8);
    PUSH32(esp, 0x0002E935u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002E935: ;
    edx = (uint32_t)(int32_t)SMEM8(0x331F27);
    MEM32(esp + 0x4C) = edx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x1C)); /* fdiv dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x19);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C8D4)); /* fmul dword ptr [0x22c8d4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002E964u); RECOMP_ABI_CALL(0x0005DE40u, sub_0005DE40); /* call 0x0005DE40 */

loc_0002E964: ;
    SET_LO8(ecx, MEM8(0x331F24));
    SET_LO8(eax, MEM8(0x30D00D));
    SET_LO8(edx, MEM8(0x3314AA));
    SET_LO8(ebx, MEM8(0x331F19));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E98A; /* jae: above or equal (unsigned >=) */

loc_0002E982: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x63) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x63);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0002E98C;

loc_0002E98A: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0002E98C: ;
    MEM8(esp + 0xF) = LO8(eax);
    SET_LO8(eax, MEM8(0x30D8F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E9A1; /* jae: above or equal (unsigned >=) */

loc_0002E999: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x3B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0002E9A3;

loc_0002E9A1: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0002E9A3: ;
    SET_LO8(ebx, MEM8(0x307606));
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C8BC);
    MEM8(esp + 0x1E) = LO8(eax);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0x0002E9BFu); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002E9BF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    esi = ZX8(LO8(ebx));
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E9D0u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002E9D0: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002E9F9; /* jne: not equal / not zero */

loc_0002E9E6: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002E9F6u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002E9F6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E9F9: ;
    esi = ZX8(MEM8(esp + 0xE));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x1B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002EA0Cu); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EA0C: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EA35; /* jne: not equal / not zero */

loc_0002EA22: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EA32u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EA32: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EA35: ;
    esi = ZX8(MEM8(esp + 0xF));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x1E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002EA48u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EA48: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EA71; /* jne: not equal / not zero */

loc_0002EA5E: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EA6Eu); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EA6E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EA71: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C8A0);
    PUSH32(esp, 0x0002EA81u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EA81: ;
    ecx = ZX8(MEM8(0x307606));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EA96u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EA96: ;
    ecx = ZX8(MEM8(0x307606));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EAC6; /* jne: not equal / not zero */

loc_0002EAB3: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EAC3u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EAC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EAC6: ;
    ecx = ZX8(MEM8(0x30D8F0));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EADBu); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EADB: ;
    ecx = ZX8(MEM8(0x30D8F0));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EB0B; /* jne: not equal / not zero */

loc_0002EAF8: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EB08u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EB08: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EB0B: ;
    ecx = ZX8(MEM8(0x30D00D));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EB20u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EB20: ;
    ecx = ZX8(MEM8(0x30D00D));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EB50; /* jne: not equal / not zero */

loc_0002EB3D: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EB4Du); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EB4D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EB50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002EB60
 * Original: 0x0002EB60 - 0x0002EE20 (704 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EB60: ;
    eax = MEM32(0x33227C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0002EE19; /* jne: not equal / not zero */

loc_0002EB76: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB8F; /* je: equal / zero */

loc_0002EB8A: ;
    ebx = 1;

loc_0002EB8F: ;
    PUSH32(esp, 0x43100000);
    PUSH32(esp, 0x43300000);
    PUSH32(esp, 0x42080000);
    PUSH32(esp, 0x41300000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = esp + 0x3C;
    edi = esp;
    MEM32(esp + 0x3C) = 0x43210000;
    MEM32(esp + 0x40) = 0x42820000;
    MEM32(esp + 0x44) = 0x43270000;
    MEM32(esp + 0x48) = 0x428E0000;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x41300000;
    MEM32(esp + 0x54) = 0x42080000;
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
    PUSH32(esp, 0x0002EBF0u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002EBF0: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C90C);
    PUSH32(esp, 0x0002EC00u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EC00: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x1D);
    if (CMP_NE(_fa, _fb)) goto loc_0002EC19; /* jne: not equal / not zero */

loc_0002EC0F: ;
    ecx = ZX8(MEM8(0x30AE54));
    PUSH32(esp, ecx);
    goto loc_0002EC28;

loc_0002EC19: ;
    MEM8(0x331F27) = MEM8(0x331F27) + 1;
    _fa = (uint32_t)(MEM8(0x331F27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(MEM8(0x30AE54));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);

loc_0002EC28: ;
    PUSH32(esp, 0x0002EC2Du); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EC2D: ;
    SET_LO8(ebx, MEM8(0x331F24));
    SET_LO8(eax, MEM8(0x30D00D));
    SET_LO8(edx, MEM8(0x3314AA));
    SET_LO8(ecx, MEM8(0x331F19));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EC53; /* jae: above or equal (unsigned >=) */

loc_0002EC4B: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x63) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x63);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0002EC55;

loc_0002EC53: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0002EC55: ;
    MEM8(esp + 0xF) = LO8(eax);
    SET_LO8(eax, MEM8(0x30D8F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EC6A; /* jae: above or equal (unsigned >=) */

loc_0002EC62: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x3B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0002EC6C;

loc_0002EC6A: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0002EC6C: ;
    SET_LO8(ebx, MEM8(0x307606));
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C8BC);
    MEM8(esp + 0x1E) = LO8(eax);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0x0002EC88u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EC88: ;
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    esi = ZX8(LO8(ebx));
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002EC99u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EC99: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002ECC2; /* jne: not equal / not zero */

loc_0002ECAF: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002ECBFu); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002ECBF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ECC2: ;
    esi = ZX8(MEM8(esp + 0xE));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x1B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002ECD5u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002ECD5: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002ECFE; /* jne: not equal / not zero */

loc_0002ECEB: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002ECFBu); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002ECFB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ECFE: ;
    esi = ZX8(MEM8(esp + 0xF));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x1E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002ED11u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002ED11: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002ED3A; /* jne: not equal / not zero */

loc_0002ED27: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002ED37u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002ED37: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ED3A: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x22C8A0);
    PUSH32(esp, 0x0002ED4Au); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002ED4A: ;
    ecx = ZX8(MEM8(0x307606));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002ED5Fu); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002ED5F: ;
    ecx = ZX8(MEM8(0x307606));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002ED8F; /* jne: not equal / not zero */

loc_0002ED7C: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002ED8Cu); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002ED8C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ED8F: ;
    ecx = ZX8(MEM8(0x30D8F0));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EDA4u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EDA4: ;
    ecx = ZX8(MEM8(0x30D8F0));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EDD4; /* jne: not equal / not zero */

loc_0002EDC1: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EDD1u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EDD1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EDD4: ;
    ecx = ZX8(MEM8(0x30D00D));
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EDE9u); RECOMP_ABI_CALL(0x0005E620u, sub_0005E620); /* call 0x0005E620 */

loc_0002EDE9: ;
    ecx = ZX8(MEM8(0x30D00D));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0002EE19; /* jne: not equal / not zero */

loc_0002EE06: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x22C8B8);
    PUSH32(esp, 0x0002EE16u); RECOMP_ABI_CALL(0x0005E5C0u, sub_0005E5C0); /* call 0x0005E5C0 */

loc_0002EE16: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EE19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002EE20
 * Original: 0x0002EE20 - 0x0002F00F (495 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EE20(void)
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

loc_0002EE20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0002EE2Fu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002EE2F: ;
    eax = MEM32(0x2C44EC);
    ecx = MEM32(0x2C44E8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = 0x2C44D4;
    edi = esp;
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
    PUSH32(esp, 0x0002EE55u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002EE55: ;
    edx = MEM32(0x2C4508);
    eax = MEM32(0x2C4504);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = 0x2C44F0;
    edi = esp;
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
    PUSH32(esp, 0x0002EE7Bu); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002EE7B: ;
    ecx = MEM32(0x2C4524);
    edx = MEM32(0x2C4520);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = 0x2C450C;
    edi = esp;
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
    PUSH32(esp, 0x0002EEA2u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002EEA2: ;
    eax = MEM32(0x2C4540);
    ecx = MEM32(0x2C453C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = 0x2C4528;
    edi = esp;
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
    PUSH32(esp, 0x0002EEC8u); RECOMP_ABI_CALL(0x00029A80u, sub_00029A80); /* call 0x00029A80 */

loc_0002EEC8: ;
    edx = MEM32(0x2C44EC);
    fp_push(MEMF(0x2C4504)); /* fld float */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2C44E8)); /* fsub dword ptr [0x2c44e8] */
    PUSH32(esp, 0x41000000);
    PUSH32(esp, ecx);
    ecx = 7;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    esi = 0x2C4544;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2EC)); /* fmul dword ptr [0x22c2ec] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(0x2C44E8)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    edi = esp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002EF19u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002EF19: ;
    eax = MEM32(0x2C4524);
    fp_push(MEMF(0x2C453C)); /* fld float */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2C4520)); /* fsub dword ptr [0x2c4520] */
    PUSH32(esp, 0x41000000);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2EC)); /* fmul dword ptr [0x22c2ec] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2C4520)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    esi = 0x2C4544;
    edi = esp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0002EF69u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002EF69: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x2C4524)); /* fld float */
    esi = 0x2C4560;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2C44EC)); /* fsub dword ptr [0x2c44ec] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2EC)); /* fmul dword ptr [0x22c2ec] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41000000);
    fp_push(MEMF(0x2C44EC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    ecx = MEM32(0x2C44E8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 7;
    edi = esp;
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
    PUSH32(esp, 0x0002EFB9u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002EFB9: ;
    edx = MEM32(0x2C4504);
    fp_push(MEMF(0x2C4540)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2C4508)); /* fsub dword ptr [0x2c4508] */
    esi = 0x2C4560;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C0D0)); /* fsub dword ptr [0x22c0d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C2EC)); /* fmul dword ptr [0x22c2ec] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41000000);
    fp_push(MEMF(0x2C4508)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D0)); /* fadd dword ptr [0x22c0d0] */
    ecx = 7;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
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
    PUSH32(esp, 0x0002F009u); RECOMP_ABI_CALL(0x00029ED0u, sub_00029ED0); /* call 0x00029ED0 */

loc_0002F009: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0002F010
 * Original: 0x0002F010 - 0x0002F015 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F010: ;
    g_seh_ebp = ebp; sub_0005D8B0(); return; /* tail jmp 0x0005D8B0 */

}

/**
 * sub_0002F020
 * Original: 0x0002F020 - 0x0002F440 (1056 bytes, 316 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F020: ;
    eax = ZX8(MEM8(0x305532));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE (32-bit) */
    MEM8(0x3320DB) = LO8(ebx);
    MEM16(0x331F2C) = LO16(ebx);
    if (CMP_A(_fa, _fb)) goto loc_0002F42C; /* ja: above (unsigned >) */

loc_0002F043: ;
    eax = ZX8(MEM8(eax + 0x2F48C));
    { uint32_t _jt = MEM32(eax * 4 + 0x2F440); /* switch: 19 entries, 19 targets */
    if (_jt == 0x0002F051u) goto loc_0002F051;
    if (_jt == 0x0002F077u) goto loc_0002F077;
    if (_jt == 0x0002F09Du) goto loc_0002F09D;
    if (_jt == 0x0002F0B9u) goto loc_0002F0B9;
    if (_jt == 0x0002F10Bu) goto loc_0002F10B;
    if (_jt == 0x0002F153u) goto loc_0002F153;
    if (_jt == 0x0002F167u) goto loc_0002F167;
    if (_jt == 0x0002F194u) goto loc_0002F194;
    if (_jt == 0x0002F1A9u) goto loc_0002F1A9;
    if (_jt == 0x0002F22Cu) goto loc_0002F22C;
    if (_jt == 0x0002F2C6u) goto loc_0002F2C6;
    if (_jt == 0x0002F2E1u) goto loc_0002F2E1;
    if (_jt == 0x0002F304u) goto loc_0002F304;
    if (_jt == 0x0002F319u) goto loc_0002F319;
    if (_jt == 0x0002F3C0u) goto loc_0002F3C0;
    if (_jt == 0x0002F3D2u) goto loc_0002F3D2;
    if (_jt == 0x0002F3E4u) goto loc_0002F3E4;
    if (_jt == 0x0002F41Fu) goto loc_0002F41F;
    if (_jt == 0x0002F42Cu) goto loc_0002F42C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002F051: ;
    _fa = (uint32_t)(MEM8(0x331F25)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x331F25), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F06B; /* je: equal / zero */

loc_0002F05A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F068u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F068: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002F06B: ;
    MEM8(0x331B11) = 0x14;
    goto loc_0002F425;

loc_0002F077: ;
    _fa = (uint32_t)(MEM8(0x331F25)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x331F25), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F091; /* je: equal / zero */

loc_0002F080: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F08Eu); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F08E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002F091: ;
    MEM8(0x331B11) = 0xEC;
    goto loc_0002F425;

loc_0002F09D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    MEM8(0x331B16) = 1;
    PUSH32(esp, 0x0002F0B1u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F0B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F0B9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x22C914);
    PUSH32(esp, 0x0002F0C9u); RECOMP_ABI_CALL(0x0005D2D0u, sub_0005D2D0); /* call 0x0005D2D0 */

loc_0002F0C9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F0D7u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F0D7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F0E5u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F0E5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F0F3u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F0F3: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 6);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0002F103u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F103: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F10B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F119u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F119: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002F126u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F126: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0002F133u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F133: ;
    SET_LO8(ecx, MEM8(0x305532));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x305532) = LO8(ebx);
    MEM16(0x3320DC) = 0x2D;
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F153: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002F15Fu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F15F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F167: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F174u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F174: ;
    SET_LO8(ecx, MEM8(0x305532));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x305532) = LO8(ebx);
    MEM16(0x3320DC) = 0x78;
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F194: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0002F1A1u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F1A1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F1A9: ;
    PUSH32(esp, 0x0002F1AEu); RECOMP_ABI_CALL(0x0002F010u, sub_0002F010); /* call 0x0002F010 */

loc_0002F1AE: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F1E9; /* jne: not equal / not zero */

loc_0002F1B7: ;
    ecx = ZX8(MEM8(0x30EDC8));
    SET_LO8(eax, MEM8(0x305B14));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(edx, MEM8(ecx + 0x30D9A3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002F209; /* jb: below (unsigned <) */

loc_0002F1D0: ;
    PUSH32(esp, 0x0002F1D5u); RECOMP_ABI_CALL(0x0002E7E0u, sub_0002E7E0); /* call 0x0002E7E0 */

loc_0002F1D5: ;
    SET_LO8(ecx, MEM8(0x305532));
    MEM8(0x305532) = LO8(ebx);
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F1E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F209; /* jne: not equal / not zero */

loc_0002F1ED: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x305B14)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x305B14) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002F28A; /* jae: above or equal (unsigned >=) */

loc_0002F209: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F217u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F217: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0002F224u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F224: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F22C: ;
    PUSH32(esp, 0x0002F231u); RECOMP_ABI_CALL(0x0002F010u, sub_0002F010); /* call 0x0002F010 */

loc_0002F231: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F26D; /* jne: not equal / not zero */

loc_0002F23A: ;
    edx = ZX8(MEM8(0x30EDC8));
    SET_LO8(ecx, MEM8(0x305B14));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    SET_LO8(eax, MEM8(edx + 0x30D9A3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002F2A3; /* jb: below (unsigned <) */

loc_0002F254: ;
    PUSH32(esp, 0x0002F259u); RECOMP_ABI_CALL(0x0002E7E0u, sub_0002E7E0); /* call 0x0002E7E0 */

loc_0002F259: ;
    SET_LO8(ecx, MEM8(0x305532));
    MEM8(0x305532) = LO8(ebx);
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F26D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F2A3; /* jne: not equal / not zero */

loc_0002F271: ;
    ecx = ZX8(MEM8(0x30EDC8));
    SET_LO8(eax, MEM8(0x305B14));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(edx, MEM8(ecx + 0x30D9A3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002F2A3; /* jb: below (unsigned <) */

loc_0002F28A: ;
    PUSH32(esp, 0x0002F28Fu); RECOMP_ABI_CALL(0x0002EB60u, sub_0002EB60); /* call 0x0002EB60 */

loc_0002F28F: ;
    SET_LO8(ecx, MEM8(0x305532));
    MEM8(0x305532) = LO8(ebx);
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F2A3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F2B1u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F2B1: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0002F2BEu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F2BE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F2C6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F2D4u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F2D4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002F2DCu); RECOMP_ABI_CALL(0x0002EE20u, sub_0002EE20); /* call 0x0002EE20 */

loc_0002F2DC: ;
    goto loc_0002F425;

loc_0002F2E1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F2EFu); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F2EF: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0002F2FCu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F2FC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F304: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 8);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0002F311u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F311: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F319: ;
    eax = ZX8(MEM8(0x305B14));
    ecx = ZX8(MEM8(0x30D00A));
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    edx = eax + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0002F35C; /* jne: not equal / not zero */

loc_0002F338: ;
    PUSH32(esp, 0x0002F33Du); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F33D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0002F34Au); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F34A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0002F357u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F357: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F390;

loc_0002F35C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F375; /* jne: not equal / not zero */

loc_0002F361: ;
    PUSH32(esp, 0x0002F366u); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F366: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0002F373u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F373: ;
    goto loc_0002F38D;

loc_0002F375: ;
    PUSH32(esp, 0x0002F37Au); RECOMP_ABI_CALL(0x0002E400u, sub_0002E400); /* call 0x0002E400 */

loc_0002F37A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x30AAB1));
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002F38Du); RECOMP_ABI_CALL(0x0002E610u, sub_0002E610); /* call 0x0002E610 */

loc_0002F38D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002F390: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F425; /* jne: not equal / not zero */

loc_0002F39C: ;
    SET_LO8(ecx, MEM8(0x307606));
    SET_LO8(edx, MEM8(0x30D8F0));
    SET_LO8(eax, MEM8(0x30D00D));
    MEM8(0x3314AA) = LO8(ecx);
    MEM8(0x331F19) = LO8(edx);
    MEM8(0x331F24) = LO8(eax);
    goto loc_0002F425;

loc_0002F3C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0002F3CDu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F3CD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F3D2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0002F3DFu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F3DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F425;

loc_0002F3E4: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0002F3F1u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F3F1: ;
    SET_LO8(ecx, MEM8(0x305532));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x331F2C) = LO16(ebx);
    MEM8(0x305532) = LO8(ebx);
    MEM16(0x3320DC) = 0x2D;
    MEM8(0x3320DB) = 0xB;
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F41F: ;
    MEM8(0x305532) = LO8(ebx);

loc_0002F425: ;
    MEM16(0x3320DC) = LO16(ebx);

loc_0002F42C: ;
    SET_LO8(ecx, MEM8(0x305532));
    MEM8(0x305532) = LO8(ebx);
    MEM8(0x331F26) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F590
 * Original: 0x0002F590 - 0x0002F761 (465 bytes, 158 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F590: ;
    eax = ZX8(MEM8(0x331F26));
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002F760; /* ja: above (unsigned >) */

loc_0002F5A3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2F764); /* switch: 15 entries, 14 targets */
    if (_jt == 0x0002F5AAu) goto loc_0002F5AA;
    if (_jt == 0x0002F5BBu) goto loc_0002F5BB;
    if (_jt == 0x0002F5CCu) goto loc_0002F5CC;
    if (_jt == 0x0002F5DDu) goto loc_0002F5DD;
    if (_jt == 0x0002F5EEu) goto loc_0002F5EE;
    if (_jt == 0x0002F5FFu) goto loc_0002F5FF;
    if (_jt == 0x0002F654u) goto loc_0002F654;
    if (_jt == 0x0002F6ADu) goto loc_0002F6AD;
    if (_jt == 0x0002F6B2u) goto loc_0002F6B2;
    if (_jt == 0x0002F6C3u) goto loc_0002F6C3;
    if (_jt == 0x0002F6D4u) goto loc_0002F6D4;
    if (_jt == 0x0002F72Eu) goto loc_0002F72E;
    if (_jt == 0x0002F73Fu) goto loc_0002F73F;
    if (_jt == 0x0002F750u) goto loc_0002F750;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002F5AA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0002F5B7u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F5B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F5BB: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 6);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0002F5C8u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F5C8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F5CC: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0002F5D9u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F5D9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F5DD: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002F5EAu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F5EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F5EE: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002F5FBu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F5FB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F5FF: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F625; /* jne: not equal / not zero */

loc_0002F608: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x305B14)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x305B14) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002F643; /* jb: below (unsigned <) */

loc_0002F620: ;
    g_seh_ebp = ebp; sub_0002E7E0(); return; /* tail jmp 0x0002E7E0 */

loc_0002F625: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F643; /* jne: not equal / not zero */

loc_0002F629: ;
    edx = ZX8(MEM8(0x30EDC8));
    SET_LO8(ecx, MEM8(0x305B14));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    SET_LO8(eax, MEM8(edx + 0x30D9A3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002F697; /* jae: above or equal (unsigned >=) */

loc_0002F643: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0002F650u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F654: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F67B; /* jne: not equal / not zero */

loc_0002F65D: ;
    ecx = ZX8(MEM8(0x30EDC8));
    SET_LO8(eax, MEM8(0x305B14));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(edx, MEM8(ecx + 0x30D9A3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002F69C; /* jb: below (unsigned <) */

loc_0002F676: ;
    g_seh_ebp = ebp; sub_0002E7E0(); return; /* tail jmp 0x0002E7E0 */

loc_0002F67B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F69C; /* jne: not equal / not zero */

loc_0002F67F: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x305B14)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x305B14) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002F69C; /* jb: below (unsigned <) */

loc_0002F697: ;
    g_seh_ebp = ebp; sub_0002EB60(); return; /* tail jmp 0x0002EB60 */

loc_0002F69C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0002F6A9u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F6A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F6AD: ;
    g_seh_ebp = ebp; sub_0002EE20(); return; /* tail jmp 0x0002EE20 */

loc_0002F6B2: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0002F6BFu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F6BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F6C3: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 8);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0002F6D0u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F6D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F6D4: ;
    eax = ZX8(MEM8(0x305B14));
    ecx = ZX8(MEM8(0x30D00A));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    if (CMP_NE(_fa, _fb)) goto loc_0002F709; /* jne: not equal / not zero */

loc_0002F6EF: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0002F6F8u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F6F8: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0002F705u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F705: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F709: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F71B; /* jne: not equal / not zero */

loc_0002F70E: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0002F717u); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F717: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F71B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x30AAB1));
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002F72Au); RECOMP_ABI_CALL(0x0002E610u, sub_0002E610); /* call 0x0002E610 */

loc_0002F72A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F72E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0002F73Bu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F73B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F73F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0002F74Cu); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F74C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F750: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0002F75Du); RECOMP_ABI_CALL(0x0002E5B0u, sub_0002E5B0); /* call 0x0002E5B0 */

loc_0002F75D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002F760: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F7A0
 * Original: 0x0002F7A0 - 0x0002F867 (199 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F7A0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_inmatch_b) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F7A0: ;
    SET_LO8(eax, MEM8(0x30C441));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(0x3322B8);
    if (CMP_NE(_fa, _fb)) goto loc_0002F80D; /* jne: not equal / not zero */

loc_0002F7AF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F80D; /* jne: not equal / not zero */

loc_0002F7B3: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(0x304BB8) = LO8(eax);
    MEM8(0x304BB9) = LO8(eax);
    MEM8(0x3054D8) = LO8(eax);
    MEM8(0x3054D9) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    MEM8(0x30AE30) = 3;
    MEM8(0x305532) = 0xFF;
    if (CMP_NE(_fa, _fb)) goto loc_0002F7F7; /* jne: not equal / not zero */

loc_0002F7E0: ;
    eax = ZX8(MEM8(0x30D9A1));
    SET_LO16(ecx, MEM16(eax * 2 + 0x2C569C));
    MEM16(0x332274) = LO16(ecx);
    esp += 4; return; /* ret */

loc_0002F7F7: ;
    edx = ZX8(MEM8(0x30D9F9));
    SET_LO16(eax, MEM16(edx * 2 + 0x2C569C));
    MEM16(0x332274) = LO16(eax);
    esp += 4; return; /* ret */

loc_0002F80D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    SET_LO8(ecx, 1);
    PUSH32(esp, ebx);
    MEM8(0x30DAB6) = LO8(ecx);
    if (CMP_A(_fa, _fb)) goto loc_0002F840; /* ja: above (unsigned >) */

loc_0002F81A: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ecx) (8-bit) */
    ecx = MEM32(0x30F9B4);
    if (CMP_EQ(_fa, _fb)) goto loc_0002F82E; /* je: equal / zero */

loc_0002F828: ;
    ecx = MEM32(0x30F9B8);

loc_0002F82E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ebx = MEM32(ecx + 0x6E9A98);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x13 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F840; /* je: equal / zero */

loc_0002F83C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F84D; /* jne: not equal / not zero */

loc_0002F840: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F84D; /* je: equal / zero */

loc_0002F844: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3322B8) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F84D: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x30C441) = LO8(eax);
    MEM32(0x3322B8) = 0x3C;
    MEM8(0x305532) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F870
 * Original: 0x0002F870 - 0x0002F904 (148 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F870: ;
    _fa = (uint32_t)(MEM8(0x30DAB6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30DAB6), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F903; /* jne: not equal / not zero */

loc_0002F87D: ;
    SET_LO8(eax, MEM8(0x30C441));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x3322B8);
    if (CMP_NE(_fa, _fb)) goto loc_0002F8B9; /* jne: not equal / not zero */

loc_0002F88C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F8BD; /* jne: not equal / not zero */

loc_0002F890: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x30DAB6) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0002F8AC; /* jne: not equal / not zero */

loc_0002F89F: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(0x304BB8) = LO8(eax);
    MEM8(0x3054D8) = LO8(eax);
    esp += 4; return; /* ret */

loc_0002F8AC: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(0x304BB9) = LO8(eax);
    MEM8(0x3054D9) = LO8(eax);
    esp += 4; return; /* ret */

loc_0002F8B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002F8E6; /* ja: above (unsigned >) */

loc_0002F8BD: ;
    SET_LO8(edx, MEM8(0x30D9A0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(0x30F9B4);
    if (CMP_EQ(_fa, _fb)) goto loc_0002F8D3; /* je: equal / zero */

loc_0002F8CD: ;
    edx = MEM32(0x30F9B8);

loc_0002F8D3: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(edx + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x6E9A98), 0x1300 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F8E6; /* je: equal / zero */

loc_0002F8E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F8F2; /* jne: not equal / not zero */

loc_0002F8E6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F8F2; /* je: equal / zero */

loc_0002F8EA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3322B8) = ecx;
    esp += 4; return; /* ret */

loc_0002F8F2: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x30C441) = LO8(eax);
    MEM32(0x3322B8) = 0x3C;

loc_0002F903: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F910
 * Original: 0x0002F910 - 0x0002FA6F (351 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F910_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow1) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F910: ;
    SET_LO8(eax, MEM8(0x30C510));
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FA6D; /* jne: not equal / not zero */

loc_0002F923: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FA6D; /* je: equal / zero */

loc_0002F930: ;
    SET_LO8(eax, MEM8(0x30EDC8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(0x30C510) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002FA47; /* jne: not equal / not zero */

loc_0002F944: ;
    SET_LO8(edx, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F96B; /* jne: not equal / not zero */

loc_0002F94E: ;
    PUSH32(esp, 0x0002F953u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0002F953: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F965; /* jne: not equal / not zero */

loc_0002F959: ;
    PUSH32(esp, 0x0002F95Eu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0002F95E: ;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0002FA4A;

loc_0002F965: ;
    SET_LO8(edx, MEM8(0x3139CB));

loc_0002F96B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F99F; /* je: equal / zero */

loc_0002F970: ;
    eax = ZX8(MEM8(0x305B14));
    ecx = ZX8(MEM8(0x30D00A));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + -2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002FA5D; /* je: equal / zero */

loc_0002F98D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FA23; /* jne: not equal / not zero */

loc_0002F996: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F9C5; /* jne: not equal / not zero */

loc_0002F99F: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FA05; /* jne: not equal / not zero */

loc_0002F9A7: ;
    SET_LO8(eax, MEM8(0x30D9FB));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x30AA64) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(eax);
    MEM32(0x33227C) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F9C5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F9FC; /* jne: not equal / not zero */

loc_0002F9C9: ;
    PUSH32(esp, 0x0002F9CEu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0002F9CE: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F9DE; /* je: equal / zero */

loc_0002F9D3: ;
    PUSH32(esp, 0x0002F9D8u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0002F9D8: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F9FC; /* jne: not equal / not zero */

loc_0002F9DE: ;
    SET_LO8(eax, MEM8(0x30D00A));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x30AA64) = LO8(ebx);
    MEM8(0x30D00A) = LO8(eax);
    MEM32(0x33227C) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002F9FC: ;
    SET_LO8(eax, MEM8(0x30EBF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FA29; /* jne: not equal / not zero */

loc_0002FA05: ;
    SET_LO8(eax, MEM8(0x30D9A3));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x30AA64) = LO8(ebx);
    MEM8(0x30D9A3) = LO8(eax);
    MEM32(0x33227C) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002FA23: ;
    MEM8(0x30D9A3) = MEM8(0x30D9A3) + 1;
    _fa = (uint32_t)(MEM8(0x30D9A3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0002FA29: ;
    SET_LO8(eax, MEM8(0x30D9FB));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x30AA64) = LO8(ebx);
    MEM8(0x30D9FB) = LO8(eax);
    MEM32(0x33227C) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002FA47: ;
    eax = ZX8(LO8(eax));

loc_0002FA4A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A3));
    eax = eax + 0x30D9A3;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);

loc_0002FA5D: ;
    MEM8(0x30AA64) = LO8(ebx);
    MEM32(0x33227C) = 2;

loc_0002FA6D: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002FA70
 * Original: 0x0002FA70 - 0x0002FABE (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA70_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow2) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002FA70: ;
    PUSH32(esp, esi);
    MEM8(0x30AE18) = 2;
    esi = 0x78;
    /* nop */

loc_0002FA80: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002FA87u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0002FA87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002FA8Fu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_0002FA8F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002FA80; /* jne: not equal / not zero */

loc_0002FA92: ;
    _fa = (uint32_t)(MEM8(0x30EDC8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EDC8), 2 (8-bit) */
    MEM32(0x33227C) = 3;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002FABD; /* je: equal / zero */

loc_0002FAA6: ;
    SET_LO8(eax, MEM8(0x30D8EA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FABD; /* je: equal / zero */

loc_0002FAAF: ;
    SET_LO8(eax, MEM8(0x3139DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FABD; /* je: equal / zero */

loc_0002FAB8: ;
    g_seh_ebp = ebp; sub_0004E7A0(); return; /* tail jmp 0x0004E7A0 */

loc_0002FABD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002FAC0
 * Original: 0x0002FAC0 - 0x0002FAEE (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002FAC0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002FAD5; /* jg: greater (signed >) */

loc_0002FACB: ;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30D998), 0x5D (16-bit) */
    goto loc_0002FADE;

loc_0002FAD5: ;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu; _fb = (uint32_t)(0xD1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30D998), 0xD1 (16-bit) */

loc_0002FADE: ;
    if (CMP_AE(_fa, _fb)) goto loc_0002FAE8; /* jae: above or equal (unsigned >=) */

loc_0002FAE0: ;
    MEM16(0x30D998) = MEM16(0x30D998) + 1;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0002FAE8: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0002FAF0
 * Original: 0x0002FAF0 - 0x0002FE95 (933 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FAF0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_match_launcher) */
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

loc_0002FAF0: ;
    SET_LO8(eax, MEM8(0x305588));
    SET_LO8(ecx, MEM8(0x305589));
    MEM8(0x306320) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558A));
    MEM8(0x30C3E4) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558C));
    MEM8(0x305B14) = LO8(eax);
    SET_LO8(eax, MEM8(0x30558E));
    MEM8(0x30F924) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30558B));
    MEM8(0x30F91C) = LO8(eax);
    SET_LO8(eax, MEM8(0x305591));
    MEM8(0x30D018) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30558D));
    MEM8(0x3139C9) = LO8(eax);
    SET_LO8(eax, MEM8(0x305592));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(0x305597));
    edx = 5;
    MEM8(0x3139D1) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x305590));
    MEM8(0x30C4C6) = 1;
    MEM8(0x30ED48) = 0;
    MEM8(0x30C441) = 0xA;
    MEM8(0x30DAB6) = 0;
    MEM8(0x30D00B) = 1;
    MEM32(0x33227C) = edx;
    MEM8(0x30AE18) = LO8(edx);
    MEM8(0x30AE36) = 0;
    MEM8(0x315AD5) = 0;
    MEM8(0x3322B4) = 0;
    MEM8(0x3322B5) = 0;
    MEM8(0x3322E0) = 0;
    MEM8(0x3322E1) = 0;
    MEM32(0x3322B8) = 0x3C;
    MEM8(0x30AA65) = HI8(ebx);
    MEM8(0x316FF3) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0002FBD8; /* jl: less (signed <) */

loc_0002FBD1: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0002FBDB;

loc_0002FBD8: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0002FBDB: ;
    SET_LO8(ecx, MEM8(0x305594));
    MEM8(0x30760F) = LO8(ecx);
    ecx = MEM32(0x305595);
    MEM8(0x30C4C1) = LO8(eax);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, MEM8(0x305599));
    MEM8(0x3062E0) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30558F));
    MEM8(0x30AD94) = LO8(ebx);
    MEM8(0x317039) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30C680));
    SET_LO8(ebx, 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM8(0x30554D) = LO8(eax);
    MEM8(0x30EDC9) = HI8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0002FC49; /* jne: not equal / not zero */

loc_0002FC29: ;
    SET_LO8(eax, 1);

loc_0002FC2B: ;
    MEM8(0x30760F) = 1;
    MEM8(0x30554D) = LO8(eax);
    MEM8(0x30EDC9) = LO8(ebx);
    MEM8(0x30AD94) = 1;
    goto loc_0002FDE1;

loc_0002FC49: ;
    SET_LO8(ecx, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FC70; /* jne: not equal / not zero */

loc_0002FC54: ;
    SET_LO8(eax, MEM8(0x336A0C));
    MEM8(0x306320) = 4;
    MEM8(0x30F924) = LO8(ebx);
    MEM8(0x30C3E4) = LO8(ebx);
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    goto loc_0002FC2B;

loc_0002FC70: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FCC8; /* jne: not equal / not zero */

loc_0002FC75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x306320) = 0;
    MEM8(0x30F924) = LO8(ebx);
    MEM8(0x30C3E4) = LO8(ebx);
    MEM8(0x30C4C6) = 0;
    MEM8(0x305B14) = 1;
    MEM8(0x30760F) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0002FCA8; /* jne: not equal / not zero */

loc_0002FCA1: ;
    SET_LO8(eax, 1);
    MEM8(0x30554D) = LO8(eax);

loc_0002FCA8: ;
    MEM8(0x30EDC9) = LO8(ebx);
    MEM8(0x30AD94) = 1;
    MEM8(0x317039) = 1;
    MEM8(0x30D018) = 4;
    goto loc_0002FDE1;

loc_0002FCC8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FD11; /* jne: not equal / not zero */

loc_0002FCCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x306320) = 0;
    MEM8(0x30F924) = LO8(ebx);
    MEM8(0x30C3E4) = LO8(ebx);
    MEM8(0x30C4C6) = 1;
    MEM8(0x30760F) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0002FCF8; /* jne: not equal / not zero */

loc_0002FCF1: ;
    SET_LO8(eax, 1);
    MEM8(0x30554D) = LO8(eax);

loc_0002FCF8: ;
    MEM8(0x30EDC9) = LO8(ebx);
    MEM8(0x30AD94) = 1;
    MEM8(0x317039) = 0;
    goto loc_0002FDE1;

loc_0002FD11: ;
    _fa = (uint32_t)(MEM8(0x30C3EC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C3EC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FD68; /* jne: not equal / not zero */

loc_0002FD1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FD25; /* jne: not equal / not zero */

loc_0002FD1E: ;
    SET_LO8(eax, 1);
    MEM8(0x30554D) = LO8(eax);

loc_0002FD25: ;
    MEM8(0x306320) = 1;
    MEM8(0x30F924) = LO8(ebx);
    MEM8(0x30C3E4) = LO8(ebx);
    MEM8(0x30D018) = LO8(ebx);
    MEM8(0x305B14) = LO8(ebx);
    MEM8(0x3139D1) = 1;
    MEM8(0x30760F) = 1;
    MEM8(0x30EDC9) = LO8(ebx);
    MEM8(0x30AD94) = 1;
    MEM8(0x317039) = 0;
    goto loc_0002FDE1;

loc_0002FD68: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FDE1; /* jne: not equal / not zero */

loc_0002FD6D: ;
    PUSH32(esp, 0x0002FD72u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0002FD72: ;
    SET_LO8(edx, MEM8(eax + 0x27));
    MEM8(0x30F924) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x27));
    MEM8(0x30C3E4) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x26));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x305B14) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x25));
    MEM8(0x30D018) = LO8(eax);
    MEM8(0x30760F) = 1;
    MEM8(0x30554D) = 1;
    MEM8(0x30EDC9) = LO8(ebx);
    MEM8(0x30AD94) = 1;
    PUSH32(esp, 0x0002FDB7u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0002FDB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FDC3; /* jne: not equal / not zero */

loc_0002FDBC: ;
    MEM32(0x3321E0) = eax;
    goto loc_0002FDDC;

loc_0002FDC3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002FDC9u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0002FDC9: ;
    esi = eax;
    PUSH32(esp, 0x0002FDD0u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0002FDD0: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3321E0) = esi;
    POP32(esp, esi);

loc_0002FDDC: ;
    SET_LO8(eax, MEM8(0x30554D));

loc_0002FDE1: ;
    ecx = ZX8(MEM8(0x30760F));
    edx = ZX8(LO8(eax));
    fp_push(MEMF(ecx * 4 + 0x2C5620)); /* fld float */
    MEMF(0x30F918) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx * 4 + 0x2C5620)); /* fld float */
    ecx = ecx + ecx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x30D8E4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx * 4 + 0x2C562C);
    ecx = ecx * 4 + 0x2C562C;
    ecx = edx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM32(0x315AD0) = edx;
    MEM32(0x30DAAC) = ecx;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0002FE42; /* jne: not equal / not zero */

loc_0002FE2B: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FE42; /* je: equal / zero */

loc_0002FE34: ;
    MEM8(0x30ED4C) = 1;
    MEM8(0x30ED4D) = 1;

loc_0002FE42: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FE72; /* jne: not equal / not zero */

loc_0002FE4B: ;
    PUSH32(esp, 0x0002FE50u); RECOMP_ABI_CALL(0x00077680u, sub_00077680); /* call 0x00077680 */

loc_0002FE50: ;
    PUSH32(esp, 0x0002FE55u); RECOMP_ABI_CALL(0x00072230u, sub_00072230); /* call 0x00072230 */

loc_0002FE55: ;
    PUSH32(esp, 0x0002FE5Au); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0002FE5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002FE60u); RECOMP_ABI_CALL(0x00043890u, sub_00043890); /* call 0x00043890 */

loc_0002FE60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002FE68u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0002FE68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FE72; /* je: equal / zero */

loc_0002FE6D: ;
    PUSH32(esp, 0x0002FE72u); RECOMP_ABI_CALL(0x000721E0u, sub_000721E0); /* call 0x000721E0 */

loc_0002FE72: ;
    PUSH32(esp, 0x5A140);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0002FE7Eu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0002FE7E: ;
    PUSH32(esp, 0x1EE50);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0002FE8Au); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_0002FE8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x332295) = 0;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002FEA0
 * Original: 0x0002FEA0 - 0x00030000 (352 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002FEA0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FEC7; /* jne: not equal / not zero */

loc_0002FEAA: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    eax = 0x30D9F8;
    if (CMP_EQ(_fa, _fb)) goto loc_0002FEBD; /* je: equal / zero */

loc_0002FEB8: ;
    eax = 0x30D9A0;

loc_0002FEBD: ;
    MEM8(eax + 1) = 0xA;
    MEM8(eax + 2) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002FEC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003001F(); return; } /* je: equal / zero */

loc_0002FED2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003001F(); return; } /* je: equal / zero */

loc_0002FEDA: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FFB1; /* jne: not equal / not zero */

loc_0002FEE7: ;
    PUSH32(esp, 0x0002FEECu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0002FEEC: ;
    ebx = eax;
    ebx = ebx & 0x80000007u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0002FEFB; /* jns: not sign (positive) */

loc_0002FEF6: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002FEFB: ;
    eax = ZX8(LO8(ebx));
    SET_LO8(eax, MEM8(eax + 0x3322D0));
    ecx = ZX8(LO8(eax));
    edx = ZX8(MEM8(ecx + 0x2C6710));
    MEM8(0x30D9A1) = LO8(eax);
    SET_LO8(eax, MEM8(edx + 0x305B0A));
    MEM8(esp + 0xF) = LO8(eax);
    PUSH32(esp, 0x0002FF22u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0002FF22: ;
    ecx = ZX8(MEM8(esp + 0xF));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(0x30D9A2) = LO8(edx);
    PUSH32(esp, 0x0002FF35u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0002FF35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002FF49; /* jb: below (unsigned <) */

loc_0002FF46: ;
    _fb = (uint32_t)(0xF8) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0xF8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0002FF49: ;
    edx = ZX8(LO8(ebx));
    SET_LO8(eax, MEM8(edx + 0x3322D0));
    MEM8(0x30D9F9) = LO8(eax);
    eax = ZX8(LO8(eax));
    ecx = ZX8(MEM8(eax + 0x2C6710));
    SET_LO8(ebx, MEM8(ecx + 0x305B0A));
    PUSH32(esp, 0x0002FF6Cu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0002FF6C: ;
    ecx = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30D9F9) (8-bit) */
    MEM8(0x30D9FA) = LO8(edx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000300DB(); return; } /* jne: not equal / not zero */

loc_0002FF89: ;
    _fa = (uint32_t)(MEM8(0x30D9A2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000300DB(); return; } /* jne: not equal / not zero */

loc_0002FF95: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    MEM8(0x30D9FA) = LO8(edx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000300DB(); return; } /* jne: not equal / not zero */

loc_0002FFA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x30D9FA) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002FFB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000300DB(); return; } /* jne: not equal / not zero */

loc_0002FFB9: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FFD0; /* jne: not equal / not zero */

loc_0002FFC4: ;
    esi = 0x30D9A0;
    ecx = 0x30D9F8;
    goto loc_0002FFDA;

loc_0002FFD0: ;
    esi = 0x30D9F8;
    ecx = 0x30D9A0;

loc_0002FFDA: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(edx, MEM8(edx + 0x3322D0));
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030001(); return; } /* jne: not equal / not zero */

loc_0002FFF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 2) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_00030000(); return; /* fallthrough 0x00030000 */

}

/**
 * sub_00030000
 * Original: 0x00030000 - 0x00030001 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030000(void)
{

loc_00030000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030001
 * Original: 0x00030001 - 0x00030003 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030001: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */

    g_seh_ebp = ebp; sub_00030003(); return; /* fallthrough 0x00030003 */

}

/**
 * sub_00030003
 * Original: 0x00030003 - 0x00030005 (2 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030003(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030003: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_0003000E(); return; }

    g_seh_ebp = ebp; sub_00030005(); return; /* fallthrough 0x00030005 */

}

/**
 * sub_00030005
 * Original: 0x00030005 - 0x00030006 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030005: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_00030006(); return; /* fallthrough 0x00030006 */

}

/**
 * sub_00030006
 * Original: 0x00030006 - 0x00030007 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030006(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030006: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00030007(); return; /* fallthrough 0x00030007 */

}

/**
 * sub_00030007
 * Original: 0x00030007 - 0x0003000B (4 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030007: ;
    MEM8(ecx + 2) = 0;

    g_seh_ebp = ebp; sub_0003000B(); return; /* fallthrough 0x0003000B */

}

/**
 * sub_0003000B
 * Original: 0x0003000B - 0x0003000C (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003000B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003000B: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_0003000C(); return; /* fallthrough 0x0003000C */

}

/**
 * sub_0003000C
 * Original: 0x0003000C - 0x0003000D (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003000C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003000C: ;
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_0003000D(); return; /* fallthrough 0x0003000D */

}

/**
 * sub_0003000D
 * Original: 0x0003000D - 0x0003000E (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003000D(void)
{

loc_0003000D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003000E
 * Original: 0x0003000E - 0x0003001F (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003000E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003000E: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    MEM8(ecx + 2) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003001D
 * Original: 0x0003001D - 0x0003001F (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003001D(void)
{

loc_0003001D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003001E
 * Original: 0x0003001E - 0x0003001F (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003001E(void)
{

loc_0003001E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003001F
 * Original: 0x0003001F - 0x000300E0 (193 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003001F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003001F: ;
    SET_LO8(ecx, MEM8(0x30D9A0));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030037; /* jne: not equal / not zero */

loc_0003002B: ;
    edi = 0x30D9A0;
    esi = 0x30D9F8;
    goto loc_00030041;

loc_00030037: ;
    edi = 0x30D9F8;
    esi = 0x30D9A0;

loc_00030041: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030089; /* jne: not equal / not zero */

loc_00030045: ;
    _fa = (uint32_t)(MEM8(0x3139C8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139C8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003006A; /* jne: not equal / not zero */

loc_0003004D: ;
    PUSH32(esp, 0x00030052u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00030052: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, LO8(edx));
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + 0x2C5550));
    MEM8(esi + 1) = LO8(eax);
    goto loc_000300A1;

loc_0003006A: ;
    PUSH32(esp, 0x0003006Fu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0003006F: ;
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0003007B; /* jns: not sign (positive) */

loc_00030076: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003007B: ;
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + 0x2C5550));
    MEM8(esi + 1) = LO8(eax);
    goto loc_000300A1;

loc_00030089: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, MEM8(edx + 0x3322D0));
    MEM8(esi + 1) = LO8(edx);

loc_000300A1: ;
    eax = ZX8(MEM8(esi + 1));
    ecx = ZX8(MEM8(eax + 0x2C6710));
    SET_LO8(ebx, MEM8(ecx + 0x305B0A));
    PUSH32(esp, 0x000300B7u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_000300B7: ;
    ecx = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 2) = LO8(edx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300D2; /* jne: not equal / not zero */

loc_000300C5: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300D2; /* jne: not equal / not zero */

loc_000300CD: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 2) = LO8(edx);

loc_000300D2: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000300DB; /* jb: below (unsigned <) */

loc_000300D7: ;
    MEM8(esi + 2) = 0;

loc_000300DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00030025
 * Original: 0x00030025 - 0x000300E0 (187 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030025(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030025: ;
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030037; /* jne: not equal / not zero */

loc_0003002B: ;
    edi = 0x30D9A0;
    esi = 0x30D9F8;
    goto loc_00030041;

loc_00030037: ;
    edi = 0x30D9F8;
    esi = 0x30D9A0;

loc_00030041: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030089; /* jne: not equal / not zero */

loc_00030045: ;
    _fa = (uint32_t)(MEM8(0x3139C8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139C8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003006A; /* jne: not equal / not zero */

loc_0003004D: ;
    PUSH32(esp, 0x00030052u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00030052: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, LO8(edx));
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + 0x2C5550));
    MEM8(esi + 1) = LO8(eax);
    goto loc_000300A1;

loc_0003006A: ;
    PUSH32(esp, 0x0003006Fu); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_0003006F: ;
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0003007B; /* jns: not sign (positive) */

loc_00030076: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003007B: ;
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + 0x2C5550));
    MEM8(esi + 1) = LO8(eax);
    goto loc_000300A1;

loc_00030089: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, MEM8(edx + 0x3322D0));
    MEM8(esi + 1) = LO8(edx);

loc_000300A1: ;
    eax = ZX8(MEM8(esi + 1));
    ecx = ZX8(MEM8(eax + 0x2C6710));
    SET_LO8(ebx, MEM8(ecx + 0x305B0A));
    PUSH32(esp, 0x000300B7u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_000300B7: ;
    ecx = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 2) = LO8(edx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300D2; /* jne: not equal / not zero */

loc_000300C5: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300D2; /* jne: not equal / not zero */

loc_000300CD: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 2) = LO8(edx);

loc_000300D2: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000300DB; /* jb: below (unsigned <) */

loc_000300D7: ;
    MEM8(esi + 2) = 0;

loc_000300DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000300DB
 * Original: 0x000300DB - 0x000300E0 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000300DB(void)
{

loc_000300DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000300E0
 * Original: 0x000300E0 - 0x000301A0 (192 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000300E0_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000300E0: ;
    SET_LO8(ecx, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030105; /* jne: not equal / not zero */

loc_000300EB: ;
    PUSH32(esp, 0x000300F0u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_000300F0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, MEM8(edx + 0x2C5534));

loc_000300FE: ;
    MEM8(0x30F914) = LO8(edx);
    esp += 4; return; /* ret */

loc_00030105: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030116; /* jne: not equal / not zero */

loc_0003010E: ;
    SET_LO8(eax, 7);
    MEM8(0x30F914) = LO8(eax);
    esp += 4; return; /* ret */

loc_00030116: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030125; /* jne: not equal / not zero */

loc_0003011A: ;
    SET_LO8(eax, MEM8(0x30F914));
    MEM8(0x30F914) = LO8(eax);
    esp += 4; return; /* ret */

loc_00030125: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003014A; /* je: equal / zero */

loc_00030129: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003014A; /* je: equal / zero */

loc_0003012E: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, MEM8(edx + 0x2C5528));
    MEM8(0x30F914) = LO8(edx);
    esp += 4; return; /* ret */

loc_0003014A: ;
    SET_LO8(eax, MEM8(0x30AE32));
    edx = ZX8(LO8(eax));
    SET_LO8(edx, MEM8(edx + 0x2C5540));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    MEM8(0x30AE32) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_0003016A; /* jb: below (unsigned <) */

loc_00030163: ;
    MEM8(0x30AE32) = 0;

loc_0003016A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300FE; /* jne: not equal / not zero */

loc_0003016F: ;
    eax = ZX8(MEM8(0x30EBF0));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9A1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9A1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300FE; /* jne: not equal / not zero */

loc_00030186: ;
    SET_LO8(eax, MEM8(eax + 0x30D9A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030198; /* je: equal / zero */

loc_00030190: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000300FE; /* jne: not equal / not zero */

loc_00030198: ;
    SET_LO8(eax, 0xC);
    MEM8(0x30F914) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000301A0
 * Original: 0x000301A0 - 0x000301E7 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000301A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000301A0: ;
    PUSH32(esp, 0x000301A5u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_000301A5: ;
    eax = MEM32(eax + 0x2B);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 9;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = ZX8(MEM8(0x30EBF0));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9A1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9A1), 1 (8-bit) */
    SET_LO8(edx, MEM8(edx + 0x2C5540));
    if (CMP_NE(_fa, _fb)) goto loc_000301E0; /* jne: not equal / not zero */

loc_000301CA: ;
    SET_LO8(eax, MEM8(eax + 0x30D9A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D8; /* je: equal / zero */

loc_000301D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000301E0; /* jne: not equal / not zero */

loc_000301D8: ;
    SET_LO8(eax, 0xC);
    MEM8(0x30F914) = LO8(eax);
    esp += 4; return; /* ret */

loc_000301E0: ;
    MEM8(0x30F914) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_000301F0
 * Original: 0x000301F0 - 0x00030213 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000301F0_gen(void)   /* audio-trace: shadowed by audio.c (start_stage_bgm) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000301F0: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030212; /* je: equal / zero */

loc_000301F9: ;
    eax = ZX8(MEM8(0x30F914));
    ecx = MEM32(eax * 4 + 0x2C5560);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003020Fu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_0003020F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00030212: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030220
 * Original: 0x00030220 - 0x00030286 (102 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030220: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030259; /* je: equal / zero */

loc_00030229: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030259; /* je: equal / zero */

loc_0003022D: ;
    eax = ZX8(MEM8(0x30F924));
    edx = ZX8(MEM8(0x30C3E4));
    SET_LO16(ecx, MEM16(eax * 2 + 0x2C560C));
    SET_LO16(eax, MEM16(edx * 2 + 0x2C560C));
    MEM16(0x30AE3C) = LO16(ecx);
    MEM16(0x30C4C4) = LO16(eax);
    esp += 4; return; /* ret */

loc_00030259: ;
    ecx = ZX8(MEM8(0x30F924));
    eax = ZX8(MEM8(0x30C3E4));
    SET_LO16(edx, MEM16(ecx * 2 + 0x2C5600));
    SET_LO16(ecx, MEM16(eax * 2 + 0x2C5600));
    MEM16(0x30AE3C) = LO16(edx);
    MEM16(0x30C4C4) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00030290
 * Original: 0x00030290 - 0x000302E1 (81 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030290(void)
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

loc_00030290: ;
    eax = ZX8(MEM8(0x30760F));
    ecx = ZX8(MEM8(0x30554D));
    edx = ZX8(MEM8(0x305B14));
    eax = eax + eax * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(0x30D00A));
    fp_push(MEMF(eax * 4 + 0x2C562C)); /* fld float */
    eax = edx + edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000302E5(); return; } /* je: equal / zero */

loc_000302C0: ;
    SET_LO8(eax, MEM8(0x30760C));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000302ED(); return; } /* jne: not equal / not zero */

loc_000302CB: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030318(); return; } /* jne: not equal / not zero */

loc_000302D4: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030311(); return; } /* jne: not equal / not zero */

loc_000302DC: ;
    SET_LO8(eax, MEM8(0x30ED4C));

    g_seh_ebp = ebp; sub_000302E1(); return; /* fallthrough 0x000302E1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000302E1
 * Original: 0x000302E1 - 0x000302E5 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000302E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000302E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000302ED(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000302E5(); return; /* fallthrough 0x000302E5 */

}

/**
 * sub_000302E5
 * Original: 0x000302E5 - 0x000302ED (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000302E5(void)
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

loc_000302E5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D4)); /* fld float */

    g_seh_ebp = ebp; sub_000302ED(); return; /* fallthrough 0x000302ED */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000302ED
 * Original: 0x000302ED - 0x00030311 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000302ED(void)
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

loc_000302ED: ;
    MEMF(0x315AD0) = (float)fp_top(); /* fst */
    MEMF(0x30DAAC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_00030335(); return; } /* jp: parity */

loc_0003030A: ;
    fp_pop(); /* fstp st(0) */
    g_seh_ebp = ebp; sub_0001A7E0(); return; /* tail jmp 0x0001A7E0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030303
 * Original: 0x00030303 - 0x00030311 (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00030303(void)
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

loc_00030303: ;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) { g_seh_ebp = ebp; sub_00030335(); return; } /* jp: parity */

loc_0003030A: ;
    fp_pop(); /* fstp st(0) */
    g_seh_ebp = ebp; sub_0001A7E0(); return; /* tail jmp 0x0001A7E0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030311
 * Original: 0x00030311 - 0x00030318 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030311(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030311: ;
    SET_LO8(eax, MEM8(0x30ED4D));
    g_seh_ebp = ebp; sub_000302E1(); return; /* tail jmp 0x000302E1 */

}

/**
 * sub_00030318
 * Original: 0x00030318 - 0x00030335 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030318(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030318: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030325; /* jne: not equal / not zero */

loc_0003031C: ;
    _fa = (uint32_t)(MEM8(0x30F926)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F926), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000302E5(); return; } /* je: equal / zero */

loc_00030325: ;
    SET_LO16(eax, MEM16(0x30ED4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000302E5(); return; } /* je: equal / zero */

loc_0003032F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000302E5(); return; } /* je: equal / zero */

loc_00030333: ;
    g_seh_ebp = ebp; sub_000302ED(); return; /* tail jmp 0x000302ED */

}

/**
 * sub_00030335
 * Original: 0x00030335 - 0x00030350 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030335(void)
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

loc_00030335: ;
    fp_push(MEMF(0x30F918)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0003034B; /* jp: parity */

loc_00030346: ;
    g_seh_ebp = ebp; sub_0001A7F0(); return; /* tail jmp 0x0001A7F0 */

loc_0003034B: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030350
 * Original: 0x00030350 - 0x0003035B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030350(void)
{

loc_00030350: ;
    MEM32(0x3139D4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00030360
 * Original: 0x00030360 - 0x00030361 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030360(void)
{

loc_00030360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030370
 * Original: 0x00030370 - 0x00030431 (193 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030370: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030430; /* je: equal / zero */

loc_0003037D: ;
    eax = ZX8(MEM8(0x30D9A1));
    edx = ZX8(MEM8(0x30D9F9));
    SET_LO8(ecx, MEM8(eax + 0x2C6710));
    SET_LO8(eax, MEM8(0x30EDC8));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x2C6710));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000303BA; /* jne: not equal / not zero */

loc_000303A3: ;
    PUSH32(esp, esi);
    eax = ZX8(LO8(ecx));
    esi = ZX8(LO8(ebx));
    eax = eax + eax * 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    MEM8(eax * 2 + 0x305925) = MEM8(eax * 2 + 0x305925) + 1;
    _fa = (uint32_t)(MEM8(eax * 2 + 0x305925)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_000303BA: ;
    eax = ZX8(LO8(ecx));
    ecx = ZX8(LO8(ebx));
    eax = eax + eax * 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    MEM8(ecx * 2 + 0x305924) = MEM8(ecx * 2 + 0x305924) + 1;
    _fa = (uint32_t)(MEM8(ecx * 2 + 0x305924)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(0x3322B4));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx * 2 + 0x305926) = MEM8(ecx * 2 + 0x305926) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx * 2 + 0x305926)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(0x3322B5));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx * 2 + 0x305927) = MEM8(ecx * 2 + 0x305927) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx * 2 + 0x305927)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(0x3322E0));
    eax = eax + eax * 2;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax * 2 + 0x305928) = MEM8(eax * 2 + 0x305928) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax * 2 + 0x305928)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(ecx * 2 + 0x305929));
    eax = ecx * 2 + 0x305929;
    SET_LO8(ecx, MEM8(0x3322E1));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = LO8(ebx);
    MEM8(0x3322B4) = LO8(edx);
    MEM8(0x3322B5) = LO8(edx);
    MEM8(0x3322E0) = LO8(edx);
    MEM8(0x3322E1) = LO8(edx);
    MEM32(0x3139D8) = edx;
    POP32(esp, ebx);

loc_00030430: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030440
 * Original: 0x00030440 - 0x00030441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030440(void)
{

loc_00030440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030450
 * Original: 0x00030450 - 0x000305C5 (373 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030450: ;
    SET_LO8(eax, MEM8(0x30D9A1));
    SET_LO8(ecx, MEM8(0x3139CB));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00030498; /* jne: not equal / not zero */

loc_00030463: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030498; /* jne: not equal / not zero */

loc_0003046B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030498; /* je: equal / zero */

loc_00030470: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030489; /* je: equal / zero */

loc_00030478: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030489; /* jne: not equal / not zero */

loc_00030480: ;
    _fa = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F9), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030498; /* je: equal / zero */

loc_00030489: ;
    MEM32(0x30D9A4) = 0xBF3D70A4u;
    goto loc_0003053D;

loc_00030498: ;
    _fa = (uint32_t)(MEM8(0x30D00B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D00B), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000304E0; /* jne: not equal / not zero */

loc_000304A1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000304E0; /* jg: greater (signed >) */

loc_000304A6: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000304E0; /* jne: not equal / not zero */

loc_000304AE: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000304E0; /* jne: not equal / not zero */

loc_000304C2: ;
    _fa = (uint32_t)(MEM8(0x30D9A1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030533; /* jne: not equal / not zero */

loc_000304CA: ;
    MEM32(0x30D9A4) = 0xBFA8DFCEu;
    MEM32(0x30D9AC) = 0xBE18D25Fu;
    goto loc_00030547;

loc_000304E0: ;
    SET_LO8(eax, MEM8(0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003050C; /* jne: not equal / not zero */

loc_000304E9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030533; /* je: equal / zero */

loc_000304EE: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030533; /* jne: not equal / not zero */

loc_000304F6: ;
    MEM32(0x30D9A4) = 0xBF337BF2u;
    MEM32(0x30D9AC) = 0xBE6DA900u;
    goto loc_00030547;

loc_0003050C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030533; /* jne: not equal / not zero */

loc_00030510: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030533; /* je: equal / zero */

loc_00030515: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030533; /* jne: not equal / not zero */

loc_0003051D: ;
    MEM32(0x30D9A4) = 0xBF333333u;
    MEM32(0x30D9AC) = 0xBC23D70Au;
    goto loc_00030547;

loc_00030533: ;
    MEM32(0x30D9A4) = 0xBF800000u;

loc_0003053D: ;
    MEM32(0x30D9AC) = 0;

loc_00030547: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM32(0x30D9A8) = 0x3F800000;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030757(); return; } /* jne: not equal / not zero */

loc_0003055A: ;
    PUSH32(esp, 0x0003055Fu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003055F: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030574; /* je: equal / zero */

loc_00030565: ;
    PUSH32(esp, 0x0003056Au); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003056A: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030751(); return; } /* jne: not equal / not zero */

loc_00030574: ;
    PUSH32(esp, 0x00030579u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00030579: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030751(); return; } /* jne: not equal / not zero */

loc_00030581: ;
    PUSH32(esp, 0x00030586u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00030586: ;
    _fa = (uint32_t)(MEM8(eax + 0x2A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2A), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000305BF; /* je: equal / zero */

loc_0003058B: ;
    PUSH32(esp, 0x00030590u); RECOMP_ABI_CALL(0x00075BF0u, sub_00075BF0); /* call 0x00075BF0 */

loc_00030590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000305BF; /* je: equal / zero */

loc_00030594: ;
    SET_LO16(eax, MEM16(0x30AE3C));
    SET_LO16(ecx, MEM16(0x30D9C0));
    SET_LO16(edx, LO16(eax));
    SET_LO16(edx, LO16(edx) >> 2);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x30D9C0) = LO16(ecx);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    SET_LO8(ecx, MEM8(0x3139CB));
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000305D1(); return; } /* jbe: below or equal (unsigned <=) */

loc_000305BD: ;
    g_seh_ebp = ebp; sub_000305CB(); return; /* tail jmp 0x000305CB */

loc_000305BF: ;
    SET_LO8(ecx, MEM8(0x3139CB));

    g_seh_ebp = ebp; sub_000305C5(); return; /* fallthrough 0x000305C5 */

}

/**
 * sub_000305C5
 * Original: 0x000305C5 - 0x000305CB (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000305C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000305C5: ;
    SET_LO16(eax, MEM16(0x30AE3C));

    g_seh_ebp = ebp; sub_000305CB(); return; /* fallthrough 0x000305CB */

}

/**
 * sub_000305CB
 * Original: 0x000305CB - 0x000305D1 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000305CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000305CB: ;
    MEM16(0x30D9C0) = LO16(eax);

    g_seh_ebp = ebp; sub_000305D1(); return; /* fallthrough 0x000305D1 */

}

/**
 * sub_000305D1
 * Original: 0x000305D1 - 0x00030751 (384 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000305D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000305D1: ;
    _fa = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F9), 0xB (8-bit) */
    MEM32(0x30D9B0) = 0x3F800000;
    MEM32(0x30D9B4) = ebx;
    MEM32(0x30D9B8) = ebx;
    MEM32(0x30D9BC) = ebx;
    MEM16(0x30D9C2) = LO16(ebx);
    MEM16(0x30D9C4) = LO16(ebx);
    MEM16(0x30D9C6) = LO16(ebx);
    MEM8(0x30D9CA) = LO8(ebx);
    MEM8(0x30D9CB) = LO8(ebx);
    MEM16(0x30D9C8) = LO16(ebx);
    MEM8(0x30D9CC) = 1;
    MEM8(0x30D9CD) = LO8(ebx);
    MEM8(0x30D9CE) = LO8(ebx);
    MEM8(0x30D9CF) = LO8(ebx);
    MEM8(0x30D9D0) = LO8(ebx);
    MEM8(0x30D9D1) = LO8(ebx);
    MEM8(0x30D9D2) = LO8(ebx);
    MEM8(0x30D9D3) = LO8(ebx);
    MEM8(0x30D9D4) = 1;
    MEM8(0x30D9D6) = LO8(ebx);
    MEM8(0x30D9D7) = LO8(ebx);
    MEM8(0x30D9D8) = LO8(ebx);
    MEM8(0x30D9D9) = LO8(ebx);
    MEM8(0x30D9DA) = LO8(ebx);
    MEM8(0x30D9DB) = LO8(ebx);
    MEM8(0x30D9DC) = LO8(ebx);
    MEM8(0x30D9DD) = LO8(ebx);
    MEM8(0x30D9DE) = LO8(ebx);
    MEM8(0x30D9DF) = LO8(ebx);
    MEM8(0x30D9E0) = LO8(ebx);
    MEM8(0x30D9E1) = LO8(ebx);
    MEM8(0x30D9E2) = LO8(ebx);
    MEM8(0x30D9E3) = LO8(ebx);
    MEM8(0x30D9E4) = LO8(ebx);
    MEM8(0x30D9E5) = LO8(ebx);
    MEM8(0x30D9E6) = LO8(ebx);
    MEM8(0x30D9E7) = LO8(ebx);
    MEM8(0x30D9E8) = LO8(ebx);
    MEM8(0x30D9E9) = LO8(ebx);
    MEM8(0x30D9EA) = LO8(ebx);
    MEM8(0x30D9EB) = LO8(ebx);
    MEM8(0x30D9EC) = LO8(ebx);
    MEM8(0x30D9EE) = LO8(ebx);
    MEM8(0x30D9EF) = LO8(ebx);
    MEM8(0x30D9F0) = LO8(ebx);
    MEM8(0x30D9F1) = LO8(ebx);
    MEM8(0x30D9F2) = LO8(ebx);
    MEM8(0x30D9F3) = LO8(ebx);
    MEM8(0x30D9F4) = LO8(ebx);
    MEM8(0x30D9F5) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000307B4(); return; } /* jne: not equal / not zero */

loc_00030714: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000307B4(); return; } /* jne: not equal / not zero */

loc_00030720: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000307B4(); return; } /* je: equal / zero */

loc_00030729: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030742; /* je: equal / zero */

loc_00030731: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030742; /* jne: not equal / not zero */

loc_00030739: ;
    _fa = (uint32_t)(MEM8(0x30D9A1)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A1), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000307B4(); return; } /* je: equal / zero */

loc_00030742: ;
    MEM32(0x30D9FC) = 0x3F3D70A4;
    g_seh_ebp = ebp; sub_00030859(); return; /* tail jmp 0x00030859 */

}

/**
 * sub_00030751
 * Original: 0x00030751 - 0x00030757 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030751(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030751: ;
    SET_LO8(ecx, MEM8(0x3139CB));

    g_seh_ebp = ebp; sub_00030757(); return; /* fallthrough 0x00030757 */

}

/**
 * sub_00030757
 * Original: 0x00030757 - 0x000307B4 (93 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030757(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030757: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000305C5(); return; } /* jne: not equal / not zero */

loc_00030760: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000305C5(); return; } /* jne: not equal / not zero */

loc_0003076D: ;
    _fa = (uint32_t)(MEM8(0x30AE54)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE54), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030788; /* jne: not equal / not zero */

loc_00030775: ;
    SET_LO16(edx, MEM16(0x30AE3C));
    MEM16(0x30D9C0) = LO16(edx);
    g_seh_ebp = ebp; sub_000305D1(); return; /* tail jmp 0x000305D1 */

loc_00030788: ;
    SET_LO16(eax, MEM16(0x30AE3C));
    SET_LO16(edx, MEM16(0x30D9C0));
    SET_LO16(esi, LO16(eax));
    SET_LO16(esi, LO16(esi) >> 2);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + LO16(esi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    MEM16(0x30D9C0) = LO16(edx);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000305D1(); return; } /* jbe: below or equal (unsigned <=) */

loc_000307AF: ;
    g_seh_ebp = ebp; sub_000305CB(); return; /* tail jmp 0x000305CB */

}

/**
 * sub_000307B4
 * Original: 0x000307B4 - 0x00030863 (175 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000307B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000307B4: ;
    _fa = (uint32_t)(MEM8(0x30D00B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D00B), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000307FC; /* jne: not equal / not zero */

loc_000307BD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000307FC; /* jg: greater (signed >) */

loc_000307C2: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000307FC; /* jne: not equal / not zero */

loc_000307CA: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000307FC; /* jne: not equal / not zero */

loc_000307DE: ;
    _fa = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003084F; /* jne: not equal / not zero */

loc_000307E6: ;
    MEM32(0x30D9FC) = 0x3FA8DFCE;
    MEM32(0x30DA04) = 0x3E18D25F;
    g_seh_ebp = ebp; sub_00030863(); return; /* tail jmp 0x00030863 */

loc_000307FC: ;
    SET_LO8(eax, MEM8(0x30D9F9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030828; /* jne: not equal / not zero */

loc_00030805: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003084F; /* je: equal / zero */

loc_0003080A: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003084F; /* jne: not equal / not zero */

loc_00030812: ;
    MEM32(0x30D9FC) = 0x3F337BF2;
    MEM32(0x30DA04) = 0x3E6DA900;
    g_seh_ebp = ebp; sub_00030863(); return; /* tail jmp 0x00030863 */

loc_00030828: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003084F; /* jne: not equal / not zero */

loc_0003082C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003084F; /* je: equal / zero */

loc_00030831: ;
    _fa = (uint32_t)(MEM8(0x30AAB1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AAB1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003084F; /* jne: not equal / not zero */

loc_00030839: ;
    MEM32(0x30D9FC) = 0x3F333333;
    MEM32(0x30DA04) = 0x3C23D70A;
    g_seh_ebp = ebp; sub_00030863(); return; /* tail jmp 0x00030863 */

loc_0003084F: ;
    MEM32(0x30D9FC) = 0x3F800000;
    MEM32(0x30DA04) = 0;

    g_seh_ebp = ebp; sub_00030863(); return; /* fallthrough 0x00030863 */

}

/**
 * sub_00030859
 * Original: 0x00030859 - 0x00030863 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030859(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030859: ;
    MEM32(0x30DA04) = 0;

    g_seh_ebp = ebp; sub_00030863(); return; /* fallthrough 0x00030863 */

}

/**
 * sub_00030863
 * Original: 0x00030863 - 0x000308A4 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030863(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030863: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM32(0x30DA00) = 0x3F800000;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000308CF(); return; } /* jne: not equal / not zero */

loc_00030872: ;
    PUSH32(esp, 0x00030877u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00030877: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030888; /* je: equal / zero */

loc_0003087D: ;
    PUSH32(esp, 0x00030882u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00030882: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000308C9(); return; } /* jne: not equal / not zero */

loc_00030888: ;
    PUSH32(esp, 0x0003088Du); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0003088D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000308C9(); return; } /* je: equal / zero */

loc_00030891: ;
    PUSH32(esp, 0x00030896u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00030896: ;
    _fa = (uint32_t)(MEM8(eax + 0x2A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2A), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000308F5(); return; } /* je: equal / zero */

loc_0003089B: ;
    PUSH32(esp, 0x000308A0u); RECOMP_ABI_CALL(0x00075BF0u, sub_00075BF0); /* call 0x00075BF0 */

loc_000308A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000308F5(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_000308A4(); return; /* fallthrough 0x000308A4 */

}

/**
 * sub_000308A4
 * Original: 0x000308A4 - 0x000308C9 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000308A4: ;
    SET_LO16(eax, MEM16(0x30C4C4));
    SET_LO16(ecx, MEM16(0x30DA18));
    SET_LO16(edx, LO16(eax));
    SET_LO16(edx, LO16(edx) >> 2);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    MEM16(0x30DA18) = LO16(ecx);
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00030901(); return; } /* jbe: below or equal (unsigned <=) */

loc_000308C7: ;
    g_seh_ebp = ebp; sub_000308FB(); return; /* tail jmp 0x000308FB */

}

/**
 * sub_000308C9
 * Original: 0x000308C9 - 0x000308CF (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000308C9: ;
    SET_LO8(ecx, MEM8(0x3139CB));

    g_seh_ebp = ebp; sub_000308CF(); return; /* fallthrough 0x000308CF */

}

/**
 * sub_000308CF
 * Original: 0x000308CF - 0x000308F5 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000308CF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000308F5(); return; } /* jne: not equal / not zero */

loc_000308D4: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000308F5(); return; } /* jne: not equal / not zero */

loc_000308DD: ;
    _fa = (uint32_t)(MEM8(0x30AE54)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE54), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000308A4(); return; } /* jne: not equal / not zero */

loc_000308E5: ;
    SET_LO16(ecx, MEM16(0x30C4C4));
    MEM16(0x30DA18) = LO16(ecx);
    g_seh_ebp = ebp; sub_00030901(); return; /* tail jmp 0x00030901 */

}

/**
 * sub_000308F5
 * Original: 0x000308F5 - 0x00030A51 (348 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308F5(void)
{

loc_000308F5: ;
    SET_LO16(eax, MEM16(0x30C4C4));
    MEM16(0x30DA18) = LO16(eax);
    eax = 0x8000;
    POP32(esp, esi);
    MEM16(0x30DA1A) = LO16(ebx);
    MEM16(0x30DA1C) = LO16(ebx);
    MEM16(0x30DA1E) = LO16(ebx);
    MEM8(0x30DA22) = LO8(ebx);
    MEM8(0x30DA23) = LO8(ebx);
    MEM8(0x30DA25) = LO8(ebx);
    MEM8(0x30DA26) = LO8(ebx);
    MEM8(0x30DA27) = LO8(ebx);
    MEM8(0x30DA28) = LO8(ebx);
    MEM8(0x30DA29) = LO8(ebx);
    MEM8(0x30DA2A) = LO8(ebx);
    MEM8(0x30DA2B) = LO8(ebx);
    MEM8(0x30DA2E) = LO8(ebx);
    MEM8(0x30DA2F) = LO8(ebx);
    MEM8(0x30DA30) = LO8(ebx);
    MEM8(0x30DA31) = LO8(ebx);
    MEM8(0x30DA32) = LO8(ebx);
    MEM8(0x30DA33) = LO8(ebx);
    MEM8(0x30DA34) = LO8(ebx);
    MEM8(0x30DA35) = LO8(ebx);
    MEM8(0x30DA36) = LO8(ebx);
    MEM8(0x30DA37) = LO8(ebx);
    MEM8(0x30DA38) = LO8(ebx);
    MEM8(0x30DA39) = LO8(ebx);
    MEM8(0x30DA3A) = LO8(ebx);
    MEM8(0x30DA3B) = LO8(ebx);
    MEM8(0x30DA3C) = LO8(ebx);
    MEM8(0x30DA3D) = LO8(ebx);
    MEM8(0x30DA3E) = LO8(ebx);
    MEM8(0x30DA3F) = LO8(ebx);
    MEM8(0x30DA40) = LO8(ebx);
    MEM8(0x30DA41) = LO8(ebx);
    MEM8(0x30DA42) = LO8(ebx);
    MEM8(0x30DA43) = LO8(ebx);
    MEM8(0x30DA44) = LO8(ebx);
    MEM8(0x30DA46) = LO8(ebx);
    MEM8(0x30DA47) = LO8(ebx);
    MEM8(0x30DA48) = LO8(ebx);
    MEM8(0x30DA49) = LO8(ebx);
    MEM8(0x30DA4A) = LO8(ebx);
    MEM8(0x30DA4B) = LO8(ebx);
    MEM8(0x30DA4C) = LO8(ebx);
    MEM8(0x30DA4D) = LO8(ebx);
    MEM8(0x349F68) = LO8(ebx);
    MEM8(0x349F69) = LO8(ebx);
    MEM32(0x30DA08) = 0x3F800000;
    MEM32(0x30DA0C) = eax;
    MEM32(0x30DA10) = eax;
    MEM32(0x30DA14) = eax;
    MEM16(0x30DA20) = 0x400;
    MEM8(0x30DA24) = 1;
    MEM8(0x30DA2C) = 1;
    MEM8(0x332295) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000308FB
 * Original: 0x000308FB - 0x00030A51 (342 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308FB(void)
{

loc_000308FB: ;
    MEM16(0x30DA18) = LO16(eax);
    eax = 0x8000;
    POP32(esp, esi);
    MEM16(0x30DA1A) = LO16(ebx);
    MEM16(0x30DA1C) = LO16(ebx);
    MEM16(0x30DA1E) = LO16(ebx);
    MEM8(0x30DA22) = LO8(ebx);
    MEM8(0x30DA23) = LO8(ebx);
    MEM8(0x30DA25) = LO8(ebx);
    MEM8(0x30DA26) = LO8(ebx);
    MEM8(0x30DA27) = LO8(ebx);
    MEM8(0x30DA28) = LO8(ebx);
    MEM8(0x30DA29) = LO8(ebx);
    MEM8(0x30DA2A) = LO8(ebx);
    MEM8(0x30DA2B) = LO8(ebx);
    MEM8(0x30DA2E) = LO8(ebx);
    MEM8(0x30DA2F) = LO8(ebx);
    MEM8(0x30DA30) = LO8(ebx);
    MEM8(0x30DA31) = LO8(ebx);
    MEM8(0x30DA32) = LO8(ebx);
    MEM8(0x30DA33) = LO8(ebx);
    MEM8(0x30DA34) = LO8(ebx);
    MEM8(0x30DA35) = LO8(ebx);
    MEM8(0x30DA36) = LO8(ebx);
    MEM8(0x30DA37) = LO8(ebx);
    MEM8(0x30DA38) = LO8(ebx);
    MEM8(0x30DA39) = LO8(ebx);
    MEM8(0x30DA3A) = LO8(ebx);
    MEM8(0x30DA3B) = LO8(ebx);
    MEM8(0x30DA3C) = LO8(ebx);
    MEM8(0x30DA3D) = LO8(ebx);
    MEM8(0x30DA3E) = LO8(ebx);
    MEM8(0x30DA3F) = LO8(ebx);
    MEM8(0x30DA40) = LO8(ebx);
    MEM8(0x30DA41) = LO8(ebx);
    MEM8(0x30DA42) = LO8(ebx);
    MEM8(0x30DA43) = LO8(ebx);
    MEM8(0x30DA44) = LO8(ebx);
    MEM8(0x30DA46) = LO8(ebx);
    MEM8(0x30DA47) = LO8(ebx);
    MEM8(0x30DA48) = LO8(ebx);
    MEM8(0x30DA49) = LO8(ebx);
    MEM8(0x30DA4A) = LO8(ebx);
    MEM8(0x30DA4B) = LO8(ebx);
    MEM8(0x30DA4C) = LO8(ebx);
    MEM8(0x30DA4D) = LO8(ebx);
    MEM8(0x349F68) = LO8(ebx);
    MEM8(0x349F69) = LO8(ebx);
    MEM32(0x30DA08) = 0x3F800000;
    MEM32(0x30DA0C) = eax;
    MEM32(0x30DA10) = eax;
    MEM32(0x30DA14) = eax;
    MEM16(0x30DA20) = 0x400;
    MEM8(0x30DA24) = 1;
    MEM8(0x30DA2C) = 1;
    MEM8(0x332295) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00030901
 * Original: 0x00030901 - 0x00030A51 (336 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030901(void)
{

loc_00030901: ;
    eax = 0x8000;
    POP32(esp, esi);
    MEM16(0x30DA1A) = LO16(ebx);
    MEM16(0x30DA1C) = LO16(ebx);
    MEM16(0x30DA1E) = LO16(ebx);
    MEM8(0x30DA22) = LO8(ebx);
    MEM8(0x30DA23) = LO8(ebx);
    MEM8(0x30DA25) = LO8(ebx);
    MEM8(0x30DA26) = LO8(ebx);
    MEM8(0x30DA27) = LO8(ebx);
    MEM8(0x30DA28) = LO8(ebx);
    MEM8(0x30DA29) = LO8(ebx);
    MEM8(0x30DA2A) = LO8(ebx);
    MEM8(0x30DA2B) = LO8(ebx);
    MEM8(0x30DA2E) = LO8(ebx);
    MEM8(0x30DA2F) = LO8(ebx);
    MEM8(0x30DA30) = LO8(ebx);
    MEM8(0x30DA31) = LO8(ebx);
    MEM8(0x30DA32) = LO8(ebx);
    MEM8(0x30DA33) = LO8(ebx);
    MEM8(0x30DA34) = LO8(ebx);
    MEM8(0x30DA35) = LO8(ebx);
    MEM8(0x30DA36) = LO8(ebx);
    MEM8(0x30DA37) = LO8(ebx);
    MEM8(0x30DA38) = LO8(ebx);
    MEM8(0x30DA39) = LO8(ebx);
    MEM8(0x30DA3A) = LO8(ebx);
    MEM8(0x30DA3B) = LO8(ebx);
    MEM8(0x30DA3C) = LO8(ebx);
    MEM8(0x30DA3D) = LO8(ebx);
    MEM8(0x30DA3E) = LO8(ebx);
    MEM8(0x30DA3F) = LO8(ebx);
    MEM8(0x30DA40) = LO8(ebx);
    MEM8(0x30DA41) = LO8(ebx);
    MEM8(0x30DA42) = LO8(ebx);
    MEM8(0x30DA43) = LO8(ebx);
    MEM8(0x30DA44) = LO8(ebx);
    MEM8(0x30DA46) = LO8(ebx);
    MEM8(0x30DA47) = LO8(ebx);
    MEM8(0x30DA48) = LO8(ebx);
    MEM8(0x30DA49) = LO8(ebx);
    MEM8(0x30DA4A) = LO8(ebx);
    MEM8(0x30DA4B) = LO8(ebx);
    MEM8(0x30DA4C) = LO8(ebx);
    MEM8(0x30DA4D) = LO8(ebx);
    MEM8(0x349F68) = LO8(ebx);
    MEM8(0x349F69) = LO8(ebx);
    MEM32(0x30DA08) = 0x3F800000;
    MEM32(0x30DA0C) = eax;
    MEM32(0x30DA10) = eax;
    MEM32(0x30DA14) = eax;
    MEM16(0x30DA20) = 0x400;
    MEM8(0x30DA24) = 1;
    MEM8(0x30DA2C) = 1;
    MEM8(0x332295) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00030A60
 * Original: 0x00030A60 - 0x00030A8E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030A60: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00030A67u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00030A67: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00030A6Eu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00030A6E: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00030A75u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00030A75: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00030A7Cu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00030A7C: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00030A83u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00030A83: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00030A8Au); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00030A8A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030A90
 * Original: 0x00030A90 - 0x00030ABE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030A90: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00030A97u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00030A97: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00030A9Eu); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00030A9E: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00030AA5u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00030AA5: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00030AACu); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00030AAC: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00030AB3u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00030AB3: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00030ABAu); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00030ABA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030AC0
 * Original: 0x00030AC0 - 0x00030AF3 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030AC0: ;
    PUSH32(esp, 0x00030AC5u); RECOMP_ABI_CALL(0x0004E7A0u, sub_0004E7A0); /* call 0x0004E7A0 */

loc_00030AC5: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00030ACCu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030ACC: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00030AD3u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030AD3: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00030ADAu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030ADA: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00030AE1u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030AE1: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00030AE8u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030AE8: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00030AEFu); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030AEF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030B00
 * Original: 0x00030B00 - 0x00030B32 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030B00: ;
    ecx = 0x3252A8;
    eax = 0x30733C;
    edx = 0xF;
    PUSH32(esp, edi);

loc_00030B10: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 1 (8-bit) */
    MEM32(eax + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00030B24; /* jne: not equal / not zero */

loc_00030B1C: ;
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC) = edi;

loc_00030B24: ;
    edi = MEM32(eax);
    MEM32(eax + 4) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00030B10; /* jne: not equal / not zero */

loc_00030B30: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030B40
 * Original: 0x00030B40 - 0x00030BBE (126 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B40_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030B40: ;
    SET_LO16(eax, MEM16(0x34CD64));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x50 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030B53; /* jl: less (signed <) */

loc_00030B4C: ;
    eax = 0x20;
    goto loc_00030BA7;

loc_00030B53: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x28 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030B75; /* jl: less (signed <) */

loc_00030B59: ;
    SET_LO8(ecx, MEM8(0x3055AC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030BBD; /* jne: not equal / not zero */

loc_00030B68: ;
    MEM8(0x3358A9) = LO8(eax);
    MEM16(0x3055AC) = MEM16(0x3055AC) | LO16(eax);
    _fa = (uint32_t)(MEM16(0x3055AC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00030B75: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030B82; /* jl: less (signed <) */

loc_00030B7B: ;
    eax = 0x10;
    goto loc_00030BA7;

loc_00030B82: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030B8F; /* jl: less (signed <) */

loc_00030B88: ;
    eax = 8;
    goto loc_00030BA7;

loc_00030B8F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030B9C; /* jl: less (signed <) */

loc_00030B95: ;
    eax = 4;
    goto loc_00030BA7;

loc_00030B9C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030BBD; /* jl: less (signed <) */

loc_00030BA2: ;
    eax = 2;

loc_00030BA7: ;
    _fa = (uint32_t)(MEM8(0x3055AC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3055AC), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030BBD; /* jne: not equal / not zero */

loc_00030BAF: ;
    MEM16(0x3055AC) = MEM16(0x3055AC) | LO16(eax);
    _fa = (uint32_t)(MEM16(0x3055AC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(0x3358A9) = 1;

loc_00030BBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030BC0
 * Original: 0x00030BC0 - 0x00030C18 (88 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030BC0: ;
    SET_LO8(ecx, MEM8(esp + 4));
    eax = ZX8(LO8(ecx));
    eax = ZX8(MEM8(eax + 0x2C6710));
    _fa = (uint32_t)(MEM16(eax * 2 + 0x30590C)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x30590C), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030BE8; /* je: equal / zero */

loc_00030BDA: ;
    MEM32(0x305920) = MEM32(0x305920) + 1;
    _fa = (uint32_t)(MEM32(0x305920)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax * 2 + 0x30590C) = MEM16(eax * 2 + 0x30590C) + 1;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x30590C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00030BE8: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x3055AC));
    edx = 0x20;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00030C17; /* jne: not equal / not zero */

loc_00030BF9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030C17; /* jne: not equal / not zero */

loc_00030BFE: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x30590C)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x30590C), 0x64 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00030C17; /* jb: below (unsigned <) */

loc_00030C09: ;
    MEM16(0x3055AC) = MEM16(0x3055AC) | LO16(edx);
    _fa = (uint32_t)(MEM16(0x3055AC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(0x3358A9) = 1;

loc_00030C17: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030C20
 * Original: 0x00030C20 - 0x00030C45 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030C20: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D9A1));
    eax = ZX8(MEM8(eax + 0x30D9A2));
    ecx = ecx + ecx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    eax = MEM32(ecx * 4 + 0x2C56F0);
    esp += 4; return; /* ret */

}

/**
 * sub_00030C50
 * Original: 0x00030C50 - 0x00030C75 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030C50: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D9A1));
    eax = ZX8(MEM8(eax + 0x30D9A2));
    ecx = ecx + ecx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    eax = MEM32(ecx * 4 + 0x2C56F4);
    esp += 4; return; /* ret */

}

/**
 * sub_00030C80
 * Original: 0x00030C80 - 0x00030CA5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030C80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    ecx = ZX8(MEM8(eax + 0x30D9A1));
    eax = ZX8(MEM8(eax + 0x30D9A2));
    ecx = ecx + ecx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    eax = MEM32(ecx * 4 + 0x2C56F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00030CB0
 * Original: 0x00030CB0 - 0x00030ED7 (551 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030CB0_gen(void)   /* load-trace: shadowed by loaders.c (filename) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030CB0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030D10; /* jne: not equal / not zero */

loc_00030CBA: ;
    ecx = ZX8(MEM8(esp + 8));
    edx = MEM32(ecx * 4 + 0x2C54D8);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00030CDB; /* je: equal / zero */

loc_00030CD0: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CD0; /* jne: not equal / not zero */

loc_00030CDB: ;
    edx = ZX8(MEM8(esp + 0xC));
    edx = MEM32(edx * 4 + 0x2C550C);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030CFB; /* je: equal / zero */

loc_00030CED: ;
    /* nop */

loc_00030CF0: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CF0; /* jne: not equal / not zero */

loc_00030CFB: ;
    MEM8(eax) = 0x2E;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x42;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x49;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x4E;
    MEM8(eax + 1) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00030D10: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00030DF3; /* jne: not equal / not zero */

loc_00030D1A: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    eax = MEM32(esp + 0x18);
    if (CMP_A(_fa, _fb)) goto loc_00030D80; /* ja: above (unsigned >) */

loc_00030D27: ;
    ecx = ZX8(MEM8(esp + 0xC));
    esi = MEM32(ecx * 4 + 0x2C53B8);
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030D4B; /* je: equal / zero */

loc_00030D39: ;
    /* nop */

loc_00030D40: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030D40; /* jne: not equal / not zero */

loc_00030D4B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030D56; /* je: equal / zero */

loc_00030D50: ;
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00030D56: ;
    MEM8(eax) = 0x5F;
    edx = MEM32(0x2C53B0);
    SET_LO8(ecx, MEM8(edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030EC1; /* je: equal / zero */

loc_00030D6A: ;
    /* nop */

loc_00030D70: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030D70; /* jne: not equal / not zero */

loc_00030D7B: ;
    goto loc_00030EC1;

loc_00030D80: ;
    esi = ZX8(MEM8(esp + 0xC));
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x2C56B8);
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ZX8(LO8(edx));
    edx = ecx + ecx * 2;
    ecx = ZX8(MEM8(edi + edx * 2 + 0x2C2B64));
    edx = MEM32(ecx * 4 + 0x2C5420);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030DBB; /* je: equal / zero */

loc_00030DAB: ;
    goto loc_00030DB0;

    /* nop */

loc_00030DB0: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030DB0; /* jne: not equal / not zero */

loc_00030DBB: ;
    MEM8(eax) = 0x5F;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x2C56B8);
    edx = ecx + ecx * 2;
    ecx = ZX8(MEM8(edi + edx * 2 + 0x2C2B2C));
    edx = MEM32(ecx * 4 + 0x2C5430);
    SET_LO8(ecx, MEM8(edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00030EC1; /* je: equal / zero */

loc_00030DE3: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030DE3; /* jne: not equal / not zero */

loc_00030DEE: ;
    goto loc_00030EC1;

loc_00030DF3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030ED4; /* je: equal / zero */

loc_00030DFC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    eax = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_00030E76; /* jne: not equal / not zero */

loc_00030E05: ;
    esi = ZX8(MEM8(esp + 0xC));
    SET_LO8(ebx, MEM8(esp + 0x10));
    edx = ZX8(LO8(ebx));
    ecx = esi + esi * 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x2C56E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x2C56E4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030E42; /* jne: not equal / not zero */

loc_00030E23: ;
    edx = MEM32(esi * 4 + 0x2C53EC);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E3B; /* je: equal / zero */

loc_00030E30: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030E30; /* jne: not equal / not zero */

loc_00030E3B: ;
    _fb = (uint32_t)(0x2F) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x2F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = LO8(ebx);
    goto loc_00030E5E;

loc_00030E42: ;
    edx = MEM32(0x2C541C);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E5B; /* je: equal / zero */

loc_00030E4E: ;
    edi = edi;

loc_00030E50: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030E50; /* jne: not equal / not zero */

loc_00030E5B: ;
    MEM8(eax) = 0x30;

loc_00030E5E: ;
    MEM8(eax + 1) = 0x2E;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x78;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x70;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM8(eax) = 0x72;
    MEM8(eax + 1) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00030E76: ;
    edx = ZX8(MEM8(esp + 0xC));
    edx = MEM32(edx * 4 + 0x2C53B8);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E93; /* je: equal / zero */

loc_00030E88: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030E88; /* jne: not equal / not zero */

loc_00030E93: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030EA2; /* je: equal / zero */

loc_00030E9C: ;
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x30);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00030EA2: ;
    ecx = ZX8(LO8(ebx));
    MEM8(eax) = 0x5F;
    edx = MEM32(ecx * 4 + 0x2C53A0);
    SET_LO8(ecx, MEM8(edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030EC1; /* je: equal / zero */

loc_00030EB6: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030EB6; /* jne: not equal / not zero */

loc_00030EC1: ;
    MEM8(eax) = 0x2E;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x42;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x49;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x4E;
    MEM8(eax + 1) = 0;

loc_00030ED4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00030EE0
 * Original: 0x00030EE0 - 0x00030EE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030EE0(void)
{

loc_00030EE0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00030EF0
 * Original: 0x00030EF0 - 0x00030EF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030EF0(void)
{

loc_00030EF0: ;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00030F00
 * Original: 0x00030F00 - 0x000310E9 (489 bytes, 124 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030F00_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_inmatch_a) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030F00: ;
    _fa = (uint32_t)(MEM8(0x307328)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x307328), 1 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00030F8F; /* jne: not equal / not zero */

loc_00030F0E: ;
    PUSH32(esp, 0x00030F13u); RECOMP_ABI_CALL(0x0004DCF0u, sub_0004DCF0); /* call 0x0004DCF0 */

loc_00030F13: ;
    PUSH32(esp, 0x00030F18u); RECOMP_ABI_CALL(0x00030350u, sub_00030350); /* call 0x00030350 */

loc_00030F18: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xFFFFFF01u);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00030F27u); RECOMP_ABI_CALL(0x00037A70u, sub_00037A70); /* call 0x00037A70 */

loc_00030F27: ;
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    MEM8(0x3321F4) = LO8(eax);
    MEM8(0x3321F5) = LO8(eax);
    MEM8(0x3322CC) = LO8(eax);
    MEM8(0x3322CD) = LO8(eax);
    MEM8(0x332204) = LO8(eax);
    MEM8(0x30C3F4) = 1;
    MEM8(0x30AE30) = 2;
    MEM8(0x30F9C2) = LO8(ebx);
    MEM8(0x30C441) = LO8(ebx);
    MEM8(0x30DAB6) = LO8(ebx);
    MEM8(0x305532) = LO8(eax);
    MEM8(0x30D9A0) = LO8(ebx);
    MEM8(0x30D9F8) = LO8(ebx);
    PUSH32(esp, 0x00030F7Cu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_00030F7C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00030F83u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030F83: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00030F8Au); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00030F8A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00030F8F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x332274)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x332274), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031016; /* jne: not equal / not zero */

loc_00030F9A: ;
    PUSH32(esp, 0x00030F9Fu); RECOMP_ABI_CALL(0x0004DCF0u, sub_0004DCF0); /* call 0x0004DCF0 */

loc_00030F9F: ;
    PUSH32(esp, 0x00030FA4u); RECOMP_ABI_CALL(0x00030350u, sub_00030350); /* call 0x00030350 */

loc_00030FA4: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xFFFFFF01u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00030FB1u); RECOMP_ABI_CALL(0x00037BB0u, sub_00037BB0); /* call 0x00037BB0 */

loc_00030FB1: ;
    PUSH32(esp, 0x00030FB6u); RECOMP_ABI_CALL(0x00037BE0u, sub_00037BE0); /* call 0x00037BE0 */

loc_00030FB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00030FBEu); RECOMP_ABI_CALL(0x00037BB0u, sub_00037BB0); /* call 0x00037BB0 */

loc_00030FBE: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x305532) = LO8(eax);
    MEM8(0x3321F4) = LO8(eax);
    MEM8(0x3321F5) = LO8(eax);
    MEM8(0x3322CC) = LO8(eax);
    MEM8(0x3322CD) = LO8(eax);
    MEM8(0x332204) = LO8(eax);
    MEM8(0x335AD0) = LO8(ebx);
    MEM8(0x335AD1) = LO8(ebx);
    MEM8(0x30C3F4) = 1;
    MEM8(0x30AE30) = 2;
    MEM8(0x307328) = LO8(ebx);
    PUSH32(esp, 0x00031003u); RECOMP_ABI_CALL(0x00030AC0u, sub_00030AC0); /* call 0x00030AC0 */

loc_00031003: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0003100Au); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_0003100A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00031011u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_00031011: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00031016: ;
    eax = MEM32(0x332274);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000310E0; /* jns: not sign (positive) */

loc_00031023: ;
    SET_LO8(eax, MEM8(0x30AAB9));
    MEM8(0x332275) = MEM8(0x332275) & 0x7F;
    _fa = (uint32_t)(MEM8(0x332275)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x30D9A0) = LO8(ebx);
    MEM8(0x30D9F8) = LO8(ebx);
    MEM8(0x30F9C2) = LO8(ebx);
    MEM8(0x30C441) = LO8(ebx);
    MEM8(0x30DAB6) = LO8(ebx);
    MEM8(0x305532) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_0003107A; /* je: equal / zero */

loc_00031058: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    _fa = (uint32_t)(MEM16(0x30DAB8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30DAB8), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003107A; /* jb: below (unsigned <) */

loc_00031065: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003106Eu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_0003106E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x332274) = MEM16(0x332274) - 1;
    _fa = (uint32_t)(MEM16(0x332274)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003107A: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031083u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_00031083: ;
    SET_LO8(eax, MEM8(0x307328));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000310E0; /* je: equal / zero */

loc_0003108F: ;
    ecx = ZX8(MEM8(0x30EDC8));
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO8(eax, MEM8(ecx + 0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000310CA; /* jne: not equal / not zero */

loc_000310A6: ;
    _fa = (uint32_t)(MEM8(0x305590)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x305590), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000310CA; /* jne: not equal / not zero */

loc_000310AE: ;
    edx = ZX16(MEM16(0x2C55E2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000310BEu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_000310BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x332274) = MEM16(0x332274) - 1;
    _fa = (uint32_t)(MEM16(0x332274)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000310CA: ;
    eax = ZX8(LO8(eax));
    ecx = ZX16(MEM16(eax * 2 + 0x2C55D8));
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000310DDu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_000310DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000310E0: ;
    MEM16(0x332274) = MEM16(0x332274) - 1;
    _fa = (uint32_t)(MEM16(0x332274)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000310F0
 * Original: 0x000310F0 - 0x000312B4 (452 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000310F0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow6_results) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000310F0: ;
    PUSH32(esp, ebx);
    MEM8(0x30AE18) = 6;
    PUSH32(esp, 0x000310FDu); RECOMP_ABI_CALL(0x00030450u, sub_00030450); /* call 0x00030450 */

loc_000310FD: ;
    PUSH32(esp, 0x00031102u); RECOMP_ABI_CALL(0x000465D0u, sub_000465D0); /* call 0x000465D0 */

loc_00031102: ;
    PUSH32(esp, 0x00031107u); RECOMP_ABI_CALL(0x00030290u, sub_00030290); /* call 0x00030290 */

loc_00031107: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003110Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003110E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_00031114: ;
    PUSH32(esp, 0x00031119u); RECOMP_ABI_CALL(0x00072070u, sub_00072070); /* call 0x00072070 */

loc_00031119: ;
    PUSH32(esp, 0x0003111Eu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_0003111E: ;
    ecx = ZX8(MEM8(0x30EDC8));
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031130u); RECOMP_ABI_CALL(0x00072910u, sub_00072910); /* call 0x00072910 */

loc_00031130: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031138u); RECOMP_ABI_CALL(0x0007AFF0u, sub_0007AFF0); /* call 0x0007AFF0 */

loc_00031138: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000311EC; /* je: equal / zero */

loc_00031140: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031147u); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_00031147: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0003114Eu); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_0003114E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031155u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_00031155: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003115Du); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_0003115D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031174; /* jne: not equal / not zero */

loc_00031161: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031168u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031168: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031170u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_00031170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031161; /* je: equal / zero */

loc_00031174: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003117Au); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0003117A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031180u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_00031180: ;
    PUSH32(esp, 0x00031185u); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_00031185: ;
    PUSH32(esp, 0x0003118Au); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_0003118A: ;
    PUSH32(esp, 0x0003118Fu); RECOMP_ABI_CALL(0x00071860u, sub_00071860); /* call 0x00071860 */

loc_0003118F: ;
    PUSH32(esp, ebx);
    MEM8(0x30AE30) = 1;
    MEM8(0x30AE18) = 5;
    MEM8(0x3358AA) = 1;
    MEM8(0x307606) = LO8(ebx);
    MEM8(0x30D8F0) = LO8(ebx);
    MEM8(0x30D00D) = LO8(ebx);
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    MEM8(0x30F9C2) = LO8(ebx);
    MEM8(0x30AA64) = LO8(ebx);
    MEM8(0x315AD4) = LO8(ebx);
    PUSH32(esp, 0x000311DAu); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_000311DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000311E2u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_000311E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000311E9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000311E9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000311EC: ;
    PUSH32(esp, 0x000311F1u); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_000311F1: ;
    PUSH32(esp, 1);
    esi = eax;
    PUSH32(esp, 0x000311FAu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000311FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031114; /* je: equal / zero */

loc_00031205: ;
    PUSH32(esp, 0x0003120Au); RECOMP_ABI_CALL(0x00093090u, sub_00093090); /* call 0x00093090 */

loc_0003120A: ;
    PUSH32(esp, 0x0003120Fu); RECOMP_ABI_CALL(0x00093590u, sub_00093590); /* call 0x00093590 */

loc_0003120F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00031233; /* jne: not equal / not zero */

loc_00031214: ;
    PUSH32(esp, 0x00031219u); RECOMP_ABI_CALL(0x00072070u, sub_00072070); /* call 0x00072070 */

loc_00031219: ;
    PUSH32(esp, 1);
    MEM8(0x305532) = 0xFF;
    PUSH32(esp, 0x00031227u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031227: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003122Fu); RECOMP_ABI_CALL(0x00093590u, sub_00093590); /* call 0x00093590 */

loc_0003122F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031214; /* je: equal / zero */

loc_00031233: ;
    PUSH32(esp, 0x00031238u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00031238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003125B; /* jne: not equal / not zero */

loc_0003123D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031243u); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_00031243: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031249u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_00031249: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031251u); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_00031251: ;
    PUSH32(esp, 0x00031256u); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_00031256: ;
    PUSH32(esp, 0x0003125Bu); RECOMP_ABI_CALL(0x00071860u, sub_00071860); /* call 0x00071860 */

loc_0003125B: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    MEM8(0x30AE30) = 1;
    MEM8(0x30AE18) = 5;
    MEM8(0x3358AA) = 1;
    MEM8(0x307606) = LO8(ebx);
    MEM8(0x30D8F0) = LO8(ebx);
    MEM8(0x30D00D) = LO8(ebx);
    MEM8(0x30ED4C) = LO8(ebx);
    MEM8(0x30ED4D) = LO8(ebx);
    MEM8(0x30F9C2) = LO8(ebx);
    MEM8(0x30AA64) = LO8(ebx);
    MEM8(0x315AD4) = LO8(ebx);
    PUSH32(esp, 0x000312A8u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_000312A8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000312AFu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000312AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000312C0
 * Original: 0x000312C0 - 0x0003164F (911 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000312C0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow0_title) */
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

loc_000312C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000312C7u); RECOMP_ABI_CALL(0x0004E7A0u, sub_0004E7A0); /* call 0x0004E7A0 */

loc_000312C7: ;
    PUSH32(esp, 0x000312CCu); RECOMP_ABI_CALL(0x00044C40u, sub_00044C40); /* call 0x00044C40 */

loc_000312CC: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 4 (8-bit) */
    MEM8(0x30C510) = 0;
    MEM32(0x30F910) = 0;
    MEM8(0x30AE18) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00031359; /* jne: not equal / not zero */

loc_000312ED: ;
    SET_LO8(eax, MEM8(0x30D018));
    ecx = ZX8(LO8(eax));
    SET_LO8(edx, MEM8(ecx + 0x2C55F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x30D8EA) = LO8(edx);
    MEM8(0x30D00A) = 0;
    MEM8(0x30AAB1) = 0;
    MEM8(0x307604) = 9;
    eax = eax & 0x63;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(0x3139DC) = LO8(eax);
    PUSH32(esp, 0x0003132Au); RECOMP_ABI_CALL(0x00030450u, sub_00030450); /* call 0x00030450 */

loc_0003132A: ;
    PUSH32(esp, 0x0003132Fu); RECOMP_ABI_CALL(0x00030290u, sub_00030290); /* call 0x00030290 */

loc_0003132F: ;
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003133Au); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003133A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x30ED48) = LO8(ebx);
    MEM32(0x33227C) = ebx;
    MEM8(0x30AE18) = LO8(ebx);
    MEM8(0x30D00B) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00031359: ;
    ecx = ZX8(MEM8(0x30D018));
    SET_LO8(eax, MEM8(ecx + 0x2C55F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x63 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ebx = 1;
    PUSH32(esp, esi);
    MEM8(0x30D8EA) = LO8(eax);
    MEM8(0x305532) = 0xFF;
    MEM8(0x30F9C2) = LO8(ebx);
    MEM8(0x30AA64) = LO8(ebx);
    edx = edx & 0x63;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(0x3139DC) = LO8(edx);
    MEM8(0x315AD4) = LO8(ebx);
    PUSH32(esp, 0x0003139Fu); RECOMP_ABI_CALL(0x00030290u, sub_00030290); /* call 0x00030290 */

loc_0003139F: ;
    _fa = (uint32_t)(MEM8(0x30D00B)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D00B), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031525; /* jne: not equal / not zero */

loc_000313AB: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003152E; /* je: equal / zero */

loc_000313B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(0x30D00A) = 0;
    MEM8(0x30AAB1) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_00031506; /* jg: greater (signed >) */

loc_000313CE: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031506; /* jne: not equal / not zero */

loc_000313DB: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031506; /* jne: not equal / not zero */

loc_000313F3: ;
    PUSH32(esp, 6);
    MEM8(0x307604) = 0xF;
    PUSH32(esp, 0x00031401u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00031401: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003141E; /* jne: not equal / not zero */

loc_0003140D: ;
    MEM16(0x30DA20) = 0x42E;
    MEM8(0x30DA2E) = LO8(ebx);
    goto loc_0003142D;

loc_0003141E: ;
    MEM16(0x30D9C8) = 0x2E;
    MEM8(0x30D9D6) = LO8(ebx);

loc_0003142D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031433u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031433: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003143Bu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_0003143B: ;
    MEM8(0x30D9E8) = 0;
    MEM8(0x30DA40) = 0;
    esi = 0x7C;
    edi = edi;

loc_00031450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031456u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031456: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003145Eu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_0003145E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00031450; /* jne: not equal / not zero */

loc_00031461: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031471; /* jne: not equal / not zero */

loc_00031469: ;
    MEM8(0x30DA40) = LO8(ebx);
    goto loc_00031477;

loc_00031471: ;
    MEM8(0x30D9E8) = LO8(ebx);

loc_00031477: ;
    esi = 0x3C;
    /* nop */

loc_00031480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031486u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031486: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003148Eu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_0003148E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00031480; /* jne: not equal / not zero */

loc_00031491: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00031498u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00031498: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x32;

loc_000314A0: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    fp_push(MEMF(0x22C0D4)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000314B7; /* jne: not equal / not zero */

loc_000314AF: ;
    MEMF(0x30D9B0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000314BD;

loc_000314B7: ;
    MEMF(0x30DA08) = (float)fp_top(); fp_pop(); /* fstp */

loc_000314BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000314C3u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000314C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000314CBu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_000314CB: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000314A0; /* jne: not equal / not zero */

loc_000314CE: ;
    MEM32(0x30D9B0) = 0x3F800000;
    MEM32(0x30DA08) = 0x3F800000;
    MEM8(0x30D9E8) = LO8(ebx);
    MEM8(0x30DA40) = LO8(ebx);
    esi = 0x2D;

loc_000314F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000314F9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000314F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031501u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00031501: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000314F3; /* jne: not equal / not zero */

loc_00031504: ;
    goto loc_0003157C;

loc_00031506: ;
    MEM8(0x307604) = 7;
    esi = 0x78;

loc_00031512: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031518u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031518: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031520u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00031520: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00031512; /* jne: not equal / not zero */

loc_00031523: ;
    goto loc_0003157C;

loc_00031525: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031564; /* jne: not equal / not zero */

loc_0003152E: ;
    SET_LO8(eax, MEM8(0x307604));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003153E; /* jne: not equal / not zero */

loc_00031537: ;
    esi = 0xB4;
    goto loc_00031551;

loc_0003153E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031549; /* jne: not equal / not zero */

loc_00031542: ;
    esi = 0x3C;
    goto loc_00031551;

loc_00031549: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003156B; /* je: equal / zero */

loc_00031551: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031557u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031557: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003155Fu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_0003155F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00031551; /* jne: not equal / not zero */

loc_00031562: ;
    goto loc_0003156B;

loc_00031564: ;
    MEM8(0x307604) = 8;

loc_0003156B: ;
    PUSH32(esp, 0x00031570u); RECOMP_ABI_CALL(0x00030450u, sub_00030450); /* call 0x00030450 */

loc_00031570: ;
    MEM8(0x30D9E8) = LO8(ebx);
    MEM8(0x30DA40) = LO8(ebx);

loc_0003157C: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031613; /* je: equal / zero */

loc_00031589: ;
    edx = ZX8(MEM8(0x305B14));
    ecx = ZX8(MEM8(0x30D00A));
    eax = edx + edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(0x305532) = 0xD;
    if (CMP_NE(_fa, _fb)) goto loc_000315CF; /* jne: not equal / not zero */

loc_000315A6: ;
    SET_LO16(edx, MEM16(0x30AE3C));
    SET_LO16(eax, MEM16(0x30C4C4));
    _fb = (uint32_t)(0x32) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - 0x32);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x32) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - 0x32);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(0x30D9C2) = LO16(edx);
    MEM16(0x30DA1A) = LO16(eax);
    MEM8(0x30D8EA) = 0xA;

loc_000315CF: ;
    esi = 0x28;

loc_000315D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000315DAu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000315DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000315E2u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_000315E2: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000315D4; /* jne: not equal / not zero */

loc_000315E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    MEM8(0x305532) = 4;
    PUSH32(esp, 0x000315F8u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000315F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x2D;

loc_00031600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031606u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003160Eu); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_0003160E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00031600; /* jne: not equal / not zero */

loc_00031611: ;
    goto loc_0003161C;

loc_00031613: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00031619u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031619: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003161C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x101);
    MEM8(0x305532) = 0xFF;
    MEM8(0x30D00B) = 0;
    MEM8(0x30ED48) = LO8(ebx);
    MEM32(0x33227C) = ebx;
    MEM8(0x30AE18) = LO8(ebx);
    PUSH32(esp, 0x00031648u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_00031648: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00031650
 * Original: 0x00031650 - 0x000319C6 (886 bytes, 218 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031650_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow3) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031650: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x30EDC8));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    edi = 0x1A4;
    MEM32(esp + 0x14) = esi;
    MEM8(0x30AE18) = 3;
    MEM16(0x30D998) = 0x1E;
    MEM8(0x30DAB5) = 0;
    MEM8(0x3321E4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0003179D; /* je: equal / zero */

loc_00031693: ;
    SET_LO8(ebx, MEM8(0x30D8EA));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000316AB; /* jne: not equal / not zero */

loc_0003169D: ;
    SET_LO8(ecx, MEM8(0x3139DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003179D; /* je: equal / zero */

loc_000316AB: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x30F9B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A90);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM8(0x3321E4) = 1;
    MEM8(0x307604) = 5;
    MEM8(0x305532) = 0xA;
    if (TEST_Z(_fa, _fb)) goto loc_000316E7; /* je: equal / zero */

loc_000316D8: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000316E7; /* jne: not equal / not zero */

loc_000316DD: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000316E7; /* je: equal / zero */

loc_000316E2: ;
    esi = 1;

loc_000316E7: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003179F; /* jne: not equal / not zero */

loc_000316FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003170D; /* jne: not equal / not zero */

loc_00031700: ;
    MEM32(esp + 0x10) = 2;
    goto loc_0003179F;

loc_0003170D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003179F; /* jne: not equal / not zero */

loc_00031716: ;
    ecx = edx;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM16(ecx + 0x30D9C0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x30D9C0), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003179F; /* jne: not equal / not zero */

loc_00031728: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031736; /* jne: not equal / not zero */

loc_0003172C: ;
    SET_LO8(ecx, MEM8(0x3139DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003179F; /* je: equal / zero */

loc_00031736: ;
    SET_LO8(ecx, MEM8(0x30760D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003174B; /* jne: not equal / not zero */

loc_00031740: ;
    _fa = (uint32_t)(MEM8(eax + 0x30D9F3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9F3), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00031755; /* jb: below (unsigned <) */

loc_00031749: ;
    goto loc_0003179F;

loc_0003174B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031755; /* je: equal / zero */

loc_00031750: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003179F; /* jne: not equal / not zero */

loc_00031755: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x317036));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x9A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x9A (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003179F; /* jb: below (unsigned <) */

loc_00031760: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x10) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00031792; /* jne: not equal / not zero */

loc_0003176C: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031773u); RECOMP_ABI_CALL(0x00057B80u, sub_00057B80); /* call 0x00057B80 */

loc_00031773: ;
    SET_LO16(eax, ZX8(MEM8(0x3145B0)));
    edx = 0x55;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    MEM16(0x30D998) = LO16(edx);
    goto loc_0003179F;

loc_00031792: ;
    MEM16(0x30D998) = 0x2D;
    goto loc_0003179F;

loc_0003179D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003179F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(0x3322E3) = 0;
    MEM8(0x3322E2) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000319A4; /* je: equal / zero */

loc_000317B5: ;
    esi = 0x110;
    /* nop */

loc_000317C0: ;
    PUSH32(esp, 1);
    MEM8(0x3322E3) = 1;
    PUSH32(esp, 0x000317CEu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000317CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000317D6u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_000317D6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031831; /* jne: not equal / not zero */

loc_000317DE: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000317FB; /* jne: not equal / not zero */

loc_000317E7: ;
    eax = MEM32(0x30F9B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x6E9A98), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003199D; /* jne: not equal / not zero */

loc_000317FB: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031819; /* jne: not equal / not zero */

loc_00031804: ;
    ecx = MEM32(0x30F9B8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(ecx + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x6E9A98), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003199D; /* jne: not equal / not zero */

loc_00031819: ;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu; _fb = (uint32_t)(0xD1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30D998), 0xD1 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000319A4; /* jae: above or equal (unsigned >=) */

loc_00031828: ;
    MEM16(0x30D998) = MEM16(0x30D998) + 1;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000317C0;

loc_00031831: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, MEM8(0x30D9A0));
    if (CMP_NE(_fa, _fb)) goto loc_000318D3; /* jne: not equal / not zero */

loc_0003183F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031858; /* jne: not equal / not zero */

loc_00031843: ;
    edx = MEM32(0x30F9B4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(edx + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x6E9A98), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003199D; /* jne: not equal / not zero */

loc_00031858: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031875; /* jne: not equal / not zero */

loc_00031861: ;
    eax = MEM32(0x30F9B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x6E9A98), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003199D; /* jne: not equal / not zero */

loc_00031875: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003187Fu); RECOMP_ABI_CALL(0x0002FAC0u, sub_0002FAC0); /* call 0x0002FAC0 */

loc_0003187F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000318BE; /* jne: not equal / not zero */

loc_00031887: ;
    PUSH32(esp, 0x0003188Cu); RECOMP_ABI_CALL(0x0005C310u, sub_0005C310); /* call 0x0005C310 */

loc_0003188C: ;
    SET_LO8(eax, MEM8(0x30760D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000318A2; /* jne: not equal / not zero */

loc_00031895: ;
    ecx = MEM32(esp + 0x18);
    eax = 0x5A;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000318A6;

loc_000318A2: ;
    SET_LO16(eax, 0x2D);

loc_000318A6: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x30D998) = LO16(eax);
    MEM32(esp + 0x14) = ecx;
    MEM8(0x307604) = 5;
    goto loc_000318C4;

loc_000318BE: ;
    SET_LO16(eax, MEM16(0x30D998));

loc_000318C4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xD1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xD1 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000317C0; /* jb: below (unsigned <) */

loc_000318CE: ;
    goto loc_000319A4;

loc_000318D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    edx = MEM32(0x30F9B4);
    if (CMP_NE(_fa, _fb)) goto loc_000318EE; /* jne: not equal / not zero */

loc_000318DD: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x6E9A98), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003199D; /* jne: not equal / not zero */

loc_000318EE: ;
    SET_LO8(ebx, MEM8(0x30D9F8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    eax = MEM32(0x30F9B8);
    if (CMP_NE(_fa, _fb)) goto loc_0003190F; /* jne: not equal / not zero */

loc_000318FE: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(ecx + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x6E9A98), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003199D; /* jne: not equal / not zero */

loc_0003190F: ;
    SET_LO8(ecx, MEM8(0x30EDC8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031952; /* jne: not equal / not zero */

loc_00031919: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003196D; /* jne: not equal / not zero */

loc_00031922: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = MEM32(edx + 0x6E9A90);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */

loc_0003192E: ;
    if (TEST_Z(_fa, _fb)) goto loc_00031969; /* je: equal / zero */

loc_00031930: ;
    ebp = 1;

loc_00031935: ;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30D998), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003198F; /* je: equal / zero */

loc_0003193F: ;
    MEM16(0x30D998) = MEM16(0x30D998) - 1;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x30DAB5) = 2;
    goto loc_000317C0;

loc_00031952: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003196D; /* jne: not equal / not zero */

loc_00031957: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003196D; /* jne: not equal / not zero */

loc_0003195B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x6E9A90);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    goto loc_0003192E;

loc_00031969: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00031971;

loc_0003196D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031935; /* jne: not equal / not zero */

loc_00031971: ;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu; _fb = (uint32_t)(0xD1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30D998), 0xD1 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000319A4; /* jae: above or equal (unsigned >=) */

loc_0003197C: ;
    MEM16(0x30D998) = MEM16(0x30D998) + 1;
    _fa = (uint32_t)(MEM16(0x30D998)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x30DAB5) = 1;
    goto loc_000317C0;

loc_0003198F: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x30DAB5) = 2;
    goto loc_000317C0;

loc_0003199D: ;
    MEM8(0x3322E2) = 1;

loc_000319A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x30DAB5) = 0;
    MEM16(0x30D998) = 0xD1;
    MEM32(0x33227C) = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000319D0
 * Original: 0x000319D0 - 0x00031F38 (1384 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000319D0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_flow4) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000319D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x30AE54));
    SET_LO8(ecx, MEM8(0x30D00A));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esp + 0xD) = LO8(eax);
    SET_LO8(eax, MEM8(0x30EDC8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x30AE18) = 4;
    MEM8(esp + 0x13) = LO8(ecx);
    MEM8(esp + 0x16) = 0xFF;
    MEM8(esp + 0x14) = 0xFF;
    MEM32(0x332298) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00031A3C; /* jne: not equal / not zero */

loc_00031A0E: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esp + 0x14) = 3;
    edi = 0x30D9A0;
    ebp = 0x30D9F8;
    MEM8(esp + 0x13) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00031BB3; /* jne: not equal / not zero */

loc_00031A30: ;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031CA2;

loc_00031A3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031A72; /* jne: not equal / not zero */

loc_00031A40: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(eax, MEM8(0x30D9F8));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esp + 0x14) = 3;
    edi = 0x30D9F8;
    ebp = 0x30D9A0;
    MEM8(esp + 0x13) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00031BB3; /* jne: not equal / not zero */

loc_00031A66: ;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031CA2;

loc_00031A72: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AAA; /* jne: not equal / not zero */

loc_00031A7B: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031B9D; /* jne: not equal / not zero */

loc_00031A88: ;
    MEM8(0x30EDC8) = 1;
    edi = 0x30D9F8;
    ebp = 0x30D9A0;
    MEM8(esp + 0x14) = 3;
    SET_LO8(ebx, 9);
    esi = 0x108;
    goto loc_00031CA2;

loc_00031AAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AEC; /* jne: not equal / not zero */

loc_00031AAE: ;
    PUSH32(esp, 0x00031AB3u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00031AB3: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AEC; /* jne: not equal / not zero */

loc_00031AB9: ;
    PUSH32(esp, 0x00031ABEu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00031ABE: ;
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x30EDC8) = LO8(eax);
    eax = ZX8(LO8(eax));
    edi = eax;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30D9A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30D9A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031CA2;

loc_00031AEC: ;
    SET_LO8(ebx, MEM8(0x305B14));
    eax = ZX8(MEM8(0x30D00A));
    edx = ZX8(LO8(ebx));
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00031C0C; /* jne: not equal / not zero */

loc_00031B0D: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031B69; /* jne: not equal / not zero */

loc_00031B16: ;
    PUSH32(esp, 0x00031B1Bu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00031B1B: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031B2C; /* je: equal / zero */

loc_00031B21: ;
    PUSH32(esp, 0x00031B26u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00031B26: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031B69; /* jne: not equal / not zero */

loc_00031B2C: ;
    SET_LO8(ebx, 0xB);
    esi = 0x105;
    PUSH32(esp, 0x00031B38u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00031B38: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x58);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30D9A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031B48u); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00031B48: ;
    ebp = eax;
    SET_LO8(eax, MEM8(0x305B14));
    ebp = ebp ^ 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x58);
    _fb = (uint32_t)(0x7F) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x30D9A0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(0x30D00A) = LO8(eax);
    goto loc_00031C9E;

loc_00031B69: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031BBF; /* jne: not equal / not zero */

loc_00031B72: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031B9D; /* jne: not equal / not zero */

loc_00031B7B: ;
    MEM8(0x30EDC8) = 1;
    edi = 0x30D9F8;
    ebp = 0x30D9A0;
    MEM8(esp + 0x14) = 3;
    SET_LO8(ebx, 9);
    esi = 0x108;
    goto loc_00031CA2;

loc_00031B9D: ;
    MEM8(0x30EDC8) = 0;
    edi = 0x30D9A0;
    ebp = 0x30D9F8;
    MEM8(esp + 0x14) = 3;

loc_00031BB3: ;
    SET_LO8(ebx, 9);
    esi = 0x108;
    goto loc_00031CA2;

loc_00031BBF: ;
    SET_LO8(eax, MEM8(0x30EBF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031BEA; /* jne: not equal / not zero */

loc_00031BC8: ;
    MEM8(0x30EDC8) = 0;
    edi = 0x30D9A0;
    ebp = 0x30D9F8;
    MEM8(esp + 0x14) = 3;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031CA2;

loc_00031BEA: ;
    MEM8(0x30EDC8) = 1;
    edi = 0x30D9F8;
    ebp = 0x30D9A0;
    MEM8(esp + 0x14) = 3;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031CA2;

loc_00031C0C: ;
    SET_LO8(eax, MEM8(0x30D9A3));
    SET_LO8(ecx, MEM8(0x30D9FB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00031C3E; /* jb: below (unsigned <) */

loc_00031C1B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    edi = 0x30D9A0;
    ebp = 0x30D9F8;
    if (CMP_A(_fa, _fb)) goto loc_00031C61; /* ja: above (unsigned >) */

loc_00031C29: ;
    MEM8(0x30EDC8) = 0;
    MEM8(esp + 0x14) = 3;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031C68;

loc_00031C3E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    edi = 0x30D9F8;
    ebp = 0x30D9A0;
    if (CMP_A(_fa, _fb)) goto loc_00031C61; /* ja: above (unsigned >) */

loc_00031C4C: ;
    MEM8(0x30EDC8) = 1;
    MEM8(esp + 0x14) = 3;
    SET_LO8(ebx, 8);
    esi = 0x107;
    goto loc_00031C68;

loc_00031C61: ;
    SET_LO8(ebx, 0xB);
    esi = 0x105;

loc_00031C68: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031C98; /* jne: not equal / not zero */

loc_00031C73: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(eax, MEM8(0x30AE30));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x13) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00031CA2; /* jne: not equal / not zero */

loc_00031C86: ;
    _fa = (uint32_t)(MEM8(0x30554D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30554D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031CA2; /* jne: not equal / not zero */

loc_00031C8F: ;
    MEM8(0x332204) = 0xFF;
    goto loc_00031CA2;

loc_00031C98: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00031C9E: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00031CA2: ;
    SET_LO8(edx, MEM8(0x305B14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 3) (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FC3(); return; } /* ja: above (unsigned >) */

loc_00031CB1: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031E45; /* jne: not equal / not zero */

loc_00031CBE: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031D7F; /* jne: not equal / not zero */

loc_00031CC7: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031D16; /* jne: not equal / not zero */

loc_00031CD0: ;
    ecx = ZX8(MEM8(0x30554C));
    SET_LO8(eax, MEM8(esp + 0x15));
    SET_LO8(edx, MEM8(ecx + 0x2C568C));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    MEM8(esp + 0x15) = LO8(eax);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00031F56(); return; } /* ja: above (unsigned >) */

loc_00031CEF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ebp + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebp + 1));
    MEM8(0x30AE30) = 3;
    MEM8(0x307328) = 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031D0Eu); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031D0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00031F56(); return; /* tail jmp 0x00031F56 */

loc_00031D16: ;
    _fa = (uint32_t)(MEM8(0x30C4C6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C4C6), 1 (8-bit) */
    MEM8(esp + 0x16) = 4;
    if (CMP_NE(_fa, _fb)) goto loc_00031D4B; /* jne: not equal / not zero */

loc_00031D24: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ebp + 1));
    MEM8(0x30AE30) = 2;
    MEM8(0x30C441) = 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00031D43u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031D43: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00031F56(); return; /* tail jmp 0x00031F56 */

loc_00031D4B: ;
    SET_LO8(eax, MEM8(ebp + 1));
    ecx = ZX8(LO8(eax));
    SET_LO16(edx, MEM16(ecx * 2 + 0x2C569C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 2));
    MEM8(0x30AE30) = 3;
    MEM16(0x332274) = LO16(edx);
    MEM8(ebp) = 0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031D77u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031D77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00031F56(); return; /* tail jmp 0x00031F56 */

loc_00031D7F: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    SET_LO8(ecx, MEM8(0x3139CB));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    MEM8(esp + 0x15) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00031DD1; /* jne: not equal / not zero */

loc_00031D94: ;
    SET_LO8(edx, MEM8(0x315AD5));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x63 (8-bit) */
    MEM8(0x315AD5) = LO8(edx);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00031F56(); return; } /* jb: below (unsigned <) */

loc_00031DAA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 1));
    MEM8(0x30AE30) = 3;
    MEM8(0x307328) = 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031DC9u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031DC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00031F56(); return; /* tail jmp 0x00031F56 */

loc_00031DD1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031E16; /* jne: not equal / not zero */

loc_00031DD6: ;
    MEM8(0x315AD5) = MEM8(0x315AD5) + 1;
    _fa = (uint32_t)(MEM8(0x315AD5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(0x30554C));
    _fa = (uint32_t)(MEM8(ecx + 0x2C568C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C568C), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00031F56(); return; } /* ja: above (unsigned >) */

loc_00031DEF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 1));
    MEM8(0x30AE30) = 3;
    MEM8(0x307328) = 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031E0Eu); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031E0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00031F56(); return; /* tail jmp 0x00031F56 */

loc_00031E16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00031F56(); return; } /* jb: below (unsigned <) */

loc_00031E1E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 1));
    MEM8(0x30AE30) = 3;
    MEM8(0x307328) = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00031E3Du); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031E3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00031F56(); return; /* tail jmp 0x00031F56 */

loc_00031E45: ;
    SET_LO8(eax, MEM8(0x30EDC8));
    _fa = (uint32_t)(MEM8(0x30EBF0)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EBF0), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031E66; /* jne: not equal / not zero */

loc_00031E52: ;
    _fa = (uint32_t)(MEM16(0x30DAB8)) & 0xFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30DAB8), 0x3E7 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00031E8E; /* jae: above or equal (unsigned >=) */

loc_00031E5D: ;
    MEM16(0x30DAB8) = MEM16(0x30DAB8) + 1;
    _fa = (uint32_t)(MEM16(0x30DAB8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00031E8E;

loc_00031E66: ;
    MEM8(0x30EBF0) = LO8(eax);
    MEM16(0x30DAB8) = 1;
    MEM8(esp + 0x15) = 0;
    MEM8(0x307606) = 0;
    MEM8(0x30D8F0) = 0;
    MEM8(0x30D00D) = 0;

loc_00031E8E: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031EAB; /* je: equal / zero */

loc_00031E97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebp + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 1));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00031EA8u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031EA8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00031EAB: ;
    SET_LO8(eax, MEM8(0x30AAB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031EE5; /* jne: not equal / not zero */

loc_00031EB4: ;
    _fa = (uint32_t)(MEM8(0x30C4C6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C4C6), 1 (8-bit) */
    MEM8(0x30AE30) = 0;
    MEM8(0x30AA64) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00031ED9; /* jne: not equal / not zero */

loc_00031ECB: ;
    MEM8(0x30DAB6) = 1;
    MEM8(0x30C441) = 0xA;

loc_00031ED9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00031EE0u); RECOMP_ABI_CALL(0x00030370u, sub_00030370); /* call 0x00030370 */

loc_00031EE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031F2B;

loc_00031EE5: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031F17; /* jne: not equal / not zero */

loc_00031EEE: ;
    eax = MEM32(0x305114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031F17; /* je: equal / zero */

loc_00031EF7: ;
    eax = MEM32(0x3321E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031F2B; /* je: equal / zero */

loc_00031F01: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x30D9A2));
    eax = ZX8(MEM8(eax + 0x30D9A1));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00031F23;

loc_00031F17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00031F23: ;
    PUSH32(esp, 0x00031F28u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031F28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00031F2B: ;
    eax = ZX8(MEM8(0x30EDC8));
    SET_LO8(ecx, MEM8(0x30AE30));

    g_seh_ebp = ebp; sub_00031F38(); return; /* fallthrough 0x00031F38 */

}

/**
 * sub_00031F38
 * Original: 0x00031F38 - 0x00031FC3 (139 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031F38: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM8(ebp) = 0;
    MEM8(eax + 0x30ED4C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00031F56; /* je: equal / zero */

loc_00031F4B: ;
    MEM32(eax * 4 + 0x30F9B4) = 6;

loc_00031F56: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    MEM8(esp + 0x1F) = 5;
    PUSH32(esp, 0x00031F64u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_00031F64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(0x3321E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031F70: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9CD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F85: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F8A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F8F: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x96) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x96 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F9A: ;
    SET_LO8(eax, MEM8(eax + 0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031FA9; /* jne: not equal / not zero */

loc_00031FA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xEB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xEB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031FA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031FAD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031FB2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031FB9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031FB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031FC1u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00031FC1: ;
    goto loc_00031F70;

}

/**
 * sub_00031F56
 * Original: 0x00031F56 - 0x00031FC3 (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031F56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031F56: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    MEM8(esp + 0x1F) = 5;
    PUSH32(esp, 0x00031F64u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_00031F64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(0x3321E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031F70: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9CD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F85: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F8A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F8F: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x96) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x96 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F9A: ;
    SET_LO8(eax, MEM8(eax + 0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031FA9; /* jne: not equal / not zero */

loc_00031FA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xEB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xEB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031FA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031FAD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031FB2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031FB9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031FB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031FC1u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00031FC1: ;
    goto loc_00031F70;

}

/**
 * sub_00031F67
 * Original: 0x00031F67 - 0x00031FC3 (92 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031F67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031F67: ;
    SET_LO8(eax, MEM8(0x3321E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031F70: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9CD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F85: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F8A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F8F: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x96) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x96 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031F9A: ;
    SET_LO8(eax, MEM8(eax + 0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031FA9; /* jne: not equal / not zero */

loc_00031FA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xEB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xEB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FB2; /* je: equal / zero */

loc_00031FA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031FAD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF6 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00031FCA(); return; } /* jne: not equal / not zero */

loc_00031FB2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00031FB9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00031FB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00031FC1u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00031FC1: ;
    goto loc_00031F70;

}

/**
 * sub_00031FC3
 * Original: 0x00031FC3 - 0x00031FCA (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031FC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031FC3: ;
    MEM8(esp + 0x17) = 0;
    g_seh_ebp = ebp; sub_00031F67(); return; /* tail jmp 0x00031F67 */

}

/**
 * sub_00031FCA
 * Original: 0x00031FCA - 0x00032018 (78 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031FCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031FCA: ;
    PUSH32(esp, 0x00031FCFu); RECOMP_ABI_CALL(0x00057CB0u, sub_00057CB0); /* call 0x00057CB0 */

loc_00031FCF: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(0x307604) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x30EDC8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EDC8), 2 (8-bit) */
    MEM8(0x30487C) = 0;
    MEM32(0x3049A8) = 0;
    MEM8(0x3321F0) = 0;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000320D3(); return; } /* jne: not equal / not zero */

loc_00031FFD: ;
    ecx = ZX16(LO16(esi));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(0x305532) = LO8(ebx);
    PUSH32(esp, 0x0003200Eu); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_0003200E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x3C;
    SET_LO8(ebx, 0xD);

    g_seh_ebp = ebp; sub_00032018(); return; /* fallthrough 0x00032018 */

}

/**
 * sub_00032018
 * Original: 0x00032018 - 0x000320D3 (187 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032018: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003201Fu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003201F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032027u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00032027: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    SET_LO8(edx, MEM8(0x307328));
    if (CMP_NE(_fa, _fb)) goto loc_00032053; /* jne: not equal / not zero */

loc_00032036: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032053; /* je: equal / zero */

loc_0003203B: ;
    eax = MEM32(0x30F9B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x6E9A98), 0x110 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000321C4(); return; } /* jne: not equal / not zero */

loc_00032053: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003207A; /* jne: not equal / not zero */

loc_0003205C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003207A; /* je: equal / zero */

loc_00032061: ;
    ecx = MEM32(0x30F9B8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(ecx + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x6E9A98), 0x110 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000321C4(); return; } /* jne: not equal / not zero */

loc_0003207A: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9CD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9CD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000320A9; /* jne: not equal / not zero */

loc_0003208C: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x8C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x8C (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000320A9; /* jb: below (unsigned <) */

loc_00032097: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x93) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x93 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000320A9; /* ja: above (unsigned >) */

loc_0003209C: ;
    _fa = (uint32_t)(MEM8(eax + 0x30D9D5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9D5), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000321C4(); return; } /* je: equal / zero */

loc_000320A9: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000320C7; /* jne: not equal / not zero */

loc_000320B3: ;
    SET_LO8(eax, MEM8(0x3321F0));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    MEM8(0x3321F0) = LO8(eax);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_000321C4(); return; } /* jg: greater (signed >) */

loc_000320C7: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00032018; /* jne: not equal / not zero */

loc_000320CE: ;
    g_seh_ebp = ebp; sub_000321C4(); return; /* tail jmp 0x000321C4 */

}

/**
 * sub_000320D3
 * Original: 0x000320D3 - 0x0003251A (1095 bytes, 299 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000320D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000320D3: ;
    PUSH32(esp, 0x000320D8u); RECOMP_ABI_CALL(0x0004E7A0u, sub_0004E7A0); /* call 0x0004E7A0 */

loc_000320D8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000320DFu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000320DF: ;
    PUSH32(esp, 0x000320E4u); RECOMP_ABI_CALL(0x0005C310u, sub_0005C310); /* call 0x0005C310 */

loc_000320E4: ;
    edx = ZX16(LO16(esi));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(0x305532) = LO8(ebx);
    PUSH32(esp, 0x000320F5u); RECOMP_ABI_CALL(0x0004F570u, sub_0004F570); /* call 0x0004F570 */

loc_000320F5: ;
    SET_LO8(ebx, MEM8(0x3139CB));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, 0xD);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    edi = edi;

loc_00032110: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032117u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032117: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003211F; /* je: equal / zero */

loc_0003211E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0003211F: ;
    PUSH32(esp, 0x00032124u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00032124: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    SET_LO8(edx, MEM8(0x307328));
    if (CMP_NE(_fa, _fb)) goto loc_00032151; /* jne: not equal / not zero */

loc_00032133: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032151; /* je: equal / zero */

loc_00032138: ;
    ecx = MEM32(0x30F9B4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(ecx + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x6E9A98), 0x110 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00032151; /* je: equal / zero */

loc_0003214D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000321C4; /* je: equal / zero */

loc_00032151: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032177; /* jne: not equal / not zero */

loc_0003215A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032177; /* je: equal / zero */

loc_0003215F: ;
    eax = MEM32(0x30F9B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x6E9A98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x6E9A98), 0x110 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00032177; /* je: equal / zero */

loc_00032173: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000321C4; /* je: equal / zero */

loc_00032177: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9CD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9CD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000321A2; /* jne: not equal / not zero */

loc_00032189: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x8C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x8C (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000321A2; /* jb: below (unsigned <) */

loc_00032194: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x93) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x93 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000321A2; /* ja: above (unsigned >) */

loc_00032199: ;
    _fa = (uint32_t)(MEM8(eax + 0x30D9D5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9D5), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000321C4; /* je: equal / zero */

loc_000321A2: ;
    SET_LO8(ecx, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032110; /* jne: not equal / not zero */

loc_000321B0: ;
    SET_LO8(eax, MEM8(0x3321F0));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    MEM8(0x3321F0) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00032110; /* jle: less or equal (signed <=) */

loc_000321C4: ;
    SET_LO8(ecx, MEM8(0x305B14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 3) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00032472; /* ja: above (unsigned >) */

loc_000321D3: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323CB; /* jne: not equal / not zero */

loc_000321E0: ;
    MEM8(0x305532) = 0xFF;
    PUSH32(esp, 0x000321ECu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_000321EC: ;
    edx = ZX8(MEM8(0x30EDC8));
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000321FEu); RECOMP_ABI_CALL(0x00072910u, sub_00072910); /* call 0x00072910 */

loc_000321FE: ;
    ecx = ZX8(MEM8(0x30EDC8));
    eax = MEM32(0x3321E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    eax = ZX8(MEM8(eax + 0x30D9A1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x2C6710));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032228u); RECOMP_ABI_CALL(0x00074BF0u, sub_00074BF0); /* call 0x00074BF0 */

loc_00032228: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032233u); RECOMP_ABI_CALL(0x000A8BB0u, sub_000A8BB0); /* call 0x000A8BB0 */

loc_00032233: ;
    edx = ZX8(MEM8(0x30EDC8));
    eax = MEM32(0x3321E0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000322C7; /* jne: not equal / not zero */

loc_0003224A: ;
    eax = MEM32(0x332208);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032255u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_00032255: ;
    ecx = MEM32(0x332208);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032262u); RECOMP_ABI_CALL(0x00074840u, sub_00074840); /* call 0x00074840 */

loc_00032262: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003226Au); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003226A: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003228B; /* je: equal / zero */

loc_00032270: ;
    PUSH32(esp, 0x00032275u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00032275: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003228B; /* je: equal / zero */

loc_0003227B: ;
    edx = MEM32(0x332200);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00032288u); RECOMP_ABI_CALL(0x000788D0u, sub_000788D0); /* call 0x000788D0 */

loc_00032288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003228B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032296u); RECOMP_ABI_CALL(0x00074B20u, sub_00074B20); /* call 0x00074B20 */

loc_00032296: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003229Eu); RECOMP_ABI_CALL(0x00075A50u, sub_00075A50); /* call 0x00075A50 */

loc_0003229E: ;
    eax = ZX8(MEM8(0x30EDC8));
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO16(eax, ZX8(MEM8(eax + 0x30D9A3)));
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO16(edx, ZX8(MEM8(ecx + 0x30D9A3)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_000322F7;

loc_000322C7: ;
    ecx = MEM32(0x3321EC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000322D3u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_000322D3: ;
    edx = MEM32(0x3321EC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000322E0u); RECOMP_ABI_CALL(0x00074840u, sub_00074840); /* call 0x00074840 */

loc_000322E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000322EBu); RECOMP_ABI_CALL(0x00074B20u, sub_00074B20); /* call 0x00074B20 */

loc_000322EB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000322F3u); RECOMP_ABI_CALL(0x00075A50u, sub_00075A50); /* call 0x00075A50 */

loc_000322F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_000322F7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000322FEu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000322FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032304u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00032304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003230Eu); RECOMP_ABI_CALL(0x00078B70u, sub_00078B70); /* call 0x00078B70 */

loc_0003230E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032316u); RECOMP_ABI_CALL(0x00078F30u, sub_00078F30); /* call 0x00078F30 */

loc_00032316: ;
    PUSH32(esp, 0x0003231Bu); RECOMP_ABI_CALL(0x0007EB10u, sub_0007EB10); /* call 0x0007EB10 */

loc_0003231B: ;
    PUSH32(esp, 0x00032320u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00032320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032353; /* jne: not equal / not zero */

loc_00032325: ;
    PUSH32(esp, 0x0003232Au); RECOMP_ABI_CALL(0x00070730u, sub_00070730); /* call 0x00070730 */

loc_0003232A: ;
    PUSH32(esp, 0x0003232Fu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003232F: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003233F; /* jne: not equal / not zero */

loc_00032335: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003233Cu); RECOMP_ABI_CALL(0x00072FD0u, sub_00072FD0); /* call 0x00072FD0 */

loc_0003233C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003233F: ;
    PUSH32(esp, 0x00032344u); RECOMP_ABI_CALL(0x000707F0u, sub_000707F0); /* call 0x000707F0 */

loc_00032344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032353; /* jne: not equal / not zero */

loc_00032349: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032350u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032353: ;
    PUSH32(esp, 0x00032358u); RECOMP_ABI_CALL(0x0007AF60u, sub_0007AF60); /* call 0x0007AF60 */

loc_00032358: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032373; /* je: equal / zero */

loc_0003235C: ;
    /* nop */

loc_00032360: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032367u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032367: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003236Fu); RECOMP_ABI_CALL(0x0007AF60u, sub_0007AF60); /* call 0x0007AF60 */

loc_0003236F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032360; /* jne: not equal / not zero */

loc_00032373: ;
    esi = 0x78;

loc_00032378: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003237Fu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003237F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00032378; /* jne: not equal / not zero */

loc_00032385: ;
    PUSH32(esp, 0x0003238Au); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_0003238A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323A3; /* jne: not equal / not zero */

loc_0003238E: ;
    edi = edi;

loc_00032390: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032397u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032397: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003239Fu); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_0003239F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032390; /* je: equal / zero */

loc_000323A3: ;
    PUSH32(esp, 0x000323A8u); RECOMP_ABI_CALL(0x00072750u, sub_00072750); /* call 0x00072750 */

loc_000323A8: ;
    PUSH32(esp, 0x000323ADu); RECOMP_ABI_CALL(0x00093090u, sub_00093090); /* call 0x00093090 */

loc_000323AD: ;
    PUSH32(esp, 0x000323B2u); RECOMP_ABI_CALL(0x00093590u, sub_00093590); /* call 0x00093590 */

loc_000323B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323D4; /* jne: not equal / not zero */

loc_000323B6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000323BDu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000323BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000323C5u); RECOMP_ABI_CALL(0x00093590u, sub_00093590); /* call 0x00093590 */

loc_000323C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000323B6; /* je: equal / zero */

loc_000323C9: ;
    goto loc_000323D4;

loc_000323CB: ;
    SET_LO8(eax, MEM8(0x30AAB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032427; /* je: equal / zero */

loc_000323D4: ;
    PUSH32(esp, 1);
    MEM8(0x30ED4D) = 0;
    MEM8(0x30ED4C) = 0;
    MEM8(ebp) = 1;
    MEM8(0x30D00D) = 0;
    MEM8(0x30D8F0) = 0;
    MEM8(0x307606) = 0;
    MEM8(0x3358AA) = 1;
    MEM8(0x30AE18) = 5;
    MEM8(0x30AE30) = 1;
    PUSH32(esp, 0x00032417u); RECOMP_ABI_CALL(0x00030370u, sub_00030370); /* call 0x00030370 */

loc_00032417: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003241Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003241E: ;
    SET_LO8(edx, MEM8(0x307328));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032427: ;
    eax = MEM32(0x334848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032449; /* je: equal / zero */

loc_00032430: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032437u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032437: ;
    eax = MEM32(0x334848);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032430; /* jne: not equal / not zero */

loc_00032443: ;
    SET_LO8(edx, MEM8(0x307328));

loc_00032449: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032461; /* je: equal / zero */

loc_00032452: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032461; /* je: equal / zero */

loc_00032456: ;
    PUSH32(esp, 0x0003245Bu); RECOMP_ABI_CALL(0x00030AC0u, sub_00030AC0); /* call 0x00030AC0 */

loc_0003245B: ;
    SET_LO8(edx, MEM8(0x307328));

loc_00032461: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032472; /* je: equal / zero */

loc_00032466: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003246Fu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_0003246F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032472: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032479u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032479: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032481u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00032481: ;
    _fa = (uint32_t)(MEM8(0x307328)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x307328), 1 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x15));
    MEM8(0x30AE54) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000324B5; /* jne: not equal / not zero */

loc_00032493: ;
    ecx = ZX8(MEM8(edi + 1));
    SET_LO16(edx, MEM16(ecx * 2 + 0x2C569C));
    PUSH32(esp, 0x5A);
    MEM8(edi) = 0;
    MEM16(0x332274) = LO16(edx);
    PUSH32(esp, 0x000324B0u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000324B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00032501;

loc_000324B5: ;
    edx = ZX8(MEM8(esp + 0x17));
    SET_LO8(eax, MEM8(esp + 0x16));
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM32(0x33227C) = edx;
    SET_LO8(edx, MEM8(0x30AAB1));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(0x30D00A) = LO8(ecx);
    MEM8(0x30AAB1) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000324E5; /* je: equal / zero */

loc_000324E0: ;
    MEM8(0x307604) = LO8(eax);

loc_000324E5: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324FA; /* jne: not equal / not zero */

loc_000324EE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000324F7u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_000324F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000324FA: ;
    MEM8(0x305532) = 0xFF;

loc_00032501: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 2 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00032516; /* je: equal / zero */

loc_0003250E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0004E7A0(); return; /* tail jmp 0x0004E7A0 */

loc_00032516: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000321C4
 * Original: 0x000321C4 - 0x0003251A (854 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000321C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000321C4: ;
    SET_LO8(ecx, MEM8(0x305B14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 3) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00032472; /* ja: above (unsigned >) */

loc_000321D3: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323CB; /* jne: not equal / not zero */

loc_000321E0: ;
    MEM8(0x305532) = 0xFF;
    PUSH32(esp, 0x000321ECu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_000321EC: ;
    edx = ZX8(MEM8(0x30EDC8));
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000321FEu); RECOMP_ABI_CALL(0x00072910u, sub_00072910); /* call 0x00072910 */

loc_000321FE: ;
    ecx = ZX8(MEM8(0x30EDC8));
    eax = MEM32(0x3321E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    eax = ZX8(MEM8(eax + 0x30D9A1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x2C6710));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032228u); RECOMP_ABI_CALL(0x00074BF0u, sub_00074BF0); /* call 0x00074BF0 */

loc_00032228: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032233u); RECOMP_ABI_CALL(0x000A8BB0u, sub_000A8BB0); /* call 0x000A8BB0 */

loc_00032233: ;
    edx = ZX8(MEM8(0x30EDC8));
    eax = MEM32(0x3321E0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000322C7; /* jne: not equal / not zero */

loc_0003224A: ;
    eax = MEM32(0x332208);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032255u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_00032255: ;
    ecx = MEM32(0x332208);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032262u); RECOMP_ABI_CALL(0x00074840u, sub_00074840); /* call 0x00074840 */

loc_00032262: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003226Au); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003226A: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003228B; /* je: equal / zero */

loc_00032270: ;
    PUSH32(esp, 0x00032275u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00032275: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003228B; /* je: equal / zero */

loc_0003227B: ;
    edx = MEM32(0x332200);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00032288u); RECOMP_ABI_CALL(0x000788D0u, sub_000788D0); /* call 0x000788D0 */

loc_00032288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003228B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032296u); RECOMP_ABI_CALL(0x00074B20u, sub_00074B20); /* call 0x00074B20 */

loc_00032296: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003229Eu); RECOMP_ABI_CALL(0x00075A50u, sub_00075A50); /* call 0x00075A50 */

loc_0003229E: ;
    eax = ZX8(MEM8(0x30EDC8));
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO16(eax, ZX8(MEM8(eax + 0x30D9A3)));
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO16(edx, ZX8(MEM8(ecx + 0x30D9A3)));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_000322F7;

loc_000322C7: ;
    ecx = MEM32(0x3321EC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000322D3u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_000322D3: ;
    edx = MEM32(0x3321EC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000322E0u); RECOMP_ABI_CALL(0x00074840u, sub_00074840); /* call 0x00074840 */

loc_000322E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000322EBu); RECOMP_ABI_CALL(0x00074B20u, sub_00074B20); /* call 0x00074B20 */

loc_000322EB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000322F3u); RECOMP_ABI_CALL(0x00075A50u, sub_00075A50); /* call 0x00075A50 */

loc_000322F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_000322F7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000322FEu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000322FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032304u); RECOMP_ABI_CALL(0x000733E0u, sub_000733E0); /* call 0x000733E0 */

loc_00032304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003230Eu); RECOMP_ABI_CALL(0x00078B70u, sub_00078B70); /* call 0x00078B70 */

loc_0003230E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032316u); RECOMP_ABI_CALL(0x00078F30u, sub_00078F30); /* call 0x00078F30 */

loc_00032316: ;
    PUSH32(esp, 0x0003231Bu); RECOMP_ABI_CALL(0x0007EB10u, sub_0007EB10); /* call 0x0007EB10 */

loc_0003231B: ;
    PUSH32(esp, 0x00032320u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00032320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032353; /* jne: not equal / not zero */

loc_00032325: ;
    PUSH32(esp, 0x0003232Au); RECOMP_ABI_CALL(0x00070730u, sub_00070730); /* call 0x00070730 */

loc_0003232A: ;
    PUSH32(esp, 0x0003232Fu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003232F: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003233F; /* jne: not equal / not zero */

loc_00032335: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003233Cu); RECOMP_ABI_CALL(0x00072FD0u, sub_00072FD0); /* call 0x00072FD0 */

loc_0003233C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003233F: ;
    PUSH32(esp, 0x00032344u); RECOMP_ABI_CALL(0x000707F0u, sub_000707F0); /* call 0x000707F0 */

loc_00032344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032353; /* jne: not equal / not zero */

loc_00032349: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032350u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032353: ;
    PUSH32(esp, 0x00032358u); RECOMP_ABI_CALL(0x0007AF60u, sub_0007AF60); /* call 0x0007AF60 */

loc_00032358: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032373; /* je: equal / zero */

loc_0003235C: ;
    /* nop */

loc_00032360: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032367u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032367: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003236Fu); RECOMP_ABI_CALL(0x0007AF60u, sub_0007AF60); /* call 0x0007AF60 */

loc_0003236F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032360; /* jne: not equal / not zero */

loc_00032373: ;
    esi = 0x78;

loc_00032378: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003237Fu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003237F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00032378; /* jne: not equal / not zero */

loc_00032385: ;
    PUSH32(esp, 0x0003238Au); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_0003238A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323A3; /* jne: not equal / not zero */

loc_0003238E: ;
    edi = edi;

loc_00032390: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032397u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032397: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003239Fu); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_0003239F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032390; /* je: equal / zero */

loc_000323A3: ;
    PUSH32(esp, 0x000323A8u); RECOMP_ABI_CALL(0x00072750u, sub_00072750); /* call 0x00072750 */

loc_000323A8: ;
    PUSH32(esp, 0x000323ADu); RECOMP_ABI_CALL(0x00093090u, sub_00093090); /* call 0x00093090 */

loc_000323AD: ;
    PUSH32(esp, 0x000323B2u); RECOMP_ABI_CALL(0x00093590u, sub_00093590); /* call 0x00093590 */

loc_000323B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323D4; /* jne: not equal / not zero */

loc_000323B6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000323BDu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000323BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000323C5u); RECOMP_ABI_CALL(0x00093590u, sub_00093590); /* call 0x00093590 */

loc_000323C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000323B6; /* je: equal / zero */

loc_000323C9: ;
    goto loc_000323D4;

loc_000323CB: ;
    SET_LO8(eax, MEM8(0x30AAB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032427; /* je: equal / zero */

loc_000323D4: ;
    PUSH32(esp, 1);
    MEM8(0x30ED4D) = 0;
    MEM8(0x30ED4C) = 0;
    MEM8(ebp) = 1;
    MEM8(0x30D00D) = 0;
    MEM8(0x30D8F0) = 0;
    MEM8(0x307606) = 0;
    MEM8(0x3358AA) = 1;
    MEM8(0x30AE18) = 5;
    MEM8(0x30AE30) = 1;
    PUSH32(esp, 0x00032417u); RECOMP_ABI_CALL(0x00030370u, sub_00030370); /* call 0x00030370 */

loc_00032417: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003241Eu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003241E: ;
    SET_LO8(edx, MEM8(0x307328));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032427: ;
    eax = MEM32(0x334848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032449; /* je: equal / zero */

loc_00032430: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032437u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032437: ;
    eax = MEM32(0x334848);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032430; /* jne: not equal / not zero */

loc_00032443: ;
    SET_LO8(edx, MEM8(0x307328));

loc_00032449: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032461; /* je: equal / zero */

loc_00032452: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032461; /* je: equal / zero */

loc_00032456: ;
    PUSH32(esp, 0x0003245Bu); RECOMP_ABI_CALL(0x00030AC0u, sub_00030AC0); /* call 0x00030AC0 */

loc_0003245B: ;
    SET_LO8(edx, MEM8(0x307328));

loc_00032461: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032472; /* je: equal / zero */

loc_00032466: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003246Fu); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_0003246F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032472: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032479u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032479: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032481u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00032481: ;
    _fa = (uint32_t)(MEM8(0x307328)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x307328), 1 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x15));
    MEM8(0x30AE54) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000324B5; /* jne: not equal / not zero */

loc_00032493: ;
    ecx = ZX8(MEM8(edi + 1));
    SET_LO16(edx, MEM16(ecx * 2 + 0x2C569C));
    PUSH32(esp, 0x5A);
    MEM8(edi) = 0;
    MEM16(0x332274) = LO16(edx);
    PUSH32(esp, 0x000324B0u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000324B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00032501;

loc_000324B5: ;
    edx = ZX8(MEM8(esp + 0x17));
    SET_LO8(eax, MEM8(esp + 0x16));
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM32(0x33227C) = edx;
    SET_LO8(edx, MEM8(0x30AAB1));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(0x30D00A) = LO8(ecx);
    MEM8(0x30AAB1) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000324E5; /* je: equal / zero */

loc_000324E0: ;
    MEM8(0x307604) = LO8(eax);

loc_000324E5: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324FA; /* jne: not equal / not zero */

loc_000324EE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000324F7u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_000324F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000324FA: ;
    MEM8(0x305532) = 0xFF;

loc_00032501: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 2 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00032516; /* je: equal / zero */

loc_0003250E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0004E7A0(); return; /* tail jmp 0x0004E7A0 */

loc_00032516: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032520
 * Original: 0x00032520 - 0x00032632 (274 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032520: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    SET_LO8(ecx, MEM8(esp + 0x18));
    SET_LO8(edx, MEM8(0x30D9A1));
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x30D9F9));
    SET_LO8(eax, LO8(ecx));
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00032583; /* jne: not equal / not zero */

loc_00032547: ;
    esi = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM8(esi + 0x3252AA)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3252AA), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032583; /* jne: not equal / not zero */

loc_00032553: ;
    edi = ZX8(LO8(ecx));
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032563u); RECOMP_ABI_CALL(0x000279E0u, sub_000279E0); /* call 0x000279E0 */

loc_00032563: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00032570u); RECOMP_ABI_CALL(0x000279E0u, sub_000279E0); /* call 0x000279E0 */

loc_00032570: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0003257Fu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003257F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00032583: ;
    esi = ZX8(LO8(ecx));
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    PUSH32(esp, ebp);
    edi = edx + 0x30D9A1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi));
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000325A8u); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_000325A8: ;
    ebp = MEM32(esp + 0x3C);
    eax = MEM32(esi * 4 + 0x2C5380);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000325C1u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_000325C1: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000325E0; /* jne: not equal / not zero */

loc_000325CD: ;
    PUSH32(esp, 0x000325D2u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_000325D2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x28) = LO8(edx);
    goto loc_000325E5;

loc_000325E0: ;
    MEM8(esp + 0x28) = 0;

loc_000325E5: ;
    eax = MEM32(esp + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi));
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000325FBu); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_000325FB: ;
    eax = MEM32(esi * 4 + 0x2C5388);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032610u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00032610: ;
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM8(esi + 0x32B3A4) = 0;
    MEM8(esi + 0x325384) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0003262Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0003262E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032640
 * Original: 0x00032640 - 0x0003264F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032640: ;
    eax = MEM32(0x3321E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003264E; /* je: equal / zero */

loc_00032649: ;
    g_seh_ebp = ebp; sub_00030EF0(); return; /* tail jmp 0x00030EF0 */

loc_0003264E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00032650
 * Original: 0x00032650 - 0x00032824 (468 bytes, 88 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032650_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032650: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    ecx = MEM32(0x22CA54);
    edx = MEM32(0x22CA58);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x22CA50);
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(0x22CA5C));
    MEM8(esp + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(0x30EBF0));
    MEM32(esp + 4) = ecx;
    SET_LO8(ecx, MEM8(0x30C680));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000326CA; /* je: equal / zero */

loc_00032694: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000326CA; /* je: equal / zero */

loc_00032699: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    SET_LO8(ecx, MEM8(eax + 0x30D9A1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000326CA; /* je: equal / zero */

loc_000326AA: ;
    eax = ZX8(MEM8(eax + 0x30D9A2));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000326C1u); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_000326C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x14;
    goto loc_000326CE;

loc_000326CA: ;
    esi = esp + 4;

loc_000326CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000326D5u); RECOMP_ABI_CALL(0x00036FB0u, sub_00036FB0); /* call 0x00036FB0 */

loc_000326D5: ;
    PUSH32(esp, 0x000326DAu); RECOMP_ABI_CALL(0x00036FE0u, sub_00036FE0); /* call 0x00036FE0 */

loc_000326DA: ;
    ecx = MEM32(0x30EBFC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x000326EEu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_000326EE: ;
    edx = MEM32(0x30EBFC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33229C);
    PUSH32(esp, 0x00032703u); RECOMP_ABI_CALL(0x0005E9D0u, sub_0005E9D0); /* call 0x0005E9D0 */

loc_00032703: ;
    PUSH32(esp, 0x00032708u); RECOMP_ABI_CALL(0x00036FF0u, sub_00036FF0); /* call 0x00036FF0 */

loc_00032708: ;
    PUSH32(esp, 0x332210);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33229C);
    MEM32(0x332210) = 0x41C00000;
    MEM32(0x332214) = 0;
    MEM32(0x332218) = 0;
    MEM32(0x33221C) = 0x3F800000;
    MEM32(0x332220) = 0;
    MEM32(0x332224) = 0;
    MEM32(0x332228) = 0x442E0000;
    MEM32(0x33222C) = 0;
    MEM32(0x332230) = 0;
    MEM32(0x332234) = 0x3F800000;
    MEM32(0x332238) = 0x3F800000;
    MEM32(0x33223C) = 0;
    MEM32(0x332240) = 0x41C00000;
    MEM32(0x332244) = 0x43F00000;
    MEM32(0x332248) = 0;
    MEM32(0x33224C) = 0x3F800000;
    MEM32(0x332250) = 0;
    MEM32(0x332254) = 0x3F800000;
    MEM32(0x332258) = 0x442E0000;
    MEM32(0x33225C) = 0x43F00000;
    MEM32(0x332260) = 0;
    MEM32(0x332264) = 0x3F800000;
    MEM32(0x332268) = 0x3F800000;
    MEM32(0x33226C) = 0x3F800000;
    PUSH32(esp, 0x00032809u); RECOMP_ABI_CALL(0x00035640u, sub_00035640); /* call 0x00035640 */

loc_00032809: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3321E8) = eax;
    PUSH32(esp, 0x00032816u); RECOMP_ABI_CALL(0x0004D090u, sub_0004D090); /* call 0x0004D090 */

loc_00032816: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, esi);
    PUSH32(esp, 0x00032820u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00032820: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032830
 * Original: 0x00032830 - 0x00032D16 (1254 bytes, 343 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032830_gen(void) /* diagnostic selection shadow in frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032830: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    MEM32(esp + 0x24) = eax;
    MEM8(0x30554E) = 0xFF;
    PUSH32(esp, 0x0003284Cu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003284C: ;
    SET_LO8(ecx, MEM8(0x3321F4));
    SET_LO8(eax, MEM8(0x30D9A1));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    MEM8(0x316FF1) = 1;
    MEM8(esp + 0xB) = 0;
    MEM8(esp + 0xE) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00032879; /* jne: not equal / not zero */

loc_00032870: ;
    SET_LO8(eax, MEM8(0x3252AA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032880; /* jne: not equal / not zero */

loc_00032879: ;
    MEM8(esp + 0xB) = 1;
    SET_LO8(ebx, 1);

loc_00032880: ;
    SET_LO8(eax, MEM8(0x3321F5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30D9F9) (8-bit) */
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xD) = 0;
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000328A6; /* jne: not equal / not zero */

loc_0003289C: ;
    SET_LO8(edx, MEM8(0x3252AB));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328B0; /* jne: not equal / not zero */

loc_000328A6: ;
    MEM8(esp + 0xC) = 1;
    MEM8(esp + 0xD) = 1;

loc_000328B0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9A1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x30D9A1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328F7; /* jne: not equal / not zero */

loc_000328B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30D9F9) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328F7; /* jne: not equal / not zero */

loc_000328C0: ;
    SET_LO8(eax, MEM8(0x3322CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9A2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30D9A2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328F7; /* jne: not equal / not zero */

loc_000328CD: ;
    SET_LO8(ecx, MEM8(0x3322CD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9FA)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x30D9FA) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328F7; /* jne: not equal / not zero */

loc_000328DB: ;
    SET_LO8(edx, MEM8(0x332204));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30F914)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(0x30F914) (8-bit) */
    MEM8(0x3322CE) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000328FE; /* je: equal / zero */

loc_000328F0: ;
    PUSH32(esp, 0x000328F5u); RECOMP_ABI_CALL(0x0005C2E0u, sub_0005C2E0); /* call 0x0005C2E0 */

loc_000328F5: ;
    goto loc_000328FE;

loc_000328F7: ;
    MEM8(0x3322CE) = 1;

loc_000328FE: ;
    _fa = (uint32_t)(MEM8(0x30C680)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30C680), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003293F; /* jne: not equal / not zero */

loc_00032907: ;
    SET_LO8(eax, MEM8(0x30D9A1));
    SET_LO8(ecx, MEM8(0x30D9F9));
    SET_LO8(edx, MEM8(0x30D9A2));
    MEM8(0x3321F4) = LO8(eax);
    SET_LO8(eax, MEM8(0x30D9FA));
    MEM8(0x3321F5) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x30F914));
    MEM8(0x3322CC) = LO8(edx);
    MEM8(0x3322CD) = LO8(eax);
    MEM8(0x332204) = LO8(ecx);

loc_0003293F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032962; /* jne: not equal / not zero */

loc_00032944: ;
    edx = MEM32(0x307394);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00032952u); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_00032952: ;
    eax = MEM32(0x30749C);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0003295Fu); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_0003295F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032962: ;
    _fa = (uint32_t)(MEM8(esp + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xD), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032988; /* jne: not equal / not zero */

loc_00032969: ;
    ecx = MEM32(0x3073C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00032977u); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_00032977: ;
    edx = MEM32(0x3074C8);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00032985u); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_00032985: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032988: ;
    SET_LO8(eax, MEM8(0x3322CE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032B58; /* je: equal / zero */

loc_00032995: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032A9B; /* jne: not equal / not zero */

loc_000329A0: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032A9B; /* jne: not equal / not zero */

loc_000329AB: ;
    _fa = (uint32_t)(MEM8(0x30F91C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30F91C), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032A9B; /* je: equal / zero */

loc_000329B8: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xFFFFFF01u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000329C6u); RECOMP_ABI_CALL(0x00037BB0u, sub_00037BB0); /* call 0x00037BB0 */

loc_000329C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000329CFu); RECOMP_ABI_CALL(0x00032520u, sub_00032520); /* call 0x00032520 */

loc_000329CF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30D9A1));
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = ZX8(LO8(ecx));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9A2));
    edx = ZX8(MEM8(edx + eax + 0x2C5460));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM8(esp + 0x32) = 1;
    MEM8(esp + 0x2F) = 0;
    PUSH32(esp, 0x00032A04u); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032A04: ;
    eax = MEM32(0x30EC20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00032A1Bu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00032A1B: ;
    edx = MEM32(0x30EC20);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032A29u); RECOMP_ABI_CALL(0x00028630u, sub_00028630); /* call 0x00028630 */

loc_00032A29: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30D9F9));
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = ZX8(LO8(ecx));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9FA));
    edx = ZX8(MEM8(edx + eax + 0x2C5460));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032A54u); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032A54: ;
    eax = MEM32(0x30EC3C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00032A6Eu); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00032A6E: ;
    edx = MEM32(0x30EC3C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032A7Cu); RECOMP_ABI_CALL(0x00028630u, sub_00028630); /* call 0x00028630 */

loc_00032A7C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032A83u); RECOMP_ABI_CALL(0x00032650u, sub_00032650); /* call 0x00032650 */

loc_00032A83: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032A8Eu); RECOMP_ABI_CALL(0x00037BB0u, sub_00037BB0); /* call 0x00037BB0 */

loc_00032A8E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032A96u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00032A96: ;
    goto loc_00032B58;

loc_00032A9B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032AA2u); RECOMP_ABI_CALL(0x00032650u, sub_00032650); /* call 0x00032650 */

loc_00032AA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032AADu); RECOMP_ABI_CALL(0x00037BB0u, sub_00037BB0); /* call 0x00037BB0 */

loc_00032AAD: ;
    PUSH32(esp, 0x00032AB2u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00032AB2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30D9A1));
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = ZX8(LO8(ecx));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9A2));
    edx = ZX8(MEM8(edx + eax + 0x2C5460));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032ADDu); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032ADD: ;
    eax = MEM32(0x30EC20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00032AF4u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00032AF4: ;
    edx = MEM32(0x30EC20);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032B02u); RECOMP_ABI_CALL(0x00028630u, sub_00028630); /* call 0x00028630 */

loc_00032B02: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30D9F9));
    eax = esp + 0x48;
    PUSH32(esp, eax);
    eax = ZX8(LO8(ecx));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30D9FA));
    edx = ZX8(MEM8(edx + eax + 0x2C5460));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032B2Du); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032B2D: ;
    eax = MEM32(0x30EC3C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00032B47u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00032B47: ;
    edx = MEM32(0x30EC3C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032B55u); RECOMP_ABI_CALL(0x00028630u, sub_00028630); /* call 0x00028630 */

loc_00032B55: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032B58: ;
    SET_LO8(eax, MEM8(0x335980));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032B66; /* je: equal / zero */

loc_00032B61: ;
    SET_LO8(eax, MEM8(0x3139CB));

loc_00032B66: ;
    SET_LO8(eax, MEM8(0x3322CE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x335980) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00032BBC; /* je: equal / zero */

loc_00032B76: ;
    _fa = (uint32_t)(MEM8(0x3252AC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3252AC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032B99; /* jne: not equal / not zero */

loc_00032B7F: ;
    _fa = (uint32_t)(MEM8(0x3252AE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3252AE), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032B99; /* jne: not equal / not zero */

loc_00032B88: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032B8Fu); RECOMP_ABI_CALL(0x00043730u, sub_00043730); /* call 0x00043730 */

loc_00032B8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3252AE) = 0;

loc_00032B99: ;
    _fa = (uint32_t)(MEM8(0x3252AD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3252AD), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032BBC; /* jne: not equal / not zero */

loc_00032BA2: ;
    _fa = (uint32_t)(MEM8(0x3252AF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3252AF), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032BBC; /* jne: not equal / not zero */

loc_00032BAB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032BB2u); RECOMP_ABI_CALL(0x00043730u, sub_00043730); /* call 0x00043730 */

loc_00032BB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3252AF) = 0;

loc_00032BBC: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032C07; /* jne: not equal / not zero */

loc_00032BC5: ;
    SET_LO8(eax, MEM8(0x30D9A0));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30D9A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0xFF);
    if (CMP_EQ(_fa, _fb)) goto loc_00032BE8; /* je: equal / zero */

loc_00032BE2: ;
    SET_LO8(ecx, MEM8(0x30D9F9));

loc_00032BE8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032BEEu); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032BEE: ;
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, 0x3348A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00032C04u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00032C04: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032C07: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x30F914));
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032C1Eu); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032C1E: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032C3A; /* jne: not equal / not zero */

loc_00032C29: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032C32u); RECOMP_ABI_CALL(0x00032520u, sub_00032520); /* call 0x00032520 */

loc_00032C32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xE) = 1;

loc_00032C3A: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032C51; /* jne: not equal / not zero */

loc_00032C41: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032C4Au); RECOMP_ABI_CALL(0x00032520u, sub_00032520); /* call 0x00032520 */

loc_00032C4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    goto loc_00032C55;

loc_00032C51: ;
    SET_LO8(ebx, MEM8(esp + 0xF));

loc_00032C55: ;
    _fa = (uint32_t)(MEM8(esp + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xE), 1 (8-bit) */
    SET_LO8(eax, MEM8(0x30D9A1));
    if (CMP_EQ(_fa, _fb)) goto loc_00032C65; /* je: equal / zero */

loc_00032C61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032C75; /* jne: not equal / not zero */

loc_00032C65: ;
    edx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032C72u); RECOMP_ABI_CALL(0x0004F120u, sub_0004F120); /* call 0x0004F120 */

loc_00032C72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032C75: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(eax, MEM8(0x30D9F9));
    if (CMP_EQ(_fa, _fb)) goto loc_00032C83; /* je: equal / zero */

loc_00032C7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032C93; /* jne: not equal / not zero */

loc_00032C83: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032C90u); RECOMP_ABI_CALL(0x0004F120u, sub_0004F120); /* call 0x0004F120 */

loc_00032C90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032C93: ;
    PUSH32(esp, 0x00032C98u); RECOMP_ABI_CALL(0x00030B00u, sub_00030B00); /* call 0x00030B00 */

loc_00032C98: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x30F914));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00032CAFu); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00032CAF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032CB7u); RECOMP_ABI_CALL(0x0001A790u, sub_0001A790); /* call 0x0001A790 */

loc_00032CB7: ;
    PUSH32(esp, 0x00032CBCu); RECOMP_ABI_CALL(0x0001A6F0u, sub_0001A6F0); /* call 0x0001A6F0 */

loc_00032CBC: ;
    PUSH32(esp, 0x00032CC1u); RECOMP_ABI_CALL(0x0001AF80u, sub_0001AF80); /* call 0x0001AF80 */

loc_00032CC1: ;
    esi = 0x3C;
    SET_LO8(ebx, 0x10);

loc_00032CC8: ;
    _fa = (uint32_t)(MEM8(0x6E9B74)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6E9B74), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00032CDD; /* jne: not equal / not zero */

loc_00032CD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032CD7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032CD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00032CC8; /* jne: not equal / not zero */

loc_00032CDD: ;
    eax = MEM32(0x3321E8);
    PUSH32(esp, 0x00032CE7u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_00032CE7: ;
    PUSH32(esp, 0x1AFA0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00032CF3u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_00032CF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x316FF1) = 0;
    PUSH32(esp, 0x00032D02u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_00032D02: ;
    PUSH32(esp, 0x00032D07u); RECOMP_ABI_CALL(0x0004D070u, sub_0004D070); /* call 0x0004D070 */

loc_00032D07: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00032D12u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00032D12: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032D20
 * Original: 0x00032D20 - 0x00033351 (1585 bytes, 387 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032D20_gen(void)   /* mode-hook: shadowed by game_mode.c (match_handler entry) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032D20: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 4 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00032E1A; /* je: equal / zero */

loc_00032D30: ;
    SET_LO8(eax, MEM8(0x30D00D));
    SET_LO8(ebx, MEM8(0x30D8F0));
    SET_LO8(edx, MEM8(0x307606));
    SET_LO8(ecx, MEM8(0x3139CB));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032D68; /* jne: not equal / not zero */

loc_00032D50: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032D70; /* je: equal / zero */

loc_00032D63: ;
    goto loc_00032E54;

loc_00032D68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032E54; /* jne: not equal / not zero */

loc_00032D70: ;
    SET_LO8(eax, MEM8(0x317039));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032DD8; /* jne: not equal / not zero */

loc_00032D79: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x33228C) = edx;
    MEM32(0x332290) = edx;
    esi = 0x3322D0;
    edi = 8;

loc_00032D91: ;
    PUSH32(esp, 0x00032D96u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00032D96: ;
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = ZX8(LO8(eax));
    SET_LO8(edx, MEM8(ecx + 0x33228C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032DB6; /* je: equal / zero */

loc_00032DA5: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(edx + 0x33228C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032DA5; /* jne: not equal / not zero */

loc_00032DB6: ;
    eax = ZX8(LO8(eax));
    MEM8(eax + 0x33228C) = 1;
    SET_LO8(eax, MEM8(eax + 0x2C5660));
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00032D91; /* jne: not equal / not zero */

loc_00032DCC: ;
    MEM8(0x3322D8) = 0xB;
    goto loc_00032E54;

loc_00032DD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032E1A; /* jne: not equal / not zero */

loc_00032DDC: ;
    ecx = MEM32(0x3055A2);
    edx = MEM32(0x3055A6);
    eax = MEM32(0x3055AA);
    MEM32(0x3322D0) = ecx;
    SET_LO16(ecx, MEM16(0x3055AE));
    MEM32(0x3322D4) = edx;
    SET_LO8(edx, MEM8(0x3055B0));
    MEM32(0x3322D8) = eax;
    MEM16(0x3322DC) = LO16(ecx);
    MEM8(0x3322DE) = LO8(edx);
    goto loc_00032E54;

loc_00032E1A: ;
    eax = MEM32(0x2C5550);
    ecx = MEM32(0x2C5554);
    edx = MEM32(0x2C5558);
    MEM32(0x3322D0) = eax;
    SET_LO16(eax, MEM16(0x2C555C));
    MEM32(0x3322D4) = ecx;
    SET_LO8(ecx, MEM8(0x2C555E));
    MEM32(0x3322D8) = edx;
    MEM16(0x3322DC) = LO16(eax);
    MEM8(0x3322DE) = LO8(ecx);

loc_00032E54: ;
    MEM8(0x30D9A3) = 0;
    MEM8(0x30D9FB) = 0;
    MEM8(0x30D00A) = 0;
    MEM8(0x30AAB1) = 0;
    MEM8(0x30AE18) = 5;
    MEM8(0x305532) = 0xFF;
    MEM8(0x30F9C2) = 0;
    PUSH32(esp, 0x00032E8Au); RECOMP_ABI_CALL(0x0002FEA0u, sub_0002FEA0); /* call 0x0002FEA0 */

loc_00032E8A: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033123; /* jne: not equal / not zero */

loc_00032E97: ;
    PUSH32(esp, 0x00032E9Cu); RECOMP_ABI_CALL(0x00077660u, sub_00077660); /* call 0x00077660 */

loc_00032E9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x30EBF0) = LO8(edx);
    PUSH32(esp, 0x00032EACu); RECOMP_ABI_CALL(0x00071830u, sub_00071830); /* call 0x00071830 */

loc_00032EAC: ;
    MEM16(0x30DAB8) = LO16(eax);
    PUSH32(esp, 0x00032EB7u); RECOMP_ABI_CALL(0x00071840u, sub_00071840); /* call 0x00071840 */

loc_00032EB7: ;
    MEM8(0x30AE54) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033123; /* jne: not equal / not zero */

loc_00032EC9: ;
    PUSH32(esp, 0x00032ECEu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00032ECE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033041; /* jne: not equal / not zero */

loc_00032ED7: ;
    PUSH32(esp, 0x00032EDCu); RECOMP_ABI_CALL(0x00072230u, sub_00072230); /* call 0x00072230 */

loc_00032EDC: ;
    PUSH32(esp, 0x00032EE1u); RECOMP_ABI_CALL(0x00071D90u, sub_00071D90); /* call 0x00071D90 */

loc_00032EE1: ;
    PUSH32(esp, 0x00032EE6u); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_00032EE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032FFE; /* jne: not equal / not zero */

loc_00032EEF: ;
    /* nop */

loc_00032EF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032EF7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032EF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032EFFu); RECOMP_ABI_CALL(0x0007AFF0u, sub_0007AFF0); /* call 0x0007AFF0 */

loc_00032EFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F6F; /* je: equal / zero */

loc_00032F03: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032F0Au); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_00032F0A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00032F11u); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_00032F11: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032F18u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_00032F18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032F20u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_00032F20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F37; /* jne: not equal / not zero */

loc_00032F24: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032F2Bu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032F2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032F33u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_00032F33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F24; /* je: equal / zero */

loc_00032F37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032F3Eu); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_00032F3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032F45u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_00032F45: ;
    PUSH32(esp, 0x00032F4Au); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_00032F4A: ;
    PUSH32(esp, 0x00032F4Fu); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_00032F4F: ;
    PUSH32(esp, 0x00032F54u); RECOMP_ABI_CALL(0x00071860u, sub_00071860); /* call 0x00071860 */

loc_00032F54: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x00032F65u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_00032F65: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00032F6Cu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032F6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032F6F: ;
    PUSH32(esp, 0x00032F74u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00032F74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F89; /* jne: not equal / not zero */

loc_00032F79: ;
    PUSH32(esp, 0x00032F7Eu); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_00032F7E: ;
    esi = eax;
    PUSH32(esp, 0x00032F85u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00032F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032FF0; /* je: equal / zero */

loc_00032F89: ;
    PUSH32(esp, 0x00032F8Eu); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_00032F8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032F94u); RECOMP_ABI_CALL(0x00071940u, sub_00071940); /* call 0x00071940 */

loc_00032F94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032F9Cu); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00032F9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032FB5; /* je: equal / zero */

loc_00032FA1: ;
    PUSH32(esp, 0x00032FA6u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00032FA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032FD5; /* jne: not equal / not zero */

loc_00032FAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032FB0u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_00032FB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00032FD5;

loc_00032FB5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032FBCu); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_00032FBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032FC3u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_00032FC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032FCBu); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_00032FCB: ;
    PUSH32(esp, 0x00032FD0u); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_00032FD0: ;
    PUSH32(esp, 0x00032FD5u); RECOMP_ABI_CALL(0x00071860u, sub_00071860); /* call 0x00071860 */

loc_00032FD5: ;
    eax = MEM32(0x3321E8);
    PUSH32(esp, 0x00032FDFu); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_00032FDF: ;
    PUSH32(esp, 1);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x00032FEDu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00032FED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032FF0: ;
    PUSH32(esp, 0x00032FF5u); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_00032FF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032EF0; /* je: equal / zero */

loc_00032FFE: ;
    PUSH32(esp, 0x00033003u); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_00033003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033123; /* jne: not equal / not zero */

loc_0003300C: ;
    PUSH32(esp, 0x00033011u); RECOMP_ABI_CALL(0x00072640u, sub_00072640); /* call 0x00072640 */

loc_00033011: ;
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(0x30D9A2) = LO8(ecx);
    SET_LO8(edx, MEM8(eax));
    MEM8(0x30D9A1) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 3));
    MEM8(0x30D9FA) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(0x30D9F9) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(0x30F914) = LO8(eax);
    goto loc_00033123;

loc_00033041: ;
    PUSH32(esp, 0x00033046u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00033046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003305B; /* jne: not equal / not zero */

loc_0003304B: ;
    PUSH32(esp, 0x00033050u); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_00033050: ;
    esi = eax;
    PUSH32(esp, 0x00033057u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00033057: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033096; /* je: equal / zero */

loc_0003305B: ;
    PUSH32(esp, 0x00033060u); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_00033060: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033066u); RECOMP_ABI_CALL(0x00071940u, sub_00071940); /* call 0x00071940 */

loc_00033066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003306Eu); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0003306E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003307B; /* jne: not equal / not zero */

loc_00033072: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033078u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_00033078: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003307B: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x0003308Cu); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_0003308C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033093u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033093: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033096: ;
    PUSH32(esp, 0x0003309Bu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003309B: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(eax * 4 + 0x332284);
    PUSH32(esp, 0x000330AAu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000330AA: ;
    edi = MEM32(eax * 4 + 0x332284);
    PUSH32(esp, 0x000330B6u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_000330B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000330BDu); RECOMP_ABI_CALL(0x000790D0u, sub_000790D0); /* call 0x000790D0 */

loc_000330BD: ;
    ecx = MEM32(eax);
    MEM32(0x3322C4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x332208) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x3321EC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x3322C0) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x332270) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(0x3322BC) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(0x332280) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(0x3322C8) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(0x332278) = ecx;
    edx = MEM32(eax + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3321F8) = edx;
    PUSH32(esp, 0x0003311Eu); RECOMP_ABI_CALL(0x00075460u, sub_00075460); /* call 0x00075460 */

loc_0003311E: ;
    MEM32(0x332200) = eax;

loc_00033123: ;
    PUSH32(esp, 0x00033128u); RECOMP_ABI_CALL(0x000300E0u, sub_000300E0); /* call 0x000300E0 */

loc_00033128: ;
    PUSH32(esp, 0x0003312Du); RECOMP_ABI_CALL(0x00030220u, sub_00030220); /* call 0x00030220 */

loc_0003312D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00033134u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_00033134: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0003313Bu); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0003313B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033143u); RECOMP_ABI_CALL(0x0004DCF0u, sub_0004DCF0); /* call 0x0004DCF0 */

loc_00033143: ;
    SET_LO16(eax, MEM16(0x3321F4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9A1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30D9A1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003326D; /* jne: not equal / not zero */

loc_00033155: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9F9)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), MEM8(0x30D9F9) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003326D; /* jne: not equal / not zero */

loc_00033161: ;
    SET_LO16(eax, MEM16(0x3322CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9A2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30D9A2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003326D; /* jne: not equal / not zero */

loc_00033173: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30D9FA)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), MEM8(0x30D9FA) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003326D; /* jne: not equal / not zero */

loc_0003317F: ;
    SET_LO8(eax, MEM8(0x332204));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x30F914)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x30F914) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003326D; /* jne: not equal / not zero */

loc_00033190: ;
    PUSH32(esp, 0x1AFA0);
    PUSH32(esp, 0xB);
    MEM8(0x3322CE) = 0;
    MEM8(0x3322B0) = 0;
    PUSH32(esp, 0x000331AAu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000331AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000331B2u); RECOMP_ABI_CALL(0x0005D8B0u, sub_0005D8B0); /* call 0x0005D8B0 */

loc_000331B2: ;
    PUSH32(esp, 0x000331B7u); RECOMP_ABI_CALL(0x0004D070u, sub_0004D070); /* call 0x0004D070 */

loc_000331B7: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033688(); return; } /* jne: not equal / not zero */

loc_000331C4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000331CBu); RECOMP_ABI_CALL(0x00032650u, sub_00032650); /* call 0x00032650 */

loc_000331CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000331D3u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000331D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033209; /* jne: not equal / not zero */

loc_000331D8: ;
    PUSH32(esp, 0x000331DDu); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_000331DD: ;
    PUSH32(esp, 0x000331E2u); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_000331E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003367E(); return; } /* jne: not equal / not zero */

loc_000331EB: ;
    goto loc_000331F0;

    /* nop */

loc_000331F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000331F7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000331F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000331FFu); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_000331FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000331F0; /* je: equal / zero */

loc_00033204: ;
    g_seh_ebp = ebp; sub_0003367E(); return; /* tail jmp 0x0003367E */

loc_00033209: ;
    PUSH32(esp, 0x0003320Eu); RECOMP_ABI_CALL(0x000769F0u, sub_000769F0); /* call 0x000769F0 */

loc_0003320E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033225; /* jne: not equal / not zero */

loc_00033212: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033219u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033219: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033221u); RECOMP_ABI_CALL(0x000769F0u, sub_000769F0); /* call 0x000769F0 */

loc_00033221: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033212; /* je: equal / zero */

loc_00033225: ;
    PUSH32(esp, 0x0003322Au); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003322A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033234; /* jne: not equal / not zero */

loc_0003322F: ;
    PUSH32(esp, 0x00033234u); RECOMP_ABI_CALL(0x000799B0u, sub_000799B0); /* call 0x000799B0 */

loc_00033234: ;
    PUSH32(esp, 0x00033239u); RECOMP_ABI_CALL(0x00070800u, sub_00070800); /* call 0x00070800 */

loc_00033239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033254; /* je: equal / zero */

loc_0003323E: ;
    edi = edi;

loc_00033240: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033247u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033247: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003324Fu); RECOMP_ABI_CALL(0x00070800u, sub_00070800); /* call 0x00070800 */

loc_0003324F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033240; /* jne: not equal / not zero */

loc_00033254: ;
    ecx = MEM32(0x3322C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033260u); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_00033260: ;
    edx = MEM32(0x3322C0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_seh_ebp = ebp; sub_00033643(); return; /* tail jmp 0x00033643 */

loc_0003326D: ;
    MEM8(0x3322B0) = 1;
    PUSH32(esp, 0x00033279u); RECOMP_ABI_CALL(0x00032830u, sub_00032830); /* call 0x00032830 */

loc_00033279: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033688(); return; } /* jne: not equal / not zero */

loc_00033286: ;
    PUSH32(esp, 0x0003328Bu); RECOMP_ABI_CALL(0x00077EF0u, sub_00077EF0); /* call 0x00077EF0 */

loc_0003328B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003330E; /* je: equal / zero */

loc_00033293: ;
    PUSH32(esp, 0x00033298u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0003330E; /* js: sign (negative) */

loc_0003329C: ;
    PUSH32(esp, 0x000332A1u); RECOMP_ABI_CALL(0x00072930u, sub_00072930); /* call 0x00072930 */

loc_000332A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000332BA; /* je: equal / zero */

loc_000332A6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000332ADu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000332AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000332B5u); RECOMP_ABI_CALL(0x00072930u, sub_00072930); /* call 0x00072930 */

loc_000332B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000332A6; /* jne: not equal / not zero */

loc_000332BA: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000332C1u); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_000332C1: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x000332C8u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_000332C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000332CFu); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_000332CF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000332D7u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_000332D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000332F3; /* jne: not equal / not zero */

loc_000332DB: ;
    goto loc_000332E0;

    /* nop */

loc_000332E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000332E7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000332E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000332EFu); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_000332EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000332E0; /* je: equal / zero */

loc_000332F3: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x00033304u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_00033304: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003330Bu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003330B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003330E: ;
    PUSH32(esp, 0x00033313u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033313: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00033330; /* js: sign (negative) */

loc_00033317: ;
    PUSH32(esp, 0x332210);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33229C);
    PUSH32(esp, 0x00033328u); RECOMP_ABI_CALL(0x00035640u, sub_00035640); /* call 0x00035640 */

loc_00033328: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3321E8) = eax;

loc_00033330: ;
    PUSH32(esp, 0x00033335u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_00033335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000334F1(); return; } /* jne: not equal / not zero */

loc_0003333E: ;
    PUSH32(esp, 0x00033343u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00033343: ;
    PUSH32(esp, 0x00033348u); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_00033348: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003367E(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_00033351(); return; /* fallthrough 0x00033351 */

}

/**
 * sub_00033351
 * Original: 0x00033351 - 0x00033476 (293 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033351(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033351: ;
    PUSH32(esp, 0x00033356u); RECOMP_ABI_CALL(0x0007AFF0u, sub_0007AFF0); /* call 0x0007AFF0 */

loc_00033356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333CB; /* je: equal / zero */

loc_0003335A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033361u); RECOMP_ABI_CALL(0x0007EA10u, sub_0007EA10); /* call 0x0007EA10 */

loc_00033361: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00033368u); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_00033368: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003336Fu); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_0003336F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033377u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_00033377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033393; /* jne: not equal / not zero */

loc_0003337B: ;
    goto loc_00033380;

    /* nop */

loc_00033380: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033387u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033387: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003338Fu); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_0003338F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033380; /* je: equal / zero */

loc_00033393: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003339Au); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_0003339A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000333A1u); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_000333A1: ;
    PUSH32(esp, 0x000333A6u); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_000333A6: ;
    PUSH32(esp, 0x000333ABu); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_000333AB: ;
    PUSH32(esp, 0x000333B0u); RECOMP_ABI_CALL(0x00071860u, sub_00071860); /* call 0x00071860 */

loc_000333B0: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x000333C1u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_000333C1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000333C8u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000333C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000333CB: ;
    PUSH32(esp, 0x000333D0u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_000333D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000333E5; /* jne: not equal / not zero */

loc_000333D5: ;
    PUSH32(esp, 0x000333DAu); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_000333DA: ;
    esi = eax;
    PUSH32(esp, 0x000333E1u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_000333E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344C; /* je: equal / zero */

loc_000333E5: ;
    PUSH32(esp, 0x000333EAu); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_000333EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000333F0u); RECOMP_ABI_CALL(0x00071940u, sub_00071940); /* call 0x00071940 */

loc_000333F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000333F8u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_000333F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033411; /* je: equal / zero */

loc_000333FD: ;
    PUSH32(esp, 0x00033402u); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_00033402: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033431; /* jne: not equal / not zero */

loc_00033406: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003340Cu); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_0003340C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00033431;

loc_00033411: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00033418u); RECOMP_ABI_CALL(0x00071850u, sub_00071850); /* call 0x00071850 */

loc_00033418: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003341Fu); RECOMP_ABI_CALL(0x00071820u, sub_00071820); /* call 0x00071820 */

loc_0003341F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033427u); RECOMP_ABI_CALL(0x000736F0u, sub_000736F0); /* call 0x000736F0 */

loc_00033427: ;
    PUSH32(esp, 0x0003342Cu); RECOMP_ABI_CALL(0x00073AB0u, sub_00073AB0); /* call 0x00073AB0 */

loc_0003342C: ;
    PUSH32(esp, 0x00033431u); RECOMP_ABI_CALL(0x00071860u, sub_00071860); /* call 0x00071860 */

loc_00033431: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x00033442u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_00033442: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033449u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033449: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003344C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033453u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033453: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003345Bu); RECOMP_ABI_CALL(0x00077EF0u, sub_00077EF0); /* call 0x00077EF0 */

loc_0003345B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000334DE(); return; } /* je: equal / zero */

loc_00033463: ;
    PUSH32(esp, 0x00033468u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033468: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) { g_seh_ebp = ebp; sub_000334DE(); return; } /* js: sign (negative) */

loc_0003346C: ;
    PUSH32(esp, 0x00033471u); RECOMP_ABI_CALL(0x00072930u, sub_00072930); /* call 0x00072930 */

loc_00033471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003348A(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00033476(); return; /* fallthrough 0x00033476 */

}

/**
 * sub_00033476
 * Original: 0x00033476 - 0x0003348A (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033476(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033476: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003347Du); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003347D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033485u); RECOMP_ABI_CALL(0x00072930u, sub_00072930); /* call 0x00072930 */

loc_00033485: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033476; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_0003348A(); return; /* fallthrough 0x0003348A */

}

/**
 * sub_0003348A
 * Original: 0x0003348A - 0x000334DE (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003348A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003348A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00033491u); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_00033491: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00033498u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_00033498: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003349Fu); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_0003349F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000334A7u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_000334A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334C3; /* jne: not equal / not zero */

loc_000334AB: ;
    goto loc_000334B0;

    /* nop */

loc_000334B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000334B7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000334B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000334BFu); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_000334BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334B0; /* je: equal / zero */

loc_000334C3: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x000334D4u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_000334D4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000334DBu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000334DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_000334DE(); return; /* fallthrough 0x000334DE */

}

/**
 * sub_000334DE
 * Original: 0x000334DE - 0x000334F1 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000334DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000334DE: ;
    PUSH32(esp, 0x000334E3u); RECOMP_ABI_CALL(0x00071F00u, sub_00071F00); /* call 0x00071F00 */

loc_000334E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00033351(); return; } /* je: equal / zero */

loc_000334EC: ;
    g_seh_ebp = ebp; sub_0003367E(); return; /* tail jmp 0x0003367E */

}

/**
 * sub_000334F1
 * Original: 0x000334F1 - 0x00033688 (407 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000334F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000334F1: ;
    PUSH32(esp, 0x000334F6u); RECOMP_ABI_CALL(0x000769F0u, sub_000769F0); /* call 0x000769F0 */

loc_000334F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000335F0; /* jne: not equal / not zero */

loc_000334FE: ;
    edi = edi;

loc_00033500: ;
    PUSH32(esp, 0x00033505u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00033505: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003351A; /* jne: not equal / not zero */

loc_0003350A: ;
    PUSH32(esp, 0x0003350Fu); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_0003350F: ;
    esi = eax;
    PUSH32(esp, 0x00033516u); RECOMP_ABI_CALL(0x00071930u, sub_00071930); /* call 0x00071930 */

loc_00033516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033555; /* je: equal / zero */

loc_0003351A: ;
    PUSH32(esp, 0x0003351Fu); RECOMP_ABI_CALL(0x000719A0u, sub_000719A0); /* call 0x000719A0 */

loc_0003351F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033525u); RECOMP_ABI_CALL(0x00071940u, sub_00071940); /* call 0x00071940 */

loc_00033525: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003352Du); RECOMP_ABI_CALL(0x0007DFC0u, sub_0007DFC0); /* call 0x0007DFC0 */

loc_0003352D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003353A; /* jne: not equal / not zero */

loc_00033531: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033537u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_00033537: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003353A: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x0003354Bu); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_0003354B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033552u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033552: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033555: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0003355Cu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_0003355C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033564u); RECOMP_ABI_CALL(0x00077EF0u, sub_00077EF0); /* call 0x00077EF0 */

loc_00033564: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335E3; /* je: equal / zero */

loc_0003356C: ;
    PUSH32(esp, 0x00033571u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033571: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000335E3; /* js: sign (negative) */

loc_00033575: ;
    PUSH32(esp, 0x0003357Au); RECOMP_ABI_CALL(0x00072930u, sub_00072930); /* call 0x00072930 */

loc_0003357A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033594; /* je: equal / zero */

loc_0003357F: ;
    /* nop */

loc_00033580: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033587u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033587: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003358Fu); RECOMP_ABI_CALL(0x00072930u, sub_00072930); /* call 0x00072930 */

loc_0003358F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033580; /* jne: not equal / not zero */

loc_00033594: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0003359Bu); RECOMP_ABI_CALL(0x0007AE60u, sub_0007AE60); /* call 0x0007AE60 */

loc_0003359B: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x000335A2u); RECOMP_ABI_CALL(0x00071980u, sub_00071980); /* call 0x00071980 */

loc_000335A2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000335A9u); RECOMP_ABI_CALL(0x00070B80u, sub_00070B80); /* call 0x00070B80 */

loc_000335A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000335B1u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_000335B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000335C8; /* jne: not equal / not zero */

loc_000335B5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000335BCu); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000335BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000335C4u); RECOMP_ABI_CALL(0x0007AF10u, sub_0007AF10); /* call 0x0007AF10 */

loc_000335C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335B5; /* je: equal / zero */

loc_000335C8: ;
    eax = MEM32(0x3321E8);
    MEM8(0x3358AA) = 1;
    PUSH32(esp, 0x000335D9u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_000335D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000335E0u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000335E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000335E3: ;
    PUSH32(esp, 0x000335E8u); RECOMP_ABI_CALL(0x000769F0u, sub_000769F0); /* call 0x000769F0 */

loc_000335E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033500; /* je: equal / zero */

loc_000335F0: ;
    PUSH32(esp, 0x000335F5u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000335F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000335FF; /* jne: not equal / not zero */

loc_000335FA: ;
    PUSH32(esp, 0x000335FFu); RECOMP_ABI_CALL(0x000799B0u, sub_000799B0); /* call 0x000799B0 */

loc_000335FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033606u); RECOMP_ABI_CALL(0x000A8B40u, sub_000A8B40); /* call 0x000A8B40 */

loc_00033606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003360Eu); RECOMP_ABI_CALL(0x00070800u, sub_00070800); /* call 0x00070800 */

loc_0003360E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033630; /* je: equal / zero */

loc_00033613: ;
    PUSH32(esp, 0x00033618u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033618: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00033630; /* jne: not equal / not zero */

loc_0003361C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033623u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033623: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003362Bu); RECOMP_ABI_CALL(0x00070800u, sub_00070800); /* call 0x00070800 */

loc_0003362B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033613; /* jne: not equal / not zero */

loc_00033630: ;
    eax = MEM32(0x3322C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003363Bu); RECOMP_ABI_CALL(0x00075470u, sub_00075470); /* call 0x00075470 */

loc_0003363B: ;
    ecx = MEM32(0x3322C0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033648u); RECOMP_ABI_CALL(0x00074840u, sub_00074840); /* call 0x00074840 */

loc_00033648: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033650u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00033650: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003366B; /* je: equal / zero */

loc_00033656: ;
    PUSH32(esp, 0x0003365Bu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003365B: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003366B; /* je: equal / zero */

loc_00033661: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00033668u); RECOMP_ABI_CALL(0x000788D0u, sub_000788D0); /* call 0x000788D0 */

loc_00033668: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003366B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00033676u); RECOMP_ABI_CALL(0x00074B20u, sub_00074B20); /* call 0x00074B20 */

loc_00033676: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003367Eu); RECOMP_ABI_CALL(0x00078F30u, sub_00078F30); /* call 0x00078F30 */

loc_0003367E: ;
    eax = MEM32(0x3321E8);
    PUSH32(esp, 0x00033688u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

    g_seh_ebp = ebp; sub_00033688(); return; /* fallthrough 0x00033688 */

}

/**
 * sub_00033643
 * Original: 0x00033643 - 0x00033688 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033643: ;
    PUSH32(esp, 0x00033648u); RECOMP_ABI_CALL(0x00074840u, sub_00074840); /* call 0x00074840 */

loc_00033648: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033650u); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_00033650: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003366B; /* je: equal / zero */

loc_00033656: ;
    PUSH32(esp, 0x0003365Bu); RECOMP_ABI_CALL(0x000716F0u, sub_000716F0); /* call 0x000716F0 */

loc_0003365B: ;
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003366B; /* je: equal / zero */

loc_00033661: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00033668u); RECOMP_ABI_CALL(0x000788D0u, sub_000788D0); /* call 0x000788D0 */

loc_00033668: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003366B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00033676u); RECOMP_ABI_CALL(0x00074B20u, sub_00074B20); /* call 0x00074B20 */

loc_00033676: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003367Eu); RECOMP_ABI_CALL(0x00078F30u, sub_00078F30); /* call 0x00078F30 */

loc_0003367E: ;
    eax = MEM32(0x3321E8);
    PUSH32(esp, 0x00033688u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

    g_seh_ebp = ebp; sub_00033688(); return; /* fallthrough 0x00033688 */

}

/**
 * sub_0003367E
 * Original: 0x0003367E - 0x00033688 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003367E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003367E: ;
    eax = MEM32(0x3321E8);
    PUSH32(esp, 0x00033688u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

    g_seh_ebp = ebp; sub_00033688(); return; /* fallthrough 0x00033688 */

}

/**
 * sub_00033688
 * Original: 0x00033688 - 0x000337FC (372 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033688(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033688: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0003368Fu); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0003368F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00033696u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_00033696: ;
    PUSH32(esp, 0x16300);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000336A2u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000336A2: ;
    PUSH32(esp, 0x56CB0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000336AEu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000336AE: ;
    PUSH32(esp, 0x48FF0);
    PUSH32(esp, 7);
    PUSH32(esp, 0x000336BAu); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000336BA: ;
    PUSH32(esp, 0x44140);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000336C6u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000336C6: ;
    PUSH32(esp, 0x33920);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000336D2u); RECOMP_ABI_CALL(0x00052240u, sub_00052240); /* call 0x00052240 */

loc_000336D2: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000336DAu); RECOMP_ABI_CALL(0x000301F0u, sub_000301F0); /* call 0x000301F0 */

loc_000336DA: ;
    PUSH32(esp, 0x000336DFu); RECOMP_ABI_CALL(0x00030450u, sub_00030450); /* call 0x00030450 */

loc_000336DF: ;
    SET_LO8(ebx, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033748; /* jne: not equal / not zero */

loc_000336EA: ;
    eax = ZX8(MEM8(0x30AE54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000336FF; /* jbe: below or equal (unsigned <=) */

loc_000336FD: ;
    SET_LO8(eax, 0xA);

loc_000336FF: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x2C5668));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    MEM8(0x306320) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_00033718; /* jbe: below or equal (unsigned <=) */

loc_00033711: ;
    MEM8(0x306320) = 3;

loc_00033718: ;
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00033720; /* jbe: below or equal (unsigned <=) */

loc_0003371E: ;
    SET_LO8(eax, 8);

loc_00033720: ;
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + 0x2C5674));
    _fb = (uint32_t)(MEM8(ecx + 0x2C5680)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ecx + 0x2C5680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(0x30ECC0) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_000337BF; /* jbe: below or equal (unsigned <=) */

loc_0003373C: ;
    MEM8(0x30ECC0) = 7;
    goto loc_000337BF;

loc_00033748: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033781; /* jne: not equal / not zero */

loc_0003374D: ;
    PUSH32(esp, 0x00033752u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00033752: ;
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0003375E; /* jns: not sign (positive) */

loc_00033759: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0003375E: ;
    MEM8(0x306320) = LO8(eax);
    PUSH32(esp, 0x00033768u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00033768: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, MEM8(0x3139CB));
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x30ECC0) = LO8(edx);
    goto loc_000337BF;

loc_00033781: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000337B4; /* jne: not equal / not zero */

loc_0003378A: ;
    eax = ZX8(MEM8(0x306320));
    edx = eax + eax * 8;
    eax = ZX8(MEM8(0x30AE54));
    SET_LO8(eax, MEM8(edx + eax + 0x2C56C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(0x30ECC0) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_000337BF; /* jbe: below or equal (unsigned <=) */

loc_000337AB: ;
    MEM8(0x30ECC0) = 7;
    goto loc_000337BF;

loc_000337B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000337BF; /* jne: not equal / not zero */

loc_000337B8: ;
    MEM8(0x30ECC0) = 5;

loc_000337BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    MEM8(0x30D00B) = 1;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000337EA; /* jne: not equal / not zero */

loc_000337CE: ;
    PUSH32(esp, 0x000337D3u); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_000337D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000337EA; /* jne: not equal / not zero */

loc_000337D8: ;
    MEM8(0x307604) = 0x14;
    MEM32(0x33227C) = 6;
    esp += 4; return; /* ret */

loc_000337EA: ;
    MEM8(0x307604) = 7;
    MEM32(0x33227C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00033800
 * Original: 0x00033800 - 0x000338C0 (192 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033800_gen(void)   /* mode-hook: shadowed by game_mode.c (flow dispatcher) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033800: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00033860; /* jne: not equal / not zero */

loc_00033809: ;
    PUSH32(esp, 0x0003380Eu); RECOMP_ABI_CALL(0x00076630u, sub_00076630); /* call 0x00076630 */

loc_0003380E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033860; /* je: equal / zero */

loc_00033813: ;
    PUSH32(esp, 0x00033818u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033818: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00033860; /* je: equal / zero */

loc_0003381C: ;
    PUSH32(esp, 0x00033821u); RECOMP_ABI_CALL(0x000733D0u, sub_000733D0); /* call 0x000733D0 */

loc_00033821: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00033860; /* js: sign (negative) */

loc_00033825: ;
    eax = MEM32(0x33227C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00033865; /* jne: not equal / not zero */

loc_0003382F: ;
    SET_LO8(ecx, MEM8(0x3321E0));
    SET_LO8(edx, MEM8(0x305B14));
    MEM8(0x30EDC8) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    eax = 4;
    MEM8(0x6EC224) = 0;
    MEM32(0x33227C) = eax;
    MEM8(ecx + 0x30D9A3) = LO8(edx);
    goto loc_00033865;

loc_00033860: ;
    eax = MEM32(0x33227C);

loc_00033865: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00033894; /* ja: above (unsigned >) */

loc_0003386A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x33898); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00033871u) goto loc_00033871;
    if (_jt == 0x00033876u) goto loc_00033876;
    if (_jt == 0x0003387Bu) goto loc_0003387B;
    if (_jt == 0x00033880u) goto loc_00033880;
    if (_jt == 0x00033885u) goto loc_00033885;
    if (_jt == 0x0003388Au) goto loc_0003388A;
    if (_jt == 0x0003388Fu) goto loc_0003388F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00033871: ;
    g_seh_ebp = ebp; sub_000312C0(); return; /* tail jmp 0x000312C0 */

loc_00033876: ;
    g_seh_ebp = ebp; sub_0002F910(); return; /* tail jmp 0x0002F910 */

loc_0003387B: ;
    g_seh_ebp = ebp; sub_0002FA70(); return; /* tail jmp 0x0002FA70 */

loc_00033880: ;
    g_seh_ebp = ebp; sub_00031650(); return; /* tail jmp 0x00031650 */

loc_00033885: ;
    g_seh_ebp = ebp; sub_000319D0(); return; /* tail jmp 0x000319D0 */

loc_0003388A: ;
    g_seh_ebp = ebp; sub_00032D20(); return; /* tail jmp 0x00032D20 */

loc_0003388F: ;
    g_seh_ebp = ebp; sub_000310F0(); return; /* tail jmp 0x000310F0 */

loc_00033894: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_cf || _fa == 0)) { g_seh_ebp = ebp; sub_000338D6(); return; } /* jbe: below or equal (unsigned <=) */

loc_0003389E: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_000338DA(); return; }

loc_000338A2: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -1979710664)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + -1979710664) = MEM8(ebp + -1979710664) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + -1979710664)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + -872414408)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + -872414408) = MEM8(edi + -872414408) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + -872414408)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000338C0
 * Original: 0x000338C0 - 0x00033918 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000338C0_gen(void)   /* sm-hook: shadowed by state_machine.c (fe_scene_loop) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000338C0: ;
    PUSH32(esp, 0x000338C5u); RECOMP_ABI_CALL(0x0004DCF0u, sub_0004DCF0); /* call 0x0004DCF0 */

loc_000338C5: ;
    PUSH32(esp, 0x000338CAu); RECOMP_ABI_CALL(0x0002FAF0u, sub_0002FAF0); /* call 0x0002FAF0 */

loc_000338CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000338D1u); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_000338D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000338D8u); RECOMP_ABI_CALL(0x0004DD90u, sub_0004DD90); /* call 0x0004DD90 */

loc_000338D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000338DFu); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_000338DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000338E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000338E9u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_000338E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000338F1u); RECOMP_ABI_CALL(0x00030B40u, sub_00030B40); /* call 0x00030B40 */

loc_000338F1: ;
    SET_LO8(eax, MEM8(0x30AE30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033901; /* jne: not equal / not zero */

loc_000338FA: ;
    PUSH32(esp, 0x000338FFu); RECOMP_ABI_CALL(0x00030F00u, sub_00030F00); /* call 0x00030F00 */

loc_000338FF: ;
    goto loc_000338E2;

loc_00033901: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003390C; /* jne: not equal / not zero */

loc_00033905: ;
    PUSH32(esp, 0x0003390Au); RECOMP_ABI_CALL(0x0002F7A0u, sub_0002F7A0); /* call 0x0002F7A0 */

loc_0003390A: ;
    goto loc_000338E2;

loc_0003390C: ;
    PUSH32(esp, 0x00033911u); RECOMP_ABI_CALL(0x0002F870u, sub_0002F870); /* call 0x0002F870 */

loc_00033911: ;
    PUSH32(esp, 0x00033916u); RECOMP_ABI_CALL(0x00033800u, sub_00033800); /* call 0x00033800 */

loc_00033916: ;
    goto loc_000338E2;

}

/**
 * sub_00033920
 * Original: 0x00033920 - 0x00033942 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033920: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00033927u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00033927: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033920; /* je: equal / zero */

loc_00033933: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033920; /* je: equal / zero */

loc_00033937: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033920; /* je: equal / zero */

loc_0003393B: ;
    PUSH32(esp, 0x00033940u); RECOMP_ABI_CALL(0x000345A0u, sub_000345A0); /* call 0x000345A0 */

loc_00033940: ;
    goto loc_00033920;

}

/**
 * sub_00033950
 * Original: 0x00033950 - 0x00033988 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033950: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033962; /* jne: not equal / not zero */

loc_00033959: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x40) = 0;
    esp += 4; return; /* ret */

loc_00033962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003397F; /* je: equal / zero */

loc_00033967: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003397F; /* je: equal / zero */

loc_0003396C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003397F; /* je: equal / zero */

loc_00033971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003397F; /* je: equal / zero */

loc_00033976: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x40) = 1;
    esp += 4; return; /* ret */

loc_0003397F: ;
    edx = MEM32(esp + 4);
    MEM8(edx + 0x40) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00033990
 * Original: 0x00033990 - 0x000339B6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033990: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx * 2 + 0x3062E4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000339B5; /* je: equal / zero */

loc_000339A1: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(edx * 2 + 0x306302));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000339B5; /* je: equal / zero */

loc_000339B0: ;
    eax = 1;

loc_000339B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000339C0
 * Original: 0x000339C0 - 0x00033A28 (104 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339C0(void)
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

loc_000339C0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x30F918)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00033A1B; /* jnp: not parity */

loc_000339E9: ;
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00033A1D; /* je: equal / zero */

loc_000339F6: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00033A14; /* jnp: not parity */

loc_00033A04: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00033A24; /* jne: not equal / not zero */

loc_00033A14: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00033A1B: ;
    fp_pop(); /* fstp st(0) */

loc_00033A1D: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00033A24: ;
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00033A30
 * Original: 0x00033A30 - 0x00033A86 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033A30: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    edx = MEM32(eax + 0x30C278);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    eax = MEM32(eax + 0x30C270);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x30D9BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00033A5Fu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00033A5F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00033A7A; /* jle: less or equal (signed <=) */

loc_00033A71: ;
    ecx = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_00033A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = SX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_00033A90
 * Original: 0x00033A90 - 0x00033AC3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033A90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033AA0u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00033AA0: ;
    edx = MEM32(esp + 0x1C);
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00033AB7u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00033AB7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00033AD0
 * Original: 0x00033AD0 - 0x00033B22 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00033AD0(void)
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

loc_00033AD0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_00033B1F; /* jne: not equal / not zero */

loc_00033B19: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00033B1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00033B30
 * Original: 0x00033B30 - 0x00033B35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033B30: ;
    g_seh_ebp = ebp; sub_00033AD0(); return; /* tail jmp 0x00033AD0 */

}

/**
 * sub_00033B40
 * Original: 0x00033B40 - 0x00033C2A (234 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033B40(void)
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

loc_00033B40: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(esp + 0xC) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = esp;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x14)); /* fsub dword ptr [eax + 0x14] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) - fp_top()); /* fsubr dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 8) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00033BF1u); RECOMP_ABI_CALL(0x0006A660u, sub_0006A660); /* call 0x0006A660 */

loc_00033BF1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0E0)); /* fmul dword ptr [0x22c0e0] */
    PUSH32(esp, 0x00033BFCu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00033BFC: ;
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00033C24; /* jne: not equal / not zero */

loc_00033C1B: ;
    eax = 1;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00033C24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00033C30
 * Original: 0x00033C30 - 0x00033C67 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033C30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033C63u); RECOMP_ABI_CALL(0x00033AD0u, sub_00033AD0); /* call 0x00033AD0 */

loc_00033C63: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00033C70
 * Original: 0x00033C70 - 0x00033CB4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00033C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033C70: ;
    edx = MEM32(esp + 4);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    ecx = MEM32(eax + 0x30C278);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x30C274);
    eax = MEM32(eax + 0x30C270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033C96u); RECOMP_ABI_CALL(0x000339C0u, sub_000339C0); /* call 0x000339C0 */

loc_00033C96: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033CAA; /* je: equal / zero */

loc_00033CA0: ;
    MEM8(edx + 0x30D9E7) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00033CAA: ;
    MEM8(edx + 0x30D9E7) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00033CC0
 * Original: 0x00033CC0 - 0x00033D6D (173 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033CC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB4);
    eax = MEM32(edx + 0x30C278);
    ecx = MEM32(edx + 0x30C274);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x30C270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00033CEAu); RECOMP_ABI_CALL(0x000339C0u, sub_000339C0); /* call 0x000339C0 */

loc_00033CEA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033CF3; /* je: equal / zero */

loc_00033CF1: ;
    SET_LO8(ebx, 4);

loc_00033CF3: ;
    ecx = MEM32(edx + 0x30C26C);
    eax = MEM32(edx + 0x30C268);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x30C264);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033D0Du); RECOMP_ABI_CALL(0x000339C0u, sub_000339C0); /* call 0x000339C0 */

loc_00033D0D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033D17; /* je: equal / zero */

loc_00033D14: ;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00033D17: ;
    eax = MEM32(edx + 0x30C284);
    ecx = MEM32(edx + 0x30C280);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x30C27C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033D31u); RECOMP_ABI_CALL(0x000339C0u, sub_000339C0); /* call 0x000339C0 */

loc_00033D31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033D3B; /* je: equal / zero */

loc_00033D38: ;
    SET_LO8(ebx, LO8(ebx) | 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00033D3B: ;
    ecx = MEM32(edx + 0x30C2CC);
    eax = MEM32(edx + 0x30C2C8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x30C2C4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033D55u); RECOMP_ABI_CALL(0x000339C0u, sub_000339C0); /* call 0x000339C0 */

loc_00033D55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033D5F; /* je: equal / zero */

loc_00033D5C: ;
    SET_LO8(ebx, LO8(ebx) | 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00033D5F: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58);
    MEM8(esi + 0x30D9E7) = LO8(ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00033D70
 * Original: 0x00033D70 - 0x00033E21 (177 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033D70(void)
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

loc_00033D70: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033DA9; /* jne: not equal / not zero */

loc_00033D88: ;
    fp_push(MEMF(eax + 0x348A14)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30C2C4)); /* fsub dword ptr [ecx + 0x30c2c4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x348A1C)); /* fld float */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00033DCD;

loc_00033DA9: ;
    fp_push(MEMF(eax + 0x3489CC)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);
    edx = SX8(LO8(edx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30C258)); /* fsub dword ptr [ecx + 0x30c258] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x3489D4)); /* fld float */

loc_00033DCD: ;
    edx = MEM32(eax + 0x30C278);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30C260)); /* fsub dword ptr [ecx + 0x30c260] */
    ecx = MEM32(eax + 0x30C270);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00033DFEu); RECOMP_ABI_CALL(0x00033A90u, sub_00033A90); /* call 0x00033A90 */

loc_00033DFE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00033E11; /* jle: less or equal (signed <=) */

loc_00033E08: ;
    ecx = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_00033E11: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00033E30
 * Original: 0x00033E30 - 0x00033EA6 (118 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E30(void)
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

loc_00033E30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    edx = MEM32(eax + 0x30C278);
    ecx = MEM32(eax + 0x30C270);
    fp_push(MEMF(eax + 0x3489B4)); /* fld float */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30C264)); /* fsub dword ptr [eax + 0x30c264] */
    MEM32(esp) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x3489BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30C26C)); /* fsub dword ptr [eax + 0x30c26c] */
    eax = edx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033E83u); RECOMP_ABI_CALL(0x00033A90u, sub_00033A90); /* call 0x00033A90 */

loc_00033E83: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00033E96; /* jle: less or equal (signed <=) */

loc_00033E8D: ;
    ecx = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_00033E96: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
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
 * sub_00033EB0
 * Original: 0x00033EB0 - 0x00033EEF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033EB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x3322F8);
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(0x3322F4);
    PUSH32(esp, edx);
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x3322F0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(0x3322E4);
    eax = eax + eax * 2;
    PUSH32(esp, edx);
    edx = ecx + eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00033EEBu); RECOMP_ABI_CALL(0x00033B30u, sub_00033B30); /* call 0x00033B30 */

loc_00033EEB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00033EF0
 * Original: 0x00033EF0 - 0x00033FF5 (261 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033EF0(void)
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

loc_00033EF0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = eax;
    eax = MEM32(ecx + 8);
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    edx = MEM32(ecx + 0x14);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x34);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    eax = MEM32(edx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx + 4);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 8);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEM32(esp + 0x24) = eax;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00033FEE; /* jp: parity */

loc_00033F8C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00033FEE; /* jp: parity */

loc_00033FDD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00033B40(); return; /* tail jmp 0x00033B40 */

loc_00033FEE: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00034000
 * Original: 0x00034000 - 0x00034089 (137 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003400Cu); RECOMP_ABI_CALL(0x00033E30u, sub_00033E30); /* call 0x00033E30 */

loc_0003400C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00034022; /* jne: not equal / not zero */

loc_0003401E: ;
    PUSH32(esp, 9);
    goto loc_00034024;

loc_00034022: ;
    PUSH32(esp, 3);

loc_00034024: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003402Au); RECOMP_ABI_CALL(0x00033D70u, sub_00033D70); /* call 0x00033D70 */

loc_0003402A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00034035u); RECOMP_ABI_CALL(0x00033A30u, sub_00033A30); /* call 0x00033A30 */

loc_00034035: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x10));
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0003406B; /* jge: greater or equal (signed >=) */

loc_0003404A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034057; /* jne: not equal / not zero */

loc_0003404E: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x47) = 2;
    esp += 4; return; /* ret */

loc_00034057: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx * 4 + 1;
    MEM8(edx + 0x47) = LO8(ecx);
    esp += 4; return; /* ret */

loc_0003406B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034078; /* jne: not equal / not zero */

loc_0003406F: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x47) = 4;
    esp += 4; return; /* ret */

loc_00034078: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 3;
    MEM8(edx + 0x47) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00034090
 * Original: 0x00034090 - 0x0003421A (394 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034090: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x30C73C;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    goto loc_000340B0;

    /* nop */
    /* nop */

loc_000340B0: ;
    eax = MEM32(0x3322EC);
    eax = MEM32(ecx + eax);
    SET_LO8(ebx, MEM8(eax * 2 + 0x306302));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034131; /* je: equal / zero */

loc_000340C3: ;
    ebp = 0x349D70;
    ebx = 0x3480B0;
    esi = 0x348900;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000340D4: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000340F5; /* jne: not equal / not zero */

loc_000340DA: ;
    ecx = MEM32(ecx + 0x30C484);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x336EC8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000340EFu); RECOMP_ABI_CALL(0x00033EF0u, sub_00033EF0); /* call 0x00033EF0 */

loc_000340EF: ;
    edx = MEM32(esp + 0x24);
    goto loc_0003410E;

loc_000340F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003411D; /* jne: not equal / not zero */

loc_000340F9: ;
    eax = MEM32(edi + 0x34879C);
    ecx = MEM32(ecx + 0x30C484);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003410Eu); RECOMP_ABI_CALL(0x00033B30u, sub_00033B30); /* call 0x00033B30 */

loc_0003410E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034204; /* jne: not equal / not zero */

loc_00034119: ;
    ecx = MEM32(esp + 0x10);

loc_0003411D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x348930) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x348930 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000340D4; /* jl: less (signed <) */

loc_00034131: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C7F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30C7F0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000340B0; /* jl: less (signed <) */

loc_0003414B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x30C688;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_00034160: ;
    ecx = MEM32(0x3322E8);
    ecx = MEM32(eax + ecx);
    SET_LO8(ebx, MEM8(ecx * 2 + 0x3062E4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341E0; /* je: equal / zero */

loc_00034174: ;
    ebp = 0x349DA0;
    ebx = 0x3480B8;
    esi = 0x348960;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00034185: ;
    SET_LO8(ecx, MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000341A7; /* jne: not equal / not zero */

loc_0003418C: ;
    eax = MEM32(eax + 0x30C448);
    ecx = MEM32(edi + 0x336ED8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000341A1u); RECOMP_ABI_CALL(0x00033EF0u, sub_00033EF0); /* call 0x00033EF0 */

loc_000341A1: ;
    edx = MEM32(esp + 0x20);
    goto loc_000341C1;

loc_000341A7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000341CC; /* jne: not equal / not zero */

loc_000341AC: ;
    ecx = MEM32(edi + 0x3487AC);
    eax = MEM32(eax + 0x30C448);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000341C1u); RECOMP_ABI_CALL(0x00033B30u, sub_00033B30); /* call 0x00033B30 */

loc_000341C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034204; /* jne: not equal / not zero */

loc_000341C8: ;
    eax = MEM32(esp + 0x14);

loc_000341CC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x348990) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x348990 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00034185; /* jl: less (signed <) */

loc_000341E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C73C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30C73C (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00034160; /* jl: less (signed <) */

loc_000341FA: ;
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

loc_00034204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x30D9D8) = 1;
    MEM8(0x30DA30) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00034220
 * Original: 0x00034220 - 0x000342CF (175 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034220: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000342CE; /* jne: not equal / not zero */

loc_0003422F: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034281; /* jne: not equal / not zero */

loc_00034238: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    ecx = MEM32(esp + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax * 4 + 0x314520);
    PUSH32(esp, edx);
    eax = eax + eax * 2;
    edx = eax * 4 + 0x3076F0;
    eax = MEM32(ecx * 4 + 0x30D820);
    PUSH32(esp, edx);
    ecx = ecx + ecx * 2;
    PUSH32(esp, eax);
    edx = ecx * 8 + 0x30AAC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003427Du); RECOMP_ABI_CALL(0x00033EF0u, sub_00033EF0); /* call 0x00033EF0 */

loc_0003427D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034281: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000342CE; /* jne: not equal / not zero */

loc_00034286: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax * 4 + 0x30AD98);
    PUSH32(esp, edx);
    eax = eax + eax * 2;
    edx = eax * 4 + 0x30C518;
    eax = MEM32(ecx * 4 + 0x314520);
    PUSH32(esp, edx);
    ecx = ecx + ecx * 2;
    PUSH32(esp, eax);
    edx = ecx * 4 + 0x3076F0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000342CBu); RECOMP_ABI_CALL(0x00033B30u, sub_00033B30); /* call 0x00033B30 */

loc_000342CB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000342CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000342D0
 * Original: 0x000342D0 - 0x000342DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000342D0(void)
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

loc_000342D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x30F918)); /* fld float */
    PUSH32(esp, ebx);

    g_seh_ebp = ebp; sub_000342DA(); return; /* fallthrough 0x000342DA */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000342DA
 * Original: 0x000342DA - 0x00034444 (362 bytes, 135 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000342DA(void)
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

loc_000342DA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(MEMF(0x30D8E4)); /* fld float */
    esi = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB4);
    MEM8(esp + 0x14) = LO8(ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, ebp);
    fp_top() = -fp_top(); /* fchs */
    /* nop */

loc_00034310: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = esi + 0x30C27C;
    if (CMP_NE(_fa, _fb)) goto loc_00034320; /* jne: not equal / not zero */

loc_0003431A: ;
    eax = esi + 0x30C2C4;

loc_00034320: ;
    ebp = MEM32(eax);
    fp_push(MEMF(eax + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22CA60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22ca60] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(esp + 0x14) = ebp;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00034389; /* jp: parity */

loc_00034340: ;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00034376; /* jnp: not parity */

loc_0003434D: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034376; /* je: equal / zero */

loc_0003435A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00034376; /* jnp: not parity */

loc_00034367: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000343FE; /* jne: not equal / not zero */

loc_00034376: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034383; /* je: equal / zero */

loc_0003437A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000343FC; /* jne: not equal / not zero */

loc_0003437E: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000343FC; /* jne: not equal / not zero */

loc_00034383: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_000343FE;

loc_00034389: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000343C6; /* jne: not equal / not zero */

loc_0003438D: ;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000343BF; /* jnp: not parity */

loc_0003439A: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000343BF; /* je: equal / zero */

loc_000343A7: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000343BF; /* jnp: not parity */

loc_000343B4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000343FE; /* jne: not equal / not zero */

loc_000343BF: ;
    edi = 1;
    goto loc_000343FE;

loc_000343C6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000343FE; /* je: equal / zero */

loc_000343CA: ;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000343FC; /* jnp: not parity */

loc_000343D7: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000343FC; /* je: equal / zero */

loc_000343E4: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000343FC; /* jnp: not parity */

loc_000343F1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000343FE; /* jne: not equal / not zero */

loc_000343FC: ;
    SET_LO8(ecx, 3);

loc_000343FE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00034310; /* jl: less (signed <) */

loc_00034408: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM8(esp + 0x18) = LO8(ecx);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034433; /* je: equal / zero */

loc_00034419: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034429u); RECOMP_ABI_CALL(0x00034000u, sub_00034000); /* call 0x00034000 */

loc_00034429: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034433: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x30D9E7) = 0;
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
 * sub_00034450
 * Original: 0x00034450 - 0x000344A5 (85 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034450: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30D9A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = esi;
    edi = edi ^ 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    ebp = edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1E);
    _fb = (uint32_t)(0x30D9A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30D9A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30F928) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30F928;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi * 4 + 0x3322E8);
    MEM32(esp + 0x14) = edx;
    _fb = (uint32_t)(0x316FF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x316FF8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = 0;

    g_seh_ebp = ebp; sub_000344A5(); return; /* fallthrough 0x000344A5 */

}

/**
 * sub_000344A5
 * Original: 0x000344A5 - 0x000344C3 (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000344A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000344A5: ;
    ecx = MEM32(eax);
    ecx = ZX8(MEM8(edx + ecx * 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00034501(); return; } /* je: equal / zero */

loc_000344BA: ;
    ecx = MEM32(esi * 4 + 0x3322E8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_000344C3(); return; /* fallthrough 0x000344C3 */

}

/**
 * sub_000344C3
 * Original: 0x000344C3 - 0x00034501 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000344C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000344C3: ;
    eax = MEM32(ecx);
    eax = ZX8(MEM8(ebp + eax * 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000344F7; /* je: equal / zero */

loc_000344D5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000344E8u); RECOMP_ABI_CALL(0x00034220u, sub_00034220); /* call 0x00034220 */

loc_000344E8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00034517(); return; } /* jne: not equal / not zero */

loc_000344EF: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);

loc_000344F7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000344C3; /* jl: less (signed <) */

loc_000344FD: ;
    eax = MEM32(esp + 0x1C);

    g_seh_ebp = ebp; sub_00034501(); return; /* fallthrough 0x00034501 */

}

/**
 * sub_00034501
 * Original: 0x00034501 - 0x00034517 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034501(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034501: ;
    ecx = MEM32(esp + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000344A5(); return; } /* jl: less (signed <) */

loc_0003450F: ;
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
 * sub_00034517
 * Original: 0x00034517 - 0x00034550 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034517(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034517: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034522u); RECOMP_ABI_CALL(0x00033950u, sub_00033950); /* call 0x00033950 */

loc_00034522: ;
    eax = MEM32(esp + 0x2C);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    MEM8(eax + 0x37) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0003453C; /* je: equal / zero */

loc_00034535: ;
    MEM8(esi + 0x317034) = 1;

loc_0003453C: ;
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
 * sub_00034550
 * Original: 0x00034550 - 0x00034560 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x30D9E4;
    /* nop */

    g_seh_ebp = ebp; sub_00034560(); return; /* fallthrough 0x00034560 */

}

/**
 * sub_00034560
 * Original: 0x00034560 - 0x0003459A (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034560: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034575; /* jne: not equal / not zero */

loc_00034566: ;
    eax = edi + -68;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034570u); RECOMP_ABI_CALL(0x000342D0u, sub_000342D0); /* call 0x000342D0 */

loc_00034570: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003458E;

loc_00034575: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034581; /* jne: not equal / not zero */

loc_00034579: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003457Fu); RECOMP_ABI_CALL(0x00033CC0u, sub_00033CC0); /* call 0x00033CC0 */

loc_0003457F: ;
    goto loc_0003458B;

loc_00034581: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003458E; /* jne: not equal / not zero */

loc_00034585: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003458Bu); RECOMP_ABI_CALL(0x00033C70u, sub_00033C70); /* call 0x00033C70 */

loc_0003458B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003458E: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00034560; /* jl: less (signed <) */

loc_00034597: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000345A0
 * Original: 0x000345A0 - 0x00034689 (233 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000345A0(void)
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

loc_000345A0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(0x30F920)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30F920), LO16(eax) (16-bit) */
    edx = 0x2C63E8;
    ecx = 0x2C5C6C;
    MEM32(0x3322E8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000345C2; /* je: equal / zero */

loc_000345BC: ;
    MEM32(0x3322E8) = ecx;

loc_000345C2: ;
    _fa = (uint32_t)(MEM16(0x30F922)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x30F922), LO16(eax) (16-bit) */
    MEM32(0x3322EC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000345D7; /* je: equal / zero */

loc_000345D1: ;
    MEM32(0x3322EC) = ecx;

loc_000345D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000345DDu); RECOMP_ABI_CALL(0x00034550u, sub_00034550); /* call 0x00034550 */

loc_000345DD: ;
    fp_push(MEMF(0x30C514)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C23C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c23c] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x30D9D8) = LO8(ebx);
    MEM8(0x30DA30) = LO8(ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003460C; /* jne: not equal / not zero */

loc_000345FE: ;
    MEM8(0x30D9D7) = LO8(ebx);
    MEM8(0x30DA2F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003460C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x30D9D3;

loc_00034615: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    MEM8(esi + 4) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0003462E; /* jne: not equal / not zero */

loc_0003461D: ;
    _fa = (uint32_t)(MEM8(edi + 0x317034)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x317034), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003462E; /* jne: not equal / not zero */

loc_00034625: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003462Bu); RECOMP_ABI_CALL(0x00034450u, sub_00034450); /* call 0x00034450 */

loc_0003462B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003462E: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30DA83) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30DA83 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00034615; /* jl: less (signed <) */

loc_0003463A: ;
    _fa = (uint32_t)(MEM8(0x30D9D8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9D8), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00034649; /* jne: not equal / not zero */

loc_00034644: ;
    PUSH32(esp, 0x00034649u); RECOMP_ABI_CALL(0x00034090u, sub_00034090); /* call 0x00034090 */

loc_00034649: ;
    eax = ZX8(MEM8(0x30EDC8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9CD)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9CD), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034687; /* jne: not equal / not zero */

loc_0003465C: ;
    SET_LO8(eax, MEM8(eax + 0x30D9CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x8C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x8C (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034687; /* jb: below (unsigned <) */

loc_00034666: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x93) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x93 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00034687; /* ja: above (unsigned >) */

loc_0003466A: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034687; /* je: equal / zero */

loc_00034673: ;
    eax = 0x30D9D8;

loc_00034678: ;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30DA88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30DA88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00034678; /* jl: less (signed <) */

loc_00034687: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00034690
 * Original: 0x00034690 - 0x00034798 (264 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034690: ;
    eax = MEM32(0x3074F4);
    MEM32(0x33234C) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332354) = ecx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332318) = edx;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332348) = ecx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x30739C);
    MEM32(0x332338) = edx;
    ecx = eax + 0x200000;
    MEM32(0x332310) = ecx;
    edx = MEM32(ecx + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332368) = edx;
    edx = MEM32(ecx + 0x58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332324) = edx;
    edx = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332308) = edx;
    edx = MEM32(ecx + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332340) = edx;
    edx = MEM32(ecx + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33230C) = edx;
    edx = MEM32(ecx + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332314) = edx;
    edx = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332304) = edx;
    ecx = MEM32(ecx + 0x70);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3073C8);
    MEM32(0x332330) = ecx;
    ecx = eax + 0x200000;
    MEM32(0x332334) = ecx;
    edx = MEM32(ecx + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332328) = edx;
    edx = MEM32(ecx + 0x58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33235C) = edx;
    edx = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33231C) = edx;
    edx = MEM32(ecx + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332360) = edx;
    edx = MEM32(ecx + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332350) = edx;
    edx = MEM32(ecx + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33232C) = edx;
    edx = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332364) = edx;
    ecx = MEM32(ecx + 0x70);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x332344) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000347A0
 * Original: 0x000347A0 - 0x00034827 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000347A0(void)
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

loc_000347A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000347C0; /* jne: not equal / not zero */

loc_000347AF: ;
    edx = MEM32(0x33230C);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x30739C);
    goto loc_000347CF;

loc_000347C0: ;
    edx = MEM32(0x332350);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x3073C8);

loc_000347CF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x347EB6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000347E5; /* je: equal / zero */

loc_000347DB: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000347EB;

loc_000347E5: ;
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = ecx;

loc_000347EB: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    fp_top() = -fp_top(); /* fchs */
    edi = eax + edx;
    edx = MEM32(esi + 4);
    eax = edi + edi * 2;
    ecx = eax * 4 + 0x30C688;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034817u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00034817: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x30C448) = ecx;
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
 * sub_00034830
 * Original: 0x00034830 - 0x000348B7 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034830(void)
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

loc_00034830: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00034850; /* jne: not equal / not zero */

loc_0003483F: ;
    edx = MEM32(0x332368);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x30739C);
    goto loc_0003485F;

loc_00034850: ;
    edx = MEM32(0x332328);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x3073C8);

loc_0003485F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x347EB6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034875; /* je: equal / zero */

loc_0003486B: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003487B;

loc_00034875: ;
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = ecx;

loc_0003487B: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    fp_top() = -fp_top(); /* fchs */
    edi = eax + edx;
    edx = MEM32(esi + 4);
    eax = edi + edi * 2;
    ecx = eax * 4 + 0x3076F0;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000348A7u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_000348A7: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x314520) = ecx;
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
 * sub_000348C0
 * Original: 0x000348C0 - 0x00034947 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000348C0(void)
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

loc_000348C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000348E0; /* jne: not equal / not zero */

loc_000348CF: ;
    edx = MEM32(0x332314);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x30739C);
    goto loc_000348EF;

loc_000348E0: ;
    edx = MEM32(0x33232C);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x3073C8);

loc_000348EF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x347EB6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034905; /* je: equal / zero */

loc_000348FB: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003490B;

loc_00034905: ;
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = ecx;

loc_0003490B: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    fp_top() = -fp_top(); /* fchs */
    edi = eax + edx;
    edx = MEM32(esi + 4);
    eax = edi + edi * 2;
    ecx = eax * 4 + 0x30C518;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034937u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00034937: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x30AD98) = ecx;
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
 * sub_00034950
 * Original: 0x00034950 - 0x000349D4 (132 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034950(void)
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

loc_00034950: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00034970; /* jne: not equal / not zero */

loc_0003495F: ;
    edx = MEM32(0x332330);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x30739C);
    goto loc_0003497F;

loc_00034970: ;
    edx = MEM32(0x332344);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x3073C8);

loc_0003497F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x347EB6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034995; /* je: equal / zero */

loc_0003498B: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003499B;

loc_00034995: ;
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = ecx;

loc_0003499B: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esi + 8)); /* fld float */
    edi = edx + eax * 4;
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(esi + 4);
    eax = edi + edi * 2;
    ecx = eax * 4 + 0x349D58;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000349C4u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_000349C4: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x348794) = ecx;
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
 * sub_000349E0
 * Original: 0x000349E0 - 0x00034AA4 (196 bytes, 67 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000349E0(void)
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

loc_000349E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00034A02; /* jne: not equal / not zero */

loc_000349F1: ;
    edx = MEM32(0x332340);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x30739C);
    goto loc_00034A11;

loc_00034A02: ;
    edx = MEM32(0x332360);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x3073C8);

loc_00034A11: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x347EB6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034A30; /* je: equal / zero */

loc_00034A1D: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00034A3D;

loc_00034A30: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = edx;

loc_00034A3D: ;
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    fp_top() = -fp_top(); /* fchs */
    ebx = eax + ecx;
    eax = MEM32(esi + 4);
    edi = ebx + ebx * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + 0x30AAC0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034A6Bu); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00034A6B: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    edx = edi + 0x30AACC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034A8Cu); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00034A8C: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22CA64)); /* fmul dword ptr [0x22ca64] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebx * 4 + 0x30D820) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00034AB0
 * Original: 0x00034AB0 - 0x00034B6B (187 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034AB0(void)
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

loc_00034AB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00034AD2; /* jne: not equal / not zero */

loc_00034AC1: ;
    edx = MEM32(0x332304);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x30739C);
    goto loc_00034AE1;

loc_00034AD2: ;
    edx = MEM32(0x332364);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(0x3073C8);

loc_00034AE1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(0x347EB6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034B00; /* je: equal / zero */

loc_00034AED: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00034B0D;

loc_00034B00: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = edx;

loc_00034B0D: ;
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esi + 8)); /* fld float */
    ebx = ecx + eax * 4;
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esi + 4);
    edi = ebx + ebx * 2;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + 0x3488D0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034B38u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00034B38: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(esi + 0x10);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + 0x3488DC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034B59u); RECOMP_ABI_CALL(0x0006AFB0u, sub_0006AFB0); /* call 0x0006AFB0 */

loc_00034B59: ;
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx * 4 + 0x336EC0) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00034B70
 * Original: 0x00034B70 - 0x00034BEC (124 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034B70: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(0x332358) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    _fb = (uint32_t)(0x3062E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3062E4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM16(0x33233C) = LO16(edx);
    esi = eax;
    ecx = 0xF;

loc_00034B95: ;
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00034B95; /* jne: not equal / not zero */

loc_00034BA2: ;
    ecx = MEM32(0x332318);
    eax = ZX16(LO16(edx));
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(0x33234C);
    eax = edx + ecx;
    MEM32(0x332300) = ecx;
    MEM32(0x332320) = eax;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034BEA; /* je: equal / zero */

loc_00034BC9: ;
    /* nop */

loc_00034BD0: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(LO8(ecx));
    ecx = esi + ecx * 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034BD0; /* jne: not equal / not zero */

loc_00034BEA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034BF0
 * Original: 0x00034BF0 - 0x00034C4B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034BF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1E);
    _fb = (uint32_t)(0x30F928) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30F928;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ecx = 0xF;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00034C07: ;
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00034C07; /* jne: not equal / not zero */

loc_00034C12: ;
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x332354);
    eax = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(0x33234C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x33234C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034C49; /* je: equal / zero */

loc_00034C2D: ;
    /* nop */

loc_00034C30: ;
    edx = ZX8(LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + edx * 2;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034C30; /* jne: not equal / not zero */

loc_00034C49: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034C50
 * Original: 0x00034C50 - 0x00034CAB (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034C50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1E);
    _fb = (uint32_t)(0x316FF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x316FF8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ecx = 0xF;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00034C67: ;
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00034C67; /* jne: not equal / not zero */

loc_00034C72: ;
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x332348);
    eax = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(0x33234C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x33234C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034CA9; /* je: equal / zero */

loc_00034C8D: ;
    /* nop */

loc_00034C90: ;
    edx = ZX8(LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + edx * 2;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034C90; /* jne: not equal / not zero */

loc_00034CA9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034CB0
 * Original: 0x00034CB0 - 0x00034D0B (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034CB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi * 8 + 0x3480AC;
    eax = esi + 4;
    ecx = 2;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00034CC6: ;
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00034CC6; /* jne: not equal / not zero */

loc_00034CD1: ;
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x332338);
    eax = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(0x33234C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x33234C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D09; /* je: equal / zero */

loc_00034CEC: ;
    /* nop */

loc_00034CF0: ;
    edx = ZX8(LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + edx * 2;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034CF0; /* jne: not equal / not zero */

loc_00034D09: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034D10
 * Original: 0x00034D10 - 0x00034EDD (461 bytes, 166 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034D10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3489A4);
    SET_LO8(ecx, MEM8(eax + 0x2A));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, MEM8(eax + 1));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0xE) = LO8(ecx);
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00034D3E; /* jne: not equal / not zero */

loc_00034D2E: ;
    esi = ZX8(LO8(eax));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esi + 0x2C5D68));
    goto loc_00034DC9;

loc_00034D3E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034D53; /* jne: not equal / not zero */

loc_00034D43: ;
    esi = ZX8(LO8(eax));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2C5CE8));
    PUSH32(esp, ecx);
    goto loc_00034DCA;

loc_00034D53: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034D70; /* jne: not equal / not zero */

loc_00034D58: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1A (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034DBE; /* jb: below (unsigned <) */

loc_00034D5D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x31 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00034DBE; /* ja: above (unsigned >) */

loc_00034D62: ;
    esi = ZX8(LO8(eax));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0x2C5D88));
    PUSH32(esp, edx);
    goto loc_00034DCA;

loc_00034D70: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034DA1; /* jne: not equal / not zero */

loc_00034D75: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034D7Fu); RECOMP_ABI_CALL(0x00057C10u, sub_00057C10); /* call 0x00057C10 */

loc_00034D7F: ;
    esi = ZX8(MEM8(esp + 0x13));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034D96; /* jne: not equal / not zero */

loc_00034D8B: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esi + 0x2C5D98));
    PUSH32(esp, eax);
    goto loc_00034DCE;

loc_00034D96: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0x2C5D78));
    PUSH32(esp, ecx);
    goto loc_00034DCE;

loc_00034DA1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034DBE; /* jne: not equal / not zero */

loc_00034DA6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034DBE; /* jb: below (unsigned <) */

loc_00034DAB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x44 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00034DBE; /* ja: above (unsigned >) */

loc_00034DB0: ;
    esi = ZX8(LO8(eax));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0x2C5D68));
    PUSH32(esp, edx);
    goto loc_00034DCA;

loc_00034DBE: ;
    esi = ZX8(LO8(eax));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esi + 0x2C5D78));

loc_00034DC9: ;
    PUSH32(esp, eax);

loc_00034DCA: ;
    edi = MEM32(esp + 0x18);

loc_00034DCE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034DD4u); RECOMP_ABI_CALL(0x00034C50u, sub_00034C50); /* call 0x00034C50 */

loc_00034DD4: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034DED; /* jne: not equal / not zero */

loc_00034DE0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi * 2 + 0x2C5D48));
    PUSH32(esp, ecx);
    goto loc_00034E1F;

loc_00034DED: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034E14; /* jne: not equal / not zero */

loc_00034DF2: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x9F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x9F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034E14; /* jb: below (unsigned <) */

loc_00034DFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB4 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00034E14; /* ja: above (unsigned >) */

loc_00034DFE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi * 2 + 0x2C5D28));
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034E0Fu); RECOMP_ABI_CALL(0x00034B70u, sub_00034B70); /* call 0x00034B70 */

loc_00034E0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034E7B;

loc_00034E14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi * 2 + 0x2C5D08));
    PUSH32(esp, eax);

loc_00034E1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034E25u); RECOMP_ABI_CALL(0x00034B70u, sub_00034B70); /* call 0x00034B70 */

loc_00034E25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E89; /* je: equal / zero */

loc_00034E2C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E89; /* je: equal / zero */

loc_00034E31: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E89; /* je: equal / zero */

loc_00034E36: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E89; /* je: equal / zero */

loc_00034E3B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034E58; /* jne: not equal / not zero */

loc_00034E40: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x17) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x17 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034E4C; /* jb: below (unsigned <) */

loc_00034E48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x19 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00034E89; /* jbe: below or equal (unsigned <=) */

loc_00034E4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034E54; /* jb: below (unsigned <) */

loc_00034E50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x72 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00034E89; /* jbe: below or equal (unsigned <=) */

loc_00034E54: ;
    PUSH32(esp, 1);
    goto loc_00034E8B;

loc_00034E58: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034E6D; /* jne: not equal / not zero */

loc_00034E5D: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034E69; /* jb: below (unsigned <) */

loc_00034E65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6E (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00034E89; /* jbe: below or equal (unsigned <=) */

loc_00034E69: ;
    PUSH32(esp, 1);
    goto loc_00034E8B;

loc_00034E6D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034E76; /* jne: not equal / not zero */

loc_00034E72: ;
    PUSH32(esp, 3);
    goto loc_00034E8B;

loc_00034E76: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034EBB; /* jne: not equal / not zero */

loc_00034E7B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034E81u); RECOMP_ABI_CALL(0x00057C10u, sub_00057C10); /* call 0x00057C10 */

loc_00034E81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034ED9; /* jne: not equal / not zero */

loc_00034E89: ;
    PUSH32(esp, 0);

loc_00034E8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034E91u); RECOMP_ABI_CALL(0x00034CB0u, sub_00034CB0); /* call 0x00034CB0 */

loc_00034E91: ;
    SET_LO8(eax, MEM8(0x316FF2));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034EB6; /* jne: not equal / not zero */

loc_00034E9D: ;
    _fa = (uint32_t)(MEM8(esp + 0xF)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xF), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034EB6; /* jne: not equal / not zero */

loc_00034EA4: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034EACu); RECOMP_ABI_CALL(0x00034C50u, sub_00034C50); /* call 0x00034C50 */

loc_00034EAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3495B8) = 1;

loc_00034EB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00034EBB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034EC4; /* jne: not equal / not zero */

loc_00034EC0: ;
    PUSH32(esp, 2);
    goto loc_00034E8B;

loc_00034EC4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034ED9; /* jne: not equal / not zero */

loc_00034EC9: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00034ED9; /* jb: below (unsigned <) */

loc_00034ED1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00034ED9; /* ja: above (unsigned >) */

loc_00034ED5: ;
    PUSH32(esp, 2);
    goto loc_00034E8B;

loc_00034ED9: ;
    PUSH32(esp, 4);
    goto loc_00034E8B;

}

/**
 * sub_00034EE0
 * Original: 0x00034EE0 - 0x00034F7D (157 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034EE0: ;
    edx = 0x303;
    ecx = 0x302;
    PUSH32(esp, 0x00034EEFu); RECOMP_ABI_CALL(0x00063390u, sub_00063390); /* call 0x00063390 */

loc_00034EEF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00034EF6u); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00034EF6: ;
    PUSH32(esp, 0x00034EFBu); RECOMP_ABI_CALL(0x0006ACA0u, sub_0006ACA0); /* call 0x0006ACA0 */

loc_00034EFB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00034F0Fu); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_00034F0F: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034F1Bu); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_00034F1B: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00034F3C; /* jne: not equal / not zero */

loc_00034F28: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00034F34u); RECOMP_ABI_CALL(0x00066DC0u, sub_00066DC0); /* call 0x00066DC0 */

loc_00034F34: ;
    ecx = MEM32(0x30C828);
    goto loc_00034F4E;

loc_00034F3C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00034F48u); RECOMP_ABI_CALL(0x00066DC0u, sub_00066DC0); /* call 0x00066DC0 */

loc_00034F48: ;
    ecx = MEM32(0x30C824);

loc_00034F4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x00034F5Bu); RECOMP_ABI_CALL(0x00063880u, sub_00063880); /* call 0x00063880 */

loc_00034F5B: ;
    ecx = 1;
    PUSH32(esp, 0x00034F65u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00034F65: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00034F79u); RECOMP_ABI_CALL(0x00066DC0u, sub_00066DC0); /* call 0x00066DC0 */

loc_00034F79: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00034F80
 * Original: 0x00034F80 - 0x000350F3 (371 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034F80(void)
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

loc_00034F80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x303;
    ecx = 0x302;
    PUSH32(esp, 0x00034F95u); RECOMP_ABI_CALL(0x00063390u, sub_00063390); /* call 0x00063390 */

loc_00034F95: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00034FA3u); RECOMP_ABI_CALL(0x00066DC0u, sub_00066DC0); /* call 0x00066DC0 */

loc_00034FA3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00034FADu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_00034FAD: ;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x2C);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00034FE8u); RECOMP_ABI_CALL(0x0006ACA0u, sub_0006ACA0); /* call 0x0006ACA0 */

loc_00034FE8: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00034FFCu); RECOMP_ABI_CALL(0x0006A800u, sub_0006A800); /* call 0x0006A800 */

loc_00034FFC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x00035008u); RECOMP_ABI_CALL(0x0006A770u, sub_0006A770); /* call 0x0006A770 */

loc_00035008: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x22CA68)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00035031; /* jp: parity */

loc_0003502D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0003504A;

loc_00035031: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035045u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00035045: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0003504A: ;
    ecx = ebx;
    PUSH32(esp, 0x00035051u); RECOMP_ABI_CALL(0x0006A110u, sub_0006A110); /* call 0x0006A110 */

loc_00035051: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    ecx = ebx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00035060u); RECOMP_ABI_CALL(0x0006A0F0u, sub_0006A0F0); /* call 0x0006A0F0 */

loc_00035060: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x2C) - fp_top()); /* fsubr dword ptr [esp + 0x2c] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x22CA68)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00035087; /* jp: parity */

loc_00035081: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0003509C;

loc_00035087: ;
    ecx = MEM32(esp + 0x28);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00035097u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_00035097: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0003509C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000350A2u); RECOMP_ABI_CALL(0x0006C0B0u, sub_0006C0B0); /* call 0x0006C0B0 */

loc_000350A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000350A8u); RECOMP_ABI_CALL(0x0006C110u, sub_0006C110); /* call 0x0006C110 */

loc_000350A8: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000350B8u); RECOMP_ABI_CALL(0x0006A8B0u, sub_0006A8B0); /* call 0x0006A8B0 */

loc_000350B8: ;
    ecx = MEM32(0x30C81C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x000350CBu); RECOMP_ABI_CALL(0x00063880u, sub_00063880); /* call 0x00063880 */

loc_000350CB: ;
    ecx = 1;
    PUSH32(esp, 0x000350D5u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_000350D5: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000350E9u); RECOMP_ABI_CALL(0x00066DC0u, sub_00066DC0); /* call 0x00066DC0 */

loc_000350E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00035100
 * Original: 0x00035100 - 0x0003512E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035100: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax * 2 + 0x3062E4;
    eax = ZX8(MEM8(ecx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003512D; /* jne: not equal / not zero */

loc_0003511C: ;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000347A0(); return; /* tail jmp 0x000347A0 */

loc_0003512D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035130
 * Original: 0x00035130 - 0x0003515E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035130: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax * 2 + 0x30F928;
    eax = ZX8(MEM8(ecx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003515D; /* jne: not equal / not zero */

loc_0003514C: ;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00034830(); return; /* tail jmp 0x00034830 */

loc_0003515D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035160
 * Original: 0x00035160 - 0x000351AB (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035160: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax * 2 + 0x316FF8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax * 2 + 0x316FF8;
    if ((_fa == 0)) goto loc_00035198; /* je: equal / zero */

loc_00035181: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000351AA; /* jne: not equal / not zero */

loc_00035186: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 1));
    MEM32(esp + 4) = edx;
    MEM32(esp + 0xC) = ecx;
    g_seh_ebp = ebp; sub_000349E0(); return; /* tail jmp 0x000349E0 */

loc_00035198: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 1));
    MEM32(esp + 4) = edx;
    MEM32(esp + 0xC) = ecx;
    g_seh_ebp = ebp; sub_000348C0(); return; /* tail jmp 0x000348C0 */

loc_000351AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000351B0
 * Original: 0x000351B0 - 0x000351F6 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000351B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000351B0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = edx + esi * 4;
    ecx = ZX8(MEM8(eax * 2 + 0x3480AC));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax * 2 + 0x3480AC;
    if ((_fa == 0)) goto loc_000351E4; /* je: equal / zero */

loc_000351CE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000351F4; /* jne: not equal / not zero */

loc_000351D3: ;
    eax = ZX8(MEM8(eax + 1));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000351DFu); RECOMP_ABI_CALL(0x00034AB0u, sub_00034AB0); /* call 0x00034AB0 */

loc_000351DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000351E4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000351F1u); RECOMP_ABI_CALL(0x00034950u, sub_00034950); /* call 0x00034950 */

loc_000351F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000351F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035200
 * Original: 0x00035200 - 0x0003551C (796 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0003520Eu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0003520E: ;
    SET_LO8(eax, MEM8(0x337144));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    esi = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_0003533D; /* jne: not equal / not zero */

loc_0003521F: ;
    ebp = esi + esi * 2;
    edi = esi + esi * 2;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi * 8 + 0x3480AC;
    ebx = esi;
    _fb = (uint32_t)(0x3488D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x3488D0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x349D5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x349D5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = 4;
    /* nop */

loc_00035250: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035279; /* jne: not equal / not zero */

loc_0003525A: ;
    edx = MEM32(ebx + 0x348794);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(edi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00035274u); RECOMP_ABI_CALL(0x00034EE0u, sub_00034EE0); /* call 0x00034EE0 */

loc_00035274: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00035292;

loc_00035279: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035292; /* jne: not equal / not zero */

loc_0003527D: ;
    eax = MEM32(ebx + 0x336EC0);
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003528Fu); RECOMP_ABI_CALL(0x00034F80u, sub_00034F80); /* call 0x00034F80 */

loc_0003528F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035292: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00035250; /* jne: not equal / not zero */

loc_000352AB: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    edi = eax;
    edx = eax * 4 + 0x30C448;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = eax + eax * 2;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    _fb = (uint32_t)(0x3495C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3495C0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp * 4 + 0x30C68C;

loc_000352D6: ;
    ecx = edi;
    PUSH32(esp, 0x000352DDu); RECOMP_ABI_CALL(0x0006ACB0u, sub_0006ACB0); /* call 0x0006ACB0 */

loc_000352DD: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000352F1; /* jne: not equal / not zero */

loc_000352E8: ;
    eax = MEM32(ebx * 4 + 0x2C63E8);
    goto loc_000352F3;

loc_000352F1: ;
    eax = ebx;

loc_000352F3: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ecx * 2 + 0x3062E4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx * 2 + 0x3062E4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035321; /* jne: not equal / not zero */

loc_00035303: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003531Eu); RECOMP_ABI_CALL(0x00034EE0u, sub_00034EE0); /* call 0x00034EE0 */

loc_0003531E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035321: ;
    ecx = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000352D6; /* jl: less (signed <) */

loc_00035338: ;
    goto loc_000353EB;

loc_0003533D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000353EB; /* jne: not equal / not zero */

loc_00035345: ;
    edi = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xF);
    ecx = edi + edi * 2;
    ecx = ecx * 8 + 0x30AAC0;
    ebp = edi + edi * 2;
    edx = edi * 4;
    MEM32(esp + 0x14) = ecx;
    ebp = ebp * 4 + 0x30C51C;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_00035370: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035384; /* jne: not equal / not zero */

loc_0003537B: ;
    eax = MEM32(ebx * 4 + 0x2C63E8);
    goto loc_00035386;

loc_00035384: ;
    eax = ebx;

loc_00035386: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(eax * 2 + 0x316FF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000353B3; /* jne: not equal / not zero */

loc_00035393: ;
    ecx = MEM32(edx + 0x30AD98);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000353AEu); RECOMP_ABI_CALL(0x00034EE0u, sub_00034EE0); /* call 0x00034EE0 */

loc_000353AE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000353CC;

loc_000353B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000353CC; /* jne: not equal / not zero */

loc_000353B7: ;
    edx = MEM32(edx + 0x30D820);
    PUSH32(esp, edx);
    eax = ecx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000353C9u); RECOMP_ABI_CALL(0x00034F80u, sub_00034F80); /* call 0x00034F80 */

loc_000353C9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000353CC: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00035370; /* jl: less (signed <) */

loc_000353EB: ;
    _fa = (uint32_t)(MEM8(0x3495B8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3495B8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003544D; /* jne: not equal / not zero */

loc_000353F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035508; /* je: equal / zero */

loc_000353FC: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ecx + 0x30D9A1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9A1), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035508; /* jne: not equal / not zero */

loc_0003540E: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    ecx = MEM32(edx + 0x30D828);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x168);
    PUSH32(esp, ecx);
    edx = eax + 0x30AAFC;
    PUSH32(esp, edx);
    eax = eax + 0x30AAF0;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00035436u); RECOMP_ABI_CALL(0x00034F80u, sub_00034F80); /* call 0x00034F80 */

loc_00035436: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    PUSH32(esp, 0x00035443u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00035443: ;
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

loc_0003544D: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(ecx + 0x30D9D3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30D9D3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035508; /* jne: not equal / not zero */

loc_0003545F: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    edi = eax + eax * 2;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    ebx = eax * 4 + 0x314520;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00035480;

    /* nop */

loc_00035480: ;
    _fa = (uint32_t)(MEM16(esi * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035494; /* jne: not equal / not zero */

loc_0003548B: ;
    ecx = MEM32(ebp * 4 + 0x2C63E8);
    goto loc_00035496;

loc_00035494: ;
    ecx = ebp;

loc_00035496: ;
    edx = eax + ecx;
    _fa = (uint32_t)(MEM8(edx * 2 + 0x30F928)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx * 2 + 0x30F928), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000354F8; /* jne: not equal / not zero */

loc_000354A3: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi + 0x3076F8);
    edx = MEM32(edi + 0x3076F4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x3076F0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000354C3u); RECOMP_ABI_CALL(0x00034EE0u, sub_00034EE0); /* call 0x00034EE0 */

loc_000354C3: ;
    eax = MEM32(esi * 4 + 0x336C80);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000354F4; /* je: equal / zero */

loc_000354D1: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi + 0x336CC0);
    eax = MEM32(edi + 0x336CBC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x336CB8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000354F1u); RECOMP_ABI_CALL(0x00034EE0u, sub_00034EE0); /* call 0x00034EE0 */

loc_000354F1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000354F4: ;
    eax = MEM32(esp + 0x10);

loc_000354F8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00035480; /* jl: less (signed <) */

loc_00035508: ;
    ecx = 1;
    PUSH32(esp, 0x00035512u); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_00035512: ;
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

}

/**
 * sub_00035520
 * Original: 0x00035520 - 0x0003558D (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035520: ;
    SET_LO8(eax, MEM8(0x30AE18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003558A; /* je: equal / zero */

loc_00035529: ;
    SET_LO8(ecx, MEM8(0x30AE36));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003558A; /* je: equal / zero */

loc_00035535: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(MEM16(ebx * 2 + 0x30F920)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx * 2 + 0x30F920), 0xFFFFFFFFu (16-bit) */
    PUSH32(esp, edi);
    MEM8(0x347EB6) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0003556A; /* jne: not equal / not zero */

loc_00035557: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    edi = MEM32(esi * 4 + 0x2C63E8);
    if (CMP_GE(_fas, _fbs)) goto loc_0003556C; /* jge: greater or equal (signed >=) */

loc_00035563: ;
    MEM8(0x347EB6) = LO8(eax);
    goto loc_0003556C;

loc_0003556A: ;
    edi = esi;

loc_0003556C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00035574u); RECOMP_ABI_CALL(0x00035100u, sub_00035100); /* call 0x00035100 */

loc_00035574: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003557Cu); RECOMP_ABI_CALL(0x00035130u, sub_00035130); /* call 0x00035130 */

loc_0003557C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00035584u); RECOMP_ABI_CALL(0x00035160u, sub_00035160); /* call 0x00035160 */

loc_00035584: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0003558A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00035590
 * Original: 0x00035590 - 0x000355BB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035590: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000355B9; /* je: equal / zero */

loc_00035598: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000355A9u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_000355A9: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000355B9; /* jne: not equal / not zero */

loc_000355B3: ;
    MEM32(esi) = 0;

loc_000355B9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000355C0
 * Original: 0x000355C0 - 0x000355CE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000355C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000355C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000355D0
 * Original: 0x000355D0 - 0x000355FD (45 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000355D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000355D0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000355DA; /* je: equal / zero */

loc_000355D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_000355DA: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    eax = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00035600
 * Original: 0x00035600 - 0x00035631 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035600: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = 0x3345B0;

loc_00035614: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003561Eu); RECOMP_ABI_CALL(0x000355D0u, sub_000355D0); /* call 0x000355D0 */

loc_0003561E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003562D; /* jne: not equal / not zero */

loc_00035622: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3346B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3346B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00035614; /* jl: less (signed <) */

loc_0003562D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035640
 * Original: 0x00035640 - 0x0003568C (76 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035640: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3345B0;

loc_00035657: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00035661u); RECOMP_ABI_CALL(0x000355D0u, sub_000355D0); /* call 0x000355D0 */

loc_00035661: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035671; /* jne: not equal / not zero */

loc_00035665: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3346B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3346B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00035657; /* jl: less (signed <) */

loc_00035671: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003567D; /* jne: not equal / not zero */

loc_00035676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003567D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x3345B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3345B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035690
 * Original: 0x00035690 - 0x000356A1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000356B0
 * Original: 0x000356B0 - 0x000356E4 (52 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000356B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000356B0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000356BA; /* je: equal / zero */

loc_000356B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_000356BA: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx) = 1;
    MEM32(ecx + 0x10) = edx;
    eax = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000356F0
 * Original: 0x000356F0 - 0x0003572B (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000356F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000356F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = 0x332830;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035707: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035714u); RECOMP_ABI_CALL(0x000356B0u, sub_000356B0); /* call 0x000356B0 */

loc_00035714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035726; /* jne: not equal / not zero */

loc_00035718: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x140 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00035707; /* jb: below (unsigned <) */

loc_00035726: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035730
 * Original: 0x00035730 - 0x0003575E (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035730: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003575C; /* je: equal / zero */

loc_00035739: ;
    edx = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esi + 8);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035753u); RECOMP_ABI_CALL(0x0005F2D0u, sub_0005F2D0); /* call 0x0005F2D0 */

loc_00035753: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0003575C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035760
 * Original: 0x00035760 - 0x0003576E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00035770
 * Original: 0x00035770 - 0x0003579D (45 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035770: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035798; /* jne: not equal / not zero */

loc_00035775: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    eax = 1;
    esp += 20; return; /* ret 16 */

loc_00035798: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000357A0
 * Original: 0x000357A0 - 0x000357C0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000357A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000357A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x332970;
    edi = 8;
    /* nop */

loc_000357B0: ;
    ecx = esi;
    PUSH32(esp, 0x000357B7u); RECOMP_ABI_CALL(0x00035730u, sub_00035730); /* call 0x00035730 */

loc_000357B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000357B0; /* jne: not equal / not zero */

loc_000357BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000357C0
 * Original: 0x000357C0 - 0x000357DC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000357C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000357C0: ;
    ecx = 0x332970;
    edx = 8;
    /* nop */

loc_000357D0: ;
    PUSH32(esp, 0x000357D5u); RECOMP_ABI_CALL(0x00035760u, sub_00035760); /* call 0x00035760 */

loc_000357D5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000357D0; /* jne: not equal / not zero */

loc_000357DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000357E0
 * Original: 0x000357E0 - 0x0003581B (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000357E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000357E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = 0x332970;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000357F7: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035804u); RECOMP_ABI_CALL(0x00035770u, sub_00035770); /* call 0x00035770 */

loc_00035804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035816; /* jne: not equal / not zero */

loc_00035808: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000357F7; /* jb: below (unsigned <) */

loc_00035816: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035820
 * Original: 0x00035820 - 0x00035866 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035820: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035859; /* je: equal / zero */

loc_00035829: ;
    eax = eax & 0x7FFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00035839; /* je: equal / zero */

loc_00035831: ;
    MEM32(esi) = 0;
    goto loc_00035859;

loc_00035839: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 8));
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035856u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_00035856: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035859: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00035864; /* js: sign (negative) */

loc_0003585E: ;
    MEM32(esi) = 0;

loc_00035864: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035870
 * Original: 0x00035870 - 0x00035881 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035870_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035870: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00035890
 * Original: 0x00035890 - 0x0003589A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035890(void)
{

loc_00035890: ;
    ecx = MEM32(eax * 4 + 0x180BB0);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000358A0
 * Original: 0x000358A0 - 0x000358D4 (52 bytes, 16 insns)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000358A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000358A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000358CF; /* jne: not equal / not zero */

loc_000358A5: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = edx;
    eax = 1;
    esp += 24; return; /* ret 20 */

loc_000358CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000358E0
 * Original: 0x000358E0 - 0x00035ADC (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000358E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000358E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000358FB; /* jge: greater or equal (signed >=) */

loc_000358E5: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x000358F3u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000358F3: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_000358FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00035920; /* jge: greater or equal (signed >=) */

loc_00035903: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_00035920: ;
    if (CMP_NE(_fa, _fb)) goto loc_00035929; /* jne: not equal / not zero */

loc_00035922: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035928u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_00035928: ;
    esp += 4; return; /* ret */

loc_00035929: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035938; /* jne: not equal / not zero */

loc_00035931: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035937u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_00035937: ;
    esp += 4; return; /* ret */

loc_00035938: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035947; /* jne: not equal / not zero */

loc_00035940: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035946u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_00035946: ;
    esp += 4; return; /* ret */

loc_00035947: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035956; /* jne: not equal / not zero */

loc_0003594F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035955u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_00035955: ;
    esp += 4; return; /* ret */

loc_00035956: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035965; /* jne: not equal / not zero */

loc_0003595E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035964u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_00035964: ;
    esp += 4; return; /* ret */

loc_00035965: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035974; /* jne: not equal / not zero */

loc_0003596D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035973u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_00035973: ;
    esp += 4; return; /* ret */

loc_00035974: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035983; /* jne: not equal / not zero */

loc_0003597C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035982u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_00035982: ;
    esp += 4; return; /* ret */

loc_00035983: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035992; /* jne: not equal / not zero */

loc_0003598B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035991u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00035991: ;
    esp += 4; return; /* ret */

loc_00035992: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359A1; /* jne: not equal / not zero */

loc_0003599A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359A0u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_000359A0: ;
    esp += 4; return; /* ret */

loc_000359A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359B0; /* jne: not equal / not zero */

loc_000359A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359AFu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_000359AF: ;
    esp += 4; return; /* ret */

loc_000359B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359BF; /* jne: not equal / not zero */

loc_000359B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359BEu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_000359BE: ;
    esp += 4; return; /* ret */

loc_000359BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359CE; /* jne: not equal / not zero */

loc_000359C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359CDu); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_000359CD: ;
    esp += 4; return; /* ret */

loc_000359CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359DD; /* jne: not equal / not zero */

loc_000359D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359DCu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_000359DC: ;
    esp += 4; return; /* ret */

loc_000359DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359EC; /* jne: not equal / not zero */

loc_000359E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359EBu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_000359EB: ;
    esp += 4; return; /* ret */

loc_000359EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000359FB; /* jne: not equal / not zero */

loc_000359F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000359FAu); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_000359FA: ;
    esp += 4; return; /* ret */

loc_000359FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A0A; /* jne: not equal / not zero */

loc_00035A03: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A09u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_00035A09: ;
    esp += 4; return; /* ret */

loc_00035A0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A19; /* jne: not equal / not zero */

loc_00035A12: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A18u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_00035A18: ;
    esp += 4; return; /* ret */

loc_00035A19: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A28; /* jne: not equal / not zero */

loc_00035A21: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A27u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_00035A27: ;
    esp += 4; return; /* ret */

loc_00035A28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A37; /* jne: not equal / not zero */

loc_00035A30: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A36u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_00035A36: ;
    esp += 4; return; /* ret */

loc_00035A37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A46; /* jne: not equal / not zero */

loc_00035A3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A45u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_00035A45: ;
    esp += 4; return; /* ret */

loc_00035A46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A55; /* jne: not equal / not zero */

loc_00035A4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A54u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_00035A54: ;
    esp += 4; return; /* ret */

loc_00035A55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A64; /* jne: not equal / not zero */

loc_00035A5D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A63u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_00035A63: ;
    esp += 4; return; /* ret */

loc_00035A64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A73; /* jne: not equal / not zero */

loc_00035A6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A72u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_00035A72: ;
    esp += 4; return; /* ret */

loc_00035A73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A82; /* jne: not equal / not zero */

loc_00035A7B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A81u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_00035A81: ;
    esp += 4; return; /* ret */

loc_00035A82: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035A91; /* jne: not equal / not zero */

loc_00035A8A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A90u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_00035A90: ;
    esp += 4; return; /* ret */

loc_00035A91: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035AA0; /* jne: not equal / not zero */

loc_00035A99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035A9Fu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_00035A9F: ;
    esp += 4; return; /* ret */

loc_00035AA0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035AAF; /* jne: not equal / not zero */

loc_00035AA8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035AAEu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_00035AAE: ;
    esp += 4; return; /* ret */

loc_00035AAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035ABE; /* jne: not equal / not zero */

loc_00035AB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035ABDu); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_00035ABD: ;
    esp += 4; return; /* ret */

loc_00035ABE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035ACD; /* jne: not equal / not zero */

loc_00035AC6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035ACCu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_00035ACC: ;
    esp += 4; return; /* ret */

loc_00035ACD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035ADB; /* jne: not equal / not zero */

loc_00035AD5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035ADBu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_00035ADB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035AE0
 * Original: 0x00035AE0 - 0x00035B00 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3346B8;
    edi = 0x10;
    /* nop */

loc_00035AF0: ;
    ecx = esi;
    PUSH32(esp, 0x00035AF7u); RECOMP_ABI_CALL(0x00035820u, sub_00035820); /* call 0x00035820 */

loc_00035AF7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00035AF0; /* jne: not equal / not zero */

loc_00035AFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035B00
 * Original: 0x00035B00 - 0x00035B1C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035B00_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035B00: ;
    ecx = 0x3346B8;
    edx = 0x10;
    /* nop */

loc_00035B10: ;
    PUSH32(esp, 0x00035B15u); RECOMP_ABI_CALL(0x00035870u, sub_00035870); /* call 0x00035870 */

loc_00035B15: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00035B10; /* jne: not equal / not zero */

loc_00035B1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035B20
 * Original: 0x00035B20 - 0x00035B5D (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035B20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = 0x3346B8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035B37: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035B46u); RECOMP_ABI_CALL(0x000358A0u, sub_000358A0); /* call 0x000358A0 */

loc_00035B46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035B58; /* jne: not equal / not zero */

loc_00035B4A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x140 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00035B37; /* jb: below (unsigned <) */

loc_00035B58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035B60
 * Original: 0x00035B60 - 0x00035BC7 (103 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035B60_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035B60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = esi;
    ecx = 0x3346B8;
    /* nop */

loc_00035B80: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035B92u); RECOMP_ABI_CALL(0x000358A0u, sub_000358A0); /* call 0x000358A0 */

loc_00035B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035BB3; /* jne: not equal / not zero */

loc_00035B96: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x140 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00035B80; /* jb: below (unsigned <) */

loc_00035BAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00035BB3: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + eax * 4;
    POP32(esp, ebp);
    eax = eax * 4 + 0x3346B8;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035BD0
 * Original: 0x00035BD0 - 0x00035BDA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035BD0(void)
{

loc_00035BD0: ;
    eax = MEM32(esp + 4);
    MEM32(0x33480C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00035BE0
 * Original: 0x00035BE0 - 0x00035C56 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035BE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00035C0B; /* jge: greater or equal (signed >=) */

loc_00035BE7: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00035BEE: ;
    edi = MEM32(0x1809A8);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1809A8) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x1809B0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00035C0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00035C19; /* jge: greater or equal (signed >=) */

loc_00035C10: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_00035BEE;

loc_00035C19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C28; /* jne: not equal / not zero */

loc_00035C1E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035C25u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_00035C25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00035C28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C37; /* jne: not equal / not zero */

loc_00035C2D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035C34u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_00035C34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00035C37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C46; /* jne: not equal / not zero */

loc_00035C3C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035C43u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_00035C43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00035C46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00035C53; /* jg: greater (signed >) */

loc_00035C4B: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035C53u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_00035C53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035C60
 * Original: 0x00035C60 - 0x00035C76 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C60_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{

loc_00035C60: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x334808) = LO16(eax);
    MEM32(0x334804) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00035C80
 * Original: 0x00035C80 - 0x00035C8A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035C80: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035C90
 * Original: 0x00035C90 - 0x00035D06 (118 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035C90: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035C9Bu); RECOMP_ABI_CALL(0x00035C80u, sub_00035C80); /* call 0x00035C80 */

loc_00035C9B: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    PUSH32(esp, 0x00035CA6u); RECOMP_ABI_CALL(0x00035C80u, sub_00035C80); /* call 0x00035C80 */

loc_00035CA6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = edi;
    if (CMP_B(_fa, _fb)) goto loc_00035CAE; /* jb: below (unsigned <) */

loc_00035CAC: ;
    ecx = eax;

loc_00035CAE: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = edx;
    ecx = ~ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00035CCA; /* jbe: below or equal (unsigned <=) */

loc_00035CC0: ;
    esi = ecx;
    esi = esi | 0x55555555;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00035CD2;

loc_00035CCA: ;
    esi = edx;
    esi = esi & 0x55555555;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00035CD2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00035CE0; /* jae: above or equal (unsigned >=) */

loc_00035CD6: ;
    ecx = ecx | 0xAAAAAAAAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    goto loc_00035CE6;

loc_00035CE0: ;
    edx = edx & 0xAAAAAAAAu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00035CE6: ;
    ecx = eax + edi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esp + 0x10);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035D10
 * Original: 0x00035D10 - 0x00035D36 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035D10: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035D17: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00035D2A; /* jne: not equal / not zero */

loc_00035D1B: ;
    goto loc_00035D20;

    /* nop */

loc_00035D20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035D2A; /* je: equal / zero */

loc_00035D24: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00035D20; /* je: equal / zero */

loc_00035D2A: ;
    MEM32(esi + ecx * 4) = eax;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00035D17; /* jb: below (unsigned <) */

loc_00035D35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035D36
 * Original: 0x00035D36 - 0x00035D7D (71 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035D36: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0xCC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(MEM32(ecx + 0xD0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0xD0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = edx;
    if (CMP_A(_fa, _fb)) goto loc_00035D57; /* ja: above (unsigned >) */

loc_00035D55: ;
    ebx = esi;

loc_00035D57: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00035D77; /* jb: below (unsigned <) */

loc_00035D5E: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035D61: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00035D68; /* je: equal / zero */

loc_00035D65: ;
    eax = eax | MEM32(ecx + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00035D68: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00035D6E; /* je: equal / zero */

loc_00035D6C: ;
    eax = eax | MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00035D6E: ;
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00035D61; /* jbe: below or equal (unsigned <=) */

loc_00035D77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00035D80
 * Original: 0x00035D80 - 0x00035DE2 (98 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035D80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xCC) = edx;
    MEM32(edi + 0xD0) = edx;
    MEM32(edi + 0xC8) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 0xD4) = eax;
    MEM32(edi + 0xD8) = ecx;
    PUSH32(esp, 0x00035DC2u); RECOMP_ABI_CALL(0x00035C90u, sub_00035C90); /* call 0x00035C90 */

loc_00035DC2: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 8;
    PUSH32(esp, 0x00035DD1u); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_00035DD1: ;
    edx = MEM32(esp + 0x10);
    esi = edi + 0x68;
    PUSH32(esp, 0x00035DDDu); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_00035DDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00035DF0
 * Original: 0x00035DF0 - 0x00035E1B (43 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035DF0(void)
{

loc_00035DF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xD4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xD8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xD0) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00035E20
 * Original: 0x00035E20 - 0x00035E37 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E20(void)
{

loc_00035E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xD0) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00035E40
 * Original: 0x00035E40 - 0x00035E4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E40(void)
{

loc_00035E40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035E50
 * Original: 0x00035E50 - 0x00035E76 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E50(void)
{

loc_00035E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 4;
    MEM32(esi) = 0;
    PUSH32(esp, 0x00035E65u); RECOMP_ABI_CALL(0x00035D80u, sub_00035D80); /* call 0x00035D80 */

loc_00035E65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0xE0;
    PUSH32(esp, 0x00035E74u); RECOMP_ABI_CALL(0x00035D80u, sub_00035D80); /* call 0x00035D80 */

loc_00035E74: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035E80
 * Original: 0x00035E80 - 0x00035EB5 (53 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035E80: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035EB0; /* jne: not equal / not zero */

loc_00035E87: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = 1;
    edi = eax + 4;
    ecx = 0x37;
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
    esi = MEM32(esp + 0x10);
    edi = eax + 0xE0;
    ecx = 0x37;
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

loc_00035EB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00035EC0
 * Original: 0x00035EC0 - 0x00035EE3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3329F0;
    edi = 0x10;
    /* nop */

loc_00035ED0: ;
    ecx = esi;
    PUSH32(esp, 0x00035ED7u); RECOMP_ABI_CALL(0x00035E50u, sub_00035E50); /* call 0x00035E50 */

loc_00035ED7: ;
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1BC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00035ED0; /* jne: not equal / not zero */

loc_00035EE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035EF0
 * Original: 0x00035EF0 - 0x00035F18 (40 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035EF0(void)
{

loc_00035EF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(0x334820) = 1;
    MEM8(0x3347FC) = LO8(eax);
    MEM8(0x3347FD) = LO8(ecx);
    MEM8(0x3347FE) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035F20
 * Original: 0x00035F20 - 0x00035F21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F20(void)
{

loc_00035F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F30
 * Original: 0x00035F30 - 0x00035F31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F30(void)
{

loc_00035F30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F40
 * Original: 0x00035F40 - 0x00035F41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F40(void)
{

loc_00035F40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F50
 * Original: 0x00035F50 - 0x00035F51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F50(void)
{

loc_00035F50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F60
 * Original: 0x00035F60 - 0x00035F61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F60(void)
{

loc_00035F60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F70
 * Original: 0x00035F70 - 0x00035F71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F70(void)
{

loc_00035F70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F80
 * Original: 0x00035F80 - 0x00035F83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035F80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00035F90
 * Original: 0x00035F90 - 0x00035FA4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035F90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035F9Fu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00035F9F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00035FB0
 * Original: 0x00035FB0 - 0x00035FC4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035FB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00035FBFu); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_00035FBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00035FD0
 * Original: 0x00035FD0 - 0x00036099 (201 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035FD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00036009; /* jge: greater or equal (signed >=) */

loc_00035FD9: ;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x1809A8);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = esi;
    MEM32(ecx * 4 + 0x1809B0) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00036009: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00036034; /* jge: greater or equal (signed >=) */

loc_0003600E: ;
    ecx = MEM32(eax * 4 + 0x22BDF0);
    MEM32(0x1809A8) = MEM32(0x1809A8) | ecx;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 4);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x1809B0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00036034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003604D; /* jne: not equal / not zero */

loc_00036039: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00036048u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_00036048: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0003604D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036066; /* jne: not equal / not zero */

loc_00036052: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00036061u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_00036061: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00036066: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003607F; /* jne: not equal / not zero */

loc_0003606B: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003607Au); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_0003607A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0003607F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00036094; /* jg: greater (signed >) */

loc_00036084: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00036094u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_00036094: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000360A0
 * Original: 0x000360A0 - 0x000360CD (45 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000360A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000360A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax * 8 + 0x22C078);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(eax * 8 + 0x22C07C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax * 8 + 0x22C07C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000360C8u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000360C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000360D0
 * Original: 0x000360D0 - 0x000360DF (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000360D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000360D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000360DAu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_000360DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000360E0
 * Original: 0x000360E0 - 0x000360F9 (25 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000360E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000360E0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000360F4u); RECOMP_ABI_CALL(0x00167670u, sub_00167670); /* call 0x00167670 */

loc_000360F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00036100
 * Original: 0x00036100 - 0x00036114 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00036100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036100: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003610Fu); RECOMP_ABI_CALL(0x00164EB0u, sub_00164EB0); /* call 0x00164EB0 */

loc_0003610F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00036120
 * Original: 0x00036120 - 0x00036121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036120(void)
{

loc_00036120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036130
 * Original: 0x00036130 - 0x00036153 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00036130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036130: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003614Eu); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_0003614E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00036160
 * Original: 0x00036160 - 0x00036165 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00036160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036160: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00036170
 * Original: 0x00036170 - 0x00036171 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036170(void)
{

loc_00036170: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036180
 * Original: 0x00036180 - 0x0003619A (26 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00036180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036180: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003618Fu); RECOMP_ABI_CALL(0x00160590u, sub_00160590); /* call 0x00160590 */

loc_0003618F: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000361A0
 * Original: 0x000361A0 - 0x000361A5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000361A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000361A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000361B0
 * Original: 0x000361B0 - 0x000361EF (63 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000361B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000361B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000361ED; /* je: equal / zero */

loc_000361B8: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000361C3u); RECOMP_ABI_CALL(0x00160590u, sub_00160590); /* call 0x00160590 */

loc_000361C3: ;
    edx = MEM32(esi + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000361E7; /* jbe: below or equal (unsigned <=) */

loc_000361CC: ;
    PUSH32(esp, edi);
    /* nop */

loc_000361D0: ;
    edx = MEM32(esi + 8);
    edi = MEM32(esi + 0xC);
    edx = MEM32(edx + ecx * 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4) = edx;
    edx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000361D0; /* jb: below (unsigned <) */

loc_000361E6: ;
    POP32(esp, edi);

loc_000361E7: ;
    MEM32(esi) = 0;

loc_000361ED: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000361F0
 * Original: 0x000361F0 - 0x00036220 (48 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000361F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000361F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000361F6u); RECOMP_ABI_CALL(0x0009E420u, sub_0009E420); /* call 0x0009E420 */

loc_000361F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00036201u); RECOMP_ABI_CALL(0x00167670u, sub_00167670); /* call 0x00167670 */

loc_00036201: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003620Au); RECOMP_ABI_CALL(0x00164EB0u, sub_00164EB0); /* call 0x00164EB0 */

loc_0003620A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00036210: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00036218u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00036218: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036210; /* jl: less (signed <) */

loc_0003621E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036220
 * Original: 0x00036220 - 0x00036240 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036220: ;
    ecx = 0x332830;
    edx = 0x10;
    /* nop */

loc_00036230: ;
    PUSH32(esp, 0x00036235u); RECOMP_ABI_CALL(0x00035690u, sub_00035690); /* call 0x00035690 */

loc_00036235: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00036230; /* jne: not equal / not zero */

loc_0003623B: ;
    g_seh_ebp = ebp; sub_00035EC0(); return; /* tail jmp 0x00035EC0 */

}

/**
 * sub_00036240
 * Original: 0x00036240 - 0x000363FA (442 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036240: ;
    eax = MEM32(0x33480C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000363F6; /* je: equal / zero */

loc_00036250: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x180CD8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x180CA8);
    ebp = 1;
    PUSH32(esp, edi);
    edi = MEM32(0x180CAC);
    edx = ebp;
    ecx = 0x40304;
    MEM32(0x334804) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x44340000;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x43F00000;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0x44340000;
    MEM32(esp + 0x44) = 0x43F00000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    PUSH32(esp, 0x00036301u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00036301: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = ebp;
    PUSH32(esp, 0x00036316u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00036316: ;
    edx = ebp;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0003632Cu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0003632C: ;
    edx = 0x800B;
    ecx = 0x40350;
    MEM32(0x180CAC) = ebp;
    PUSH32(esp, 0x00036341u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00036341: ;
    PUSH32(esp, 0xFF606060u);
    MEM32(0x180CD8) = 0x800B;
    PUSH32(esp, 0x00036355u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_00036355: ;
    ecx = 2;
    MEM32(0x1809E0) = ecx;
    MEM32(0x1809F0) = ecx;
    ecx = MEM32(0x1809A8);
    eax = 3;
    PUSH32(esp, 0);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(0x1809E8) = eax;
    MEM32(0x1809EC) = ebp;
    MEM32(0x1809F8) = eax;
    MEM32(0x1809A8) = ecx;
    MEM32(0x1809FC) = ebp;
    PUSH32(esp, 0x0003639Cu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_0003639C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000363A5u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000363A5: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000363ACu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_000363AC: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000363BCu); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000363BC: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0x000363C8u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000363C8: ;
    edx = edi;
    ecx = 0x40348;
    MEM32(0x180CA8) = esi;
    PUSH32(esp, 0x000363DAu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000363DA: ;
    edx = ebx;
    ecx = 0x40350;
    MEM32(0x180CAC) = edi;
    PUSH32(esp, 0x000363ECu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000363EC: ;
    MEM32(0x180CD8) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000363F6: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036400
 * Original: 0x00036400 - 0x0003661E (542 bytes, 113 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036400: ;
    eax = MEM32(0x334804);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003661A; /* je: equal / zero */

loc_00036410: ;
    PUSH32(esp, esi);
    esi = MEM32(0x334808);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    MEM32(0x334804) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00036619; /* je: equal / zero */

loc_0003642A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x180CAC);
    PUSH32(esp, ebp);
    ebp = MEM32(0x180CD8);
    PUSH32(esp, edi);
    edi = MEM32(0x180CA8);
    edx = 1;
    ecx = 0x40304;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x44340000;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x43F00000;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0x44340000;
    MEM32(esp + 0x44) = 0x43F00000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    PUSH32(esp, 0x000364CEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000364CE: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = 1;
    PUSH32(esp, 0x000364E7u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000364E7: ;
    edx = 1;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x00036500u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00036500: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    MEM32(0x180CAC) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_0003653B; /* jge: greater or equal (signed >=) */

loc_0003650F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFF01) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFF01 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003651B; /* jge: greater or equal (signed >=) */

loc_00036516: ;
    esi = 0xFFFFFF01u;

loc_0003651B: ;
    edx = 0x800B;
    ecx = 0x40350;
    PUSH32(esp, 0x0003652Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0003652A: ;
    eax = SX16(LO16(esi));
    MEM32(0x180CD8) = 0x800B;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_00036557;

loc_0003653B: ;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0x0003654Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0003654A: ;
    MEM32(0x180CD8) = 0x8006;
    eax = SX16(LO16(esi));

loc_00036557: ;
    ecx = eax;
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00036574u); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_00036574: ;
    ecx = 2;
    MEM32(0x1809E0) = ecx;
    MEM32(0x1809F0) = ecx;
    ecx = MEM32(0x1809A8);
    eax = 3;
    edx = 1;
    PUSH32(esp, 0);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(0x1809E8) = eax;
    MEM32(0x1809EC) = edx;
    MEM32(0x1809F8) = eax;
    MEM32(0x1809A8) = ecx;
    MEM32(0x1809FC) = edx;
    PUSH32(esp, 0x000365C0u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000365C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000365C9u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000365C9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000365D0u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_000365D0: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000365E0u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000365E0: ;
    edx = edi;
    ecx = 0x40344;
    PUSH32(esp, 0x000365ECu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000365EC: ;
    edx = ebx;
    ecx = 0x40348;
    MEM32(0x180CA8) = edi;
    PUSH32(esp, 0x000365FEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000365FE: ;
    edx = ebp;
    ecx = 0x40350;
    MEM32(0x180CAC) = ebx;
    PUSH32(esp, 0x00036610u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00036610: ;
    POP32(esp, edi);
    MEM32(0x180CD8) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00036619: ;
    POP32(esp, esi);

loc_0003661A: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036620
 * Original: 0x00036620 - 0x000366D2 (178 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036620: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ecx + 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00036640u); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_00036640: ;
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi + 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003665Bu); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_0003665B: ;
    eax = MEM32(edi + 0xD8);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x24) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_000366CA; /* jbe: below or equal (unsigned <=) */

loc_00036677: ;
    eax = MEM32(edi + 0xD4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_00036680: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000366BD; /* jbe: below or equal (unsigned <=) */

loc_00036686: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0003668Fu); RECOMP_ABI_CALL(0x00035D36u, sub_00035D36); /* call 0x00035D36 */

loc_0003668F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, esi);
    ebp = ebp >> 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0003669Eu); RECOMP_ABI_CALL(0x00035D36u, sub_00035D36); /* call 0x00035D36 */

loc_0003669E: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO16(edx, MEM16(ecx + ebp * 2));
    ecx = MEM32(esp + 0x14);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + eax * 2) = LO16(edx);
    eax = MEM32(edi + 0xD4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00036686; /* jb: below (unsigned <) */

loc_000366BD: ;
    ecx = MEM32(edi + 0xD8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00036680; /* jb: below (unsigned <) */

loc_000366C8: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000366CA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000366E0
 * Original: 0x000366E0 - 0x000366FF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000366E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000366E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000366FD; /* je: equal / zero */

loc_000366E8: ;
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x000366F7u); RECOMP_ABI_CALL(0x00036620u, sub_00036620); /* call 0x00036620 */

loc_000366F7: ;
    MEM32(esi) = 0;

loc_000366FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036700
 * Original: 0x00036700 - 0x0003670F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036700(void)
{

loc_00036700: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003670Eu); RECOMP_ABI_CALL(0x00036620u, sub_00036620); /* call 0x00036620 */

loc_0003670E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036710
 * Original: 0x00036710 - 0x00036733 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036710: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3329F0;
    edi = 0x10;
    /* nop */

loc_00036720: ;
    ecx = esi;
    PUSH32(esp, 0x00036727u); RECOMP_ABI_CALL(0x000366E0u, sub_000366E0); /* call 0x000366E0 */

loc_00036727: ;
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1BC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00036720; /* jne: not equal / not zero */

loc_00036730: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036740
 * Original: 0x00036740 - 0x000368E7 (423 bytes, 87 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036740: ;
    eax = MEM32(0x334820);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000368E3; /* je: equal / zero */

loc_00036750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x180CA8);
    ebx = 1;
    PUSH32(esp, edi);
    edi = MEM32(0x180CAC);
    edx = ebx;
    ecx = 0x40304;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x44340000;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0x43F00000;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0x44340000;
    MEM32(esp + 0x40) = 0x43F00000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0x3F800000;
    PUSH32(esp, 0x000367F0u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000367F0: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x180C9C) = ebx;
    PUSH32(esp, 0x00036805u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00036805: ;
    edx = ebx;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x0003681Bu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_0003681B: ;
    eax = ZX8(MEM8(0x3347FC));
    ecx = ZX8(MEM8(0x3347FD));
    edx = ZX8(MEM8(0x3347FE));
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(0x180CAC) = ebx;
    PUSH32(esp, 0x0003684Bu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0003684B: ;
    ecx = 2;
    MEM32(0x1809E0) = ecx;
    MEM32(0x1809F0) = ecx;
    ecx = MEM32(0x1809A8);
    eax = 3;
    PUSH32(esp, 0);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(0x1809E8) = eax;
    MEM32(0x1809EC) = ebx;
    MEM32(0x1809F8) = eax;
    MEM32(0x1809A8) = ecx;
    MEM32(0x1809FC) = ebx;
    PUSH32(esp, 0x00036892u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00036892: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003689Bu); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_0003689B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000368A2u); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_000368A2: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000368B2u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000368B2: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0x000368BEu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000368BE: ;
    edx = edi;
    ecx = 0x40348;
    MEM32(0x180CA8) = esi;
    PUSH32(esp, 0x000368D0u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000368D0: ;
    MEM32(0x180CAC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x334820) = 0;
    POP32(esp, ebx);

loc_000368E3: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000368F0
 * Original: 0x000368F0 - 0x00036A89 (409 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000368F0(void)
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

loc_000368F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = 0x3345B0;
    /* nop */

loc_00036900: ;
    PUSH32(esp, 0x00036905u); RECOMP_ABI_CALL(0x000355C0u, sub_000355C0); /* call 0x000355C0 */

loc_00036905: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3346B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3346B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036900; /* jl: less (signed <) */

loc_00036910: ;
    PUSH32(esp, 0x00036915u); RECOMP_ABI_CALL(0x000357C0u, sub_000357C0); /* call 0x000357C0 */

loc_00036915: ;
    PUSH32(esp, 0x0003691Au); RECOMP_ABI_CALL(0x00035B00u, sub_00035B00); /* call 0x00035B00 */

loc_0003691A: ;
    /* nop */

loc_00036920: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00036927u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00036927: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036952; /* jne: not equal / not zero */

loc_00036933: ;
    ecx = 0x3345B0;

loc_00036938: ;
    PUSH32(esp, 0x0003693Du); RECOMP_ABI_CALL(0x000355C0u, sub_000355C0); /* call 0x000355C0 */

loc_0003693D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3346B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3346B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036938; /* jl: less (signed <) */

loc_00036948: ;
    PUSH32(esp, 0x0003694Du); RECOMP_ABI_CALL(0x000357C0u, sub_000357C0); /* call 0x000357C0 */

loc_0003694D: ;
    PUSH32(esp, 0x00036952u); RECOMP_ABI_CALL(0x00035B00u, sub_00035B00); /* call 0x00035B00 */

loc_00036952: ;
    esi = 0x3345B0;

loc_00036957: ;
    ecx = esi;
    PUSH32(esp, 0x0003695Eu); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_0003695E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3346B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3346B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036957; /* jl: less (signed <) */

loc_00036969: ;
    PUSH32(esp, 0x0003696Eu); RECOMP_ABI_CALL(0x00036240u, sub_00036240); /* call 0x00036240 */

loc_0003696E: ;
    PUSH32(esp, 0x00036973u); RECOMP_ABI_CALL(0x000357A0u, sub_000357A0); /* call 0x000357A0 */

loc_00036973: ;
    PUSH32(esp, 0x00036978u); RECOMP_ABI_CALL(0x00035AE0u, sub_00035AE0); /* call 0x00035AE0 */

loc_00036978: ;
    PUSH32(esp, 0x0003697Du); RECOMP_ABI_CALL(0x00036400u, sub_00036400); /* call 0x00036400 */

loc_0003697D: ;
    PUSH32(esp, 0x00036982u); RECOMP_ABI_CALL(0x00085900u, sub_00085900); /* call 0x00085900 */

loc_00036982: ;
    eax = MEM32(0x3047BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036A7F; /* je: equal / zero */

loc_0003698F: ;
    PUSH32(esp, 0x00036994u); RECOMP_ABI_CALL(0x0006ACA0u, sub_0006ACA0); /* call 0x0006ACA0 */

loc_00036994: ;
    fp_push(MEMF(0x30F9B0)); /* fld float */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    PUSH32(esp, 0xFF00FFFFu);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 8;
    fp_push(MEMF(0x30AAB4)); /* fld float */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    ecx = esp + 0x1C;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x3062A0)); /* fld float */
    MEM32(esp + 0x14) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C100)); /* fadd dword ptr [0x22c100] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000369DCu); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_000369DC: ;
    fp_push(MEMF(0x30F9B0)); /* fld float */
    PUSH32(esp, 0xFF00FFFFu);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    edx = esp + 0x14;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(0x3062A0)); /* fld float */
    eax = esp + 0x28;
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30AAB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C100)); /* fadd dword ptr [0x22c100] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30AAB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C100)); /* fsub dword ptr [0x22c100] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00036A2Cu); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_00036A2C: ;
    fp_push(MEMF(0x3062A0)); /* fld float */
    PUSH32(esp, 0xFF00FFFFu);
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    ecx = esp + 0x20;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x30AAB4)); /* fld float */
    edx = esp + 0x34;
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30F9B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C100)); /* fadd dword ptr [0x22c100] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30F9B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x22C100)); /* fsub dword ptr [0x22c100] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00036A7Cu); RECOMP_ABI_CALL(0x00068ED0u, sub_00068ED0); /* call 0x00068ED0 */

loc_00036A7C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00036A7F: ;
    PUSH32(esp, 0x00036A84u); RECOMP_ABI_CALL(0x00036740u, sub_00036740); /* call 0x00036740 */

loc_00036A84: ;
    goto loc_00036920;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00036A90
 * Original: 0x00036A90 - 0x00036AB4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036A90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x332830;
    edi = 0x10;
    /* nop */

loc_00036AA0: ;
    ecx = esi;
    PUSH32(esp, 0x00036AA7u); RECOMP_ABI_CALL(0x000361B0u, sub_000361B0); /* call 0x000361B0 */

loc_00036AA7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00036AA0; /* jne: not equal / not zero */

loc_00036AAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00036710(); return; /* tail jmp 0x00036710 */

}

/**
 * sub_00036AC0
 * Original: 0x00036AC0 - 0x00036AC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036AC0(void)
{

loc_00036AC0: ;
    eax = MEM32(0x91E27C);
    esp += 4; return; /* ret */

}

/**
 * sub_00036AD0
 * Original: 0x00036AD0 - 0x00036BDB (267 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036AD0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036AD0: ;
    eax = MEM32(0x335ADC);
    ecx = MEM32(0x335AD4);
    PUSH32(esp, 0x3358D8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x3358D8) = 0;
    MEM32(0x3358DC) = 0;
    MEM32(0x3358E0) = 0;
    MEM32(0x3358E4) = 0x3F800000;
    MEM32(0x3358E8) = 0;
    MEM32(0x3358EC) = 0;
    MEM32(0x3358F0) = 0x4485F418;
    MEM32(0x3358F4) = 0;
    MEM32(0x3358F8) = 0;
    MEM32(0x3358FC) = 0x3F800000;
    MEM32(0x335900) = 0x3F800000;
    MEM32(0x335904) = 0;
    MEM32(0x335908) = 0;
    MEM32(0x33590C) = 0x44000000;
    MEM32(0x335910) = 0;
    MEM32(0x335914) = 0x3F800000;
    MEM32(0x335918) = 0;
    MEM32(0x33591C) = 0x3F800000;
    MEM32(0x335920) = 0x4485F418;
    MEM32(0x335924) = 0x44000000;
    MEM32(0x335928) = 0;
    MEM32(0x33592C) = 0x3F800000;
    MEM32(0x335930) = 0x3F800000;
    MEM32(0x335934) = 0x3F800000;
    PUSH32(esp, 0x00036BD7u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00036BD7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036BE0
 * Original: 0x00036BE0 - 0x00036C0F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036BE0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036BE0: ;
    PUSH32(esp, 0x00036BE5u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00036BE5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x30EBFC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = MEM32(edx * 4 + 0x2C6720);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00036C07u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00036C07: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003AB20(); return; /* tail jmp 0x0003AB20 */

}

/**
 * sub_00036C10
 * Original: 0x00036C10 - 0x00036C76 (102 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036C10: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 2;
    MEM32(esp + 4) = 3;
    MEM32(esp + 8) = 5;
    MEM32(esp + 0xC) = 6;
    MEM32(esp + 0x10) = 7;
    MEM32(esp + 0x14) = 8;
    PUSH32(esp, 0x00036C47u); RECOMP_ABI_CALL(0x00150390u, sub_00150390); /* call 0x00150390 */

loc_00036C47: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x30EBFC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = MEM32(esp + edx * 4 + 8);
    ecx = MEM32(edx * 4 + 0x2C6720);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00036C6Du); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_00036C6D: ;
    PUSH32(esp, 0x00036C72u); RECOMP_ABI_CALL(0x0003AB20u, sub_0003AB20); /* call 0x0003AB20 */

loc_00036C72: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036C80
 * Original: 0x00036C80 - 0x00036CFD (125 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036C80: ;
    eax = 0x24FFFFFF;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036CC5; /* je: equal / zero */

loc_00036C8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036CC5; /* je: equal / zero */

loc_00036C8F: ;
    PUSH32(esp, 4);
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC0 (8-bit) */
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xD);
    if (CMP_NE(_fa, _fb)) goto loc_00036CB0; /* jne: not equal / not zero */

loc_00036C9B: ;
    PUSH32(esp, 0x22D040);
    PUSH32(esp, 0x00036CA5u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_00036CA5: ;
    MEM8(0x334832) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00036CB0: ;
    PUSH32(esp, 0x22D038);
    PUSH32(esp, 0x00036CBAu); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_00036CBA: ;
    MEM8(0x334832) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00036CC5: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x22D028);
    PUSH32(esp, 0x00036CD5u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_00036CD5: ;
    eax = 1;
    MEM16(0x257EFFFE) = LO16(eax);
    MEM32(0x25FE00B0) = 0x23301FF0;
    MEM32(0x25FE00B8) = 0x13;
    MEM8(0x334832) = LO8(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036D00
 * Original: 0x00036D00 - 0x00036EF9 (505 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036D00_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036D00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00036D07u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00036D07: ;
    PUSH32(esp, 0x22D050);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00036D15u); RECOMP_ABI_CALL(0x00069550u, sub_00069550); /* call 0x00069550 */

loc_00036D15: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x335998) = 0x41C00000;
    MEM32(0x33599C) = 0;
    MEM32(0x3359A0) = 0;
    MEM32(0x3359A4) = 0x3F800000;
    MEM32(0x3359A8) = 0;
    MEM32(0x3359AC) = 0;
    MEM32(0x3359B0) = 0x442E0000;
    MEM32(0x3359B4) = 0;
    MEM32(0x3359B8) = 0;
    MEM32(0x3359BC) = 0x3F800000;
    MEM32(0x3359C0) = 0x3F800000;
    MEM32(0x3359C4) = 0;
    MEM32(0x3359C8) = 0x41C00000;
    MEM32(0x3359CC) = 0x43F00000;
    MEM32(0x3359D0) = 0;
    MEM32(0x3359D4) = 0x3F800000;
    MEM32(0x3359D8) = 0;
    MEM32(0x3359DC) = 0x3F800000;
    MEM32(0x3359E0) = 0x442E0000;
    MEM32(0x3359E4) = 0x43F00000;
    MEM32(0x3359E8) = 0;
    MEM32(0x3359EC) = 0x3F800000;
    MEM32(0x3359F0) = 0x3F800000;
    MEM32(0x3359F4) = 0x3F800000;
    MEM32(0x3359F8) = 0x43480000;
    MEM32(0x3359FC) = 0x43A04000;
    MEM32(0x335A00) = 0;
    MEM32(0x335A04) = 0x3F800000;
    MEM32(0x335A08) = 0;
    MEM32(0x335A0C) = 0x3F000000;
    MEM32(0x335A10) = 0x44020000;
    MEM32(0x335A14) = 0x43A04000;
    MEM32(0x335A18) = 0;
    MEM32(0x335A1C) = 0x3F800000;
    MEM32(0x335A20) = 0x3F200000;
    MEM32(0x335A24) = 0x3F000000;
    MEM32(0x335A28) = 0x43480000;
    MEM32(0x335A2C) = 0x43B04000;
    MEM32(0x335A30) = 0;
    MEM32(0x335A34) = 0x3F800000;
    MEM32(0x335A38) = 0;
    MEM32(0x335A3C) = 0x3F100000;
    MEM32(0x335A40) = 0x44020000;
    MEM32(0x335A44) = 0x43B04000;
    MEM32(0x335A48) = 0;
    MEM32(0x335A4C) = 0x3F800000;
    MEM32(0x335A50) = 0x3F200000;
    MEM32(0x335A54) = 0x3F100000;
    esp += 4; return; /* ret */

}

/**
 * sub_00036F00
 * Original: 0x00036F00 - 0x00036F47 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00036F00_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
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

loc_00036F00: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x3359F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    PUSH32(esp, 0);
    PUSH32(esp, 0x335958);
    MEMF(0x335A0C) = (float)fp_top(); /* fst */
    MEMF(0x335A24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C6EC)); /* fadd dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    MEMF(0x335A3C) = (float)fp_top(); /* fst */
    MEMF(0x335A54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00036F43u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00036F43: ;
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
 * sub_00036F50
 * Original: 0x00036F50 - 0x00036F97 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00036F50(void)
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

loc_00036F50: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x3359F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    PUSH32(esp, 0);
    PUSH32(esp, 0x335958);
    MEMF(0x335A0C) = (float)fp_top(); /* fst */
    MEMF(0x335A24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C6EC)); /* fadd dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0DC)); /* fmul dword ptr [0x22c0dc] */
    MEMF(0x335A3C) = (float)fp_top(); /* fst */
    MEMF(0x335A54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00036F93u); RECOMP_ABI_CALL(0x00035600u, sub_00035600); /* call 0x00035600 */

loc_00036F93: ;
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
 * sub_00036FA0
 * Original: 0x00036FA0 - 0x00036FA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FA0(void)
{

loc_00036FA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036FB0
 * Original: 0x00036FB0 - 0x00036FB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FB0(void)
{

loc_00036FB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036FC0
 * Original: 0x00036FC0 - 0x00036FC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FC0(void)
{

loc_00036FC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036FD0
 * Original: 0x00036FD0 - 0x00036FD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FD0(void)
{

loc_00036FD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036FE0
 * Original: 0x00036FE0 - 0x00036FE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FE0(void)
{

loc_00036FE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036FF0
 * Original: 0x00036FF0 - 0x00036FF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FF0(void)
{

loc_00036FF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037000
 * Original: 0x00037000 - 0x00037001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037000(void)
{

loc_00037000: ;
    esp += 4; return; /* ret */

}
