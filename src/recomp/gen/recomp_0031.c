/**
 * DOAU1 - Recompiled code chunk 31
 * Functions: 250 (0x00119DA0 - 0x0011EC40)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00119DA0
 * Original: 0x00119DA0 - 0x00119DBB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119DA0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119DB7u); RECOMP_ABI_CALL(0x00119D30u, sub_00119D30); /* call 0x00119D30 */

loc_00119DB7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119DC0
 * Original: 0x00119DC0 - 0x00119E8D (205 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119DC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x70);
    ebp = MEM32(esi + 0x68);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x58);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00119DFDu); RECOMP_ABI_CALL(0x0011B050u, sub_0011B050); /* call 0x0011B050 */

loc_00119DFD: ;
    ecx = MEM32(esi + 0x50);
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x18);
    eax = eax + edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00119E2D; /* jg: greater (signed >) */

loc_00119E21: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx + 1;
    goto loc_00119E31;

loc_00119E2D: ;
    eax = MEM32(esp + 0x28);

loc_00119E31: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x1C));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x90) = eax;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esi + 0x94) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00119E85; /* jl: less (signed <) */

loc_00119E4C: ;
    ecx = MEM32(esi + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00119E72; /* jne: not equal / not zero */

loc_00119E57: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119E67u); RECOMP_ABI_CALL(0x00119D60u, sub_00119D60); /* call 0x00119D60 */

loc_00119E67: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00119E72: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00119E82u); RECOMP_ABI_CALL(0x00119DA0u, sub_00119DA0); /* call 0x00119DA0 */

loc_00119E82: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119E85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119E90
 * Original: 0x00119E90 - 0x00119F24 (148 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119E90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119ECE; /* jne: not equal / not zero */

loc_00119E9B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119EA4u); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_00119EA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119ECE; /* jne: not equal / not zero */

loc_00119EAB: ;
    ecx = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x7C);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x00119EBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119EBBu); } /* indirect call */
    }

loc_00119EBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119EC4u); RECOMP_ABI_CALL(0x00119C60u, sub_00119C60); /* call 0x00119C60 */

loc_00119EC4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 2;

loc_00119ECE: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119F22; /* jne: not equal / not zero */

loc_00119ED4: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00119EDDu); RECOMP_ABI_CALL(0x0011B070u, sub_0011B070); /* call 0x0011B070 */

loc_00119EDD: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119EE6u); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_00119EE6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119F22; /* jne: not equal / not zero */

loc_00119EEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119EF4u); RECOMP_ABI_CALL(0x00119DC0u, sub_00119DC0); /* call 0x00119DC0 */

loc_00119EF4: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00119EFDu); RECOMP_ABI_CALL(0x0011B030u, sub_0011B030); /* call 0x0011B030 */

loc_00119EFD: ;
    edx = MEM32(esi + 0x90);
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00119F18u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00119F12u); } /* indirect call */
    }

loc_00119F18: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_00119F22: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119F30
 * Original: 0x00119F30 - 0x00119F73 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119F30: ;
    ecx = MEM32(esi + 0xE8);
    eax = MEM32(esi + 0x94);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x90);
    if ((_fas >= 0)) goto loc_00119F4B; /* jns: not sign (positive) */

loc_00119F46: ;
    _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119F4B: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xF4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xF0); PUSH32(esp, 0x00119F63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119F5Du); } /* indirect call */
    }

loc_00119F63: ;
    ecx = MEM32(esi + 0x94);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00119F80
 * Original: 0x00119F80 - 0x00119F9B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119F80: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00119F86u); RECOMP_ABI_CALL(0x0011AD40u, sub_0011AD40); /* call 0x0011AD40 */

loc_00119F86: ;
    PUSH32(esp, 0x00119F8Bu); RECOMP_ABI_CALL(0x001194B0u, sub_001194B0); /* call 0x001194B0 */

loc_00119F8B: ;
    ecx = 0x3E0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98E880;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119FA0
 * Original: 0x00119FA0 - 0x00119FBB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119FA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00119FA6u); RECOMP_ABI_CALL(0x0011AD60u, sub_0011AD60); /* call 0x0011AD60 */

loc_00119FA6: ;
    PUSH32(esp, 0x00119FABu); RECOMP_ABI_CALL(0x001194C0u, sub_001194C0); /* call 0x001194C0 */

loc_00119FAB: ;
    ecx = 0x3E0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98E880;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119FC0
 * Original: 0x00119FC0 - 0x0011A0C3 (259 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119FC0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x98E978;
    goto loc_00119FD0;

    /* nop */

loc_00119FD0: ;
    _fa = (uint32_t)(MEM16(eax + -248)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + -248), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A010; /* je: equal / zero */

loc_00119FDA: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A005; /* je: equal / zero */

loc_00119FE0: ;
    _fa = (uint32_t)(MEM16(eax + 0xF8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xF8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A008; /* je: equal / zero */

loc_00119FEA: ;
    _fa = (uint32_t)(MEM16(eax + 0x1F0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1F0), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A00D; /* je: equal / zero */

loc_00119FF4: ;
    _fb = (uint32_t)(0x3E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98F8F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98F8F8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119FD0; /* jl: less (signed <) */

loc_0011A003: ;
    goto loc_0011A010;

loc_0011A005: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011A010;

loc_0011A008: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011A010;

loc_0011A00D: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A010: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A0C1; /* je: equal / zero */

loc_0011A01B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x98E880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98E880;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3E;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(esi) = 1;
    PUSH32(esp, 0x0011A03Bu); RECOMP_ABI_CALL(0x0011AD80u, sub_0011AD80); /* call 0x0011AD80 */

loc_0011A03B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0011A050; /* jne: not equal / not zero */

loc_0011A043: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A049u); RECOMP_ABI_CALL(0x00119480u, sub_00119480); /* call 0x00119480 */

loc_0011A049: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A050: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = edx;
    eax = 0xFFFFFF80u;
    MEM16(esi + 0xE2) = LO16(eax);
    MEM16(esi + 0xE4) = LO16(eax);
    MEM32(esi + 0x78) = 0x119420;
    MEM32(esi + 0x7C) = esi;
    MEM32(esi + 0x80) = 0x119460;
    MEM32(esi + 0x84) = esi;
    MEM32(esi + 0xCC) = 0;
    MEM16(esi + 0xE0) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0xD0;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    eax = esi;

loc_0011A0C1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A0D0
 * Original: 0x0011A0D0 - 0x0011A352 (642 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A0D0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x10;
    PUSH32(esp, edi);
    edx = ebp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ebx = ebp + 0xE;
    PUSH32(esp, ebx);
    ecx = ebp + 0xF;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    eax = ebp + 0xD;
    PUSH32(esp, eax);
    esi = ebp + 0xC;
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM16(ebp + 2) = 1;
    PUSH32(esp, 0x0011A111u); RECOMP_ABI_CALL(0x00110CC0u, sub_00110CC0); /* call 0x00110CC0 */

loc_0011A111: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A295; /* jl: less (signed <) */

loc_0011A11C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 4 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A201; /* jle: less or equal (signed <=) */

loc_0011A125: ;
    eax = MEM32(ebp + 0xB4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A14E; /* jne: not equal / not zero */

loc_0011A131: ;
    PUSH32(esp, 0x2AD408);
    PUSH32(esp, 0x2AD3E8);
    PUSH32(esp, 0x0011A140u); RECOMP_ABI_CALL(0x0010BA80u, sub_0010BA80); /* call 0x0010BA80 */

loc_0011A140: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A143: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011A14E: ;
    SET_LO8(eax, MEM8(ebx));
    SET_LO8(ecx, 0xC0);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    MEM8(ebp + 0xF) = LO8(eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(ebp + 0xD) = 8;
    MEM32(edi) = 0x60;
    MEM16(ebp + 0x98) = 0xA;
    MEM16(ebp + 0x1C) = LO16(esi);
    MEM16(ebp + 0x24) = LO16(esi);
    MEM16(ebp + 0x26) = LO16(esi);
    MEM32(ebp + 0x20) = esi;
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x30) = esi;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x88) = esi;
    PUSH32(esp, 0x0011A1A4u); RECOMP_ABI_CALL(0x00110DE0u, sub_00110DE0); /* call 0x00110DE0 */

loc_0011A1A4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A295; /* jl: less (signed <) */

loc_0011A1AF: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x40));
    MEM16(esp + 0x34) = LO16(esi);
    PUSH32(esp, ebp);
    esi = esp + 0x3E;
    edi = esp + 0x3C;
    ebx = esp + 0x3A;
    PUSH32(esp, 0x0011A1D3u); RECOMP_ABI_CALL(0x001199A0u, sub_001199A0); /* call 0x001199A0 */

loc_0011A1D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A143; /* jl: less (signed <) */

loc_0011A1DE: ;
    eax = MEM32(0x9711D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A315; /* je: equal / zero */

loc_0011A1EB: ;
    ecx = MEM32(ebp + 0xB4);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011A1F9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011A1F7u); } /* indirect call */
    }

loc_0011A1F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011A315;

loc_0011A201: ;
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A21Au); RECOMP_ABI_CALL(0x00110DE0u, sub_00110DE0); /* call 0x00110DE0 */

loc_0011A21A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A295; /* jl: less (signed <) */

loc_0011A221: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x40));
    PUSH32(esp, ebp);
    esi = esp + 0x24;
    edi = esp + 0x28;
    ebx = esp + 0x2C;
    PUSH32(esp, 0x0011A240u); RECOMP_ABI_CALL(0x001199A0u, sub_001199A0); /* call 0x001199A0 */

loc_0011A240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A143; /* jl: less (signed <) */

loc_0011A24B: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A263u); RECOMP_ABI_CALL(0x0011AEA0u, sub_0011AEA0); /* call 0x0011AEA0 */

loc_0011A263: ;
    esi = MEM32(esp + 0x50);
    edi = MEM32(esp + 0x4C);
    ebx = ebp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011A276u); RECOMP_ABI_CALL(0x00110D90u, sub_00110D90); /* call 0x00110D90 */

loc_0011A276: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A295; /* jl: less (signed <) */

loc_0011A27D: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011A28Eu); RECOMP_ABI_CALL(0x00110E40u, sub_00110E40); /* call 0x00110E40 */

loc_0011A28E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011A29F; /* jge: greater or equal (signed >=) */

loc_0011A295: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011A29F: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A2B0u); RECOMP_ABI_CALL(0x0011AE20u, sub_0011AE20); /* call 0x0011AE20 */

loc_0011A2B0: ;
    ecx = MEM32(ebp + 8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A2C3u); RECOMP_ABI_CALL(0x0011AE40u, sub_0011AE40); /* call 0x0011AE40 */

loc_0011A2C3: ;
    edx = ebp + 0x34;
    PUSH32(esp, edx);
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    ecx = ebp + 0x2C;
    PUSH32(esp, ecx);
    edx = ebp + 0x28;
    PUSH32(esp, edx);
    eax = ebp + 0x26;
    PUSH32(esp, eax);
    ecx = ebp + 0x24;
    PUSH32(esp, ecx);
    edx = ebp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011A2E6u); RECOMP_ABI_CALL(0x00110F20u, sub_00110F20); /* call 0x00110F20 */

loc_0011A2E6: ;
    eax = ebp + 0xE2;
    PUSH32(esp, eax);
    ecx = ebp + 0xE0;
    PUSH32(esp, ecx);
    edx = ebp + 0xD0;
    PUSH32(esp, edx);
    eax = ebp + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011A309u); RECOMP_ABI_CALL(0x001110E0u, sub_001110E0); /* call 0x001110E0 */

loc_0011A309: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + 0x98) = 0;

loc_0011A315: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xE);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0xF);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x58) = eax;
    eax = MEM32(ebp + 0x44);
    POP32(esp, edi);
    MEM32(ebp + 0x50) = ecx;
    ecx = MEM32(ebp + 0x3C);
    MEM32(ebp + 0x54) = edx;
    edx = MEM32(ebp + 0x40);
    POP32(esp, esi);
    MEM32(ebp + 0x64) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    MEM32(ebp + 0x5C) = ecx;
    MEM32(ebp + 0x60) = edx;
    MEM32(ebp + 0x8C) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011A360
 * Original: 0x0011A360 - 0x0011A424 (196 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A360: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_HI8(eax, MEM8(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A387; /* jne: not equal / not zero */

loc_0011A372: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A382u); RECOMP_ABI_CALL(0x0011A0D0u, sub_0011A0D0); /* call 0x0011A0D0 */

loc_0011A382: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A387: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A38Du); RECOMP_ABI_CALL(0x0011C760u, sub_0011C760); /* call 0x0011C760 */

loc_0011A38D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A3A9; /* je: equal / zero */

loc_0011A394: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A3A4u); RECOMP_ABI_CALL(0x0011C5A0u, sub_0011C5A0); /* call 0x0011C5A0 */

loc_0011A3A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A3A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A3AFu); RECOMP_ABI_CALL(0x0011C440u, sub_0011C440); /* call 0x0011C440 */

loc_0011A3AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A3CB; /* je: equal / zero */

loc_0011A3B6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A3C6u); RECOMP_ABI_CALL(0x0011C060u, sub_0011C060); /* call 0x0011C060 */

loc_0011A3C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A3CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A3D1u); RECOMP_ABI_CALL(0x0011BB20u, sub_0011BB20); /* call 0x0011BB20 */

loc_0011A3D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A3ED; /* je: equal / zero */

loc_0011A3D8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A3E8u); RECOMP_ABI_CALL(0x0011BC10u, sub_0011BC10); /* call 0x0011BC10 */

loc_0011A3E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A3ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A3F3u); RECOMP_ABI_CALL(0x0011B3A0u, sub_0011B3A0); /* call 0x0011B3A0 */

loc_0011A3F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A40F; /* je: equal / zero */

loc_0011A3FA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A40Au); RECOMP_ABI_CALL(0x0011B490u, sub_0011B490); /* call 0x0011B490 */

loc_0011A40A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A40F: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A41Fu); RECOMP_ABI_CALL(0x0011A570u, sub_0011A570); /* call 0x0011A570 */

loc_0011A41F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A430
 * Original: 0x0011A430 - 0x0011A4AF (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A430: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A449; /* jne: not equal / not zero */

loc_0011A441: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A447u); RECOMP_ABI_CALL(0x00119E90u, sub_00119E90); /* call 0x00119E90 */

loc_0011A447: ;
    goto loc_0011A49B;

loc_0011A449: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A457; /* jne: not equal / not zero */

loc_0011A44F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A455u); RECOMP_ABI_CALL(0x0011A670u, sub_0011A670); /* call 0x0011A670 */

loc_0011A455: ;
    goto loc_0011A49B;

loc_0011A457: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A465; /* jne: not equal / not zero */

loc_0011A45D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A463u); RECOMP_ABI_CALL(0x0011C660u, sub_0011C660); /* call 0x0011C660 */

loc_0011A463: ;
    goto loc_0011A49B;

loc_0011A465: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A473; /* jne: not equal / not zero */

loc_0011A46B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A471u); RECOMP_ABI_CALL(0x0011BEF0u, sub_0011BEF0); /* call 0x0011BEF0 */

loc_0011A471: ;
    goto loc_0011A49B;

loc_0011A473: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A481; /* jne: not equal / not zero */

loc_0011A479: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A47Fu); RECOMP_ABI_CALL(0x0011B880u, sub_0011B880); /* call 0x0011B880 */

loc_0011A47F: ;
    goto loc_0011A49B;

loc_0011A481: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A48F; /* jne: not equal / not zero */

loc_0011A487: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A48Du); RECOMP_ABI_CALL(0x0011C470u, sub_0011C470); /* call 0x0011C470 */

loc_0011A48D: ;
    goto loc_0011A49B;

loc_0011A48F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A49E; /* jne: not equal / not zero */

loc_0011A495: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A49Bu); RECOMP_ABI_CALL(0x0011A550u, sub_0011A550); /* call 0x0011A550 */

loc_0011A49B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A49E: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A4AD; /* je: equal / zero */

loc_0011A4A8: ;
    PUSH32(esp, 0x0011A4ADu); RECOMP_ABI_CALL(0x00119F30u, sub_00119F30); /* call 0x00119F30 */

loc_0011A4AD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A4B0
 * Original: 0x0011A4B0 - 0x0011A4D5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A4B0: ;
    PUSH32(esp, esi);
    esi = 0x98E880;

loc_0011A4B6: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A4C5; /* jne: not equal / not zero */

loc_0011A4BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A4C2u); RECOMP_ABI_CALL(0x0011A430u, sub_0011A430); /* call 0x0011A430 */

loc_0011A4C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A4C5: ;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98F800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98F800 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A4B6; /* jl: less (signed <) */

loc_0011A4D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A4E0
 * Original: 0x0011A4E0 - 0x0011A4F9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A4E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A4F8; /* je: equal / zero */

loc_0011A4EE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x9711E8)); return; /* indirect tail jmp */

loc_0011A4F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A500
 * Original: 0x0011A500 - 0x0011A521 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A500: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC4) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0xC8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A530
 * Original: 0x0011A530 - 0x0011A549 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A530: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A548; /* je: equal / zero */

loc_0011A53E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x9711EC)); return; /* indirect tail jmp */

loc_0011A548: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A550
 * Original: 0x0011A550 - 0x0011A569 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A550: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A568; /* je: equal / zero */

loc_0011A55E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x9711F0)); return; /* indirect tail jmp */

loc_0011A568: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A570
 * Original: 0x0011A570 - 0x0011A604 (148 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A570: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A583; /* jne: not equal / not zero */

loc_0011A580: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011A583: ;
    edx = 0x1000;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x58) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(eax + 0x44);
    MEM16(eax + 2) = 1;
    MEM32(eax + 0x14) = 0xAC44;
    MEM8(eax + 0xE) = 2;
    MEM8(eax + 0xD) = 0x10;
    MEM32(eax + 0x18) = 0x7FFFFFFF;
    MEM8(eax + 0xF) = 0x7F;
    MEM16(eax + 0x98) = 0x14;
    MEM32(eax + 0x50) = 2;
    MEM32(eax + 0x54) = 0x7F;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x8C) = ecx;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x24) = LO16(ecx);
    MEM16(eax + 0x26) = LO16(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x88) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A610
 * Original: 0x0011A610 - 0x0011A629 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A610: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A628; /* je: equal / zero */

loc_0011A61E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x9711F4)); return; /* indirect tail jmp */

loc_0011A628: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A630
 * Original: 0x0011A630 - 0x0011A66F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A630: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0011A64F; /* je: equal / zero */

loc_0011A644: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x9711F8); PUSH32(esp, 0x0011A64Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011A646u); } /* indirect call */
    }

loc_0011A64C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A64F: ;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0xB8) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xBC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A670
 * Original: 0x0011A670 - 0x0011A676 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A670: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x971200)); return; /* indirect tail jmp */

}

/**
 * sub_0011A680
 * Original: 0x0011A680 - 0x0011A699 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A680: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A698; /* je: equal / zero */

loc_0011A68E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x9711FC)); return; /* indirect tail jmp */

loc_0011A698: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A6A0
 * Original: 0x0011A6A0 - 0x0011A6A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A6A0: ;
    g_seh_ebp = ebp; sub_00118440(); return; /* tail jmp 0x00118440 */

}

/**
 * sub_0011A6B0
 * Original: 0x0011A6B0 - 0x0011A6B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A6B0: ;
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_0011A6C0
 * Original: 0x0011A6C0 - 0x0011A79F (223 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = eax + esi + 0x38;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A79C; /* jle: less or equal (signed <=) */

loc_0011A6DB: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A6E6u); RECOMP_ABI_CALL(0x0010BF40u, sub_0010BF40); /* call 0x0010BF40 */

loc_0011A6E6: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A6EFu); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_0011A6EF: ;
    edx = MEM32(edi + 4);
    eax = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax + 1;
    /* nop */

loc_0011A700: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A700; /* jne: not equal / not zero */

loc_0011A707: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0;
    ecx = ebp;
    if ((_fa == 0)) goto loc_0011A71D; /* je: equal / zero */

loc_0011A712: ;
    ebx = ZX8(MEM8(ecx + edx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011A712; /* jb: below (unsigned <) */

loc_0011A71D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 8) (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011A735; /* je: equal / zero */

loc_0011A724: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2AD430);
    PUSH32(esp, 0x0011A72Fu); RECOMP_ABI_CALL(0x001183E0u, sub_001183E0); /* call 0x001183E0 */

loc_0011A72F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A735: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A74Bu); RECOMP_ABI_CALL(0x0010BDE0u, sub_0010BDE0); /* call 0x0010BDE0 */

loc_0011A74B: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A758u); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0011A758: ;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x2C) = ecx;
    MEM32(edi + 0x1C) = 0;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0011A77Au); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_0011A77A: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A785u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0011A785: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A78Eu); RECOMP_ABI_CALL(0x0010BEE0u, sub_0010BEE0); /* call 0x0010BEE0 */

loc_0011A78E: ;
    eax = 1;
    MEM8(esi + 2) = LO8(eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;

loc_0011A79C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A7A0
 * Original: 0x0011A7A0 - 0x0011A802 (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A7BA; /* jne: not equal / not zero */

loc_0011A7AC: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2AD470;
    g_seh_ebp = ebp; sub_001183E0(); return; /* tail jmp 0x001183E0 */

loc_0011A7BA: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edi = ecx + esi + 0x38;
    PUSH32(esp, 0x0011A7CBu); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_0011A7CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0011A7F0; /* je: equal / zero */

loc_0011A7D3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011A7E0; /* je: equal / zero */

loc_0011A7D6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011A7FF; /* jne: not equal / not zero */

loc_0011A7D9: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A7E0: ;
    edx = MEM32(esi + 0x2C);
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x18) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011A7F0: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A7F9u); RECOMP_ABI_CALL(0x0010BE90u, sub_0010BE90); /* call 0x0010BE90 */

loc_0011A7F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = eax;

loc_0011A7FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A810
 * Original: 0x0011A810 - 0x0011A895 (133 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011A88F; /* je: equal / zero */

loc_0011A82A: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A84E; /* jne: not equal / not zero */

loc_0011A830: ;
    eax = MEM32(esi + 0x20);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi + 0x4C);
    edi = MEM32(eax + esi + 0x3C);
    ebp = MEM32(eax + esi + 0x44);
    ebx = MEM32(eax + esi + 0x48);
    eax = eax + esi + 0x38;
    MEM32(esp + 0x10) = ecx;

loc_0011A84E: ;
    edx = MEM32(esi + 0x24);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = edx;
    eax = edx;
    edx = MEM32(esi + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0x8000000Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0011A868; /* jns: not sign (positive) */

loc_0011A863: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011A868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x20) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_0011A878; /* jg: greater (signed >) */

loc_0011A86F: ;
    PUSH32(esp, 0x0011A874u); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011A874: ;
    MEM8(esi + 1) = 1;

loc_0011A878: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A88F; /* jne: not equal / not zero */

loc_0011A87E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A88Cu); RECOMP_ABI_CALL(0x00110680u, sub_00110680); /* call 0x00110680 */

loc_0011A88C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A88F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A8A0
 * Original: 0x0011A8A0 - 0x0011A902 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A8A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi + 4));
    eax = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A900; /* je: equal / zero */

loc_0011A8B1: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A900; /* jne: not equal / not zero */

loc_0011A8B7: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A900; /* jle: less or equal (signed <=) */

loc_0011A8BE: ;
    ecx = MEM32(esi + 0x20);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x50), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A8D3; /* jne: not equal / not zero */

loc_0011A8CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A8D0u); RECOMP_ABI_CALL(0x0011A7A0u, sub_0011A7A0); /* call 0x0011A7A0 */

loc_0011A8D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A8D3: ;
    edx = MEM32(esi + 0x20);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi + 0x50), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A8E9; /* jne: not equal / not zero */

loc_0011A8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A8E6u); RECOMP_ABI_CALL(0x0011A810u, sub_0011A810); /* call 0x0011A810 */

loc_0011A8E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A8E9: ;
    eax = MEM32(esi + 0x20);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A900; /* jne: not equal / not zero */

loc_0011A8F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A8FDu); RECOMP_ABI_CALL(0x0011A6C0u, sub_0011A6C0); /* call 0x0011A6C0 */

loc_0011A8FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A900: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A910
 * Original: 0x0011A910 - 0x0011A956 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A910: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A937; /* jne: not equal / not zero */

loc_0011A91A: ;
    PUSH32(esp, edi);
    MEM32(0x971204) = ecx;
    MEM32(0x971208) = ecx;
    ecx = 0x40;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98E780;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0011A937: ;
    MEM32(0x971204) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(0x971208) = eax;
    ecx = 0x40;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98E780;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A960
 * Original: 0x0011A960 - 0x0011A992 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A960: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x98E780);
    PUSH32(esp, 0x0011A974u); RECOMP_ABI_CALL(0x001527A9u, sub_001527A9); /* call 0x001527A9 */

loc_0011A974: ;
    eax = MEM32(0x971204);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A991; /* je: equal / zero */

loc_0011A980: ;
    edx = MEM32(0x971208);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x98E780);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011A98Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011A98Cu); } /* indirect call */
    }

loc_0011A98E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A991: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A9A0
 * Original: 0x0011A9A0 - 0x0011A9A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9A0(void)
{

loc_0011A9A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A9B0
 * Original: 0x0011A9B0 - 0x0011A9B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9B0(void)
{

loc_0011A9B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A9C0
 * Original: 0x0011A9C0 - 0x0011A9C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A9C0: ;
    g_seh_ebp = ebp; sub_00117B90(); return; /* tail jmp 0x00117B90 */

}

/**
 * sub_0011A9D0
 * Original: 0x0011A9D0 - 0x0011A9D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A9D0: ;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_0011A9E0
 * Original: 0x0011A9E0 - 0x0011AA01 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A9E0: ;
    eax = MEM32(0x2AD488);
    eax = 0x98E584;
    /* nop */

loc_0011A9F0: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98E784) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98E784 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A9F0; /* jl: less (signed <) */

loc_0011AA00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AA10
 * Original: 0x0011AA10 - 0x0011AA31 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AA10: ;
    eax = 0x98E584;
    goto loc_0011AA20;

    /* nop */
    edi = edi;

loc_0011AA20: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98E784) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98E784 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AA20; /* jl: less (signed <) */

loc_0011AA30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AA40
 * Original: 0x0011AA40 - 0x0011AA6E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AA40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x98E584;
    /* nop */

loc_0011AA50: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AA62; /* je: equal / zero */

loc_0011AA55: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98E784) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x98E784 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AA50; /* jl: less (signed <) */

loc_0011AA61: ;
    esp += 4; return; /* ret */

loc_0011AA62: ;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x98E580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x98E580;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AA44
 * Original: 0x0011AA44 - 0x0011AA6E (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AA44: ;
    ecx = 0x98E584;
    /* nop */

loc_0011AA50: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AA62; /* je: equal / zero */

loc_0011AA55: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98E784) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x98E784 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AA50; /* jl: less (signed <) */

loc_0011AA61: ;
    esp += 4; return; /* ret */

loc_0011AA62: ;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x98E580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x98E580;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AA70
 * Original: 0x0011AA70 - 0x0011AA93 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AA70: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AAA0
 * Original: 0x0011AAA0 - 0x0011AACF (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AAA0: ;
    PUSH32(esp, 0x0011AAA5u); RECOMP_ABI_CALL(0x0011AA40u, sub_0011AA40); /* call 0x0011AA40 */

loc_0011AAA5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2F97B8;
    MEM32(eax + 0xC) = 0xAC44;
    MEM32(eax + 0x10) = 0x4000;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AAD0
 * Original: 0x0011AAD0 - 0x0011AAD5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011AAD0: ;
    g_seh_ebp = ebp; sub_0011AA70(); return; /* tail jmp 0x0011AA70 */

}

/**
 * sub_0011AAE0
 * Original: 0x0011AAE0 - 0x0011AB23 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAE0(void)
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

loc_0011AAE0: ;
    ecx = MEM32(0x9709A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AAEE; /* je: equal / zero */

loc_0011AAEC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0011AAEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011AAECu); } /* indirect call */
    }

loc_0011AAEE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AB01; /* jne: not equal / not zero */

loc_0011AAF9: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011AB01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0011AB13; /* jge: greater or equal (signed >=) */

loc_0011AB0D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_0011AB13: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AD4C0)); /* fmul qword ptr [0x2ad4c0] */
    PUSH32(esp, 0x0011AB1Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011AB1E: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011AAEE
 * Original: 0x0011AAEE - 0x0011AB23 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AAEE(void)
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

loc_0011AAEE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AB01; /* jne: not equal / not zero */

loc_0011AAF9: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011AB01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0011AB13; /* jge: greater or equal (signed >=) */

loc_0011AB0D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_0011AB13: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AD4C0)); /* fmul qword ptr [0x2ad4c0] */
    PUSH32(esp, 0x0011AB1Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011AB1E: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011AB30
 * Original: 0x0011AB30 - 0x0011AB63 (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB30(void)
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

loc_0011AB30: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x9709A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AB3F; /* je: equal / zero */

loc_0011AB3D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0011AB3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011AB3Du); } /* indirect call */
    }

loc_0011AB3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0011AB4F; /* jge: greater or equal (signed >=) */

loc_0011AB49: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_0011AB4F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AD4C0)); /* fmul qword ptr [0x2ad4c0] */
    PUSH32(esp, 0x0011AB5Au); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011AB5A: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011AB70
 * Original: 0x0011AB70 - 0x0011AB76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB70(void)
{

loc_0011AB70: ;
    eax = 0x4000;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AB80
 * Original: 0x0011AB80 - 0x0011AB81 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB80(void)
{

loc_0011AB80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AB90
 * Original: 0x0011AB90 - 0x0011ABD5 (69 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB90(void)
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

loc_0011AB90: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x9709A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AB9F; /* je: equal / zero */

loc_0011AB9D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0011AB9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011AB9Du); } /* indirect call */
    }

loc_0011AB9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0011ABB0; /* jge: greater or equal (signed >=) */

loc_0011ABAA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_0011ABB0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2AD4C8)); /* fmul qword ptr [0x2ad4c8] */
    PUSH32(esp, 0x0011ABBBu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011ABBB: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x14);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x10)); }
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011ABE0
 * Original: 0x0011ABE0 - 0x0011ABEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ABE0(void)
{

loc_0011ABE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ABF0
 * Original: 0x0011ABF0 - 0x0011ABF8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ABF0(void)
{

loc_0011ABF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC00
 * Original: 0x0011AC00 - 0x0011AC01 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC00(void)
{

loc_0011AC00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC10
 * Original: 0x0011AC10 - 0x0011AC16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC10(void)
{

loc_0011AC10: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC20
 * Original: 0x0011AC20 - 0x0011AC21 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC20(void)
{

loc_0011AC20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC30
 * Original: 0x0011AC30 - 0x0011AC33 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011AC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AC30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC40
 * Original: 0x0011AC40 - 0x0011AC41 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC40(void)
{

loc_0011AC40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC50
 * Original: 0x0011AC50 - 0x0011AC53 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011AC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AC50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC60
 * Original: 0x0011AC60 - 0x0011AC61 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC60(void)
{

loc_0011AC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC70
 * Original: 0x0011AC70 - 0x0011AC73 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011AC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AC70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC80
 * Original: 0x0011AC80 - 0x0011AC81 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC80(void)
{

loc_0011AC80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AC90
 * Original: 0x0011AC90 - 0x0011ACA5 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AC90(void)
{

loc_0011AC90: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ACB0
 * Original: 0x0011ACB0 - 0x0011ACB1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACB0(void)
{

loc_0011ACB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ACC0
 * Original: 0x0011ACC0 - 0x0011ACC1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACC0(void)
{

loc_0011ACC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ACD0
 * Original: 0x0011ACD0 - 0x0011ACD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ACD0(void)
{

loc_0011ACD0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ACE0
 * Original: 0x0011ACE0 - 0x0011ACEE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011ACE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ACE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011ACF0
 * Original: 0x0011ACF0 - 0x0011ACF3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011ACF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ACF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD00
 * Original: 0x0011AD00 - 0x0011AD36 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD00(void)
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

loc_0011AD00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011AD0Du); RECOMP_ABI_CALL(0x000ADB8Fu, sub_000ADB8F); /* call 0x000ADB8F */

loc_0011AD0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AD15; /* jne: not equal / not zero */

loc_0011AD11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011AD15: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011AD1Eu); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_0011AD1E: ;
    fp_push((double)SMEM64(esp)); /* fild */
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28420C)); /* fmul dword ptr [0x28420c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, 0x0011AD32u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011AD32: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011AD40
 * Original: 0x0011AD40 - 0x0011AD51 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AD40: ;
    PUSH32(esp, edi);
    ecx = 0xF0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98E1C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD60
 * Original: 0x0011AD60 - 0x0011AD71 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AD60: ;
    PUSH32(esp, edi);
    ecx = 0xF0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98E1C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD80
 * Original: 0x0011AD80 - 0x0011AE12 (146 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AD80: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x98E1FC;

loc_0011AD87: ;
    ecx = MEM32(eax + -60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ADBD; /* je: equal / zero */

loc_0011AD8E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ADB2; /* je: equal / zero */

loc_0011AD93: ;
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ADB5; /* je: equal / zero */

loc_0011AD9A: ;
    ecx = MEM32(eax + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ADBA; /* je: equal / zero */

loc_0011ADA1: ;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98E5BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98E5BC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AD87; /* jl: less (signed <) */

loc_0011ADB0: ;
    goto loc_0011ADBD;

loc_0011ADB2: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011ADBD;

loc_0011ADB5: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011ADBD;

loc_0011ADBA: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011ADBD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AE11; /* je: equal / zero */

loc_0011ADC4: ;
    PUSH32(esp, esi);
    esi = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3C);
    _fb = (uint32_t)(0x98E1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98E1C0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = 0xF;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x32;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xAC44);
    PUSH32(esp, 0x1F4);
    MEM32(esi) = 1;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0011AE00u); RECOMP_ABI_CALL(0x00110BB0u, sub_00110BB0); /* call 0x00110BB0 */

loc_0011AE00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x28;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);

loc_0011AE11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE20
 * Original: 0x0011AE20 - 0x0011AE3F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AE20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = eax + 0x32;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011AE3Bu); RECOMP_ABI_CALL(0x00110BB0u, sub_00110BB0); /* call 0x00110BB0 */

loc_0011AE3B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE40
 * Original: 0x0011AE40 - 0x0011AE6D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE40(void)
{

loc_0011AE40: ;
    ecx = MEM32(esp + 8);
    SET_LO16(edx, MEM16(ecx));
    eax = MEM32(esp + 4);
    MEM16(eax + 0x28) = LO16(edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx));
    MEM16(eax + 0x2A) = LO16(esi);
    SET_LO16(ecx, MEM16(ecx + 2));
    MEM16(eax + 0x2C) = LO16(ecx);
    SET_LO16(edx, MEM16(edx + 2));
    MEM16(eax + 0x2E) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE70
 * Original: 0x0011AE70 - 0x0011AE9D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE70(void)
{

loc_0011AE70: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + 0x28));
    ecx = MEM32(esp + 8);
    MEM16(ecx) = LO16(edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x2A));
    MEM16(edx) = LO16(esi);
    SET_LO16(esi, MEM16(eax + 0x2C));
    MEM16(ecx + 2) = LO16(esi);
    SET_LO16(eax, MEM16(eax + 0x2E));
    MEM16(edx + 2) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AEA0
 * Original: 0x0011AEA0 - 0x0011AEC0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEA0(void)
{

loc_0011AEA0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 0x34) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x36) = LO16(edx);
    MEM16(eax + 0x38) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AEC0
 * Original: 0x0011AEC0 - 0x0011AEE6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEC0(void)
{

loc_0011AEC0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x34));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0x36));
    edx = MEM32(esp + 0xC);
    MEM16(edx) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 0x38));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AEF0
 * Original: 0x0011AEF0 - 0x0011AF0A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AEF0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AF08; /* je: equal / zero */

loc_0011AEF9: ;
    ecx = 0xF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0011AF08: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF10
 * Original: 0x0011AF10 - 0x0011AF1C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF10(void)
{

loc_0011AF10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF20
 * Original: 0x0011AF20 - 0x0011AF28 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AF20(void)
{

loc_0011AF20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF30
 * Original: 0x0011AF30 - 0x0011AF67 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011AF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AF30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AF64; /* jne: not equal / not zero */

loc_0011AF3B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = 1;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011AF64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AF70
 * Original: 0x0011AF70 - 0x0011AFA7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011AF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AF70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AFA4; /* jne: not equal / not zero */

loc_0011AF7B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = 2;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011AFA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AFB0
 * Original: 0x0011AFB0 - 0x0011AFE7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011AFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AFB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AFE4; /* jne: not equal / not zero */

loc_0011AFBB: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = 1;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011AFE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011AFF0
 * Original: 0x0011AFF0 - 0x0011B00A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AFF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B009; /* jne: not equal / not zero */

loc_0011AFFB: ;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xC) = 1;

loc_0011B009: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B010
 * Original: 0x0011B010 - 0x0011B026 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B010: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0xC) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B030
 * Original: 0x0011B030 - 0x0011B042 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B030: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B041; /* jne: not equal / not zero */

loc_0011B03A: ;
    MEM32(eax + 0xC) = 0;

loc_0011B041: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B050
 * Original: 0x0011B050 - 0x0011B058 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B050(void)
{

loc_0011B050: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B060
 * Original: 0x0011B060 - 0x0011B06B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B060(void)
{

loc_0011B060: ;
    MEM32(0x97120C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B070
 * Original: 0x0011B070 - 0x0011B131 (193 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    eax = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011B083; /* jne: not equal / not zero */

loc_0011B080: ;
    MEM32(esi + 0xC) = eax;

loc_0011B083: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B12F; /* jne: not equal / not zero */

loc_0011B08C: ;
    eax = MEM32(esi + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO16(ecx, MEM16(esi + 0x36));
    edx = esi + 0x34;
    if (CMP_NE(_fa, _fb)) goto loc_0011B0D8; /* jne: not equal / not zero */

loc_0011B09D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x32));
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = esi + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011B0C9u); RECOMP_ABI_CALL(0x0011C780u, sub_0011C780); /* call 0x0011C780 */

loc_0011B0C9: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011B0D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x32));
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = esi + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011B10Cu); RECOMP_ABI_CALL(0x0011CF80u, sub_0011CF80); /* call 0x0011CF80 */

loc_0011B10C: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0011B11E; /* jns: not sign (positive) */

loc_0011B119: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011B11E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B128; /* jne: not equal / not zero */

loc_0011B123: ;
    PUSH32(esp, 0x0011B128u); RECOMP_ABI_CALL(0x0011B060u, sub_0011B060); /* call 0x0011B060 */

loc_0011B128: ;
    MEM32(esi + 0xC) = 3;

loc_0011B12F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B140
 * Original: 0x0011B140 - 0x0011B161 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B140: ;
    PUSH32(esp, esi);
    esi = 0x98E1C0;

loc_0011B146: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B154; /* jne: not equal / not zero */

loc_0011B14B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011B151u); RECOMP_ABI_CALL(0x0011B070u, sub_0011B070); /* call 0x0011B070 */

loc_0011B151: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B154: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98E580) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98E580 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B146; /* jl: less (signed <) */

loc_0011B15F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B170
 * Original: 0x0011B170 - 0x0011B391 (545 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B170: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_HI8(eax, MEM8(ebp + 3));
    ecx = ZX8(MEM8(ebp + 1));
    edx = ZX8(MEM8(ebp));
    SET_LO8(eax, MEM8(ebp + 2));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64732E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64732E (32-bit) */
    ecx = ebp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0011B1A4; /* je: equal / zero */

loc_0011B199: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x646E732E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x646E732E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B1A4; /* je: equal / zero */

loc_0011B1A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011B1A4: ;
    edx = ZX8(MEM8(ecx + 1));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(ecx + 3));
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ecx + -2));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ecx + -4));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFF0000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B1F3; /* jle: less or equal (signed <=) */

loc_0011B1EE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011B1F3: ;
    eax = ZX8(MEM8(ecx + 1));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + -6));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(ecx + -8));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx;
    esi = edx;
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = edx;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + -1));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ZX8(MEM8(ecx + -3));
    SET_LO8(edx, MEM8(ecx + -2));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ZX8(MEM8(ecx + -4));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esi;
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011B2A8; /* je: equal / zero */

loc_0011B279: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011B29C; /* je: equal / zero */

loc_0011B27C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011B286; /* je: equal / zero */

loc_0011B27F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011B286: ;
    esi = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    MEM32(esi) = 0;
    MEM32(edx) = 0x10;
    goto loc_0011B2BC;

loc_0011B29C: ;
    esi = MEM32(esp + 0x2C);
    MEM32(esi) = 1;
    goto loc_0011B2B2;

loc_0011B2A8: ;
    esi = MEM32(esp + 0x2C);
    MEM32(esi) = 2;

loc_0011B2B2: ;
    edx = MEM32(esp + 0x24);
    MEM32(edx) = 8;

loc_0011B2BC: ;
    ebx = ZX8(MEM8(ecx + 1));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 3));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + -2));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(ecx + -4));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = edx;
    MEM32(esp + 0x14) = edx;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x14);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(esp + 0x16));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ebx;
    ebx = ZX8(MEM8(ecx + 1));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 3));
    SET_LO8(edx, MEM8(ecx + 2));
    ecx = ZX8(MEM8(ecx));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx;
    MEM32(esp + 0x14) = edx;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x14);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(esp + 0x16));
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x20);
    MEM32(edx) = ecx;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B36E; /* je: equal / zero */

loc_0011B34F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B365; /* jne: not equal / not zero */

loc_0011B354: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edx) = eax;
    eax = edi + ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011B365: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B37F; /* jne: not equal / not zero */

loc_0011B369: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0011B36E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    eax = edi + ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011B37F: ;
    edx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = edi + ebp;
    POP32(esp, edi);
    MEM32(edx) = 0x7FFF0000;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B3A0
 * Original: 0x0011B3A0 - 0x0011B3C1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B3A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0x2ADD14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B3BB; /* je: equal / zero */

loc_0011B3AF: ;
    ecx = 0x2ADD10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B3BB; /* je: equal / zero */

loc_0011B3B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011B3BB: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B3D0
 * Original: 0x0011B3D0 - 0x0011B486 (182 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B3D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B3EC; /* jge: greater or equal (signed >=) */

loc_0011B3DC: ;
    eax = MEM32(esp + 0x18);
    MEM16(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011B3EC: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011B411u); RECOMP_ABI_CALL(0x0011B170u, sub_0011B170); /* call 0x0011B170 */

loc_0011B411: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B420; /* jne: not equal / not zero */

loc_0011B418: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011B420: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(edx) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0011B418; /* jle: less or equal (signed <=) */

loc_0011B42E: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esp + 4));
    esi = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax) = LO8(edx);
    edx = MEM32(esp + 0x34);
    MEM32(edx) = esi;
    edx = MEM32(esp + 0x20);
    MEM8(edx) = 0xFF;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x28);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(edx) = LO8(eax);
    eax = MEM32(esp + 0x38);
    MEM32(eax) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B490
 * Original: 0x0011B490 - 0x0011B550 (192 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x0011B4D4u); RECOMP_ABI_CALL(0x0011B3D0u, sub_0011B3D0); /* call 0x0011B3D0 */

loc_0011B4D4: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B4E3; /* jge: greater or equal (signed >=) */

loc_0011B4DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011B4E3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0x60) = edx;
    SET_LO16(edx, MEM16(esp + 0x10));
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(esi + 0x64) = ecx;
    MEM16(esi + 0x98) = 4;
    MEM16(esi + 0x9C) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B550
 * Original: 0x0011B550 - 0x0011B670 (288 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011B642; /* jne: not equal / not zero */

loc_0011B563: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B56Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011B56C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B642; /* jne: not equal / not zero */

loc_0011B577: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ebp = esi + 0x6C;
    PUSH32(esp, ebp);
    edi = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011B58Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011B589u); } /* indirect call */
    }

loc_0011B58C: ;
    eax = MEM32(edi);
    edi = MEM32(esi + 0x60);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B59F; /* jle: less or equal (signed <=) */

loc_0011B59D: ;
    edi = ebp;

loc_0011B59F: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B5A8; /* jle: less or equal (signed <=) */

loc_0011B5A6: ;
    edi = ecx;

loc_0011B5A8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    ecx = MEM32(esi + 0x5C);
    edx = ecx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011B5FC; /* jne: not equal / not zero */

loc_0011B5B4: ;
    ebp = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = ecx + ebp * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011B624; /* jle: less or equal (signed <=) */

loc_0011B5C2: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    goto loc_0011B5D0;

    /* nop */

loc_0011B5D0: ;
    SET_LO16(ecx, MEM16(ebx + eax * 4));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(ecx + ebp + -2) = LO16(edx);
    SET_LO16(ecx, MEM16(ebx + eax * 4 + -2));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    MEM16(ebp + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0011B5D0; /* jl: less (signed <) */

loc_0011B5FA: ;
    goto loc_0011B624;

loc_0011B5FC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B624; /* jle: less or equal (signed <=) */

loc_0011B600: ;
    ebp = ebx;
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    goto loc_0011B610;

    /* nop */

loc_0011B610: ;
    SET_LO16(ecx, MEM16(eax + ebp));
    SET_LO16(ebx, ZX8(HI8(ecx)));
    SET_HI8(ebx, LO8(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_0011B610; /* jne: not equal / not zero */

loc_0011B624: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x90) = edi;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011B642: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B66D; /* jne: not equal / not zero */

loc_0011B648: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011B663u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011B65Du); } /* indirect call */
    }

loc_0011B663: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011B66D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B670
 * Original: 0x0011B670 - 0x0011B769 (249 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011B73B; /* jne: not equal / not zero */

loc_0011B683: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B68Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011B68C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B73B; /* jne: not equal / not zero */

loc_0011B697: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebp = esi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011B6ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011B6A9u); } /* indirect call */
    }

loc_0011B6AC: ;
    eax = MEM32(ebp);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B6BF; /* jle: less or equal (signed <=) */

loc_0011B6BD: ;
    ecx = edi;

loc_0011B6BF: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B6C8; /* jle: less or equal (signed <=) */

loc_0011B6C6: ;
    ecx = edx;

loc_0011B6C8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edx = MEM32(esi + 0x5C);
    edi = edx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011B703; /* jne: not equal / not zero */

loc_0011B6D4: ;
    ebp = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = edx + ebp * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011B71F; /* jle: less or equal (signed <=) */

loc_0011B6E0: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;

loc_0011B6E8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + eax + -2) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(ebx, MEM8(eax + -1));
    MEM16(eax + ebp + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_0011B6E8; /* jne: not equal / not zero */

loc_0011B701: ;
    goto loc_0011B71F;

loc_0011B703: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B71F; /* jle: less or equal (signed <=) */

loc_0011B709: ;
    /* nop */

loc_0011B710: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + ebx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM16(edi + eax * 2 + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0011B710; /* jl: less (signed <) */

loc_0011B71F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011B73B: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B766; /* jne: not equal / not zero */

loc_0011B741: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011B75Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011B756u); } /* indirect call */
    }

loc_0011B75C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011B766: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B770
 * Original: 0x0011B770 - 0x0011B87F (271 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0011B770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B770: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebp = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011B851; /* jne: not equal / not zero */

loc_0011B783: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B78Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011B78C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B851; /* jne: not equal / not zero */

loc_0011B797: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebx = esi + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011B7ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011B7A9u); } /* indirect call */
    }

loc_0011B7AC: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B7BE; /* jle: less or equal (signed <=) */

loc_0011B7BC: ;
    ecx = edi;

loc_0011B7BE: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B7C7; /* jle: less or equal (signed <=) */

loc_0011B7C5: ;
    ecx = edx;

loc_0011B7C7: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edi = MEM32(esi + 0x5C);
    edx = edi + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011B817; /* jne: not equal / not zero */

loc_0011B7D3: ;
    ebx = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = edi + ebx * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011B835; /* jle: less or equal (signed <=) */

loc_0011B7DF: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ecx;
    goto loc_0011B7F0;

    /* nop */

loc_0011B7F0: ;
    ebx = ZX8(MEM8(eax));
    SET_LO16(ebx, MEM16(ebx * 2 + 0x2F9820));
    MEM16(edx + eax) = LO16(ebx);
    ebx = ZX8(MEM8(eax + 1));
    SET_LO16(ebx, MEM16(ebx * 2 + 0x2F9820));
    MEM16(edi + eax) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011B7F0; /* jne: not equal / not zero */

loc_0011B815: ;
    goto loc_0011B835;

loc_0011B817: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B835; /* jle: less or equal (signed <=) */

loc_0011B81D: ;
    /* nop */

loc_0011B820: ;
    edi = ZX8(MEM8(eax + ebp));
    SET_LO16(edi, MEM16(edi * 2 + 0x2F9820));
    MEM16(edx + eax * 2) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B820; /* jl: less (signed <) */

loc_0011B835: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebx);

loc_0011B851: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B87C; /* jne: not equal / not zero */

loc_0011B857: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011B872u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011B86Cu); } /* indirect call */
    }

loc_0011B872: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011B87C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B880
 * Original: 0x0011B880 - 0x0011B8AA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B880: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x9C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011B89A; /* jne: not equal / not zero */

loc_0011B895: ;
    g_seh_ebp = ebp; sub_0011B770(); return; /* tail jmp 0x0011B770 */

loc_0011B89A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B8A5; /* jne: not equal / not zero */

loc_0011B8A0: ;
    g_seh_ebp = ebp; sub_0011B670(); return; /* tail jmp 0x0011B670 */

loc_0011B8A5: ;
    g_seh_ebp = ebp; sub_0011B550(); return; /* tail jmp 0x0011B550 */

}

/**
 * sub_0011B8B0
 * Original: 0x0011B8B0 - 0x0011BB19 (617 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B8B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 1));
    SET_LO8(ecx, MEM8(eax + 2));
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ZX8(MEM8(eax));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi + 3));
    MEM32(esp + 0x14) = ecx;
    ecx = ZX8(MEM8(esi + 1));
    ebx = ZX8(MEM8(esi + 5));
    SET_LO8(eax, MEM8(esi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + -8));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + -1));
    MEM32(esp + 0x10) = eax;
    SET_LO8(ecx, MEM8(esi + -2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(esi + -4));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D524F46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x4D524F46 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BB0F; /* jne: not equal / not zero */

loc_0011B929: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46464941) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x46464941 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BB0F; /* jne: not equal / not zero */

loc_0011B935: ;
    ecx = eax;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 0x12));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(esp + 0x13));
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + esi + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0011BB05; /* jae: above or equal (unsigned >=) */

loc_0011B964: ;
    ecx = ZX8(MEM8(esi + 1));
    eax = ZX8(MEM8(esi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(esi + 3));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esi + -6));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + -1));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(esi + -3));
    SET_LO8(ecx, MEM8(esi + -2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(esi + -4));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x12));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x444E5353) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x444E5353 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BAAB; /* je: equal / zero */

loc_0011B9CD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D4D4F43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4D4D4F43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B9E0; /* je: equal / zero */

loc_0011B9D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011BAFB;

loc_0011B9E0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BAFB; /* jne: not equal / not zero */

loc_0011B9E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BB0F; /* jl: less (signed <) */

loc_0011B9F1: ;
    edx = ZX8(MEM8(esi));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(HI8(ecx));
    SET_HI8(eax, LO8(ecx));
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    edx = ZX8(MEM8(esi + -15));
    eax = ZX8(MEM8(esi + -16));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + -13));
    SET_LO8(ecx, MEM8(esi + -14));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    eax = ecx;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x12));
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x28);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    edx = ZX8(MEM8(esi + -12));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + -11));
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(HI8(ecx));
    SET_HI8(eax, LO8(ecx));
    ecx = MEM32(esp + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    SET_HI8(edx, MEM8(esi + -7));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + -9));
    SET_LO16(eax, ZX8(HI8(ecx)));
    SET_LO8(edx, MEM8(esi + -8));
    SET_HI8(ebx, LO8(edx));
    SET_LO8(ecx, MEM8(esi + -10));
    SET_HI8(eax, LO8(ecx));
    ecx = 0x400E;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(LO16(edx));
    edx = ZX16(LO16(ebx));
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x1C);
    edx = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(ecx) = eax;
    goto loc_0011BAF9;

loc_0011BAAB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BAFB; /* jne: not equal / not zero */

loc_0011BAAF: ;
    eax = ZX8(MEM8(esi + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + 3));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 1;
    SET_LO8(ecx, MEM8(esi + -2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(esi + -4));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    edi = edi & 0xFF0000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_0011BAF9: ;
    if (CMP_NE(_fa, _fb)) goto loc_0011BB05; /* jne: not equal / not zero */

loc_0011BAFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011B964; /* jb: below (unsigned <) */

loc_0011BB05: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011BB0F: ;
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
 * sub_0011BB20
 * Original: 0x0011BB20 - 0x0011BB44 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BB20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0x2ADD24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BB41; /* jne: not equal / not zero */

loc_0011BB2F: ;
    edx = MEM32(eax + 8);
    ecx = 0x2ADD1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BB41; /* jne: not equal / not zero */

loc_0011BB3B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011BB41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BB50
 * Original: 0x0011BB50 - 0x0011BC03 (179 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BB50: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BB6E; /* jge: greater or equal (signed >=) */

loc_0011BB5E: ;
    eax = MEM32(esp + 0x18);
    MEM16(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011BB6E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0011BB8Eu); RECOMP_ABI_CALL(0x0011B8B0u, sub_0011B8B0); /* call 0x0011B8B0 */

loc_0011BB8E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BB9D; /* jne: not equal / not zero */

loc_0011BB95: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011BB9D: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(edx) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0011BB95; /* jle: less or equal (signed <=) */

loc_0011BBAB: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esp + 4));
    esi = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax) = LO8(edx);
    edx = MEM32(esp + 0x34);
    MEM32(edx) = esi;
    edx = MEM32(esp + 0x20);
    MEM8(edx) = 0xFF;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x28);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(edx) = LO8(eax);
    eax = MEM32(esp + 0x38);
    MEM32(eax) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC10
 * Original: 0x0011BC10 - 0x0011BCCC (188 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BC10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x0011BC4Eu); RECOMP_ABI_CALL(0x0011BB50u, sub_0011BB50); /* call 0x0011BB50 */

loc_0011BC4E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BC5C; /* jge: greater or equal (signed >=) */

loc_0011BC55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011BC5C: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    edx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = ecx;
    ecx = MEM32(edi);
    MEM32(esi + 0x58) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x60) = ecx;
    SET_LO8(ecx, MEM8(esi + 0xD));
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x54) = edx;
    edx = MEM32(esi + 0x3C);
    MEM32(esi + 0x5C) = edx;
    edx = MEM32(esi + 0x44);
    POP32(esp, edi);
    MEM32(esi + 0x64) = edx;
    MEM16(esi + 0x9C) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM16(esi + 0x98) = 3;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BCD0
 * Original: 0x0011BCD0 - 0x0011BDF0 (288 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BCD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011BDC2; /* jne: not equal / not zero */

loc_0011BCE3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BCECu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011BCEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BDC2; /* jne: not equal / not zero */

loc_0011BCF7: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ebp = esi + 0x6C;
    PUSH32(esp, ebp);
    edi = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011BD0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011BD09u); } /* indirect call */
    }

loc_0011BD0C: ;
    eax = MEM32(edi);
    edi = MEM32(esi + 0x60);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BD1F; /* jle: less or equal (signed <=) */

loc_0011BD1D: ;
    edi = ebp;

loc_0011BD1F: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BD28; /* jle: less or equal (signed <=) */

loc_0011BD26: ;
    edi = ecx;

loc_0011BD28: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    ecx = MEM32(esi + 0x5C);
    edx = ecx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011BD7C; /* jne: not equal / not zero */

loc_0011BD34: ;
    ebp = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = ecx + ebp * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011BDA4; /* jle: less or equal (signed <=) */

loc_0011BD42: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    goto loc_0011BD50;

    /* nop */

loc_0011BD50: ;
    SET_LO16(ecx, MEM16(ebx + eax * 4));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(ecx + ebp + -2) = LO16(edx);
    SET_LO16(ecx, MEM16(ebx + eax * 4 + -2));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    MEM16(ebp + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0011BD50; /* jl: less (signed <) */

loc_0011BD7A: ;
    goto loc_0011BDA4;

loc_0011BD7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BDA4; /* jle: less or equal (signed <=) */

loc_0011BD80: ;
    ebp = ebx;
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    goto loc_0011BD90;

    /* nop */

loc_0011BD90: ;
    SET_LO16(ecx, MEM16(eax + ebp));
    SET_LO16(ebx, ZX8(HI8(ecx)));
    SET_HI8(ebx, LO8(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_0011BD90; /* jne: not equal / not zero */

loc_0011BDA4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x90) = edi;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011BDC2: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BDED; /* jne: not equal / not zero */

loc_0011BDC8: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011BDE3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011BDDDu); } /* indirect call */
    }

loc_0011BDE3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011BDED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BDF0
 * Original: 0x0011BDF0 - 0x0011BEE9 (249 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BDF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011BEBB; /* jne: not equal / not zero */

loc_0011BE03: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BE0Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011BE0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BEBB; /* jne: not equal / not zero */

loc_0011BE17: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebp = esi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011BE2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011BE29u); } /* indirect call */
    }

loc_0011BE2C: ;
    eax = MEM32(ebp);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BE3F; /* jle: less or equal (signed <=) */

loc_0011BE3D: ;
    ecx = edi;

loc_0011BE3F: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BE48; /* jle: less or equal (signed <=) */

loc_0011BE46: ;
    ecx = edx;

loc_0011BE48: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edx = MEM32(esi + 0x5C);
    edi = edx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011BE83; /* jne: not equal / not zero */

loc_0011BE54: ;
    ebp = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = edx + ebp * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011BE9F; /* jle: less or equal (signed <=) */

loc_0011BE60: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;

loc_0011BE68: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + eax + -2) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(ebx, MEM8(eax + -1));
    MEM16(eax + ebp + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_0011BE68; /* jne: not equal / not zero */

loc_0011BE81: ;
    goto loc_0011BE9F;

loc_0011BE83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BE9F; /* jle: less or equal (signed <=) */

loc_0011BE89: ;
    /* nop */

loc_0011BE90: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + ebx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM16(edi + eax * 2 + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0011BE90; /* jl: less (signed <) */

loc_0011BE9F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011BEBB: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BEE6; /* jne: not equal / not zero */

loc_0011BEC1: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011BEDCu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011BED6u); } /* indirect call */
    }

loc_0011BEDC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011BEE6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BEF0
 * Original: 0x0011BEF0 - 0x0011BF0C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BEF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x9C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x9C), 1 (16-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011BF07; /* jne: not equal / not zero */

loc_0011BF02: ;
    g_seh_ebp = ebp; sub_0011BDF0(); return; /* tail jmp 0x0011BDF0 */

loc_0011BF07: ;
    g_seh_ebp = ebp; sub_0011BCD0(); return; /* tail jmp 0x0011BCD0 */

}

/**
 * sub_0011BF10
 * Original: 0x0011BF10 - 0x0011C053 (323 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BF10: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0011BF33; /* jle: less or equal (signed <=) */

loc_0011BF21: ;
    ecx = MEM32(0x2F9A20);

loc_0011BF27: ;
    edi = MEM32(eax + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BF33; /* je: equal / zero */

loc_0011BF2E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BF27; /* jl: less (signed <) */

loc_0011BF33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BF54; /* je: equal / zero */

loc_0011BF37: ;
    ecx = eax;
    ecx = ecx & 0x80000003u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0011BF46; /* jns: not sign (positive) */

loc_0011BF41: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011BF46: ;
    if ((ecx != 0)) goto loc_0011BF54; /* jne: not equal / not zero */

loc_0011BF48: ;
    _fa = (uint32_t)(MEM16(eax + edx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + edx + 8), 1 (16-bit) */
    eax = eax + edx + 8;
    if (CMP_LE(_fas, _fbs)) goto loc_0011BF5B; /* jle: less or equal (signed <=) */

loc_0011BF54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011BF5B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0011BF74; /* jle: less or equal (signed <=) */

loc_0011BF62: ;
    edi = MEM32(0x2F9A24);

loc_0011BF68: ;
    ebx = MEM32(ecx + edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BF74; /* je: equal / zero */

loc_0011BF6F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BF68; /* jl: less (signed <) */

loc_0011BF74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C04B; /* je: equal / zero */

loc_0011BF7C: ;
    esi = MEM32(ecx + edx + 4);
    edx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(ecx);
    ecx = MEM32(esp + 0x20);
    MEM8(ecx) = 0xFF;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x30);
    MEM32(ecx) = edx;
    SET_LO8(edx, MEM8(eax + 2));
    ecx = MEM32(esp + 0x24);
    MEM8(edi) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(ecx) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0xC));
    MEM8(ebx) = LO8(eax);
    ebp = SX8(LO8(eax));
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ebp = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(ebp) = eax;
    MEM32(edx) = 1;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BFDF; /* jne: not equal / not zero */

loc_0011BFD4: ;
    eax = MEM32(esp + 0x3C);
    MEM16(eax) = 0;
    goto loc_0011C01A;

loc_0011BFDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BFEE; /* jne: not equal / not zero */

loc_0011BFE3: ;
    edx = MEM32(esp + 0x3C);
    MEM16(edx) = 1;
    goto loc_0011C01A;

loc_0011BFEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C01A; /* jne: not equal / not zero */

loc_0011BFF2: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(ebx) = LO8(eax);
    MEM32(edx) = 4;
    eax = esi;
    esi = (uint32_t)(int32_t)SMEM8(edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(esp + 0x3C);
    MEM32(ebp) = eax;
    MEM8(ecx) = 0x10;
    MEM16(edx) = 2;

loc_0011C01A: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C029; /* jne: not equal / not zero */

loc_0011C01F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011C029: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C01F; /* je: equal / zero */

loc_0011C02E: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C04B; /* jle: less or equal (signed <=) */

loc_0011C034: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011C04B; /* jg: greater (signed >) */

loc_0011C038: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0011C04B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C060
 * Original: 0x0011C060 - 0x0011C113 (179 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x9C;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x0011C0A5u); RECOMP_ABI_CALL(0x0011BF10u, sub_0011BF10); /* call 0x0011BF10 */

loc_0011C0A5: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C0B3; /* jge: greater or equal (signed >=) */

loc_0011C0AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011C0B3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + 0x44);
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x60) = edx;
    MEM32(esi + 0x64) = ecx;
    MEM16(esi + 0x98) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C120
 * Original: 0x0011C120 - 0x0011C21F (255 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011C1F1; /* jne: not equal / not zero */

loc_0011C133: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C13Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011C13C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C1F1; /* jne: not equal / not zero */

loc_0011C147: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebp = esi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011C15Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011C159u); } /* indirect call */
    }

loc_0011C15C: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi + 0x60);
    edi = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C16F; /* jle: less or equal (signed <=) */

loc_0011C16D: ;
    eax = edi;

loc_0011C16F: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C178; /* jle: less or equal (signed <=) */

loc_0011C176: ;
    eax = edx;

loc_0011C178: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edx = MEM32(esi + 0x5C);
    edi = edx + ecx * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011C1BA; /* jne: not equal / not zero */

loc_0011C184: ;
    ebp = MEM32(esi + 0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = edx + ebp * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011C1D3; /* jle: less or equal (signed <=) */

loc_0011C192: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0011C1A0;

    /* nop */
    /* nop */

loc_0011C1A0: ;
    SET_LO16(ebp, MEM16(ebx + ecx * 4));
    MEM16(edi + edx) = LO16(ebp);
    SET_LO16(ebp, MEM16(ebx + ecx * 4 + 2));
    MEM16(edx) = LO16(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C1A0; /* jl: less (signed <) */

loc_0011C1B8: ;
    goto loc_0011C1D3;

loc_0011C1BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C1D3; /* jle: less or equal (signed <=) */

loc_0011C1BE: ;
    edx = ebx;
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;

loc_0011C1C6: ;
    SET_LO16(ebx, MEM16(edx + ecx));
    MEM16(ecx) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C1C6; /* jne: not equal / not zero */

loc_0011C1D3: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011C1F1: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C21C; /* jne: not equal / not zero */

loc_0011C1F7: ;
    edx = MEM32(esi + 0x90);
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011C212u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011C20Cu); } /* indirect call */
    }

loc_0011C212: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011C21C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C220
 * Original: 0x0011C220 - 0x0011C32E (270 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011C300; /* jne: not equal / not zero */

loc_0011C233: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C23Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011C23C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C300; /* jne: not equal / not zero */

loc_0011C247: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ebp = esi + 0x6C;
    PUSH32(esp, ebp);
    edi = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011C25Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011C259u); } /* indirect call */
    }

loc_0011C25C: ;
    eax = MEM32(edi);
    edi = MEM32(esi + 0x60);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C26F; /* jle: less or equal (signed <=) */

loc_0011C26D: ;
    edi = ebp;

loc_0011C26F: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C278; /* jle: less or equal (signed <=) */

loc_0011C276: ;
    edi = ecx;

loc_0011C278: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    ecx = MEM32(esi + 0x5C);
    ebp = ecx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011C2C8; /* jne: not equal / not zero */

loc_0011C284: ;
    edx = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = ecx + edx * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011C2E4; /* jle: less or equal (signed <=) */

loc_0011C290: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edi;
    /* nop */

loc_0011C2A0: ;
    SET_LO8(edx, MEM8(eax));
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x80);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + ebp + -2) = LO16(ebx);
    SET_LO8(edx, MEM8(eax + -1));
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x80);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(edx));
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + eax + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_0011C2A0; /* jne: not equal / not zero */

loc_0011C2C6: ;
    goto loc_0011C2E4;

loc_0011C2C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C2E4; /* jle: less or equal (signed <=) */

loc_0011C2CE: ;
    edi = edi;

loc_0011C2D0: ;
    SET_LO8(ecx, MEM8(eax + ebx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_HI8(edx, LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(ebp + eax * 2 + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0011C2D0; /* jl: less (signed <) */

loc_0011C2E4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x90) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011C300: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C32B; /* jne: not equal / not zero */

loc_0011C306: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011C321u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011C31Bu); } /* indirect call */
    }

loc_0011C321: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011C32B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C330
 * Original: 0x0011C330 - 0x0011C437 (263 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0011C330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C330: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebp = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011C409; /* jne: not equal / not zero */

loc_0011C343: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C34Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011C34C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C409; /* jne: not equal / not zero */

loc_0011C357: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebx = esi + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011C36Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011C369u); } /* indirect call */
    }

loc_0011C36C: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C37E; /* jle: less or equal (signed <=) */

loc_0011C37C: ;
    ecx = edi;

loc_0011C37E: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C387; /* jle: less or equal (signed <=) */

loc_0011C385: ;
    ecx = edx;

loc_0011C387: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edi = MEM32(esi + 0x5C);
    edx = edi + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011C3CC; /* jne: not equal / not zero */

loc_0011C393: ;
    ebx = MEM32(esi + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = edi + ebx * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011C3EB; /* jle: less or equal (signed <=) */

loc_0011C39F: ;
    eax = ebp + 3;
    ebp = edx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;

loc_0011C3A8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(eax + -1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(eax + -7));
    MEM16(edi + ebp + -2) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(ebx, MEM8(eax + -4));
    SET_LO8(ebx, MEM8(eax + -6));
    MEM16(edi + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_0011C3A8; /* jne: not equal / not zero */

loc_0011C3CA: ;
    goto loc_0011C3EB;

loc_0011C3CC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C3EB; /* jle: less or equal (signed <=) */

loc_0011C3D0: ;
    edi = edx;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ecx;

loc_0011C3D8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax + -2));
    MEM16(edi + eax + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_0011C3D8; /* jne: not equal / not zero */

loc_0011C3EB: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebx);

loc_0011C409: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C434; /* jne: not equal / not zero */

loc_0011C40F: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011C42Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011C424u); } /* indirect call */
    }

loc_0011C42A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011C434: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C440
 * Original: 0x0011C440 - 0x0011C464 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011C440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C440: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0x282594;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C461; /* jne: not equal / not zero */

loc_0011C44F: ;
    edx = MEM32(eax + 8);
    ecx = 0x28258C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C461; /* jne: not equal / not zero */

loc_0011C45B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011C461: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C470
 * Original: 0x0011C470 - 0x0011C4A8 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C470: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x9C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C48A; /* jne: not equal / not zero */

loc_0011C481: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0011C330(); return; /* tail jmp 0x0011C330 */

loc_0011C48A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C499; /* jne: not equal / not zero */

loc_0011C490: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0011C220(); return; /* tail jmp 0x0011C220 */

loc_0011C499: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C4A7; /* jne: not equal / not zero */

loc_0011C49E: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0011C120(); return; /* tail jmp 0x0011C120 */

loc_0011C4A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C4B0
 * Original: 0x0011C4B0 - 0x0011C585 (213 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C4B0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, ZX8(MEM8(ecx + 7)));
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edx) = LO16(eax);
    SET_LO8(edx, MEM8(ecx + 9));
    eax = MEM32(esp + 0x28);
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    edx = ZX16(MEM16(ecx + 0x2A));
    MEM32(esi) = edx;
    edx = ZX8(MEM8(ecx + 8));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    if (CMP_A(_fa, _fb)) goto loc_0011C560; /* ja: above (unsigned >) */

loc_0011C4F8: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x11C588); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0011C4FFu) goto loc_0011C4FF;
    if (_jt == 0x0011C524u) goto loc_0011C524;
    if (_jt == 0x0011C542u) goto loc_0011C542;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011C4FF: ;
    MEM8(ebp) = 0x10;
    SET_LO8(eax, MEM8(eax));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(ebx) = LO8(eax);
    MEM32(esi) = 1;
    eax = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x3C);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi) = eax;
    MEM16(edx) = 0;
    goto loc_0011C560;

loc_0011C524: ;
    MEM8(ebp) = 8;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx) = LO8(eax);
    eax = MEM32(esp + 0x3C);
    MEM32(esi) = 1;
    edx = MEM32(ecx + 0xC);
    MEM32(edi) = edx;
    MEM16(eax) = 1;
    goto loc_0011C560;

loc_0011C542: ;
    MEM8(ebp) = 4;
    SET_LO8(edx, MEM8(eax));
    MEM8(ebx) = LO8(edx);
    edx = MEM32(esp + 0x3C);
    MEM32(esi) = 2;
    eax = MEM32(ecx + 0xC);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = eax;
    MEM16(edx) = 2;

loc_0011C560: ;
    MEM8(ebx) = 2;
    MEM32(esi) = 1;
    eax = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp) = 0x10;
    POP32(esp, ebp);
    MEM8(eax) = 0xFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C5A0
 * Original: 0x0011C5A0 - 0x0011C653 (179 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x9C;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x0011C5E5u); RECOMP_ABI_CALL(0x0011C4B0u, sub_0011C4B0); /* call 0x0011C4B0 */

loc_0011C5E5: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C5F3; /* jge: greater or equal (signed >=) */

loc_0011C5EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011C5F3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + 0x44);
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x60) = edx;
    MEM32(esi + 0x64) = ecx;
    MEM16(esi + 0x98) = 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C660
 * Original: 0x0011C660 - 0x0011C75F (255 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_0011C731; /* jne: not equal / not zero */

loc_0011C673: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C67Cu); RECOMP_ABI_CALL(0x0011AF20u, sub_0011AF20); /* call 0x0011AF20 */

loc_0011C67C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C731; /* jne: not equal / not zero */

loc_0011C687: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebp = esi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0011C69Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011C699u); } /* indirect call */
    }

loc_0011C69C: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi + 0x60);
    edi = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C6AF; /* jle: less or equal (signed <=) */

loc_0011C6AD: ;
    eax = edi;

loc_0011C6AF: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C6B8; /* jle: less or equal (signed <=) */

loc_0011C6B6: ;
    eax = edx;

loc_0011C6B8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edx = MEM32(esi + 0x5C);
    edi = edx + ecx * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0011C6FA; /* jne: not equal / not zero */

loc_0011C6C4: ;
    ebp = MEM32(esi + 0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = edx + ebp * 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0011C713; /* jle: less or equal (signed <=) */

loc_0011C6D2: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0011C6E0;

    /* nop */
    /* nop */

loc_0011C6E0: ;
    SET_LO16(ebp, MEM16(ebx + ecx * 4));
    MEM16(edi + edx) = LO16(ebp);
    SET_LO16(ebp, MEM16(ebx + ecx * 4 + 2));
    MEM16(edx) = LO16(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C6E0; /* jl: less (signed <) */

loc_0011C6F8: ;
    goto loc_0011C713;

loc_0011C6FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C713; /* jle: less or equal (signed <=) */

loc_0011C6FE: ;
    edx = ebx;
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;

loc_0011C706: ;
    SET_LO16(ebx, MEM16(edx + ecx));
    MEM16(ecx) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C706; /* jne: not equal / not zero */

loc_0011C713: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_0011C731: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C75C; /* jne: not equal / not zero */

loc_0011C737: ;
    edx = MEM32(esi + 0x90);
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x0011C752u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011C74Cu); } /* indirect call */
    }

loc_0011C752: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;

loc_0011C75C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C760
 * Original: 0x0011C760 - 0x0011C775 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011C760: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0x2ADD2C;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(eax)));
    edx = edx - MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C780
 * Original: 0x0011C780 - 0x0011C926 (422 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C780: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0011C906; /* jle: less or equal (signed <=) */

loc_0011C7AE: ;
    ebx = MEM32(esp + 0x2C);
    goto loc_0011C7B8;

loc_0011C7B4: ;
    esi = MEM32(esp + 0x24);

loc_0011C7B8: ;
    SET_LO16(ecx, MEM16(esi));
    eax = MEM32(esp + 0x3C);
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ebp = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0x8000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C91A; /* jne: not equal / not zero */

loc_0011C7D3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    MEM32(esp + 0x1C) = 0x10;
    edx = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x40));
    edx = edx ^ ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    edx = edx & 0x1FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x34);
    ecx = SX16(LO16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x18) = ecx;
    goto loc_0011C820;

loc_0011C817: ;
    esi = MEM32(esp + 0x24);
    goto loc_0011C820;

    /* nop */

loc_0011C820: ;
    edx = MEM32(esp + 0x24);
    esi = (uint32_t)(int32_t)SMEM8(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x18));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011C860; /* jg: greater (signed >) */

loc_0011C851: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C874; /* jge: greater or equal (signed >=) */

loc_0011C859: ;
    edx = 0xFFFF8000u;
    goto loc_0011C874;

loc_0011C860: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C86F; /* jge: greater or equal (signed >=) */

loc_0011C868: ;
    edx = 0xFFFF8000u;
    goto loc_0011C874;

loc_0011C86F: ;
    edx = 0x7FFF;

loc_0011C874: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x34);
    MEM16(ebx) = LO16(edx);
    MEM32(esp + 0x14) = edx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi * 4 + 0x2ADD38);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x18));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011C8BA; /* jg: greater (signed >) */

loc_0011C8AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C8CE; /* jge: greater or equal (signed >=) */

loc_0011C8B3: ;
    ecx = 0xFFFF8000u;
    goto loc_0011C8CE;

loc_0011C8BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C8C9; /* jge: greater or equal (signed >=) */

loc_0011C8C2: ;
    ecx = 0xFFFF8000u;
    goto loc_0011C8CE;

loc_0011C8C9: ;
    ecx = 0x7FFF;

loc_0011C8CE: ;
    edx = MEM32(esp + 0x14);
    MEM16(ebx) = LO16(ecx);
    edi = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_0011C817; /* jne: not equal / not zero */

loc_0011C8ED: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0011C7B4; /* jl: less (signed <) */

loc_0011C902: ;
    ecx = MEM32(esp + 0x30);

loc_0011C906: ;
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(ecx) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ecx + 2) = LO16(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011C91A: ;
    eax = MEM32(esp + 0x10);
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
 * sub_0011C930
 * Original: 0x0011C930 - 0x0011CC8E (862 bytes, 255 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C930: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(ecx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ebx + 2);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0011CC5C; /* jle: less or equal (signed <=) */

loc_0011C97A: ;
    SET_LO16(eax, MEM16(edi));
    ebx = MEM32(esp + 0x58);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0011CC80; /* js: sign (negative) */

loc_0011C98F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx));
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x5C));
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x12));
    SET_LO16(edx, ZX8(HI8(ecx)));
    esi = esi & 0x1FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_HI8(edx, LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0011CC80; /* js: sign (negative) */

loc_0011C9C2: ;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x5C));
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x1FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx) = LO16(eax);
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = SX16(LO16(esi));
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0x20) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = 0x10;
    goto loc_0011CA10;

loc_0011CA03: ;
    eax = MEM32(esp + 0x1C);
    goto loc_0011CA10;

    /* nop */

loc_0011CA10: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x12);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = edi;
    edi = ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((4) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011CA4F; /* jg: greater (signed >) */

loc_0011CA41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CA62; /* jge: greater or equal (signed >=) */

loc_0011CA48: ;
    eax = 0xFFFF8000u;
    goto loc_0011CA62;

loc_0011CA4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CA5D; /* jge: greater or equal (signed >=) */

loc_0011CA56: ;
    eax = 0xFFFF8000u;
    goto loc_0011CA62;

loc_0011CA5D: ;
    eax = 0x7FFF;

loc_0011CA62: ;
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x14));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x24);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011CAA5; /* jg: greater (signed >) */

loc_0011CA97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CAB8; /* jge: greater or equal (signed >=) */

loc_0011CA9E: ;
    eax = 0xFFFF8000u;
    goto loc_0011CAB8;

loc_0011CAA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CAB3; /* jge: greater or equal (signed >=) */

loc_0011CAAC: ;
    eax = 0xFFFF8000u;
    goto loc_0011CAB8;

loc_0011CAB3: ;
    eax = 0x7FFF;

loc_0011CAB8: ;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = edx;
    edx = eax + edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    MEM32(esp + 0x38) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011CAF0; /* jg: greater (signed >) */

loc_0011CAE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CB03; /* jge: greater or equal (signed >=) */

loc_0011CAE9: ;
    eax = 0xFFFF8000u;
    goto loc_0011CB03;

loc_0011CAF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CAFE; /* jge: greater or equal (signed >=) */

loc_0011CAF7: ;
    eax = 0xFFFF8000u;
    goto loc_0011CB03;

loc_0011CAFE: ;
    eax = 0x7FFF;

loc_0011CB03: ;
    ebp = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x40);
    MEM16(ebp) = LO16(eax);
    MEM16(edx) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x48) = ebp;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x10));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx * 4 + 0x2ADD38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x20));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x2ADD38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011CB65; /* jg: greater (signed >) */

loc_0011CB57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CB78; /* jge: greater or equal (signed >=) */

loc_0011CB5E: ;
    eax = 0xFFFF8000u;
    goto loc_0011CB78;

loc_0011CB65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CB73; /* jge: greater or equal (signed >=) */

loc_0011CB6C: ;
    eax = 0xFFFF8000u;
    goto loc_0011CB78;

loc_0011CB73: ;
    eax = 0x7FFF;

loc_0011CB78: ;
    ecx = MEM32(esp + 0x38);
    ebp = eax;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_0011CBB1; /* jg: greater (signed >) */

loc_0011CBA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CBC4; /* jge: greater or equal (signed >=) */

loc_0011CBAA: ;
    eax = 0xFFFF8000u;
    goto loc_0011CBC4;

loc_0011CBB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CBBF; /* jge: greater or equal (signed >=) */

loc_0011CBB8: ;
    eax = 0xFFFF8000u;
    goto loc_0011CBC4;

loc_0011CBBF: ;
    eax = 0x7FFF;

loc_0011CBC4: ;
    esi = ecx;
    ecx = eax + ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);
    MEM32(esp + 0x38) = eax;
    eax = 0x66666667;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0011CBFA; /* jg: greater (signed >) */

loc_0011CBEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CC0D; /* jge: greater or equal (signed >=) */

loc_0011CBF3: ;
    eax = 0xFFFF8000u;
    goto loc_0011CC0D;

loc_0011CBFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CC08; /* jge: greater or equal (signed >=) */

loc_0011CC01: ;
    eax = 0xFFFF8000u;
    goto loc_0011CC0D;

loc_0011CC08: ;
    eax = 0x7FFF;

loc_0011CC0D: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x2C);
    MEM16(edx) = LO16(eax);
    MEM16(ecx) = LO16(eax);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0011CA03; /* jne: not equal / not zero */

loc_0011CC3C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x12;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0011C97A; /* jl: less (signed <) */

loc_0011CC54: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x4C);

loc_0011CC5C: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    MEM16(ecx) = LO16(ebp);
    MEM16(ecx + 2) = LO16(eax);
    SET_LO16(ecx, MEM16(esp + 0x38));
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    MEM16(ebx + 2) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ebx) = LO16(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011CC80: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011CC90
 * Original: 0x0011CC90 - 0x0011CF7F (751 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011CC90: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    edx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0011CF4D; /* jle: less or equal (signed <=) */

loc_0011CCDE: ;
    SET_LO16(eax, MEM16(ebp));
    ebx = MEM32(esp + 0x5C);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0011CF71; /* js: sign (negative) */

loc_0011CCF6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx));
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x60));
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx) = LO16(edx);
    SET_LO16(eax, MEM16(ebp + 0x12));
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    edi = edi & 0x1FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0011CF71; /* js: sign (negative) */

loc_0011CD2C: ;
    esi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x60));
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    esi = esi & 0x1FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx) = LO16(edx);
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x58);
    ecx = SX16(LO16(esi));
    edx = SX16(LO16(edi));
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = 0x10;

loc_0011CD70: ;
    edi = (uint32_t)(int32_t)SMEM8(ebp + 0x12);
    esi = (uint32_t)(int32_t)SMEM8(ebp);
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x30) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x10));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x20));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFF (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_0011CDBA; /* jg: greater (signed >) */

loc_0011CDAB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CDCE; /* jge: greater or equal (signed >=) */

loc_0011CDB3: ;
    edx = 0xFFFF8000u;
    goto loc_0011CDCE;

loc_0011CDBA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CDC9; /* jge: greater or equal (signed >=) */

loc_0011CDC2: ;
    edx = 0xFFFF8000u;
    goto loc_0011CDCE;

loc_0011CDC9: ;
    edx = 0x7FFF;

loc_0011CDCE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x3C));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x30));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011CE0B; /* jg: greater (signed >) */

loc_0011CDFC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CE1F; /* jge: greater or equal (signed >=) */

loc_0011CE04: ;
    ecx = 0xFFFF8000u;
    goto loc_0011CE1F;

loc_0011CE0B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CE1A; /* jge: greater or equal (signed >=) */

loc_0011CE13: ;
    ecx = 0xFFFF8000u;
    goto loc_0011CE1F;

loc_0011CE1A: ;
    ecx = 0x7FFF;

loc_0011CE1F: ;
    eax = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x44);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x4C);
    MEM16(ebp) = LO16(edx);
    MEM16(eax) = LO16(ecx);
    MEM32(esp + 0x3C) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi * 4 + 0x2ADD38);
    MEM32(esp + 0x4C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    MEM32(esp + 0x30) = ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x10));
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x2ADD38);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x20));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011CE90; /* jg: greater (signed >) */

loc_0011CE81: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CEA4; /* jge: greater or equal (signed >=) */

loc_0011CE89: ;
    ecx = 0xFFFF8000u;
    goto loc_0011CEA4;

loc_0011CE90: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CE9F; /* jge: greater or equal (signed >=) */

loc_0011CE98: ;
    ecx = 0xFFFF8000u;
    goto loc_0011CEA4;

loc_0011CE9F: ;
    ecx = 0x7FFF;

loc_0011CEA4: ;
    esi = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x24);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x30));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFF (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0011CEE3; /* jg: greater (signed >) */

loc_0011CED4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CEF7; /* jge: greater or equal (signed >=) */

loc_0011CEDC: ;
    edx = 0xFFFF8000u;
    goto loc_0011CEF7;

loc_0011CEE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CEF2; /* jge: greater or equal (signed >=) */

loc_0011CEEB: ;
    edx = 0xFFFF8000u;
    goto loc_0011CEF7;

loc_0011CEF2: ;
    edx = 0x7FFF;

loc_0011CEF7: ;
    edi = esi;
    esi = MEM32(esp + 0x4C);
    MEM16(ebp) = LO16(ecx);
    MEM16(esi) = LO16(edx);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = ebp;
    ebp = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x28) = edx;
    if ((_fa != 0)) goto loc_0011CD70; /* jne: not equal / not zero */

loc_0011CF2D: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x12;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0011CCDE; /* jl: less (signed <) */

loc_0011CF45: ;
    esi = MEM32(esp + 0x50);
    ebx = MEM32(esp + 0x48);

loc_0011CF4D: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    SET_LO16(eax, MEM16(esp + 0x3C));
    MEM16(ebx) = LO16(ecx);
    MEM16(ebx + 2) = LO16(edx);
    MEM16(esi + 2) = LO16(edi);
    POP32(esp, edi);
    MEM16(esi) = LO16(eax);
    eax = MEM32(esp + 0x3C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011CF71: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011CF80
 * Original: 0x0011CF80 - 0x0011CF93 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011CF80: ;
    eax = MEM32(0x9709B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011CF8E; /* jne: not equal / not zero */

loc_0011CF89: ;
    g_seh_ebp = ebp; sub_0011CC90(); return; /* tail jmp 0x0011CC90 */

loc_0011CF8E: ;
    g_seh_ebp = ebp; sub_0011C930(); return; /* tail jmp 0x0011C930 */

}

/**
 * sub_0011CFA0
 * Original: 0x0011CFA0 - 0x0011CFA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CFA0(void)
{

loc_0011CFA0: ;
    eax = 0xA9CA80;
    esp += 4; return; /* ret */

}

/**
 * sub_0011CFB0
 * Original: 0x0011CFB0 - 0x0011CFBC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CFB0(void)
{

loc_0011CFB0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CFBAu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011CFBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011CFC0
 * Original: 0x0011CFC0 - 0x0011CFEA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CFC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x128E00);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0011CFCEu); RECOMP_ABI_CALL(0x001286A0u, sub_001286A0); /* call 0x001286A0 */

loc_0011CFCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x128FC0);
    PUSH32(esp, 0x0011CFDAu); RECOMP_ABI_CALL(0x00128730u, sub_00128730); /* call 0x00128730 */

loc_0011CFDA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x129000);
    PUSH32(esp, 0x0011CFE6u); RECOMP_ABI_CALL(0x001286F0u, sub_001286F0); /* call 0x001286F0 */

loc_0011CFE6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011CFF0
 * Original: 0x0011CFF0 - 0x0011D059 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011CFF7u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011CFF7: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x58B;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011D00Cu); RECOMP_ABI_CALL(0x00128BD0u, sub_00128BD0); /* call 0x00128BD0 */

loc_0011D00C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0011D03B; /* je: equal / zero */

loc_0011D016: ;
    eax = MEM32(ebx);
    MEM32(esi + 4) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 8) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(ebx + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D03B: ;
    eax = 1;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = 0x426FC28F;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D060
 * Original: 0x0011D060 - 0x0011D06D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D060(void)
{

loc_0011D060: ;
    PUSH32(esp, 0x0011D065u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D065: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x38) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D070
 * Original: 0x0011D070 - 0x0011D079 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D070(void)
{

loc_0011D070: ;
    PUSH32(esp, 0x0011D075u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D075: ;
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D080
 * Original: 0x0011D080 - 0x0011D08D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D080(void)
{

loc_0011D080: ;
    PUSH32(esp, 0x0011D085u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D085: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x3C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D090
 * Original: 0x0011D090 - 0x0011D099 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D090(void)
{

loc_0011D090: ;
    PUSH32(esp, 0x0011D095u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D095: ;
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D0A0
 * Original: 0x0011D0A0 - 0x0011D0C0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D0A0(void)
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

loc_0011D0A0: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x0011D0A7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011D0A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011D0B1u); RECOMP_ABI_CALL(0x0011E7C0u, sub_0011E7C0); /* call 0x0011E7C0 */

loc_0011D0B1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011D0BCu); RECOMP_ABI_CALL(0x0011E7C0u, sub_0011E7C0); /* call 0x0011E7C0 */

loc_0011D0BC: ;
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
 * sub_0011D0C0
 * Original: 0x0011D0C0 - 0x0011D0CF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D0C0(void)
{

loc_0011D0C0: ;
    PUSH32(esp, 0x0011D0C5u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D0C5: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x68) = ecx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D0D0
 * Original: 0x0011D0D0 - 0x0011D0D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D0D0(void)
{

loc_0011D0D0: ;
    PUSH32(esp, 0x0011D0D5u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D0D5: ;
    eax = MEM32(eax + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D0E0
 * Original: 0x0011D0E0 - 0x0011D0E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011D0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D0E0: ;
    PUSH32(esp, 0x0011D0E5u); RECOMP_ABI_CALL(0x00129150u, sub_00129150); /* call 0x00129150 */

loc_0011D0E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D0F0
 * Original: 0x0011D0F0 - 0x0011D1CF (223 bytes, 66 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D10F; /* je: equal / zero */

loc_0011D0F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D0FFu); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011D0FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0xA9CA60) = esi;
    MEM32(0xA9E0AC) = eax;
    goto loc_0011D123;

loc_0011D10F: ;
    MEM32(0xA9CA60) = 0;
    MEM32(0xA9E0AC) = 0;

loc_0011D123: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D145; /* je: equal / zero */

loc_0011D12C: ;
    ecx = MEM32(0x971254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    MEM32(ecx * 4 + 0x971210) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0011D145; /* jge: greater or equal (signed >=) */

loc_0011D13E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x971254) = ecx;

loc_0011D145: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F15u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F15u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011D177; /* jg: greater (signed >) */

loc_0011D14C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0011D16B; /* je: equal / zero */

loc_0011D14E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000408u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000408u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D196; /* je: equal / zero */

loc_0011D155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00040Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF00040Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D196; /* je: equal / zero */

loc_0011D15C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000C04u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000C04u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D1B0; /* jne: not equal / not zero */

loc_0011D163: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2ADF60);
    goto loc_0011D1B6;

loc_0011D16B: ;
    PUSH32(esp, 0xFF000F15u);
    PUSH32(esp, 0x2ADEF0);
    goto loc_0011D1B6;

loc_0011D177: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F1Cu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011D19E; /* jg: greater (signed >) */

loc_0011D17E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0011D196; /* je: equal / zero */

loc_0011D180: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F17u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F17u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D1B0; /* jl: less (signed <) */

loc_0011D187: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F18u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F18u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011D1B0; /* jg: greater (signed >) */

loc_0011D18E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2ADE88);
    goto loc_0011D1B6;

loc_0011D196: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2ADE30);
    goto loc_0011D1B6;

loc_0011D19E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D1B0; /* jl: less (signed <) */

loc_0011D1A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011D1B0; /* jg: greater (signed >) */

loc_0011D1A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2ADE1C);
    goto loc_0011D1B6;

loc_0011D1B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2ADE0C);

loc_0011D1B6: ;
    PUSH32(esp, 0x971258);
    PUSH32(esp, 0x0011D1C0u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_0011D1C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x971258);
    PUSH32(esp, 0x0011D1CDu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D1CD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D1D0
 * Original: 0x0011D1D0 - 0x0011D1D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D1D0(void)
{

loc_0011D1D0: ;
    eax = MEM32(0xA9CA60);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D1E0
 * Original: 0x0011D1E0 - 0x0011D1ED (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D1E0(void)
{

loc_0011D1E0: ;
    PUSH32(esp, 0x0011D1E5u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D1E5: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D1F0
 * Original: 0x0011D1F0 - 0x0011D1F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D1F0(void)
{

loc_0011D1F0: ;
    PUSH32(esp, 0x0011D1F5u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D1F5: ;
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D200
 * Original: 0x0011D200 - 0x0011D216 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D200: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D20Au); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011D20A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00129800(); return; /* tail jmp 0x00129800 */

}

/**
 * sub_0011D220
 * Original: 0x0011D220 - 0x0011D247 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D23A; /* je: equal / zero */

loc_0011D228: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D22Eu); RECOMP_ABI_CALL(0x0011F040u, sub_0011F040); /* call 0x0011F040 */

loc_0011D22E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012A960(); return; /* tail jmp 0x0012A960 */

loc_0011D23A: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0012A960(); return; /* tail jmp 0x0012A960 */

}

/**
 * sub_0011D250
 * Original: 0x0011D250 - 0x0011D2BE (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D250: ;
    PUSH32(esp, 0x0011D255u); RECOMP_ABI_CALL(0x0011CFA0u, sub_0011CFA0); /* call 0x0011CFA0 */

loc_0011D255: ;
    MEM32(0x971358) = MEM32(0x971358) - 1;
    _fa = (uint32_t)(MEM32(0x971358)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011D2BD; /* jne: not equal / not zero */

loc_0011D25D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x6C;
    edi = 8;

loc_0011D267: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D276; /* jne: not equal / not zero */

loc_0011D26D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D273u); RECOMP_ABI_CALL(0x001207F0u, sub_001207F0); /* call 0x001207F0 */

loc_0011D273: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011D276: ;
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2B8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011D267; /* jne: not equal / not zero */

loc_0011D27F: ;
    PUSH32(esp, 0x0011D284u); RECOMP_ABI_CALL(0x001286D0u, sub_001286D0); /* call 0x001286D0 */

loc_0011D284: ;
    PUSH32(esp, 0x0011D289u); RECOMP_ABI_CALL(0x00128750u, sub_00128750); /* call 0x00128750 */

loc_0011D289: ;
    PUSH32(esp, 0x0011D28Eu); RECOMP_ABI_CALL(0x00128710u, sub_00128710); /* call 0x00128710 */

loc_0011D28E: ;
    PUSH32(esp, 0x0011D293u); RECOMP_ABI_CALL(0x0011D690u, sub_0011D690); /* call 0x0011D690 */

loc_0011D293: ;
    PUSH32(esp, 0x0011D298u); RECOMP_ABI_CALL(0x00118360u, sub_00118360); /* call 0x00118360 */

loc_0011D298: ;
    PUSH32(esp, 0x0011D29Du); RECOMP_ABI_CALL(0x0011D0E0u, sub_0011D0E0); /* call 0x0011D0E0 */

loc_0011D29D: ;
    PUSH32(esp, 0x0011D2A2u); RECOMP_ABI_CALL(0x00108A00u, sub_00108A00); /* call 0x00108A00 */

loc_0011D2A2: ;
    PUSH32(esp, 0x0011D2A7u); RECOMP_ABI_CALL(0x0012A9D0u, sub_0012A9D0); /* call 0x0012A9D0 */

loc_0011D2A7: ;
    PUSH32(esp, 0x0011D2ACu); RECOMP_ABI_CALL(0x00117260u, sub_00117260); /* call 0x00117260 */

loc_0011D2AC: ;
    PUSH32(esp, 0x0011D2B1u); RECOMP_ABI_CALL(0x001177D0u, sub_001177D0); /* call 0x001177D0 */

loc_0011D2B1: ;
    PUSH32(esp, 0x0011D2B6u); RECOMP_ABI_CALL(0x00109380u, sub_00109380); /* call 0x00109380 */

loc_0011D2B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00128630(); return; /* tail jmp 0x00128630 */

loc_0011D2BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D2C0
 * Original: 0x0011D2C0 - 0x0011D352 (146 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D2C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x2ADE04);
    eax = MEM32(0x2ADE00);
    PUSH32(esp, 0x3588);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x2AE020);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x0011D2E9u); RECOMP_ABI_CALL(0x00129040u, sub_00129040); /* call 0x00129040 */

loc_0011D2E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D305; /* je: equal / zero */

loc_0011D2F1: ;
    PUSH32(esp, 0x2ADFEC);
    PUSH32(esp, 0x0011D2FBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D2FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D305: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D30Eu); RECOMP_ABI_CALL(0x001293C0u, sub_001293C0); /* call 0x001293C0 */

loc_0011D30E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D326; /* je: equal / zero */

loc_0011D315: ;
    PUSH32(esp, 0xFFFFFED3u);
    PUSH32(esp, 0x0011D31Fu); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011D31F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D326: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11D0F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011D334u); RECOMP_ABI_CALL(0x00129220u, sub_00129220); /* call 0x00129220 */

loc_0011D334: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D34C; /* je: equal / zero */

loc_0011D33B: ;
    PUSH32(esp, 0xFFFFFED1u);
    PUSH32(esp, 0x0011D345u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011D345: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D34C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D360
 * Original: 0x0011D360 - 0x0011D4AB (331 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D360(void)
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

loc_0011D360: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D37C; /* jne: not equal / not zero */

loc_0011D36B: ;
    PUSH32(esp, 0x2AE070);
    PUSH32(esp, 0x0011D375u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D375: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D37C: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(0x971250) = 0x2ADD78;
    PUSH32(esp, 0x0011D3DFu); RECOMP_ABI_CALL(0x00128610u, sub_00128610); /* call 0x00128610 */

loc_0011D3DF: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = esi;
    POP32(esp, esi);
    if ((_fas >= 0)) goto loc_0011D3F1; /* jns: not sign (positive) */

loc_0011D3E9: ;
    MEM32(esp + 8) = 0;

loc_0011D3F1: ;
    eax = MEM32(0x971358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D4A1; /* jne: not equal / not zero */

loc_0011D3FE: ;
    PUSH32(esp, 0x0011D403u); RECOMP_ABI_CALL(0x00108AA0u, sub_00108AA0); /* call 0x00108AA0 */

loc_0011D403: ;
    PUSH32(esp, 0x0011D408u); RECOMP_ABI_CALL(0x00109350u, sub_00109350); /* call 0x00109350 */

loc_0011D408: ;
    PUSH32(esp, 0x0011D40Du); RECOMP_ABI_CALL(0x001177B0u, sub_001177B0); /* call 0x001177B0 */

loc_0011D40D: ;
    PUSH32(esp, 0x0011D412u); RECOMP_ABI_CALL(0x00117240u, sub_00117240); /* call 0x00117240 */

loc_0011D412: ;
    PUSH32(esp, 0x0011D417u); RECOMP_ABI_CALL(0x0012A9B0u, sub_0012A9B0); /* call 0x0012A9B0 */

loc_0011D417: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D42F; /* je: equal / zero */

loc_0011D41B: ;
    PUSH32(esp, 0xFFFFFF9Bu);
    PUSH32(esp, 0x0011D422u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011D422: ;
    PUSH32(esp, 0x2AE048);
    PUSH32(esp, 0x0011D42Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D42C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011D42F: ;
    PUSH32(esp, ebx);
    ebx = esp + 4;
    PUSH32(esp, 0x0011D439u); RECOMP_ABI_CALL(0x0011CFF0u, sub_0011CFF0); /* call 0x0011CFF0 */

loc_0011D439: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281EEC)); /* fmul dword ptr [0x281eec] */
    MEM32(0xA9C9EC) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C0D8)); /* fadd dword ptr [0x22c0d8] */
    PUSH32(esp, 0x0011D458u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0011D458: ;
    edx = eax;
    PUSH32(esp, 0x0011D45Fu); RECOMP_ABI_CALL(0x0011D2C0u, sub_0011D2C0); /* call 0x0011D2C0 */

loc_0011D45F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D471; /* je: equal / zero */

loc_0011D464: ;
    PUSH32(esp, 0x2AE028);
    PUSH32(esp, 0x0011D46Eu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D46E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011D471: ;
    eax = esp;
    MEM32(0x97135C) = 1;
    PUSH32(esp, 0x0011D483u); RECOMP_ABI_CALL(0x0011D0A0u, sub_0011D0A0); /* call 0x0011D0A0 */

loc_0011D483: ;
    PUSH32(esp, 0x0011D488u); RECOMP_ABI_CALL(0x00118310u, sub_00118310); /* call 0x00118310 */

loc_0011D488: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11CFB0);
    PUSH32(esp, 0x0011D494u); RECOMP_ABI_CALL(0x001183B0u, sub_001183B0); /* call 0x001183B0 */

loc_0011D494: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011D49Cu); RECOMP_ABI_CALL(0x0011E170u, sub_0011E170); /* call 0x0011E170 */

loc_0011D49C: ;
    PUSH32(esp, 0x0011D4A1u); RECOMP_ABI_CALL(0x0011CFC0u, sub_0011CFC0); /* call 0x0011CFC0 */

loc_0011D4A1: ;
    MEM32(0x971358) = MEM32(0x971358) + 1;
    _fa = (uint32_t)(MEM32(0x971358)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011D4B0
 * Original: 0x0011D4B0 - 0x0011D4C9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D4B0: ;
    eax = MEM32(0x971358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D4C8; /* je: equal / zero */

loc_0011D4B9: ;
    MEM32(0x971358) = 0;
    g_seh_ebp = ebp; sub_0011D360(); return; /* tail jmp 0x0011D360 */

loc_0011D4C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D4D0
 * Original: 0x0011D4D0 - 0x0011D558 (136 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D4D0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D4E4u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011D4E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D500; /* jne: not equal / not zero */

loc_0011D4EB: ;
    PUSH32(esp, 0x2AE0CC);
    PUSH32(esp, 0x0011D4F5u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D4F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x98);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D523; /* jne: not equal / not zero */

loc_0011D50D: ;
    PUSH32(esp, 0x2AE098);
    PUSH32(esp, 0x0011D517u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D517: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D523: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D52Au); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D52A: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D538u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011D538: ;
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011D54Bu); RECOMP_ABI_CALL(0x0012AD40u, sub_0012AD40); /* call 0x0012AD40 */

loc_0011D54B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D560
 * Original: 0x0011D560 - 0x0011D608 (168 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D560: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D574u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011D574: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D590; /* jne: not equal / not zero */

loc_0011D57B: ;
    PUSH32(esp, 0x2AE138);
    PUSH32(esp, 0x0011D585u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D585: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x98);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D5B3; /* jne: not equal / not zero */

loc_0011D59D: ;
    PUSH32(esp, 0x2AE100);
    PUSH32(esp, 0x0011D5A7u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D5A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D5B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D5BAu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D5BA: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D5C8u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011D5C8: ;
    ecx = MEM32(esp + 0xC0);
    edx = MEM32(esp + 0xBC);
    eax = MEM32(esp + 0xB8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011D5FBu); RECOMP_ABI_CALL(0x0012AC70u, sub_0012AC70); /* call 0x0012AC70 */

loc_0011D5FB: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D610
 * Original: 0x0011D610 - 0x0011D615 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D610: ;
    g_seh_ebp = ebp; sub_0011D560(); return; /* tail jmp 0x0011D560 */

}

/**
 * sub_0011D620
 * Original: 0x0011D620 - 0x0011D649 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D620: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D645u); RECOMP_ABI_CALL(0x0011D560u, sub_0011D560); /* call 0x0011D560 */

loc_0011D645: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D650
 * Original: 0x0011D650 - 0x0011D678 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D650: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011D674u); RECOMP_ABI_CALL(0x0011D560u, sub_0011D560); /* call 0x0011D560 */

loc_0011D674: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D680
 * Original: 0x0011D680 - 0x0011D68C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D680(void)
{

loc_0011D680: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D68Au); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D68A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D690
 * Original: 0x0011D690 - 0x0011D695 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D690: ;
    g_seh_ebp = ebp; sub_0012ADA0(); return; /* tail jmp 0x0012ADA0 */

}

/**
 * sub_0011D6A0
 * Original: 0x0011D6A0 - 0x0011D6B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D6A0: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax * 8 + 0x205D;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D6C0
 * Original: 0x0011D6C0 - 0x0011D6C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D6C0: ;
    g_seh_ebp = ebp; sub_0012AF90(); return; /* tail jmp 0x0012AF90 */

}

/**
 * sub_0011D6D0
 * Original: 0x0011D6D0 - 0x0011D6D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D6D0: ;
    g_seh_ebp = ebp; sub_0012AEA0(); return; /* tail jmp 0x0012AEA0 */

}

/**
 * sub_0011D6E0
 * Original: 0x0011D6E0 - 0x0011D6EB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6E0(void)
{

loc_0011D6E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D6F0
 * Original: 0x0011D6F0 - 0x0011D6FF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6F0(void)
{

loc_0011D6F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xAC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D700
 * Original: 0x0011D700 - 0x0011D728 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D700: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D722; /* je: equal / zero */

loc_0011D703: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D71C; /* je: equal / zero */

loc_0011D706: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D716; /* je: equal / zero */

loc_0011D709: ;
    PUSH32(esp, 0x2AE170);
    PUSH32(esp, 0x0011D713u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D713: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011D716: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0011D71C: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0011D722: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D730
 * Original: 0x0011D730 - 0x0011D737 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D730(void)
{

loc_0011D730: ;
    ecx = MEM32(eax + 0x30);
    MEM32(edx + 0x4C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D740
 * Original: 0x0011D740 - 0x0011D74D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D740(void)
{

loc_0011D740: ;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D750
 * Original: 0x0011D750 - 0x0011D783 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D750: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xAC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D769u); RECOMP_ABI_CALL(0x0012B190u, sub_0012B190); /* call 0x0012B190 */

loc_0011D769: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = edx;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D790
 * Original: 0x0011D790 - 0x0011D7CB (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D790: ;
    eax = MEM32(eax + 0x8C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = 3;
    if ((_fa == 0)) goto loc_0011D7C4; /* je: equal / zero */

loc_0011D79F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D7BD; /* je: equal / zero */

loc_0011D7A2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D7B6; /* je: equal / zero */

loc_0011D7A5: ;
    PUSH32(esp, 0x2AE198);
    PUSH32(esp, 0x0011D7AFu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D7AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D7B6: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D7BD: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D7C4: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D7D0
 * Original: 0x0011D7D0 - 0x0011D80B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D7D0: ;
    eax = MEM32(eax + 0x90);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = 1;
    if ((_fa == 0)) goto loc_0011D804; /* je: equal / zero */

loc_0011D7DF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D7FD; /* je: equal / zero */

loc_0011D7E2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D7F6; /* je: equal / zero */

loc_0011D7E5: ;
    PUSH32(esp, 0x2AE1C0);
    PUSH32(esp, 0x0011D7EFu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D7EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D7F6: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D7FD: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D804: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D810
 * Original: 0x0011D810 - 0x0011D83A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D810: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 1;
    if ((_fa == 0)) goto loc_0011D836; /* je: equal / zero */

loc_0011D81B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011D82F; /* je: equal / zero */

loc_0011D81E: ;
    PUSH32(esp, 0x2AE1E4);
    PUSH32(esp, 0x0011D828u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D828: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D82F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D836: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D840
 * Original: 0x0011D840 - 0x0011D853 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D840: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xAC);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0012B390(); return; /* tail jmp 0x0012B390 */

}

/**
 * sub_0011D860
 * Original: 0x0011D860 - 0x0011D873 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D860: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B0F0(); return; /* tail jmp 0x0012B0F0 */

}

/**
 * sub_0011D880
 * Original: 0x0011D880 - 0x0011D89C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D880: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011D88Fu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D88F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D898u); RECOMP_ABI_CALL(0x0012B080u, sub_0012B080); /* call 0x0012B080 */

loc_0011D898: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D8A0
 * Original: 0x0011D8A0 - 0x0011D8D6 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D8A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D8ABu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011D8AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D8C3; /* jne: not equal / not zero */

loc_0011D8B2: ;
    PUSH32(esp, 0x2AE204);
    PUSH32(esp, 0x0011D8BCu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D8BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D8C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D8C9u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D8C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B090(); return; /* tail jmp 0x0012B090 */

}

/**
 * sub_0011D8E0
 * Original: 0x0011D8E0 - 0x0011D8F3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D8E0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xAC);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012B2B0(); return; /* tail jmp 0x0012B2B0 */

}

/**
 * sub_0011D900
 * Original: 0x0011D900 - 0x0011D905 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D900: ;
    g_seh_ebp = ebp; sub_0011D8E0(); return; /* tail jmp 0x0011D8E0 */

}

/**
 * sub_0011D910
 * Original: 0x0011D910 - 0x0011D923 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D910: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B2C0(); return; /* tail jmp 0x0012B2C0 */

}

/**
 * sub_0011D930
 * Original: 0x0011D930 - 0x0011D96F (63 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D93Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011D93B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D951; /* jne: not equal / not zero */

loc_0011D942: ;
    PUSH32(esp, 0x2AE238);
    PUSH32(esp, 0x0011D94Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D94C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D951: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D961u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D961: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D96Au); RECOMP_ABI_CALL(0x0012B0C0u, sub_0012B0C0); /* call 0x0012B0C0 */

loc_0011D96A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D970
 * Original: 0x0011D970 - 0x0011D975 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D970: ;
    g_seh_ebp = ebp; sub_0011D930(); return; /* tail jmp 0x0011D930 */

}

/**
 * sub_0011D980
 * Original: 0x0011D980 - 0x0011D9C7 (71 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D980: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D989u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011D989: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D99F; /* jne: not equal / not zero */

loc_0011D990: ;
    PUSH32(esp, 0x2AE274);
    PUSH32(esp, 0x0011D99Au); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D99A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D99F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D9A5u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D9A5: ;
    ecx = MEM32(esp + 0xC);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D9B7u); RECOMP_ABI_CALL(0x0012B0A0u, sub_0012B0A0); /* call 0x0012B0A0 */

loc_0011D9B7: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D9C2u); RECOMP_ABI_CALL(0x0012B0E0u, sub_0012B0E0); /* call 0x0012B0E0 */

loc_0011D9C2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D9D0
 * Original: 0x0011D9D0 - 0x0011DA0A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D9D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D9DBu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011D9DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D9F1; /* jne: not equal / not zero */

loc_0011D9E2: ;
    PUSH32(esp, 0x2AE2A8);
    PUSH32(esp, 0x0011D9ECu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011D9EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011D9F1: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D9FCu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011D9FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DA05u); RECOMP_ABI_CALL(0x0012B1D0u, sub_0012B1D0); /* call 0x0012B1D0 */

loc_0011DA05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DA10
 * Original: 0x0011DA10 - 0x0011DA46 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DA10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DA1Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011DA1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DA33; /* jne: not equal / not zero */

loc_0011DA22: ;
    PUSH32(esp, 0x2AE2DC);
    PUSH32(esp, 0x0011DA2Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011DA2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DA33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DA39u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DA39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B1E0(); return; /* tail jmp 0x0012B1E0 */

}

/**
 * sub_0011DA50
 * Original: 0x0011DA50 - 0x0011DA8A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DA50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DA5Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011DA5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DA71; /* jne: not equal / not zero */

loc_0011DA62: ;
    PUSH32(esp, 0x2AE310);
    PUSH32(esp, 0x0011DA6Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011DA6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DA71: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DA7Cu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DA7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DA85u); RECOMP_ABI_CALL(0x0012B1F0u, sub_0012B1F0); /* call 0x0012B1F0 */

loc_0011DA85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DA90
 * Original: 0x0011DA90 - 0x0011DAC6 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DA90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DA9Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011DA9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DAB3; /* jne: not equal / not zero */

loc_0011DAA2: ;
    PUSH32(esp, 0x2AE344);
    PUSH32(esp, 0x0011DAACu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011DAAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DAB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DAB9u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DAB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B200(); return; /* tail jmp 0x0012B200 */

}

/**
 * sub_0011DAD0
 * Original: 0x0011DAD0 - 0x0011DADC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DAD0: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DAE0
 * Original: 0x0011DAE0 - 0x0011DAFB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DAE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DAF5; /* je: equal / zero */

loc_0011DAEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DAF5; /* je: equal / zero */

loc_0011DAF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011DAF5: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DB00
 * Original: 0x0011DB00 - 0x0011DB48 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DB00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DB0Eu); RECOMP_ABI_CALL(0x0011DAE0u, sub_0011DAE0); /* call 0x0011DAE0 */

loc_0011DB0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB44; /* je: equal / zero */

loc_0011DB15: ;
    ecx = MEM32(esi + 0x198);
    edx = MEM32(esi + 0x194);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011DB2Au); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_0011DB2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DB46; /* jne: not equal / not zero */

loc_0011DB31: ;
    PUSH32(esp, 0x2AE378);
    PUSH32(esp, 0x0011DB3Bu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011DB3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DB41u); RECOMP_ABI_CALL(0x001207F0u, sub_001207F0); /* call 0x001207F0 */

loc_0011DB41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011DB44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DB46: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DB50
 * Original: 0x0011DB50 - 0x0011DB6A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DB50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x190);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB69; /* je: equal / zero */

loc_0011DB5E: ;
    eax = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx + 0xC)); return; /* indirect tail jmp */

loc_0011DB69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DB70
 * Original: 0x0011DB70 - 0x0011DBA1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011DB70: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0011DB79u); RECOMP_ABI_CALL(0x0011DAD0u, sub_0011DAD0); /* call 0x0011DAD0 */

loc_0011DB79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011DB81; /* jne: not equal / not zero */

loc_0011DB7E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011DB81: ;
    eax = MEM32(ecx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB7E; /* je: equal / zero */

loc_0011DB8B: ;
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011DB99u); RECOMP_ABI_CALL(0x00121BE0u, sub_00121BE0); /* call 0x00121BE0 */

loc_0011DB99: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DBB0
 * Original: 0x0011DBB0 - 0x0011DBD3 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DBB0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1A8) = ecx;
    MEM32(eax + 0x1AC) = ecx;
    MEM32(eax + 0x1B0) = ecx;
    MEM32(eax + 0x1A4) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DBE0
 * Original: 0x0011DBE0 - 0x0011DBF8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DBE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DBF7; /* je: equal / zero */

loc_0011DBEE: ;
    ecx = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx + 0x14)); return; /* indirect tail jmp */

loc_0011DBF7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DC00
 * Original: 0x0011DC00 - 0x0011DC45 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DC00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011DC32; /* jge: greater or equal (signed >=) */

loc_0011DC12: ;
    PUSH32(esp, 0x2AE3A4);
    PUSH32(esp, 0x0011DC1Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011DC1C: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1A0) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x19C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DC32: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x1A0) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x19C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DC50
 * Original: 0x0011DC50 - 0x0011DCBC (108 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DC50: ;
    ecx = MEM32(eax + 0x1AC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xAC);
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC92; /* je: equal / zero */

loc_0011DC64: ;
    eax = MEM32(eax + 0x1B0);
    MEM32(esp + 4) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2AE3E4);
    edx = esp + 0xC;
    PUSH32(esp, 0x2AE3DC);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0011DC8Bu); RECOMP_ABI_CALL(0x00113B30u, sub_00113B30); /* call 0x00113B30 */

loc_0011DC8B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DCA4; /* jne: not equal / not zero */

loc_0011DC92: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DC9Cu); RECOMP_ABI_CALL(0x0012B120u, sub_0012B120); /* call 0x0012B120 */

loc_0011DC9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011DCA4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DCB4u); RECOMP_ABI_CALL(0x0012B120u, sub_0012B120); /* call 0x0012B120 */

loc_0011DCB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DCC0
 * Original: 0x0011DCC0 - 0x0011DCF2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011DCC0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0011DCC9u); RECOMP_ABI_CALL(0x0011DAD0u, sub_0011DAD0); /* call 0x0011DAD0 */

loc_0011DCC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011DCD1; /* jne: not equal / not zero */

loc_0011DCCE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011DCD1: ;
    eax = MEM32(ecx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCCE; /* je: equal / zero */

loc_0011DCDB: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DCEAu); RECOMP_ABI_CALL(0x00121BE0u, sub_00121BE0); /* call 0x00121BE0 */

loc_0011DCEA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DD00
 * Original: 0x0011DD00 - 0x0011DD13 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DD00: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B210(); return; /* tail jmp 0x0012B210 */

}

/**
 * sub_0011DD20
 * Original: 0x0011DD20 - 0x0011DD33 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DD20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B220(); return; /* tail jmp 0x0012B220 */

}

/**
 * sub_0011DD40
 * Original: 0x0011DD40 - 0x0011DD5D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD40(void)
{

loc_0011DD40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1AC);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x1B0);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DD60
 * Original: 0x0011DD60 - 0x0011DD92 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DD60: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xAC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DD7Au); RECOMP_ABI_CALL(0x0012B190u, sub_0012B190); /* call 0x0012B190 */

loc_0011DD7A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DDA0
 * Original: 0x0011DDA0 - 0x0011DDC6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DDA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DDAAu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DDAA: ;
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 4) = eax;
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_0011DDD0
 * Original: 0x0011DDD0 - 0x0011DE1E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DDD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DDEBu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DDEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DDF4u); RECOMP_ABI_CALL(0x0012B260u, sub_0012B260); /* call 0x0012B260 */

loc_0011DDF4: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esp + 0x24);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x28);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x18);
    MEM32(edx) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE20
 * Original: 0x0011DE20 - 0x0011DE46 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE20: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DE39u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DE39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DE42u); RECOMP_ABI_CALL(0x0012B270u, sub_0012B270); /* call 0x0012B270 */

loc_0011DE42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE50
 * Original: 0x0011DE50 - 0x0011DE76 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE50: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DE69u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011DE69: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DE72u); RECOMP_ABI_CALL(0x0012B2A0u, sub_0012B2A0); /* call 0x0012B2A0 */

loc_0011DE72: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE80
 * Original: 0x0011DE80 - 0x0011DE93 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DE80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B470(); return; /* tail jmp 0x0012B470 */

}

/**
 * sub_0011DEA0
 * Original: 0x0011DEA0 - 0x0011DEB3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DEA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B4E0(); return; /* tail jmp 0x0012B4E0 */

}

/**
 * sub_0011DEC0
 * Original: 0x0011DEC0 - 0x0011DED3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DEC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B4A0(); return; /* tail jmp 0x0012B4A0 */

}

/**
 * sub_0011DEE0
 * Original: 0x0011DEE0 - 0x0011DEF3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DEE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B4C0(); return; /* tail jmp 0x0012B4C0 */

}

/**
 * sub_0011DF00
 * Original: 0x0011DF00 - 0x0011DF05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DF00: ;
    g_seh_ebp = ebp; sub_0011DEA0(); return; /* tail jmp 0x0011DEA0 */

}

/**
 * sub_0011DF10
 * Original: 0x0011DF10 - 0x0011DF23 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DF10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B500(); return; /* tail jmp 0x0012B500 */

}

/**
 * sub_0011DF30
 * Original: 0x0011DF30 - 0x0011DF43 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DF30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B520(); return; /* tail jmp 0x0012B520 */

}

/**
 * sub_0011DF50
 * Original: 0x0011DF50 - 0x0011DF63 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DF50: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B540(); return; /* tail jmp 0x0012B540 */

}

/**
 * sub_0011DF70
 * Original: 0x0011DF70 - 0x0011DF83 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DF70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B560(); return; /* tail jmp 0x0012B560 */

}

/**
 * sub_0011DF90
 * Original: 0x0011DF90 - 0x0011DFA3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DF90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B580(); return; /* tail jmp 0x0012B580 */

}

/**
 * sub_0011DFB0
 * Original: 0x0011DFB0 - 0x0011DFC3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DFB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B5A0(); return; /* tail jmp 0x0012B5A0 */

}

/**
 * sub_0011DFD0
 * Original: 0x0011DFD0 - 0x0011DFE3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DFD0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B5C0(); return; /* tail jmp 0x0012B5C0 */

}

/**
 * sub_0011DFF0
 * Original: 0x0011DFF0 - 0x0011E003 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DFF0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xAC);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012B2D0(); return; /* tail jmp 0x0012B2D0 */

}

/**
 * sub_0011E010
 * Original: 0x0011E010 - 0x0011E023 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E010: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B2E0(); return; /* tail jmp 0x0012B2E0 */

}

/**
 * sub_0011E030
 * Original: 0x0011E030 - 0x0011E043 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E030: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xAC);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012B2F0(); return; /* tail jmp 0x0012B2F0 */

}

/**
 * sub_0011E050
 * Original: 0x0011E050 - 0x0011E063 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E050: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B300(); return; /* tail jmp 0x0012B300 */

}

/**
 * sub_0011E070
 * Original: 0x0011E070 - 0x0011E075 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E070: ;
    g_seh_ebp = ebp; sub_0012AF10(); return; /* tail jmp 0x0012AF10 */

}

/**
 * sub_0011E080
 * Original: 0x0011E080 - 0x0011E085 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E080: ;
    g_seh_ebp = ebp; sub_0012AF20(); return; /* tail jmp 0x0012AF20 */

}

/**
 * sub_0011E090
 * Original: 0x0011E090 - 0x0011E0AC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E090: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E09Fu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E09F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E0A8u); RECOMP_ABI_CALL(0x0012AF50u, sub_0012AF50); /* call 0x0012AF50 */

loc_0011E0A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E0B0
 * Original: 0x0011E0B0 - 0x0011E0EE (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E0B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E0D6; /* jne: not equal / not zero */

loc_0011E0BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E0C2u); RECOMP_ABI_CALL(0x001218B0u, sub_001218B0); /* call 0x001218B0 */

loc_0011E0C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E0CF; /* je: equal / zero */

loc_0011E0CA: ;
    MEM32(esi + 0x54) = eax;
    goto loc_0011E0D6;

loc_0011E0CF: ;
    MEM32(esi + 0x54) = 0x11;

loc_0011E0D6: ;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E0E0u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E0E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E0E9u); RECOMP_ABI_CALL(0x0012B080u, sub_0012B080); /* call 0x0012B080 */

loc_0011E0E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E0F0
 * Original: 0x0011E0F0 - 0x0011E12A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E0FBu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E0FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E111; /* jne: not equal / not zero */

loc_0011E102: ;
    PUSH32(esp, 0x2AE3EC);
    PUSH32(esp, 0x0011E10Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E10C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011E111: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E11Cu); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E11C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E125u); RECOMP_ABI_CALL(0x0012B310u, sub_0012B310); /* call 0x0012B310 */

loc_0011E125: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E130
 * Original: 0x0011E130 - 0x0011E166 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E13Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E13B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E153; /* jne: not equal / not zero */

loc_0011E142: ;
    PUSH32(esp, 0x2AE420);
    PUSH32(esp, 0x0011E14Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E14C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011E153: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E159u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E159: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012B320(); return; /* tail jmp 0x0012B320 */

}

/**
 * sub_0011E170
 * Original: 0x0011E170 - 0x0011E185 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E170: ;
    PUSH32(esp, 0x0011E175u); RECOMP_ABI_CALL(0x0012B040u, sub_0012B040); /* call 0x0012B040 */

loc_0011E175: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11D680);
    PUSH32(esp, 0x0011E181u); RECOMP_ABI_CALL(0x0012ADC0u, sub_0012ADC0); /* call 0x0012ADC0 */

loc_0011E181: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E190
 * Original: 0x0011E190 - 0x0011E201 (113 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E190: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    MEM32(edi + 0x44) = edx;
    MEM32(edi + 0x48) = esi;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    ecx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011E1B9; /* je: equal / zero */

loc_0011E1A8: ;
    PUSH32(esp, esi);
    eax = edi + 4;
    PUSH32(esp, 0x0011E1B1u); RECOMP_ABI_CALL(0x0011D740u, sub_0011D740); /* call 0x0011D740 */

loc_0011E1B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E1B9: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E1C6u); RECOMP_ABI_CALL(0x00121500u, sub_00121500); /* call 0x00121500 */

loc_0011E1C6: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = edi + 4;
    PUSH32(esp, 0x0011E1D7u); RECOMP_ABI_CALL(0x0011D740u, sub_0011D740); /* call 0x0011D740 */

loc_0011E1D7: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    eax = edi + 0x14;
    PUSH32(esp, 0x0011E1E8u); RECOMP_ABI_CALL(0x0011D740u, sub_0011D740); /* call 0x0011D740 */

loc_0011E1E8: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    eax = edi + 0x24;
    PUSH32(esp, 0x0011E1F9u); RECOMP_ABI_CALL(0x0011D740u, sub_0011D740); /* call 0x0011D740 */

loc_0011E1F9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E210
 * Original: 0x0011E210 - 0x0011E25C (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E210(void)
{

loc_0011E210: ;
    eax = edi;
    PUSH32(esp, 0x0011E217u); RECOMP_ABI_CALL(0x0011D790u, sub_0011D790); /* call 0x0011D790 */

loc_0011E217: ;
    MEM32(esi + 0x60) = eax;
    eax = edi;
    PUSH32(esp, 0x0011E221u); RECOMP_ABI_CALL(0x0011D7D0u, sub_0011D7D0); /* call 0x0011D7D0 */

loc_0011E221: ;
    MEM32(esi + 0x64) = eax;
    eax = MEM32(edi + 0x94);
    MEM32(esi + 0x68) = eax;
    ecx = MEM32(edi + 0x98);
    MEM32(esi + 0x6C) = ecx;
    edx = MEM32(edi + 0x9C);
    MEM32(esi + 0x70) = edx;
    eax = MEM32(edi + 0xA0);
    PUSH32(esp, 0x0011E24Au); RECOMP_ABI_CALL(0x0011D810u, sub_0011D810); /* call 0x0011D810 */

loc_0011E24A: ;
    MEM32(esi + 0x74) = eax;
    eax = MEM32(edi + 0xA4);
    PUSH32(esp, 0x0011E258u); RECOMP_ABI_CALL(0x0011D810u, sub_0011D810); /* call 0x0011D810 */

loc_0011E258: ;
    MEM32(esi + 0x78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E260
 * Original: 0x0011E260 - 0x0011E2F5 (149 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E270u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E270: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E287; /* jne: not equal / not zero */

loc_0011E277: ;
    PUSH32(esp, 0x2AE4F0);
    PUSH32(esp, 0x0011E281u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E281: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011E287: ;
    eax = MEM32(esi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2C1; /* jne: not equal / not zero */

loc_0011E291: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x101 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2A9; /* jne: not equal / not zero */

loc_0011E299: ;
    PUSH32(esp, 0x2AE4A8);
    PUSH32(esp, 0x0011E2A3u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E2A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011E2A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2C1; /* jne: not equal / not zero */

loc_0011E2AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2C1; /* jne: not equal / not zero */

loc_0011E2B1: ;
    PUSH32(esp, 0x2AE458);
    PUSH32(esp, 0x0011E2BBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E2BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011E2C1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0011E2C7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011E2C4u); } /* indirect call */
    }

loc_0011E2C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2E8; /* jne: not equal / not zero */

loc_0011E2CF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2E8; /* jne: not equal / not zero */

loc_0011E2D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E2D9u); RECOMP_ABI_CALL(0x001218B0u, sub_001218B0); /* call 0x001218B0 */

loc_0011E2D9: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E2E8; /* jne: not equal / not zero */

loc_0011E2E3: ;
    edi = 0x11;

loc_0011E2E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E2EFu); RECOMP_ABI_CALL(0x0011D880u, sub_0011D880); /* call 0x0011D880 */

loc_0011E2EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E300
 * Original: 0x0011E300 - 0x0011E319 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E300: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E315u); RECOMP_ABI_CALL(0x0011D980u, sub_0011D980); /* call 0x0011D980 */

loc_0011E315: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E320
 * Original: 0x0011E320 - 0x0011E339 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E320: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E335u); RECOMP_ABI_CALL(0x0011D980u, sub_0011D980); /* call 0x0011D980 */

loc_0011E335: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E340
 * Original: 0x0011E340 - 0x0011E449 (265 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E340: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x190);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0011E359u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E356u); } /* indirect call */
    }

loc_0011E359: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E37B; /* jne: not equal / not zero */

loc_0011E362: ;
    MEM32(ebx + 0x1A8) = edi;
    POP32(esp, edi);
    MEM32(ebx + 0x1AC) = esi;
    MEM32(ebx + 0x1B0) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E37B: ;
    ecx = MEM32(ebx + 0x194);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2AE52C);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x2AE524);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x0011E3A2u); RECOMP_ABI_CALL(0x00113B30u, sub_00113B30); /* call 0x00113B30 */

loc_0011E3A2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E362; /* je: equal / zero */

loc_0011E3A9: ;
    edi = MEM32(ebx + 0x19C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E41B; /* je: equal / zero */

loc_0011E3B3: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
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
    eax = MEM32(ebx + 0x19C);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x1AC) = eax;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    MEM32(ebx + 0x1B0) = ecx;
    MEM32(ebx + 0x1A8) = 1;
    edx = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0011E3FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E3F9u); } /* indirect call */
    }

loc_0011E3FC: ;
    ecx = MEM32(ebp);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0011E40Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E407u); } /* indirect call */
    }

loc_0011E40A: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0011E411u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011E40Eu); } /* indirect call */
    }

loc_0011E411: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E41B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x1AC) = ecx;
    MEM32(ebx + 0x1B0) = edx;
    MEM32(ebx + 0x1A8) = 1;
    PUSH32(esp, 0x0011E43Fu); RECOMP_ABI_CALL(0x0011DCC0u, sub_0011DCC0); /* call 0x0011DCC0 */

loc_0011E43F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E450
 * Original: 0x0011E450 - 0x0011E48B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E450(void)
{

loc_0011E450: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011E45Fu); RECOMP_ABI_CALL(0x0011D700u, sub_0011D700); /* call 0x0011D700 */

loc_0011E45F: ;
    esi = MEM32(esp + 0x18);
    edi = esi;
    ecx = ebx;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0011E46Eu); RECOMP_ABI_CALL(0x0011E190u, sub_0011E190); /* call 0x0011E190 */

loc_0011E46E: ;
    edx = esi;
    eax = ebx;
    PUSH32(esp, 0x0011E477u); RECOMP_ABI_CALL(0x0011D730u, sub_0011D730); /* call 0x0011D730 */

loc_0011E477: ;
    edi = MEM32(esp + 0x10);
    edx = edi;
    PUSH32(esp, 0x0011E482u); RECOMP_ABI_CALL(0x0011D750u, sub_0011D750); /* call 0x0011D750 */

loc_0011E482: ;
    PUSH32(esp, 0x0011E487u); RECOMP_ABI_CALL(0x0011E210u, sub_0011E210); /* call 0x0011E210 */

loc_0011E487: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E490
 * Original: 0x0011E490 - 0x0011E515 (133 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E490: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E4A4u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E4A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E4C0; /* jne: not equal / not zero */

loc_0011E4AB: ;
    PUSH32(esp, 0x2AE564);
    PUSH32(esp, 0x0011E4B5u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E4B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E4C0: ;
    ecx = MEM32(esp + 0x94);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E4E1; /* jne: not equal / not zero */

loc_0011E4CC: ;
    PUSH32(esp, 0x2AE534);
    PUSH32(esp, 0x0011E4D6u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E4D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E4E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E4E8u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E4E8: ;
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E4F6u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011E4F6: ;
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011E509u); RECOMP_ABI_CALL(0x0012C2C0u, sub_0012C2C0); /* call 0x0012C2C0 */

loc_0011E509: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E520
 * Original: 0x0011E520 - 0x0011E5A5 (133 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E520: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E534u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E534: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E550; /* jne: not equal / not zero */

loc_0011E53B: ;
    PUSH32(esp, 0x2AE5C4);
    PUSH32(esp, 0x0011E545u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E545: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E550: ;
    ecx = MEM32(esp + 0x94);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E571; /* jne: not equal / not zero */

loc_0011E55C: ;
    PUSH32(esp, 0x2AE594);
    PUSH32(esp, 0x0011E566u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E566: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E571: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E578u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E578: ;
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E586u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011E586: ;
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011E599u); RECOMP_ABI_CALL(0x0012C300u, sub_0012C300); /* call 0x0012C300 */

loc_0011E599: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E5B0
 * Original: 0x0011E5B0 - 0x0011E5D7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E5B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E5D5; /* je: equal / zero */

loc_0011E5BF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1A8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E5D5; /* je: equal / zero */

loc_0011E5C8: ;
    PUSH32(esp, 0x0011E5CDu); RECOMP_ABI_CALL(0x0011E340u, sub_0011E340); /* call 0x0011E340 */

loc_0011E5CD: ;
    eax = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0011DC50(); return; /* tail jmp 0x0011DC50 */

loc_0011E5D5: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E5E0
 * Original: 0x0011E5E0 - 0x0011E5FE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E5E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E5FC; /* je: equal / zero */

loc_0011E5EF: ;
    PUSH32(esp, 0x0011E5F4u); RECOMP_ABI_CALL(0x0011E340u, sub_0011E340); /* call 0x0011E340 */

loc_0011E5F4: ;
    eax = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0011DC50(); return; /* tail jmp 0x0011DC50 */

loc_0011E5FC: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E600
 * Original: 0x0011E600 - 0x0011E64C (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E600: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E611u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E611: ;
    edx = MEM32(esp + 0x98);
    esi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E626u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011E626: ;
    eax = MEM32(esp + 0xAC);
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E641u); RECOMP_ABI_CALL(0x0012B230u, sub_0012B230); /* call 0x0012B230 */

loc_0011E641: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E650
 * Original: 0x0011E650 - 0x0011E6CD (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E650: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E664u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E664: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E680; /* jne: not equal / not zero */

loc_0011E66B: ;
    PUSH32(esp, 0x2AE624);
    PUSH32(esp, 0x0011E675u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E675: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E680: ;
    ecx = MEM32(esp + 0x94);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E6A1; /* jne: not equal / not zero */

loc_0011E68C: ;
    PUSH32(esp, 0x2AE5F4);
    PUSH32(esp, 0x0011E696u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E696: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E6A1: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E6A8u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E6A8: ;
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E6B6u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011E6B6: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011E6C1u); RECOMP_ABI_CALL(0x0012C5C0u, sub_0012C5C0); /* call 0x0012C5C0 */

loc_0011E6C1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E6D0
 * Original: 0x0011E6D0 - 0x0011E74D (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E6D0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E6E4u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E6E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E700; /* jne: not equal / not zero */

loc_0011E6EB: ;
    PUSH32(esp, 0x2AE684);
    PUSH32(esp, 0x0011E6F5u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E6F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E700: ;
    ecx = MEM32(esp + 0x94);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E721; /* jne: not equal / not zero */

loc_0011E70C: ;
    PUSH32(esp, 0x2AE654);
    PUSH32(esp, 0x0011E716u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E716: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E721: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E728u); RECOMP_ABI_CALL(0x0011D6E0u, sub_0011D6E0); /* call 0x0011D6E0 */

loc_0011E728: ;
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E736u); RECOMP_ABI_CALL(0x0011E450u, sub_0011E450); /* call 0x0011E450 */

loc_0011E736: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011E741u); RECOMP_ABI_CALL(0x0012C600u, sub_0012C600); /* call 0x0012C600 */

loc_0011E741: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E750
 * Original: 0x0011E750 - 0x0011E755 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E750: ;
    g_seh_ebp = ebp; sub_0011E450(); return; /* tail jmp 0x0011E450 */

}

/**
 * sub_0011E760
 * Original: 0x0011E760 - 0x0011E778 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E760: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011E774u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011E774: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E780
 * Original: 0x0011E780 - 0x0011E790 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x40);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00127010(); return; /* tail jmp 0x00127010 */

}

/**
 * sub_0011E7A0
 * Original: 0x0011E7A0 - 0x0011E7B0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7A0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012C7E0(); return; /* tail jmp 0x0012C7E0 */

}

/**
 * sub_0011E7B0
 * Original: 0x0011E7B0 - 0x0011E7C0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7B0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0012C7A0(); return; /* tail jmp 0x0012C7A0 */

}

/**
 * sub_0011E7C0
 * Original: 0x0011E7C0 - 0x0011E7DF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E7D4; /* je: equal / zero */

loc_0011E7C8: ;
    eax = MEM32(eax + 0x40);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012CB30(); return; /* tail jmp 0x0012CB30 */

loc_0011E7D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012CB30(); return; /* tail jmp 0x0012CB30 */

}

/**
 * sub_0011E7E0
 * Original: 0x0011E7E0 - 0x0011E7FF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E7F4; /* je: equal / zero */

loc_0011E7E8: ;
    eax = MEM32(eax + 0x40);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012CA60(); return; /* tail jmp 0x0012CA60 */

loc_0011E7F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012CA60(); return; /* tail jmp 0x0012CA60 */

}

/**
 * sub_0011E800
 * Original: 0x0011E800 - 0x0011E808 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E800(void)
{

loc_0011E800: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E810
 * Original: 0x0011E810 - 0x0011E81B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E810(void)
{

loc_0011E810: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1DC);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E820
 * Original: 0x0011E820 - 0x0011E846 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E820: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E839u); RECOMP_ABI_CALL(0x0012AAD0u, sub_0012AAD0); /* call 0x0012AAD0 */

loc_0011E839: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011E840u); RECOMP_ABI_CALL(0x0012CD70u, sub_0012CD70); /* call 0x0012CD70 */

loc_0011E840: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E850
 * Original: 0x0011E850 - 0x0011E860 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E850: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x44);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012AAF0(); return; /* tail jmp 0x0012AAF0 */

}

/**
 * sub_0011E8A0
 * Original: 0x0011E8A0 - 0x0011E8AD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E8A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E8A9; /* jne: not equal / not zero */

loc_0011E8A8: ;
    esp += 4; return; /* ret */

loc_0011E8A9: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8B0
 * Original: 0x0011E8B0 - 0x0011E8B8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8B0(void)
{

loc_0011E8B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8C0
 * Original: 0x0011E8C0 - 0x0011E8C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8C0(void)
{

loc_0011E8C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8D0
 * Original: 0x0011E8D0 - 0x0011E8DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8D0(void)
{

loc_0011E8D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E8E0
 * Original: 0x0011E8E0 - 0x0011E916 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E8E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E8EAu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E8EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E8FF; /* jne: not equal / not zero */

loc_0011E8F1: ;
    PUSH32(esp, 0x2AE6B4);
    PUSH32(esp, 0x0011E8FBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E8FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E8FF: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x36);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E912u); RECOMP_ABI_CALL(0x0011E7C0u, sub_0011E7C0); /* call 0x0011E7C0 */

loc_0011E912: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E920
 * Original: 0x0011E920 - 0x0011E97B (91 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E920: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E92Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E92A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E948; /* jne: not equal / not zero */

loc_0011E931: ;
    PUSH32(esp, 0xFFFFFFF4u);
    PUSH32(esp, 0x0011E938u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011E938: ;
    PUSH32(esp, 0x2AE6E4);
    PUSH32(esp, 0x0011E942u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E942: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011E948: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E97A; /* jne: not equal / not zero */

loc_0011E950: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E959u); RECOMP_ABI_CALL(0x0012C730u, sub_0012C730); /* call 0x0012C730 */

loc_0011E959: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E975; /* je: equal / zero */

loc_0011E961: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E975; /* je: equal / zero */

loc_0011E966: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

loc_0011E975: ;
    eax = 2;

loc_0011E97A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E980
 * Original: 0x0011E980 - 0x0011E9BF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E980: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0011E99D; /* jne: not equal / not zero */

loc_0011E98F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E999u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011E999: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E99D: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9B1; /* jne: not equal / not zero */

loc_0011E9A3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E9ADu); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011E9AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E9B1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E9BBu); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011E9BB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E9C0
 * Original: 0x0011E9C0 - 0x0011EA45 (133 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E9C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E9CAu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011E9CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9DF; /* jne: not equal / not zero */

loc_0011E9D1: ;
    PUSH32(esp, 0x2AE70C);
    PUSH32(esp, 0x0011E9DBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011E9DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011E9DF: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0011E9F9; /* jne: not equal / not zero */

loc_0011E9EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E9F4u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011E9F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011E9F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EA0D; /* jne: not equal / not zero */

loc_0011E9FE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EA08u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EA08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011EA0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EA27; /* jne: not equal / not zero */

loc_0011EA12: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9FE; /* jne: not equal / not zero */

loc_0011EA18: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EA22u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EA22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011EA27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EA43; /* jne: not equal / not zero */

loc_0011EA2C: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EA36u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EA36: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x47);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EA40u); RECOMP_ABI_CALL(0x0012CB30u, sub_0012CB30); /* call 0x0012CB30 */

loc_0011EA40: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011EA43: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EA50
 * Original: 0x0011EA50 - 0x0011EAB9 (105 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EA50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EA5Bu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EA5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EA74; /* jne: not equal / not zero */

loc_0011EA62: ;
    PUSH32(esp, 0x2AE76C);
    PUSH32(esp, 0x0011EA6Cu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EA6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011EA74: ;
    ecx = MEM32(ecx + 0x40);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EA83u); RECOMP_ABI_CALL(0x0012CA60u, sub_0012CA60); /* call 0x0012CA60 */

loc_0011EA83: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0011EAB5; /* je: equal / zero */

loc_0011EA8F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011EAAE; /* je: equal / zero */

loc_0011EA92: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011EAA7; /* je: equal / zero */

loc_0011EA95: ;
    PUSH32(esp, 0x2AE73C);
    PUSH32(esp, 0x0011EA9Fu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EA9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011EAA7: ;
    eax = 2;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011EAAE: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011EAB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EAC0
 * Original: 0x0011EAC0 - 0x0011EB09 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EAC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EACBu); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EACB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EAE3; /* jne: not equal / not zero */

loc_0011EAD2: ;
    PUSH32(esp, 0x2AE7B8);
    PUSH32(esp, 0x0011EADCu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EADC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011EAE3: ;
    eax = MEM32(ecx + 0x40);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EAF0u); RECOMP_ABI_CALL(0x00123A40u, sub_00123A40); /* call 0x00123A40 */

loc_0011EAF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EB04; /* je: equal / zero */

loc_0011EAF7: ;
    PUSH32(esp, 0x2AE79C);
    PUSH32(esp, 0x0011EB01u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EB01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011EB04: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EB10
 * Original: 0x0011EB10 - 0x0011EB55 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EB10: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EB20u); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EB20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EB3D; /* jne: not equal / not zero */

loc_0011EB27: ;
    PUSH32(esp, 0x2AE7EC);
    PUSH32(esp, 0x0011EB31u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EB31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011EB3D: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EB47u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB47: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EB60
 * Original: 0x0011EB60 - 0x0011EB82 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EB60: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011EB74u); RECOMP_ABI_CALL(0x0012D910u, sub_0012D910); /* call 0x0012D910 */

loc_0011EB74: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EB90
 * Original: 0x0011EB90 - 0x0011EC16 (134 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EB90: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011EB9Au); RECOMP_ABI_CALL(0x0011E8A0u, sub_0011E8A0); /* call 0x0011E8A0 */

loc_0011EB9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EBC3; /* jne: not equal / not zero */

loc_0011EBA1: ;
    PUSH32(esp, 0x2AE844);
    PUSH32(esp, 0x0011EBABu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EBAB: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

loc_0011EBC3: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EBD8u); RECOMP_ABI_CALL(0x0012A850u, sub_0012A850); /* call 0x0012A850 */

loc_0011EBD8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC02; /* je: equal / zero */

loc_0011EBDF: ;
    PUSH32(esp, 0xFFFFFECBu);
    PUSH32(esp, 0x0011EBE9u); RECOMP_ABI_CALL(0x0011D0C0u, sub_0011D0C0); /* call 0x0011D0C0 */

loc_0011EBE9: ;
    PUSH32(esp, 0x2AE820);
    PUSH32(esp, 0x0011EBF3u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0011EBF3: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 1;

loc_0011EC02: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011EC13; /* jge: greater or equal (signed >=) */

loc_0011EC07: ;
    MEM32(esi) = 0;
    MEM32(edi) = 1;

loc_0011EC13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC20
 * Original: 0x0011EC20 - 0x0011EC38 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EC20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011EC34u); RECOMP_ABI_CALL(0x00123940u, sub_00123940); /* call 0x00123940 */

loc_0011EC34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC40
 * Original: 0x0011EC40 - 0x0011EC58 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EC40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011EC54u); RECOMP_ABI_CALL(0x00123940u, sub_00123940); /* call 0x00123940 */

loc_0011EC54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
