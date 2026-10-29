/**
 * DOAU1 - Recompiled code chunk 6
 * Functions: 250 (0x0004C9E0 - 0x00052190)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0004C9E0
 * Original: 0x0004C9E0 - 0x0004C9E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C9E0(void)
{

loc_0004C9E0: ;
    eax = MEM32(0x34AD30);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C9F0
 * Original: 0x0004C9F0 - 0x0004C9F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C9F0(void)
{

loc_0004C9F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA00
 * Original: 0x0004CA00 - 0x0004CA07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004CA00: ;
    fp_push(MEMF(0x22C8D4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004CA10
 * Original: 0x0004CA10 - 0x0004CA11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA10(void)
{

loc_0004CA10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA20
 * Original: 0x0004CA20 - 0x0004CA23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004CA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CA20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA30
 * Original: 0x0004CA30 - 0x0004CA36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA30(void)
{

loc_0004CA30: ;
    eax = MEM32(0x34AD40);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA40
 * Original: 0x0004CA40 - 0x0004CA43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CA40: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA50
 * Original: 0x0004CA50 - 0x0004CA51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA50(void)
{

loc_0004CA50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA60
 * Original: 0x0004CA60 - 0x0004CA66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA60(void)
{

loc_0004CA60: ;
    eax = MEM32(0x34AD58);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA70
 * Original: 0x0004CA70 - 0x0004CA7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA70(void)
{

loc_0004CA70: ;
    MEM32(0x34AD58) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA80
 * Original: 0x0004CA80 - 0x0004CA8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA80(void)
{

loc_0004CA80: ;
    MEM32(0x34CDF0) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA90
 * Original: 0x0004CA90 - 0x0004CD54 (708 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CA90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x232088;
    esi = 0x305564;
    ecx = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_0004CAAF; /* je: equal / zero */

loc_0004CAA9: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0004CAAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004CAB1: ;
    SET_LO8(ecx, MEM8(eax + 0x305568));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CAD9; /* jg: greater (signed >) */

loc_0004CABC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CAD9; /* jl: less (signed <) */

loc_0004CAC0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004CAB1; /* jb: below (unsigned <) */

loc_0004CAC6: ;
    SET_LO8(eax, MEM8(0x305588));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CAD3; /* jg: greater (signed >) */

loc_0004CACF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CAE0; /* jge: greater or equal (signed >=) */

loc_0004CAD3: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0004CAD9: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004CAE0: ;
    SET_LO8(eax, MEM8(0x305589));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CAED; /* jg: greater (signed >) */

loc_0004CAE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CAF3; /* jge: greater or equal (signed >=) */

loc_0004CAED: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0004CAF3: ;
    SET_LO8(eax, MEM8(0x30558A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB00; /* jg: greater (signed >) */

loc_0004CAFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB06; /* jge: greater or equal (signed >=) */

loc_0004CB00: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0004CB06: ;
    SET_LO8(eax, MEM8(0x30558B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB13; /* jg: greater (signed >) */

loc_0004CB0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB19; /* jge: greater or equal (signed >=) */

loc_0004CB13: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0004CB19: ;
    SET_LO8(eax, MEM8(0x30558C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB26; /* jg: greater (signed >) */

loc_0004CB22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB2C; /* jge: greater or equal (signed >=) */

loc_0004CB26: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_0004CB2C: ;
    SET_LO8(eax, MEM8(0x30558D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB39; /* jg: greater (signed >) */

loc_0004CB35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB3F; /* jge: greater or equal (signed >=) */

loc_0004CB39: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0004CB3F: ;
    SET_LO8(eax, MEM8(0x30558E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB4C; /* jg: greater (signed >) */

loc_0004CB48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB52; /* jge: greater or equal (signed >=) */

loc_0004CB4C: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_0004CB52: ;
    SET_LO8(eax, MEM8(0x30558F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB5F; /* jg: greater (signed >) */

loc_0004CB5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB65; /* jge: greater or equal (signed >=) */

loc_0004CB5F: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_0004CB65: ;
    SET_LO8(eax, MEM8(0x305591));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB72; /* jg: greater (signed >) */

loc_0004CB6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB78; /* jge: greater or equal (signed >=) */

loc_0004CB72: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_0004CB78: ;
    SET_LO8(eax, MEM8(0x305592));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB85; /* jg: greater (signed >) */

loc_0004CB81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB8B; /* jge: greater or equal (signed >=) */

loc_0004CB85: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0004CB8B: ;
    SET_LO8(eax, MEM8(0x305593));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CB98; /* jg: greater (signed >) */

loc_0004CB94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CB9E; /* jge: greater or equal (signed >=) */

loc_0004CB98: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_0004CB9E: ;
    SET_LO8(eax, MEM8(0x305594));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CBAB; /* jg: greater (signed >) */

loc_0004CBA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CBB1; /* jge: greater or equal (signed >=) */

loc_0004CBAB: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_0004CBB1: ;
    SET_LO8(eax, MEM8(0x305595));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CBBE; /* jg: greater (signed >) */

loc_0004CBBA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CBC4; /* jge: greater or equal (signed >=) */

loc_0004CBBE: ;
    eax = 0xF;
    esp += 4; return; /* ret */

loc_0004CBC4: ;
    SET_LO8(eax, MEM8(0x305596));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CBD1; /* jg: greater (signed >) */

loc_0004CBCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CBD7; /* jge: greater or equal (signed >=) */

loc_0004CBD1: ;
    eax = 0x10;
    esp += 4; return; /* ret */

loc_0004CBD7: ;
    SET_LO8(eax, MEM8(0x305597));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CBE4; /* jg: greater (signed >) */

loc_0004CBE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CBEA; /* jge: greater or equal (signed >=) */

loc_0004CBE4: ;
    eax = 0x11;
    esp += 4; return; /* ret */

loc_0004CBEA: ;
    SET_LO8(eax, MEM8(0x305598));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CBF7; /* jg: greater (signed >) */

loc_0004CBF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CBFD; /* jge: greater or equal (signed >=) */

loc_0004CBF7: ;
    eax = 0x12;
    esp += 4; return; /* ret */

loc_0004CBFD: ;
    SET_LO8(eax, MEM8(0x305599));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CC0A; /* jg: greater (signed >) */

loc_0004CC06: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CC10; /* jge: greater or equal (signed >=) */

loc_0004CC0A: ;
    eax = 0x13;
    esp += 4; return; /* ret */

loc_0004CC10: ;
    SET_LO8(eax, MEM8(0x30559C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CC1D; /* jg: greater (signed >) */

loc_0004CC19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CC23; /* jge: greater or equal (signed >=) */

loc_0004CC1D: ;
    eax = 0x14;
    esp += 4; return; /* ret */

loc_0004CC23: ;
    SET_LO8(eax, MEM8(0x30559D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CC30; /* jg: greater (signed >) */

loc_0004CC2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CC36; /* jge: greater or equal (signed >=) */

loc_0004CC30: ;
    eax = 0x15;
    esp += 4; return; /* ret */

loc_0004CC36: ;
    SET_LO8(eax, MEM8(0x30559E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CC43; /* jg: greater (signed >) */

loc_0004CC3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CC49; /* jge: greater or equal (signed >=) */

loc_0004CC43: ;
    eax = 0x16;
    esp += 4; return; /* ret */

loc_0004CC49: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0004CC50;

    /* nop */

loc_0004CC50: ;
    SET_LO8(ecx, MEM8(eax + 0x3055A2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CC9B; /* jg: greater (signed >) */

loc_0004CC5B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CC9B; /* jl: less (signed <) */

loc_0004CC5F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004CC50; /* jb: below (unsigned <) */

loc_0004CC65: ;
    SET_LO8(ecx, MEM8(0x3055AA));
    SET_LO8(eax, 0xB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CD4E; /* jne: not equal / not zero */

loc_0004CC75: ;
    _fa = (uint32_t)(MEM8(0x3055AB)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3055AB), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CD4E; /* jne: not equal / not zero */

loc_0004CC81: ;
    ecx = MEM32(0x3055AC);
    ecx = ecx & 0xFFC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CCA2; /* je: equal / zero */

loc_0004CC95: ;
    eax = 0x19;
    esp += 4; return; /* ret */

loc_0004CC9B: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004CCA2: ;
    SET_LO8(eax, MEM8(0x305B0A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CCAF; /* jg: greater (signed >) */

loc_0004CCAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CCB5; /* jge: greater or equal (signed >=) */

loc_0004CCAF: ;
    eax = 0x1A;
    esp += 4; return; /* ret */

loc_0004CCB5: ;
    SET_LO8(eax, MEM8(0x305B0B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CCC2; /* jg: greater (signed >) */

loc_0004CCBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CCC8; /* jge: greater or equal (signed >=) */

loc_0004CCC2: ;
    eax = 0x1B;
    esp += 4; return; /* ret */

loc_0004CCC8: ;
    SET_LO8(eax, MEM8(0x305B0C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CCD5; /* jg: greater (signed >) */

loc_0004CCD1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CCDB; /* jge: greater or equal (signed >=) */

loc_0004CCD5: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

loc_0004CCDB: ;
    SET_LO8(eax, MEM8(0x305B0D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CCE8; /* jg: greater (signed >) */

loc_0004CCE4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CCEE; /* jge: greater or equal (signed >=) */

loc_0004CCE8: ;
    eax = 0x27;
    esp += 4; return; /* ret */

loc_0004CCEE: ;
    SET_LO8(eax, MEM8(0x305B0E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CCFB; /* jg: greater (signed >) */

loc_0004CCF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD01; /* jge: greater or equal (signed >=) */

loc_0004CCFB: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

loc_0004CD01: ;
    SET_LO8(eax, MEM8(0x305B0F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CD0E; /* jg: greater (signed >) */

loc_0004CD0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD14; /* jge: greater or equal (signed >=) */

loc_0004CD0E: ;
    eax = 0x1F;
    esp += 4; return; /* ret */

loc_0004CD14: ;
    SET_LO8(eax, MEM8(0x305B10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CD21; /* jg: greater (signed >) */

loc_0004CD1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD27; /* jge: greater or equal (signed >=) */

loc_0004CD21: ;
    eax = 0x20;
    esp += 4; return; /* ret */

loc_0004CD27: ;
    SET_LO8(eax, MEM8(0x305B11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CD34; /* jg: greater (signed >) */

loc_0004CD30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD3A; /* jge: greater or equal (signed >=) */

loc_0004CD34: ;
    eax = 0x21;
    esp += 4; return; /* ret */

loc_0004CD3A: ;
    SET_LO8(eax, MEM8(0x305B12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004CD45; /* jg: greater (signed >) */

loc_0004CD43: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD4B; /* jge: greater or equal (signed >=) */

loc_0004CD45: ;
    eax = 0x22;
    esp += 4; return; /* ret */

loc_0004CD4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0004CD4E: ;
    eax = 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CD60
 * Original: 0x0004CD60 - 0x0004CEE5 (389 bytes, 103 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CD60: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x21C) = eax;
    PUSH32(esp, 0x0004CD77u); RECOMP_ABI_CALL(0x0004CA90u, sub_0004CA90); /* call 0x0004CA90 */

loc_0004CD77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CED0; /* jne: not equal / not zero */

loc_0004CD7F: ;
    eax = MEM32(0x34CDF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CED0; /* jne: not equal / not zero */

loc_0004CD8C: ;
    PUSH32(esp, 0x0004CD91u); RECOMP_ABI_CALL(0x0004CA60u, sub_0004CA60); /* call 0x0004CA60 */

loc_0004CD91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CED0; /* jne: not equal / not zero */

loc_0004CD99: ;
    SET_LO16(eax, MEM16(0x34CD64));
    SET_LO8(ecx, MEM8(0x34CDE8));
    SET_LO8(edx, MEM8(0x34AD55));
    PUSH32(esp, esi);
    MEM16(0x30559A) = LO16(eax);
    SET_LO8(eax, MEM8(0x34AD54));
    PUSH32(esp, 0);
    MEM8(0x30559C) = LO8(ecx);
    MEM8(0x30559D) = LO8(edx);
    MEM8(0x30559E) = LO8(eax);
    PUSH32(esp, 0x0004CDCFu); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_0004CDCF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CE84; /* je: equal / zero */

loc_0004CDDA: ;
    PUSH32(esp, 0x5B0);
    PUSH32(esp, 0x305564);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004CDEAu); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_0004CDEA: ;
    PUSH32(esp, 0x305550);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004CDF5u); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_0004CDF5: ;
    PUSH32(esp, 0x104);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x2320A0);
    PUSH32(esp, 0x23209C);
    PUSH32(esp, 0x0004CE15u); RECOMP_ABI_CALL(0x000AB63Au, sub_000AB63A); /* call 0x000AB63A */

loc_0004CE15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CEBA; /* jne: not equal / not zero */

loc_0004CE1D: ;
    /* nop */

loc_0004CE20: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x11C));
    MEM8(esp + eax + 8) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CE20; /* jne: not equal / not zero */

loc_0004CE30: ;
    PUSH32(esp, edi);
    edi = esp + 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0004CE36: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CE36; /* jne: not equal / not zero */

loc_0004CE3E: ;
    edx = MEM32(0x23208C);
    eax = MEM32(0x232090);
    ecx = MEM32(0x232094);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 4);
    MEM32(edi) = edx;
    SET_LO8(edx, MEM8(0x232098));
    PUSH32(esp, 0);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x24;
    MEM32(edi + 8) = ecx;
    PUSH32(esp, eax);
    MEM8(edi + 0xC) = LO8(edx);
    PUSH32(esp, 0x0004CE7Cu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0004CE7C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0004CE9D; /* jne: not equal / not zero */

loc_0004CE84: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x21C);
    PUSH32(esp, 0x0004CE96u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004CE96: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004CE9D: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5C4);
    PUSH32(esp, 0x305550);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004CEB4u); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0004CEB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004CEBAu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0004CEBA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x21C);
    PUSH32(esp, 0x0004CEC9u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004CEC9: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004CED0: ;
    ecx = MEM32(esp + 0x21C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0004CEDEu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004CEDE: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004CEF0
 * Original: 0x0004CEF0 - 0x0004CEF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CEF0(void)
{

loc_0004CEF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF00
 * Original: 0x0004CF00 - 0x0004CF01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF00(void)
{

loc_0004CF00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF10
 * Original: 0x0004CF10 - 0x0004CF11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF10(void)
{

loc_0004CF10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF20
 * Original: 0x0004CF20 - 0x0004CF23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004CF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CF20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF30
 * Original: 0x0004CF30 - 0x0004CF31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF30(void)
{

loc_0004CF30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF40
 * Original: 0x0004CF40 - 0x0004CF41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF40(void)
{

loc_0004CF40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF50
 * Original: 0x0004CF50 - 0x0004CF51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF50(void)
{

loc_0004CF50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF60
 * Original: 0x0004CF60 - 0x0004CF61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF60(void)
{

loc_0004CF60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF70
 * Original: 0x0004CF70 - 0x0004CF71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF70(void)
{

loc_0004CF70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF80
 * Original: 0x0004CF80 - 0x0004CF81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF80(void)
{

loc_0004CF80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF90
 * Original: 0x0004CF90 - 0x0004CF91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF90(void)
{

loc_0004CF90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CFA0
 * Original: 0x0004CFA0 - 0x0004CFA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFA0(void)
{

loc_0004CFA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CFB0
 * Original: 0x0004CFB0 - 0x0004CFB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFB0(void)
{

loc_0004CFB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CFC0
 * Original: 0x0004CFC0 - 0x0004D05E (158 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CFC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004CFD0: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D017; /* je: equal / zero */

loc_0004CFD7: ;
    ecx = MEM32(0x34861C);
    MEM32(ecx * 4 + 0x3480C8) = eax;
    edx = MEM32(0x34861C);
    eax = MEM32(edx * 4 + 0x3480C8);
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(0x34861C);
    edx = MEM32(ecx * 4 + 0x3480C8);
    MEM32(edx + 0x18) = edi;
    MEM32(0x34861C) = MEM32(0x34861C) + 1;
    _fa = (uint32_t)(MEM32(0x34861C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D014u); RECOMP_ABI_CALL(0x0004CFC0u, sub_0004CFC0); /* call 0x0004CFC0 */

loc_0004D014: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D017: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D05A; /* je: equal / zero */

loc_0004D01E: ;
    edx = MEM32(0x34861C);
    ecx = eax;
    MEM32(edx * 4 + 0x3480C8) = ecx;
    eax = MEM32(0x34861C);
    ecx = MEM32(eax * 4 + 0x3480C8);
    MEM32(ecx + 0x10) = edi;
    edx = MEM32(0x34861C);
    eax = MEM32(edx * 4 + 0x3480C8);
    MEM32(eax + 0x18) = edi;
    MEM32(0x34861C) = MEM32(0x34861C) + 1;
    _fa = (uint32_t)(MEM32(0x34861C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esi + 0x2C);
    goto loc_0004CFD0;

loc_0004D05A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D060
 * Original: 0x0004D060 - 0x0004D061 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D060(void)
{

loc_0004D060: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D070
 * Original: 0x0004D070 - 0x0004D071 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D070(void)
{

loc_0004D070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D080
 * Original: 0x0004D080 - 0x0004D081 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D080_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{

loc_0004D080: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D090
 * Original: 0x0004D090 - 0x0004D091 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D090(void)
{

loc_0004D090: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D0A0
 * Original: 0x0004D0A0 - 0x0004D0A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0A0(void)
{

loc_0004D0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D0B0
 * Original: 0x0004D0B0 - 0x0004D0B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0B0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{

loc_0004D0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D0C0
 * Original: 0x0004D0C0 - 0x0004D0C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0C0(void)
{

loc_0004D0C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D0D0
 * Original: 0x0004D0D0 - 0x0004D0D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0D0(void)
{

loc_0004D0D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D0E0
 * Original: 0x0004D0E0 - 0x0004D0E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0E0(void)
{

loc_0004D0E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D0F0
 * Original: 0x0004D0F0 - 0x0004D0F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0F0(void)
{

loc_0004D0F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D100
 * Original: 0x0004D100 - 0x0004D104 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D100: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004D110
 * Original: 0x0004D110 - 0x0004D111 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D110(void)
{

loc_0004D110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D120
 * Original: 0x0004D120 - 0x0004D121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D120(void)
{

loc_0004D120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D130
 * Original: 0x0004D130 - 0x0004D131 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D130(void)
{

loc_0004D130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D140
 * Original: 0x0004D140 - 0x0004D208 (200 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D140: ;
    SET_LO8(eax, MEM8(0x3139D0));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D1EE; /* jne: not equal / not zero */

loc_0004D150: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1FA; /* je: equal / zero */

loc_0004D15D: ;
    SET_LO8(eax, MEM8(0x30C680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1FA; /* je: equal / zero */

loc_0004D16A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1FA; /* je: equal / zero */

loc_0004D172: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0004D180;

    /* nop */
    edi = edi;

loc_0004D180: ;
    eax = MEM32(esi * 4 + 0x30F9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1E0; /* je: equal / zero */

loc_0004D18C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x6E9A90);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D1A6; /* je: equal / zero */

loc_0004D199: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D1A6; /* je: equal / zero */

loc_0004D19D: ;
    MEM32(esi * 4 + 0x34CDF4) = MEM32(esi * 4 + 0x34CDF4) + 1;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x34CDF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0004D1AD;

loc_0004D1A6: ;
    MEM32(esi * 4 + 0x34CDF4) = ebx;

loc_0004D1AD: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x34CDF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x34CDF4), 0x3C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004D1E7; /* jb: below (unsigned <) */

loc_0004D1B7: ;
    esi = 1;
    /* nop */

loc_0004D1C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1D3; /* je: equal / zero */

loc_0004D1C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1D3; /* je: equal / zero */

loc_0004D1CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D1D0u); RECOMP_ABI_CALL(0x000522A0u, sub_000522A0); /* call 0x000522A0 */

loc_0004D1D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D1D3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004D1C0; /* jb: below (unsigned <) */

loc_0004D1D9: ;
    MEM8(0x30C680) = 5;

loc_0004D1E0: ;
    MEM32(esi * 4 + 0x34CDF4) = ebx;

loc_0004D1E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004D180; /* jb: below (unsigned <) */

loc_0004D1ED: ;
    POP32(esp, esi);

loc_0004D1EE: ;
    SET_LO8(eax, MEM8(0x3139D0));
    MEM8(0x34AD48) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0004D1FA: ;
    MEM32(0x34CDF8) = ebx;
    MEM32(0x34CDF4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D210
 * Original: 0x0004D210 - 0x0004D211 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D210(void)
{

loc_0004D210: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D220
 * Original: 0x0004D220 - 0x0004D4B0 (656 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D220_gen(void) /* shadowed by match_pause_tick in game_mode.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D220: ;
    SET_LO8(eax, MEM8(0x30C680));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0004D444; /* jne: not equal / not zero */

loc_0004D231: ;
    _fa = (uint32_t)(MEM8(0x30AE18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D444; /* jne: not equal / not zero */

loc_0004D23E: ;
    SET_LO8(eax, MEM8(0x3139CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D444; /* je: equal / zero */

loc_0004D24B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D444; /* je: equal / zero */

loc_0004D253: ;
    _fa = (uint32_t)(MEM32(0x334848)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x334848), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D444; /* jne: not equal / not zero */

loc_0004D25F: ;
    edi = MEM32(0x34AD4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D348; /* jne: not equal / not zero */

loc_0004D26D: ;
    _fa = (uint32_t)(MEM8(0x30D9A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9A0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D2B1; /* jne: not equal / not zero */

loc_0004D276: ;
    eax = MEM32(0x30F9B4);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D296; /* jne: not equal / not zero */

loc_0004D289: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D28Fu); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0004D28F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D2B1; /* jne: not equal / not zero */

loc_0004D296: ;
    SET_LO8(edx, MEM8(0x307604));
    eax = 1;
    MEM32(0x34AD4C) = eax;
    MEM32(0x34CDEC) = eax;
    MEM8(0x34AD5D) = LO8(edx);

loc_0004D2B1: ;
    _fa = (uint32_t)(MEM8(0x30D9F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30D9F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D2F7; /* jne: not equal / not zero */

loc_0004D2BA: ;
    eax = MEM32(0x30F9B8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(ecx + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D2DA; /* jne: not equal / not zero */

loc_0004D2CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D2D3u); RECOMP_ABI_CALL(0x00052A10u, sub_00052A10); /* call 0x00052A10 */

loc_0004D2D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D2F7; /* jne: not equal / not zero */

loc_0004D2DA: ;
    SET_LO8(edx, MEM8(0x307604));
    eax = 2;
    MEM32(0x34AD4C) = eax;
    MEM32(0x34CDEC) = eax;
    MEM8(0x34AD5D) = LO8(edx);
    goto loc_0004D303;

loc_0004D2F7: ;
    _fa = (uint32_t)(MEM32(0x34AD4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34AD4C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D3C4; /* je: equal / zero */

loc_0004D303: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x0004D30Fu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0004D30F: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D317u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_0004D317: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0004D320: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D333; /* je: equal / zero */

loc_0004D325: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D333; /* je: equal / zero */

loc_0004D32A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D330u); RECOMP_ABI_CALL(0x00052050u, sub_00052050); /* call 0x00052050 */

loc_0004D330: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D333: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004D320; /* jl: less (signed <) */

loc_0004D339: ;
    SET_LO8(eax, MEM8(0x30AE36));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(0x30AE36) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004D348: ;
    SET_LO8(eax, MEM8(0x6E9B6C));
    SET_LO8(edx, 0x40);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0004D38F; /* je: equal / zero */

loc_0004D354: ;
    _fa = (uint32_t)(MEM8(0x6E9B74)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6E9B74), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D38F; /* je: equal / zero */

loc_0004D35D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x34CE00) = 1;
    MEM32(0x2DF7E4) = ecx;
    eax = 0x6E9A98;

loc_0004D374: ;
    _fa = (uint32_t)(MEM8(eax + -8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + -8), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D37E; /* je: equal / zero */

loc_0004D379: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D389; /* jne: not equal / not zero */

loc_0004D37E: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9B48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9B48 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004D374; /* jl: less (signed <) */

loc_0004D389: ;
    MEM32(0x2DF7E4) = ecx;

loc_0004D38F: ;
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004D3C7; /* je: equal / zero */

loc_0004D394: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0004D3C3; /* jne: not equal / not zero */

loc_0004D397: ;
    eax = MEM32(0x30F9B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D3D8; /* jne: not equal / not zero */

loc_0004D3A8: ;
    eax = MEM32(eax + 0x6E9A90);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D3C3; /* je: equal / zero */

loc_0004D3B3: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D3C3; /* je: equal / zero */

loc_0004D3B8: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D3C3; /* je: equal / zero */

loc_0004D3BD: ;
    MEM32(0x34CDEC) = esi;

loc_0004D3C3: ;
    POP32(esp, ebx);

loc_0004D3C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004D3C7: ;
    eax = MEM32(0x30F9B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x6E9A98)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6E9A98), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D3A8; /* je: equal / zero */

loc_0004D3D8: ;
    MEM32(0x34AD4C) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004D3E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D3F3; /* je: equal / zero */

loc_0004D3E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D3F3; /* je: equal / zero */

loc_0004D3EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004D3F0u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0004D3F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D3F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004D3E0; /* jl: less (signed <) */

loc_0004D3F9: ;
    SET_LO8(ebx, MEM8(0x30AE36));
    PUSH32(esp, 4);
    SET_LO8(ebx, LO8(ebx) ^ 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0xFFFF);
    MEM32(0x34CDEC) = esi;
    MEM8(0x30AE36) = LO8(ebx);
    PUSH32(esp, 0x0004D41Au); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0004D41A: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D422u); RECOMP_ABI_CALL(0x0004F050u, sub_0004F050); /* call 0x0004F050 */

loc_0004D422: ;
    SET_LO8(eax, MEM8(0x34AD5D));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D433; /* je: equal / zero */

loc_0004D42E: ;
    MEM8(0x307604) = LO8(eax);

loc_0004D433: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(0x34AD50) = esi;
    MEM8(0x34AD5D) = 0xFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004D444: ;
    _fa = (uint32_t)(MEM32(0x34AD4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34AD4C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D3C4; /* je: equal / zero */

loc_0004D450: ;
    MEM32(0x34AD4C) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004D458: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D46B; /* je: equal / zero */

loc_0004D45D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D46B; /* je: equal / zero */

loc_0004D462: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004D468u); RECOMP_ABI_CALL(0x00052070u, sub_00052070); /* call 0x00052070 */

loc_0004D468: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D46B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004D458; /* jl: less (signed <) */

loc_0004D471: ;
    SET_LO8(eax, MEM8(0x30AE36));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 4);
    PUSH32(esp, 0xFFFF);
    MEM32(0x34CDEC) = esi;
    MEM8(0x30AE36) = LO8(eax);
    PUSH32(esp, 0x0004D48Fu); RECOMP_ABI_CALL(0x0004FA70u, sub_0004FA70); /* call 0x0004FA70 */

loc_0004D48F: ;
    SET_LO8(eax, MEM8(0x34AD5D));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D4A0; /* je: equal / zero */

loc_0004D49B: ;
    MEM8(0x307604) = LO8(eax);

loc_0004D4A0: ;
    POP32(esp, edi);
    MEM32(0x34AD50) = esi;
    MEM8(0x34AD5D) = 0xFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D4B0
 * Original: 0x0004D4B0 - 0x0004D4FC (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D4B0: ;
    SET_LO8(eax, MEM8(0x34AD54));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    MEM8(0x34AD54) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0004D4FB; /* jl: less (signed <) */

loc_0004D4C0: ;
    SET_LO8(eax, MEM8(0x34AD55));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    MEM8(0x34AD54) = LO8(ecx);
    MEM8(0x34AD55) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0004D4FB; /* jl: less (signed <) */

loc_0004D4D8: ;
    SET_LO8(eax, MEM8(0x34CDE8));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    MEM8(0x34AD55) = LO8(ecx);
    MEM8(0x34CDE8) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0004D4FB; /* jl: less (signed <) */

loc_0004D4EE: ;
    MEM16(0x34CD64) = MEM16(0x34CD64) + 1;
    _fa = (uint32_t)(MEM16(0x34CD64)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x34CDE8) = LO8(ecx);

loc_0004D4FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D500
 * Original: 0x0004D500 - 0x0004D501 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D500(void)
{

loc_0004D500: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D510
 * Original: 0x0004D510 - 0x0004D511 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D510(void)
{

loc_0004D510: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D520
 * Original: 0x0004D520 - 0x0004D521 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D520(void)
{

loc_0004D520: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D530
 * Original: 0x0004D530 - 0x0004D531 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D530(void)
{

loc_0004D530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D540
 * Original: 0x0004D540 - 0x0004D559 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D540: ;
    PUSH32(esp, 0x0004D545u); RECOMP_ABI_CALL(0x0004D140u, sub_0004D140); /* call 0x0004D140 */

loc_0004D545: ;
    PUSH32(esp, 0x0004D54Au); RECOMP_ABI_CALL(0x0004D4B0u, sub_0004D4B0); /* call 0x0004D4B0 */

loc_0004D54A: ;
    PUSH32(esp, 0x0004D54Fu); RECOMP_ABI_CALL(0x0004D220u, sub_0004D220); /* call 0x0004D220 */

loc_0004D54F: ;
    PUSH32(esp, 0x0004D554u); RECOMP_ABI_CALL(0x0009C5F0u, sub_0009C5F0); /* call 0x0009C5F0 */

loc_0004D554: ;
    g_seh_ebp = ebp; sub_0009FA90(); return; /* tail jmp 0x0009FA90 */

}

/**
 * sub_0004D560
 * Original: 0x0004D560 - 0x0004D561 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D560(void)
{

loc_0004D560: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D570
 * Original: 0x0004D570 - 0x0004D5D2 (98 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D570_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D570: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0004D5D1; /* ja: above (unsigned >) */

loc_0004D57B: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x4D5D4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0004D582u) goto loc_0004D582;
    if (_jt == 0x0004D58Du) goto loc_0004D58D;
    if (_jt == 0x0004D5ABu) goto loc_0004D5AB;
    if (_jt == 0x0004D5B4u) goto loc_0004D5B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004D582: ;
    eax = (uint32_t)(int32_t)SMEM8(0x305590);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0004D58D: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x305591);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x32);
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004D5AB: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x305592);
    goto loc_0004D5BB;

loc_0004D5B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x305593);

loc_0004D5BB: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D5D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D610
 * Original: 0x0004D610 - 0x0004D761 (337 bytes, 92 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D610_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
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

loc_0004D610: ;
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x104);
    MEM32(esp + 0x22C) = eax;
    eax = esp + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2320A0);
    PUSH32(esp, 0x23209C);
    PUSH32(esp, 0x0004D647u); RECOMP_ABI_CALL(0x000AB63Au, sub_000AB63A); /* call 0x000AB63A */

loc_0004D647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D6BA; /* jne: not equal / not zero */

loc_0004D64B: ;
    esi = 1;

loc_0004D650: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x124));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D650; /* jne: not equal / not zero */

loc_0004D660: ;
    PUSH32(esp, edi);
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0004D666: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D666; /* jne: not equal / not zero */

loc_0004D66E: ;
    ecx = MEM32(0x23208C);
    edx = MEM32(0x232090);
    eax = MEM32(0x232094);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    MEM32(edi) = ecx;
    SET_LO8(ecx, MEM8(0x232098));
    PUSH32(esp, 0);
    MEM32(edi + 4) = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x2C;
    MEM32(edi + 8) = eax;
    PUSH32(esp, edx);
    MEM8(edi + 0xC) = LO8(ecx);
    PUSH32(esp, 0x0004D6ACu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0004D6AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004D6BA; /* je: equal / zero */

loc_0004D6B2: ;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0004D6BAu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0004D6BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x34AD40) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0004D737; /* je: equal / zero */

loc_0004D6C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x23209C);
    PUSH32(esp, 0x0004D6D7u); RECOMP_ABI_CALL(0x000ABEE1u, sub_000ABEE1); /* call 0x000ABEE1 */

loc_0004D6D7: ;
    eax = MEM32(esp + 4);
    esi = esi << 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0004D737; /* jae: above or equal (unsigned >=) */

loc_0004D6E2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x34CDF0) = 0xFFFFFFFFu;
    if (CMP_GE(_fas, _fbs)) goto loc_0004D700; /* jge: greater or equal (signed >=) */

loc_0004D6FA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C750)); /* fadd dword ptr [0x22c750] */

loc_0004D700: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C28C)); /* fmul dword ptr [0x22c28c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004D711u); RECOMP_ABI_CALL(0x00150551u, sub_00150551); /* call 0x00150551 */

loc_0004D711: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0004D719u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0004D719: ;
    MEM32(0x34AD58) = eax;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x224);
    PUSH32(esp, 0x0004D730u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004D730: ;
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004D737: ;
    ecx = MEM32(esp + 0x228);
    MEM32(0x34AD58) = 0;
    MEM32(0x34CDF0) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x0004D75Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004D75A: ;
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004D770
 * Original: 0x0004D770 - 0x0004D7B8 (72 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x171;
    esi = 0x2DF220;
    edi = 0x305550;
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
    SET_LO16(eax, MEM16(0x30559A));
    SET_LO8(ecx, MEM8(0x30559C));
    SET_LO8(edx, MEM8(0x30559D));
    MEM16(0x34CD64) = LO16(eax);
    SET_LO8(eax, MEM8(0x30559E));
    POP32(esp, edi);
    MEM8(0x34CDE8) = LO8(ecx);
    MEM8(0x34AD55) = LO8(edx);
    MEM8(0x34AD54) = LO8(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0004CD60(); return; /* tail jmp 0x0004CD60 */

}

/**
 * sub_0004D7C0
 * Original: 0x0004D7C0 - 0x0004DA23 (611 bytes, 160 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D7C0_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D7C0: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x104);
    MEM32(esp + 0x238) = eax;
    eax = esp + 0x134;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x2320A0);
    PUSH32(esp, 0x23209C);
    PUSH32(esp, 0x0004D7F3u); RECOMP_ABI_CALL(0x000AB63Au, sub_000AB63A); /* call 0x000AB63A */

loc_0004D7F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D9C4; /* jne: not equal / not zero */

loc_0004D7FB: ;
    goto loc_0004D800;

    /* nop */

loc_0004D800: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x130));
    MEM8(esp + eax + 0x1C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D800; /* jne: not equal / not zero */

loc_0004D810: ;
    PUSH32(esp, edi);
    edi = esp + 0x20;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0004D816: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D816; /* jne: not equal / not zero */

loc_0004D81E: ;
    ecx = MEM32(0x23208C);
    edx = MEM32(0x232090);
    eax = MEM32(0x232094);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    MEM32(edi) = ecx;
    SET_LO8(ecx, MEM8(0x232098));
    PUSH32(esp, 0);
    MEM32(edi + 4) = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x38;
    MEM32(edi + 8) = eax;
    PUSH32(esp, edx);
    MEM8(edi + 0xC) = LO8(ecx);
    PUSH32(esp, 0x0004D85Cu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_0004D85C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0004D88C; /* jne: not equal / not zero */

loc_0004D864: ;
    MEM32(0x34AD58) = MEM32(0x34AD58) | 0x100;
    _fa = (uint32_t)(MEM32(0x34AD58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0004D873u); RECOMP_ABI_CALL(0x0004D770u, sub_0004D770); /* call 0x0004D770 */

loc_0004D873: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x230);
    PUSH32(esp, 0x0004D885u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004D885: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004D88C: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D894u); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_0004D894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D8C3; /* je: equal / zero */

loc_0004D89B: ;
    MEM32(0x34AD58) = MEM32(0x34AD58) | 0x200;
    _fa = (uint32_t)(MEM32(0x34AD58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0004D8AAu); RECOMP_ABI_CALL(0x0004D770u, sub_0004D770); /* call 0x0004D770 */

loc_0004D8AA: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x230);
    PUSH32(esp, 0x0004D8BCu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004D8BC: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004D8C3: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5C4);
    PUSH32(esp, 0x305550);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D8DAu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_0004D8DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D8E0u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0004D8E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004D8E7u); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_0004D8E7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D99C; /* je: equal / zero */

loc_0004D8F2: ;
    PUSH32(esp, 0x5B0);
    PUSH32(esp, 0x305564);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D902u); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_0004D902: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D90Du); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_0004D90D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004D910: ;
    SET_LO8(edx, MEM8(esp + eax + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x305550)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x305550) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D966; /* jne: not equal / not zero */

loc_0004D91C: ;
    SET_LO8(ecx, MEM8(esp + eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x305551)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x305551) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D956; /* jne: not equal / not zero */

loc_0004D928: ;
    SET_LO8(edx, MEM8(esp + eax + 0xA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x305552)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x305552) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D959; /* jne: not equal / not zero */

loc_0004D934: ;
    SET_LO8(ecx, MEM8(esp + eax + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x305553)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x305553) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D95E; /* jne: not equal / not zero */

loc_0004D940: ;
    SET_LO8(edx, MEM8(esp + eax + 0xC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x305554)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x305554) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D963; /* jne: not equal / not zero */

loc_0004D94C: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004D910; /* jb: below (unsigned <) */

loc_0004D954: ;
    goto loc_0004D966;

loc_0004D956: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0004D966;

loc_0004D959: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0004D966;

loc_0004D95E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0004D966;

loc_0004D963: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D966: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D974; /* jne: not equal / not zero */

loc_0004D96B: ;
    PUSH32(esp, 0x0004D970u); RECOMP_ABI_CALL(0x0004CA90u, sub_0004CA90); /* call 0x0004CA90 */

loc_0004D970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D9D8; /* je: equal / zero */

loc_0004D974: ;
    MEM32(0x34AD58) = MEM32(0x34AD58) | 0x300;
    _fa = (uint32_t)(MEM32(0x34AD58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0004D983u); RECOMP_ABI_CALL(0x0004D770u, sub_0004D770); /* call 0x0004D770 */

loc_0004D983: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x230);
    PUSH32(esp, 0x0004D995u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004D995: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004D99C: ;
    MEM32(0x34AD58) = MEM32(0x34AD58) | 0x400;
    _fa = (uint32_t)(MEM32(0x34AD58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0004D9ABu); RECOMP_ABI_CALL(0x0004D770u, sub_0004D770); /* call 0x0004D770 */

loc_0004D9AB: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x230);
    PUSH32(esp, 0x0004D9BDu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004D9BD: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004D9C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D9D3; /* je: equal / zero */

loc_0004D9C9: ;
    MEM32(0x34AD58) = MEM32(0x34AD58) | 0x500;
    _fa = (uint32_t)(MEM32(0x34AD58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0004D9D3: ;
    PUSH32(esp, 0x0004D9D8u); RECOMP_ABI_CALL(0x0004D770u, sub_0004D770); /* call 0x0004D770 */

loc_0004D9D8: ;
    SET_LO16(eax, MEM16(0x30559A));
    SET_LO8(ecx, MEM8(0x30559C));
    SET_LO8(edx, MEM8(0x30559D));
    MEM16(0x3055A0) = MEM16(0x3055A0) + 1;
    _fa = (uint32_t)(MEM16(0x3055A0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x34CD64) = LO16(eax);
    SET_LO8(eax, MEM8(0x30559E));
    MEM8(0x34CDE8) = LO8(ecx);
    ecx = MEM32(esp + 0x234);
    MEM8(0x34AD54) = LO8(eax);
    MEM8(0x34AD55) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x0004DA1Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004DA1C: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DA30
 * Original: 0x0004DA30 - 0x0004DA4F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA30(void)
{

loc_0004DA30: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40D648);
    PUSH32(esp, 0x0004DA44u); RECOMP_ABI_CALL(0x000A9E33u, sub_000A9E33); /* call 0x000A9E33 */

loc_0004DA44: ;
    PUSH32(esp, 0x40D648);
    PUSH32(esp, 0x0004DA4Eu); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_0004DA4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DA50
 * Original: 0x0004DA50 - 0x0004DA5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA50(void)
{

loc_0004DA50: ;
    eax = MEM32(esp + 4);
    MEM32(0x556780) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DA60
 * Original: 0x0004DA60 - 0x0004DA6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA60(void)
{

loc_0004DA60: ;
    MEM32(0x556780) = 0x41400000;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DA70
 * Original: 0x0004DA70 - 0x0004DA7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA70(void)
{

loc_0004DA70: ;
    MEM32(0x34CE24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DA80
 * Original: 0x0004DA80 - 0x0004DA8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA80(void)
{

loc_0004DA80: ;
    eax = MEM32(esp + 4);
    MEM32(0x34CE24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DA90
 * Original: 0x0004DA90 - 0x0004DA9C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA90(void)
{

loc_0004DA90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x2DF85C);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DAA0
 * Original: 0x0004DAA0 - 0x0004DAC2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DAA0: ;
    ecx = MEM32(esp + 4);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* nop */

loc_0004DAB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x40E760)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x40E760) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DAC1; /* je: equal / zero */

loc_0004DAB9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004DAB0; /* jl: less (signed <) */

loc_0004DABF: ;
    eax = edx;

loc_0004DAC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DAD0
 * Original: 0x0004DAD0 - 0x0004DAD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DAD0(void)
{

loc_0004DAD0: ;
    eax = MEM32(0x5C27C4);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DAE0
 * Original: 0x0004DAE0 - 0x0004DAE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DAE0(void)
{

loc_0004DAE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DAF0
 * Original: 0x0004DAF0 - 0x0004DAF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DAF0(void)
{

loc_0004DAF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB00
 * Original: 0x0004DB00 - 0x0004DB01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB00(void)
{

loc_0004DB00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB10
 * Original: 0x0004DB10 - 0x0004DB20 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB10_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DB10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0004DB17u); RECOMP_ABI_CALL(0x0004D570u, sub_0004D570); /* call 0x0004D570 */

loc_0004DB17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x2DF880) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB20
 * Original: 0x0004DB20 - 0x0004DB34 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB20_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DB20: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0004DB27u); RECOMP_ABI_CALL(0x0004D570u, sub_0004D570); /* call 0x0004D570 */

loc_0004DB27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x2DF884) = eax;
    g_seh_ebp = ebp; sub_00050B90(); return; /* tail jmp 0x00050B90 */

}

/**
 * sub_0004DB40
 * Original: 0x0004DB40 - 0x0004DB41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB40(void)
{

loc_0004DB40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB50
 * Original: 0x0004DB50 - 0x0004DB51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB50(void)
{

loc_0004DB50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB60
 * Original: 0x0004DB60 - 0x0004DB65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DB60: ;
    g_seh_ebp = ebp; sub_00050550(); return; /* tail jmp 0x00050550 */

}

/**
 * sub_0004DB70
 * Original: 0x0004DB70 - 0x0004DB71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB70(void)
{

loc_0004DB70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB80
 * Original: 0x0004DB80 - 0x0004DB81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB80(void)
{

loc_0004DB80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DB90
 * Original: 0x0004DB90 - 0x0004DB91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB90(void)
{

loc_0004DB90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBA0
 * Original: 0x0004DBA0 - 0x0004DBA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBA0(void)
{

loc_0004DBA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBB0
 * Original: 0x0004DBB0 - 0x0004DBB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBB0(void)
{

loc_0004DBB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBC0
 * Original: 0x0004DBC0 - 0x0004DBC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBC0(void)
{

loc_0004DBC0: ;
    eax = MEM32(0x40E75C);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBD0
 * Original: 0x0004DBD0 - 0x0004DBD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBD0(void)
{

loc_0004DBD0: ;
    eax = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBE0
 * Original: 0x0004DBE0 - 0x0004DBE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBE0(void)
{

loc_0004DBE0: ;
    eax = MEM32(0x34CE20);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBF0
 * Original: 0x0004DBF0 - 0x0004DBF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBF0(void)
{

loc_0004DBF0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC00
 * Original: 0x0004DC00 - 0x0004DC2D (45 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DC00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x40E75C);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0xD;
    MEM32(esp + 0x14) = 0xE;
    PUSH32(esp, 0x0004DC29u); RECOMP_ABI_CALL(0x001AB55Au, sub_001AB55A); /* call 0x001AB55A */

loc_0004DC29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC30
 * Original: 0x0004DC30 - 0x0004DC31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC30(void)
{

loc_0004DC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC40
 * Original: 0x0004DC40 - 0x0004DC5A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DC40: ;
    eax = 0x40D868;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004DC47: ;
    MEM32(eax + -24) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E768) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40E768 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004DC47; /* jl: less (signed <) */

loc_0004DC59: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC60
 * Original: 0x0004DC60 - 0x0004DC61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC60(void)
{

loc_0004DC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC70
 * Original: 0x0004DC70 - 0x0004DC7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC70(void)
{

loc_0004DC70: ;
    eax = MEM32(esp + 4);
    MEM32(0x40E77C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC80
 * Original: 0x0004DC80 - 0x0004DC81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC80(void)
{

loc_0004DC80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DC90
 * Original: 0x0004DC90 - 0x0004DC93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004DC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DC90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DCA0
 * Original: 0x0004DCA0 - 0x0004DCE4 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DCA0(void)
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

loc_0004DCA0: ;
    eax = MEM32(0x40E754);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DCE3; /* je: equal / zero */

loc_0004DCA9: ;
    fp_push(MEMF(0x40E758)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x40D640)); /* fsub dword ptr [0x40d640] */
    MEMF(0x40E758) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x40E758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004DCC6u); RECOMP_ABI_CALL(0x000504F0u, sub_000504F0); /* call 0x000504F0 */

loc_0004DCC6: ;
    eax = MEM32(0x40E754);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x40E754) = eax;
    if ((_fa != 0)) goto loc_0004DCE3; /* jne: not equal / not zero */

loc_0004DCD6: ;
    ecx = MEM32(0x40E750);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004DCE2u); RECOMP_ABI_CALL(0x00050480u, sub_00050480); /* call 0x00050480 */

loc_0004DCE2: ;
    POP32(esp, ecx);

loc_0004DCE3: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DCF0
 * Original: 0x0004DCF0 - 0x0004DD1D (45 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DCF0: ;
    _fa = (uint32_t)(MEM32(0x2DF888)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2DF888), 0xFFFFFFFFu (32-bit) */
    MEM32(0x40E754) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0004DD08; /* je: equal / zero */

loc_0004DD03: ;
    PUSH32(esp, 0x0004DD08u); RECOMP_ABI_CALL(0x00050AC0u, sub_00050AC0); /* call 0x00050AC0 */

loc_0004DD08: ;
    MEM32(0x5C27C0) = 0;
    MEM32(0x2DF888) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DD20
 * Original: 0x0004DD20 - 0x0004DD30 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD20(void)
{

loc_0004DD20: ;
    PUSH32(esp, 0x0004DD25u); RECOMP_ABI_CALL(0x00050B10u, sub_00050B10); /* call 0x00050B10 */

loc_0004DD25: ;
    MEM32(0x5C27C0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DD30
 * Original: 0x0004DD30 - 0x0004DD40 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD30(void)
{

loc_0004DD30: ;
    PUSH32(esp, 0x0004DD35u); RECOMP_ABI_CALL(0x00050B50u, sub_00050B50); /* call 0x00050B50 */

loc_0004DD35: ;
    MEM32(0x5C27C0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DD90
 * Original: 0x0004DD90 - 0x0004DDA8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD90_gen(void)   /* fe-pre: shadowed by frontend_pre.c */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DD90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004DD97u); RECOMP_ABI_CALL(0x0004D570u, sub_0004D570); /* call 0x0004D570 */

loc_0004DD97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x2DF87C) = eax;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00050480(); return; /* tail jmp 0x00050480 */

}

/**
 * sub_0004DDB0
 * Original: 0x0004DDB0 - 0x0004DDC8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DDB0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0004DDB7u); RECOMP_ABI_CALL(0x0004D570u, sub_0004D570); /* call 0x0004D570 */

loc_0004DDB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x2DF884) = eax;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00050B90(); return; /* tail jmp 0x00050B90 */

}

/**
 * sub_0004DDD0
 * Original: 0x0004DDD0 - 0x0004DDD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDD0(void)
{

loc_0004DDD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DDE0
 * Original: 0x0004DDE0 - 0x0004DDE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDE0(void)
{

loc_0004DDE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DDF0
 * Original: 0x0004DDF0 - 0x0004DDF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDF0(void)
{

loc_0004DDF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DE00
 * Original: 0x0004DE00 - 0x0004DE03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004DE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DE00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DE10
 * Original: 0x0004DE10 - 0x0004DE11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE10(void)
{

loc_0004DE10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DE20
 * Original: 0x0004DE20 - 0x0004DE99 (121 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DE20: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x80) = eax;
    PUSH32(esp, esi);
    eax = 1;
    esi = 0x40D894;
    /* nop */

loc_0004DE40: ;
    ecx = MEM32(esi + -68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DE6C; /* je: equal / zero */

loc_0004DE47: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x23253C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004DE5Du); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_0004DE5D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004DE6Au); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_0004DE6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004DE6C: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E794) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E794 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004DE40; /* jl: less (signed <) */

loc_0004DE77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004DE86; /* je: equal / zero */

loc_0004DE7C: ;
    PUSH32(esp, 0x232524);
    PUSH32(esp, 0x0004DE86u); RECOMP_ABI_CALL(0x000AA286u, sub_000AA286); /* call 0x000AA286 */

loc_0004DE86: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x0004DE92u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004DE92: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DEA0
 * Original: 0x0004DEA0 - 0x0004DEA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DEA0(void)
{

loc_0004DEA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DEB0
 * Original: 0x0004DEB0 - 0x0004DEB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DEB0(void)
{

loc_0004DEB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DEC0
 * Original: 0x0004DEC0 - 0x0004DEC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DEC0(void)
{

loc_0004DEC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DED0
 * Original: 0x0004DED0 - 0x0004DED3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004DED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DEE0
 * Original: 0x0004DEE0 - 0x0004DEE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DEE0: ;
    g_seh_ebp = ebp; sub_0004FF00(); return; /* tail jmp 0x0004FF00 */

}

/**
 * sub_0004DEF0
 * Original: 0x0004DEF0 - 0x0004DF00 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004DEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DEF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004DEFAu); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004DEFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF10
 * Original: 0x0004DF10 - 0x0004DF13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004DF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DF10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF20
 * Original: 0x0004DF20 - 0x0004DF26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF20(void)
{

loc_0004DF20: ;
    eax = MEM32(0x2DF888);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF30
 * Original: 0x0004DF30 - 0x0004DF33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004DF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DF30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF40
 * Original: 0x0004DF40 - 0x0004DF46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF40(void)
{

loc_0004DF40: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF50
 * Original: 0x0004DF50 - 0x0004DFAC (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DF50: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x40D894;
    PUSH32(esp, edi);
    /* nop */

loc_0004DF60: ;
    edi = MEM32(eax + -68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DF71; /* je: equal / zero */

loc_0004DF67: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004DF71; /* jne: not equal / not zero */

loc_0004DF6B: ;
    _fa = (uint32_t)(MEM32(eax + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -44), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DF7E; /* je: equal / zero */

loc_0004DF71: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E794) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40E794 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004DF60; /* jl: less (signed <) */

loc_0004DF7C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004DF7E: ;
    eax = ecx + ecx * 2;
    ecx = MEM32(esp + 0xC);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x40D86C) = ecx;
    edx = MEM32(ecx);
    eax = eax + 0x40D870;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DFB0
 * Original: 0x0004DFB0 - 0x0004DFB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DFB0: ;
    g_seh_ebp = ebp; sub_00050C50(); return; /* tail jmp 0x00050C50 */

}

/**
 * sub_0004DFC0
 * Original: 0x0004DFC0 - 0x0004DFC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DFC0(void)
{

loc_0004DFC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DFD0
 * Original: 0x0004DFD0 - 0x0004DFD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DFD0(void)
{

loc_0004DFD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DFE0
 * Original: 0x0004DFE0 - 0x0004E001 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DFE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004DFEE; /* jne: not equal / not zero */

loc_0004DFE8: ;
    eax = 0xFFFFD8F0u;
    esp += 4; return; /* ret */

loc_0004DFEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004DFF8; /* jle: less or equal (signed <=) */

loc_0004DFF3: ;
    eax = 0x64;

loc_0004DFF8: ;
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x2E042E);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E010
 * Original: 0x0004E010 - 0x0004E042 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E010: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E01E; /* jne: not equal / not zero */

loc_0004E018: ;
    eax = 0xFFFFFC19u;
    esp += 4; return; /* ret */

loc_0004E01E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004E028; /* jle: less or equal (signed <=) */

loc_0004E023: ;
    eax = 0x64;

loc_0004E028: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x2E042E);
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
    esp += 4; return; /* ret */

}

/**
 * sub_0004E050
 * Original: 0x0004E050 - 0x0004E053 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004E050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E050: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E060
 * Original: 0x0004E060 - 0x0004E06B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004E060: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004E070
 * Original: 0x0004E070 - 0x0004E07A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E070: ;
    eax = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E0B0
 * Original: 0x0004E0B0 - 0x0004E0B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E0B0: ;
    g_seh_ebp = ebp; sub_001AE6A3(); return; /* tail jmp 0x001AE6A3 */

}

/**
 * sub_0004E0C0
 * Original: 0x0004E0C0 - 0x0004E0C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E0C0: ;
    g_seh_ebp = ebp; sub_001AE6FC(); return; /* tail jmp 0x001AE6FC */

}

/**
 * sub_0004E140
 * Original: 0x0004E140 - 0x0004E145 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E140: ;
    g_seh_ebp = ebp; sub_001AD208(); return; /* tail jmp 0x001AD208 */

}

/**
 * sub_0004E150
 * Original: 0x0004E150 - 0x0004E155 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E150: ;
    g_seh_ebp = ebp; sub_001AD23D(); return; /* tail jmp 0x001AD23D */

}

/**
 * sub_0004E170
 * Original: 0x0004E170 - 0x0004E18C (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E170(void)
{

loc_0004E170: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E189u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E189: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0004E1E0
 * Original: 0x0004E1E0 - 0x0004E20E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004E1E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004E1E0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    edx = MEM32(esp + 4);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004E210
 * Original: 0x0004E210 - 0x0004E2AE (158 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E210: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(eax * 4 + 0x40E760);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E29C; /* je: equal / zero */

loc_0004E221: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x40D850;
    ebx = 1;
    edi = edi;

loc_0004E230: ;
    eax = MEM32(esi + 0x44);
    edi = esi + 0x40;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E28A; /* jne: not equal / not zero */

loc_0004E23F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E28A; /* je: equal / zero */

loc_0004E245: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E24Cu); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E24C: ;
    ecx = MEM32(edi);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E275; /* jne: not equal / not zero */

loc_0004E254: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004E262u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E262: ;
    ecx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E26Fu); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E26F: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E262; /* jne: not equal / not zero */

loc_0004E275: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    MEM32(edi + 0x1C) = 0;
    PUSH32(esp, 0x0004E284u); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_0004E284: ;
    MEM32(esi) = 0;

loc_0004E28A: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E230; /* jl: less (signed <) */

loc_0004E295: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0004E29C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0004E2AC; /* je: equal / zero */

loc_0004E2A1: ;
    MEM32(eax * 4 + 0x40E760) = 0xFFFFFFFFu;

loc_0004E2AC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E2B0
 * Original: 0x0004E2B0 - 0x0004E2E2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E2B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi * 4 + 0x40E760)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x40E760), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E2D5; /* je: equal / zero */

loc_0004E2BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004E2C5u); RECOMP_ABI_CALL(0x0004E210u, sub_0004E210); /* call 0x0004E210 */

loc_0004E2C5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x40E760) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004E2D5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi * 4 + 0x40E760) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E2F0
 * Original: 0x0004E2F0 - 0x0004E4B5 (453 bytes, 150 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E2F0_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E2F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x40D890;

loc_0004E301: ;
    eax = MEM32(edi + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E385; /* je: equal / zero */

loc_0004E308: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E30Fu); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E30F: ;
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0004E33E; /* je: equal / zero */

loc_0004E318: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004E33E; /* jne: not equal / not zero */

loc_0004E31F: ;
    SET_LO16(ecx, MEM16(edi + -60));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004E33E; /* jne: not equal / not zero */

loc_0004E328: ;
    SET_LO16(edx, MEM16(edi + -58));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esi + 2) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004E33E; /* jne: not equal / not zero */

loc_0004E332: ;
    eax = MEM32(edi + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0004E40A; /* je: equal / zero */

loc_0004E33E: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E790) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40E790 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0004E301; /* jl: less (signed <) */

loc_0004E34A: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x40D890;

loc_0004E351: ;
    edx = MEM32(edi + -64);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004E35Bu); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E35B: ;
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0004E36F; /* je: equal / zero */

loc_0004E364: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E413; /* je: equal / zero */

loc_0004E36F: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E790) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40E790 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0004E351; /* jl: less (signed <) */

loc_0004E37B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004E385: ;
    SET_LO16(edx, MEM16(esi + 2));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, LO16(edx) - 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    _cf = (int)((LO16(edx)) != 0);
    SET_LO16(edx, (uint32_t)(0u - (uint32_t)(LO16(edx))));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    edi = ebx + ebx * 2;
    PUSH32(esp, ecx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (5) _cf = (int)(((edi) >> (32 - (5))) & 1);
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40010) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x40010)) >> 32) & 1);
    edx = edx + 0x40010;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x40D850;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x34CE20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0x18;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x0004E3E6u); RECOMP_ABI_CALL(0x001AE5A9u, sub_001AE5A9); /* call 0x001AE5A9 */

loc_0004E3E6: ;
    ecx = MEM32(esi);
    eax = edi + 0x40D854;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = edx;
    SET_LO16(ecx, MEM16(esi + 0x10));
    MEM16(eax + 0x10) = LO16(ecx);

loc_0004E40A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004E413: ;
    edi = ebx + ebx * 2;
    PUSH32(esp, ebp);
    if (5) _cf = (int)(((edi) >> (32 - (5))) & 1);
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + 0x40D850);
    ebp = edi + 0x40D850;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E42Cu); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_0004E42C: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    MEM32(ebp) = 0;
    SET_LO16(eax, MEM16(esi + 2));
    MEM32(esp + 0x14) = edx;
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edx;
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(0u - (uint32_t)(LO16(eax))));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    MEM32(esp + 0x2C) = edx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x34CE20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40010) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40010)) >> 32) & 1);
    eax = eax + 0x40010;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0x18;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0004E487u); RECOMP_ABI_CALL(0x001AE5A9u, sub_001AE5A9); /* call 0x001AE5A9 */

loc_0004E487: ;
    ecx = MEM32(esi);
    eax = edi + 0x40D854;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    POP32(esp, ebp);
    MEM32(eax + 0xC) = edx;
    SET_LO16(ecx, MEM16(esi + 0x10));
    POP32(esp, edi);
    MEM16(eax + 0x10) = LO16(ecx);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E4C0
 * Original: 0x0004E4C0 - 0x0004E545 (133 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E4C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 8 + 0x5C27A0);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x40D850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E543; /* je: equal / zero */

loc_0004E4DC: ;
    edx = MEM32(esi + 0x40D894);
    PUSH32(esp, edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 8 + 0x5C27A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 8 + 0x5C27A4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E542; /* jne: not equal / not zero */

loc_0004E4EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x40D898)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40D898), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E542; /* jne: not equal / not zero */

loc_0004E4F4: ;
    edi = esi + 0x40D890;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E501u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E501: ;
    eax = MEM32(edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E542; /* jne: not equal / not zero */

loc_0004E50A: ;
    ecx = MEM32(esi + 0x40D850);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E51Cu); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E51C: ;
    /* nop */

loc_0004E520: ;
    eax = MEM32(esi + 0x40D850);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E531u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E531: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E520; /* jne: not equal / not zero */

loc_0004E538: ;
    MEM32(esi + 0x40D8AC) = 0;

loc_0004E542: ;
    POP32(esp, edi);

loc_0004E543: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E550
 * Original: 0x0004E550 - 0x0004E55E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E550: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0004E4C0(); return; /* tail jmp 0x0004E4C0 */

}

/**
 * sub_0004E560
 * Original: 0x0004E560 - 0x0004E5D3 (115 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E560: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 8 + 0x5C27A0);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x40D850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E5D1; /* je: equal / zero */

loc_0004E57C: ;
    edx = MEM32(esi + 0x40D894);
    PUSH32(esp, edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 8 + 0x5C27A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 8 + 0x5C27A4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E5D0; /* jne: not equal / not zero */

loc_0004E58C: ;
    _fa = (uint32_t)(MEM32(esi + 0x40D898)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40D898), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E5D0; /* jne: not equal / not zero */

loc_0004E594: ;
    edi = esi + 0x40D890;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E5A1u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E5A1: ;
    eax = MEM32(edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E5D0; /* jne: not equal / not zero */

loc_0004E5AA: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x40D86C) = eax;
    edx = MEM32(eax);
    ecx = esi + 0x40D870;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;

loc_0004E5D0: ;
    POP32(esp, edi);

loc_0004E5D1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E5E0
 * Original: 0x0004E5E0 - 0x0004E657 (119 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004E5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E5E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebp * 4 + 0x40E760)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp * 4 + 0x40E760), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E655; /* je: equal / zero */

loc_0004E5EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x40D850;
    SET_LO8(ebx, 1);

loc_0004E5F8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E648; /* je: equal / zero */

loc_0004E5FE: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ebp * 4 + 0x40E760);
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E648; /* jne: not equal / not zero */

loc_0004E612: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E61Eu); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E61E: ;
    edi = edi;

loc_0004E620: ;
    eax = MEM32(esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E62Du); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E62D: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E620; /* jne: not equal / not zero */

loc_0004E633: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    MEM32(esi + 0x5C) = 0;
    PUSH32(esp, 0x0004E642u); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_0004E642: ;
    MEM32(esi) = 0;

loc_0004E648: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E5F8; /* jl: less (signed <) */

loc_0004E653: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0004E655: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E660
 * Original: 0x0004E660 - 0x0004E6CA (106 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E660: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x40D850;
    SET_LO8(ebx, 1);
    /* nop */

loc_0004E670: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E6BB; /* je: equal / zero */

loc_0004E676: ;
    ecx = MEM32(esi + 0x44);
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E6BB; /* je: equal / zero */

loc_0004E687: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E693u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E693: ;
    eax = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E6A0u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E6A0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E693; /* jne: not equal / not zero */

loc_0004E6A6: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    MEM32(esi + 0x5C) = 0;
    PUSH32(esp, 0x0004E6B5u); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_0004E6B5: ;
    MEM32(esi) = 0;

loc_0004E6BB: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E670; /* jl: less (signed <) */

loc_0004E6C6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E6D0
 * Original: 0x0004E6D0 - 0x0004E731 (97 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E6D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = 0x40D850;
    ebx = 1;

loc_0004E6E2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E721; /* je: equal / zero */

loc_0004E6E8: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E721; /* jne: not equal / not zero */

loc_0004E6F1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E721; /* jne: not equal / not zero */

loc_0004E6F6: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E721; /* jne: not equal / not zero */

loc_0004E6FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E707u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E707: ;
    eax = MEM32(esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E714u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E714: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E707; /* jne: not equal / not zero */

loc_0004E71A: ;
    MEM32(esi + 0x5C) = 0;

loc_0004E721: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E6E2; /* jl: less (signed <) */

loc_0004E72C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E740
 * Original: 0x0004E740 - 0x0004E791 (81 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E740: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0x40D850;
    SET_LO8(ebx, 1);
    /* nop */

loc_0004E750: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E781; /* je: equal / zero */

loc_0004E756: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E781; /* jne: not equal / not zero */

loc_0004E75B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E767u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E767: ;
    ecx = MEM32(esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E774u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E774: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E767; /* jne: not equal / not zero */

loc_0004E77A: ;
    MEM32(esi + 0x5C) = 0;

loc_0004E781: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E750; /* jl: less (signed <) */

loc_0004E78C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E7A0
 * Original: 0x0004E7A0 - 0x0004E80E (110 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E7A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x40D850;
    ebx = 1;
    edi = edi;

loc_0004E7B0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E7FE; /* je: equal / zero */

loc_0004E7B6: ;
    edi = esi + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E7C0u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E7C0: ;
    eax = MEM32(edi);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E7E9; /* jne: not equal / not zero */

loc_0004E7C8: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E7D6u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E7D6: ;
    eax = MEM32(esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E7E3u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E7E3: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E7D6; /* jne: not equal / not zero */

loc_0004E7E9: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    MEM32(edi + 0x1C) = 0;
    PUSH32(esp, 0x0004E7F8u); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_0004E7F8: ;
    MEM32(esi) = 0;

loc_0004E7FE: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E7B0; /* jl: less (signed <) */

loc_0004E809: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E810
 * Original: 0x0004E810 - 0x0004E87A (106 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x40D850;
    ebx = 1;
    edi = edi;

loc_0004E820: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E86A; /* je: equal / zero */

loc_0004E826: ;
    edi = esi + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E830u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E830: ;
    eax = MEM32(edi);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E86A; /* jne: not equal / not zero */

loc_0004E838: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004E846u); RECOMP_ABI_CALL(0x001AB3BBu, sub_001AB3BB); /* call 0x001AB3BB */

loc_0004E846: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(edi + 0x1C) = ebx;
    PUSH32(esp, 0x0004E857u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004E857: ;
    edx = MEM32(esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004E864u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004E864: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E857; /* jne: not equal / not zero */

loc_0004E86A: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E820; /* jl: less (signed <) */

loc_0004E875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E880
 * Original: 0x0004E880 - 0x0004E8C0 (64 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E880: ;
    PUSH32(esp, esi);
    esi = 0x40D8AC;

loc_0004E886: ;
    eax = MEM32(esi + -92);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E8B3; /* je: equal / zero */

loc_0004E88D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E8B3; /* je: equal / zero */

loc_0004E892: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E89Cu); RECOMP_ABI_CALL(0x001AB3DBu, sub_001AB3DB); /* call 0x001AB3DB */

loc_0004E89C: ;
    edx = MEM32(esi + -8);
    eax = MEM32(esi + -92);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0004E8B3u); RECOMP_ABI_CALL(0x001AB2BBu, sub_001AB2BB); /* call 0x001AB2BB */

loc_0004E8B3: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E7AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E7AC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E886; /* jl: less (signed <) */

loc_0004E8BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E900
 * Original: 0x0004E900 - 0x0004E927 (39 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E900: ;
    ecx = MEM32(0x34CE20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + esi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x2DF898) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2DF898;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E91Fu); RECOMP_ABI_CALL(0x001AE731u, sub_001AE731); /* call 0x001AE731 */

loc_0004E91F: ;
    MEM32(0x40E77C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E930
 * Original: 0x0004E930 - 0x0004EA40 (272 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E930: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x34CE20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004E93Eu); RECOMP_ABI_CALL(0x001AE8F7u, sub_001AE8F7); /* call 0x001AE8F7 */

loc_0004E93E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004EA3F; /* jl: less (signed <) */

loc_0004E946: ;
    PUSH32(esp, 0x0004E94Bu); RECOMP_ABI_CALL(0x001A8E86u, sub_001A8E86); /* call 0x001A8E86 */

loc_0004E94B: ;
    eax = MEM32(0x34CE20);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E95Au); RECOMP_ABI_CALL(0x001A8DDEu, sub_001A8DDE); /* call 0x001A8DDE */

loc_0004E95A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004EA3F; /* jl: less (signed <) */

loc_0004E962: ;
    PUSH32(esp, 0x23255C);
    PUSH32(esp, 0x0004E96Cu); RECOMP_ABI_CALL(0x0004DC00u, sub_0004DC00); /* call 0x0004DC00 */

loc_0004E96C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004EA3F; /* jl: less (signed <) */

loc_0004E977: ;
    ecx = MEM32(0x34CE20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E984u); RECOMP_ABI_CALL(0x0004FC30u, sub_0004FC30); /* call 0x0004FC30 */

loc_0004E984: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x40E764) = esi;
    MEM32(0x40E768) = esi;
    MEM32(0x40E76C) = esi;
    MEM32(0x40E770) = esi;
    MEM32(0x40E774) = esi;
    MEM32(0x40E778) = esi;
    MEM32(0x40E760) = esi;
    PUSH32(esp, 0x0004E9B6u); RECOMP_ABI_CALL(0x0004DC40u, sub_0004DC40); /* call 0x0004DC40 */

loc_0004E9B6: ;
    PUSH32(esp, 0x0004E9BBu); RECOMP_ABI_CALL(0x0004DA60u, sub_0004DA60); /* call 0x0004DA60 */

loc_0004E9BB: ;
    PUSH32(esp, 0x0004E9C0u); RECOMP_ABI_CALL(0x0004DA70u, sub_0004DA70); /* call 0x0004DA70 */

loc_0004E9C0: ;
    edx = MEM32(0x2DF87C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004E9CCu); RECOMP_ABI_CALL(0x00050480u, sub_00050480); /* call 0x00050480 */

loc_0004E9CC: ;
    eax = MEM32(0x2DF884);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E9D7u); RECOMP_ABI_CALL(0x00050B90u, sub_00050B90); /* call 0x00050B90 */

loc_0004E9D7: ;
    ecx = MEM32(0x34CE20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x2DFCE8);
    PUSH32(esp, ecx);
    MEM32(0x40E754) = 0;
    MEM32(0x40E758) = 0;
    MEM32(0x40E750) = 0;
    MEM32(0x40E77C) = 0x17;
    PUSH32(esp, 0x0004EA15u); RECOMP_ABI_CALL(0x001AE731u, sub_001AE731); /* call 0x001AE731 */

loc_0004EA15: ;
    edx = MEM32(0x34CE20);
    PUSH32(esp, 0x40D848);
    PUSH32(esp, edx);
    MEM32(0x5C27A4) = esi;
    MEM32(0x5C27AC) = esi;
    MEM32(0x5C27B4) = esi;
    MEM32(0x5C27BC) = esi;
    PUSH32(esp, 0x0004EA3Eu); RECOMP_ABI_CALL(0x001AB135u, sub_001AB135); /* call 0x001AB135 */

loc_0004EA3E: ;
    POP32(esp, esi);

loc_0004EA3F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004EA40
 * Original: 0x0004EA40 - 0x0004EAA2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EA40: ;
    eax = MEM32(0x2DF888);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EA9E; /* je: equal / zero */

loc_0004EA4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EA58; /* je: equal / zero */

loc_0004EA53: ;
    PUSH32(esp, 0x0004EA58u); RECOMP_ABI_CALL(0x0004DCF0u, sub_0004DCF0); /* call 0x0004DCF0 */

loc_0004EA58: ;
    eax = MEM32(esi * 4 + 0x2E02F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EA9E; /* je: equal / zero */

loc_0004EA63: ;
    eax = MEM32(0x5C27C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x2DF888) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0004EA77; /* je: equal / zero */

loc_0004EA72: ;
    PUSH32(esp, 0x0004EA77u); RECOMP_ABI_CALL(0x0004DD30u, sub_0004DD30); /* call 0x0004DD30 */

loc_0004EA77: ;
    eax = MEM32(0x2DF87C);
    PUSH32(esp, eax);
    MEM32(0x40E754) = 0;
    PUSH32(esp, 0x0004EA8Cu); RECOMP_ABI_CALL(0x00050480u, sub_00050480); /* call 0x00050480 */

loc_0004EA8C: ;
    ecx = MEM32(esi * 4 + 0x2E02F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004EA9Bu); RECOMP_ABI_CALL(0x000508C0u, sub_000508C0); /* call 0x000508C0 */

loc_0004EA9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004EA9E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004EAB0
 * Original: 0x0004EAB0 - 0x0004EAFC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EAB0: ;
    eax = MEM32(0x2DF888);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EAF8; /* je: equal / zero */

loc_0004EABE: ;
    eax = MEM32(esi * 4 + 0x2E02F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EAF8; /* je: equal / zero */

loc_0004EAC9: ;
    eax = MEM32(0x5C27C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x2DF888) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0004EADD; /* je: equal / zero */

loc_0004EAD8: ;
    PUSH32(esp, 0x0004EADDu); RECOMP_ABI_CALL(0x0004DD30u, sub_0004DD30); /* call 0x0004DD30 */

loc_0004EADD: ;
    eax = MEM32(0x2DF87C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM32(0x40E754) = 0;
    PUSH32(esp, 0x0004EAF5u); RECOMP_ABI_CALL(0x00050630u, sub_00050630); /* call 0x00050630 */

loc_0004EAF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004EAF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004EB00
 * Original: 0x0004EB00 - 0x0004EDC9 (713 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EB00(void)
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

loc_0004EB00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0xE;
    ecx = 2;
    PUSH32(esp, 0x0004EB12u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_0004EB12: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004EB14: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004EB28; /* jne: not equal / not zero */

loc_0004EB19: ;
    edx = 0xF;
    ecx = 2;
    PUSH32(esp, 0x0004EB28u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_0004EB28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5C27CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x5C27CC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004EB37; /* jne: not equal / not zero */

loc_0004EB30: ;
    ecx = 0xFFFF0000u;
    goto loc_0004EB3A;

loc_0004EB37: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0004EB3A: ;
    PUSH32(esp, 0x0004EB3Fu); RECOMP_ABI_CALL(0x00069520u, sub_00069520); /* call 0x00069520 */

loc_0004EB3F: ;
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x2E0368);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EB71; /* je: equal / zero */

loc_0004EB4E: ;
    fp_push(MEMF(esi * 4 + 0x2DFD18)); /* fld float */
    ecx = MEM32(0x902D6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x232570);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004EB6Cu); RECOMP_ABI_CALL(0x0006FA50u, sub_0006FA50); /* call 0x0006FA50 */

loc_0004EB6C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0004EB8C;

loc_0004EB71: ;
    edx = MEM32(esi * 4 + 0x2DFD18);
    eax = MEM32(0x902D6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x23256C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004EB89u); RECOMP_ABI_CALL(0x0006FA50u, sub_0006FA50); /* call 0x0006FA50 */

loc_0004EB89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004EB8C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004EB14; /* jl: less (signed <) */

loc_0004EB92: ;
    SET_LO8(ebx, MEM8(0x6E9AC4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ecx = MEM32(0x5C27CC);
    if (TEST_Z(_fa, _fb)) goto loc_0004EBB7; /* je: equal / zero */

loc_0004EBA3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5C27CC) = ecx;
    if ((_fas >= 0)) goto loc_0004EBB7; /* jns: not sign (positive) */

loc_0004EBAC: ;
    ecx = 0xC;
    MEM32(0x5C27CC) = ecx;

loc_0004EBB7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EBD2; /* je: equal / zero */

loc_0004EBBC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    MEM32(0x5C27CC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0004EBD5; /* jle: less or equal (signed <=) */

loc_0004EBC8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5C27CC) = ecx;
    goto loc_0004EBDB;

loc_0004EBD2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */

loc_0004EBD5: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0004ED31; /* jge: greater or equal (signed >=) */

loc_0004EBDB: ;
    esi = ecx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x2E0368);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EC86; /* je: equal / zero */

loc_0004EBEE: ;
    fp_push(MEMF(esi + 0x2E0370)); /* fld float */
    eax = MEM32(0x6E9ABC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x2E036C)); /* fsub dword ptr [esi + 0x2e036c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0004EC11; /* jns: not sign (positive) */

loc_0004EC0B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */

loc_0004EC11: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EC46; /* je: equal / zero */

loc_0004EC16: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx * 4 + 0x2DFD18)); /* fadd dword ptr [ecx*4 + 0x2dfd18] */
    MEMF(ecx * 4 + 0x2DFD18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2E0370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2e0370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EC40; /* jne: not equal / not zero */

loc_0004EC33: ;
    edx = MEM32(esi + 0x2E0370);
    MEM32(ecx * 4 + 0x2DFD18) = edx;

loc_0004EC40: ;
    SET_LO8(ebx, MEM8(0x6E9AC4));

loc_0004EC46: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EDBC; /* je: equal / zero */

loc_0004EC4F: ;
    fp_top() = RECOMP_FP_PC(MEMF(ecx * 4 + 0x2DFD18) - fp_top()); /* fsubr dword ptr [ecx*4 + 0x2dfd18] */
    MEMF(ecx * 4 + 0x2DFD18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2E036C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2e036c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004EDBE; /* jp: parity */

loc_0004EC6E: ;
    eax = MEM32(esi + 0x2E036C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx * 4 + 0x2DFD18) = eax;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00069520(); return; /* tail jmp 0x00069520 */

loc_0004EC86: ;
    edx = MEM32(esi + 0x2E036C);
    eax = MEM32(esi + 0x2E0370);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = eax;
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(0x6E9ABC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edx;
    edi = edi >> 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0004ECC8; /* jns: not sign (positive) */

loc_0004ECB5: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_0004ECC8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004ECF6; /* je: equal / zero */

loc_0004ECCD: ;
    eax = MEM32(ecx * 4 + 0x2DFD18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    MEM32(ecx * 4 + 0x2DFD18) = eax;
    eax = MEM32(esi + 0x2E0370);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004ECF0; /* jle: less or equal (signed <=) */

loc_0004ECE9: ;
    MEM32(ecx * 4 + 0x2DFD18) = eax;

loc_0004ECF0: ;
    SET_LO8(ebx, MEM8(0x6E9AC4));

loc_0004ECF6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EDBE; /* je: equal / zero */

loc_0004ECFF: ;
    ebx = MEM32(ecx * 4 + 0x2DFD18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx * 4 + 0x2DFD18) = ebx;
    esi = MEM32(esi + 0x2E036C);
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004EDBE; /* jge: greater or equal (signed >=) */

loc_0004ED1F: ;
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x2DFD18) = esi;
    POP32(esp, esi);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00069520(); return; /* tail jmp 0x00069520 */

loc_0004ED31: ;
    ecx = MEM32(0x5C27D0);
    edx = MEM32(ecx * 4 + 0x2E0228);
    eax = MEM32(0x902D6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x232568);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004ED4Fu); RECOMP_ABI_CALL(0x0006FA50u, sub_0006FA50); /* call 0x0006FA50 */

loc_0004ED4F: ;
    eax = MEM32(0x6E9AC4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004ED79; /* je: equal / zero */

loc_0004ED5B: ;
    ecx = MEM32(0x5C27D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    MEM32(0x5C27D0) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0004ED8F; /* jle: less or equal (signed <=) */

loc_0004ED6D: ;
    MEM32(0x5C27D0) = 0;
    goto loc_0004ED8F;

loc_0004ED79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004ED8F; /* je: equal / zero */

loc_0004ED7D: ;
    MEM32(0x5C27D0) = MEM32(0x5C27D0) - 1;
    _fa = (uint32_t)(MEM32(0x5C27D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0004ED8F; /* jns: not sign (positive) */

loc_0004ED85: ;
    MEM32(0x5C27D0) = 0x17;

loc_0004ED8F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EDBE; /* je: equal / zero */

loc_0004ED94: ;
    eax = MEM32(0x5C27D0);
    esi = eax + eax * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2DF898) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2DF898;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
    edi = 0x2DFD18;
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
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00069520(); return; /* tail jmp 0x00069520 */

loc_0004EDBC: ;
    fp_pop(); /* fstp st(0) */

loc_0004EDBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00069520(); return; /* tail jmp 0x00069520 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EDD0
 * Original: 0x0004EDD0 - 0x0004EE80 (176 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EDD0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x40D894;
    ebx = 1;

loc_0004EDE8: ;
    edi = MEM32(eax + -68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EDFD; /* je: equal / zero */

loc_0004EDEF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004EDFD; /* jne: not equal / not zero */

loc_0004EDF3: ;
    _fa = (uint32_t)(MEM32(eax + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -40), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004EDFD; /* jne: not equal / not zero */

loc_0004EDF8: ;
    _fa = (uint32_t)(MEM32(eax + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -44), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EE0D; /* je: equal / zero */

loc_0004EDFD: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E794) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40E794 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004EDE8; /* jl: less (signed <) */

loc_0004EE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0004EE0D: ;
    PUSH32(esp, 0);
    esi = ecx + ecx * 2;
    PUSH32(esp, 0);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x40D850);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004EE25u); RECOMP_ABI_CALL(0x001AB31Bu, sub_001AB31B); /* call 0x001AB31B */

loc_0004EE25: ;
    edx = MEM32(esi + 0x40D850);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004EE36u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004EE36: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EE25; /* jne: not equal / not zero */

loc_0004EE3C: ;
    eax = ZX16(MEM16(esi + 0x40D860));
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x40D850);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004EE5Au); RECOMP_ABI_CALL(0x001AB3DBu, sub_001AB3DB); /* call 0x001AB3DB */

loc_0004EE5A: ;
    eax = MEM32(esi + 0x40D8A4);
    ecx = MEM32(esi + 0x40D850);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi + 0x40D8AC) = 0;
    PUSH32(esp, 0x0004EE7Bu); RECOMP_ABI_CALL(0x001AB2BBu, sub_001AB2BB); /* call 0x001AB2BB */

loc_0004EE7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004EE80
 * Original: 0x0004EE80 - 0x0004EEFB (123 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE80(void)
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

loc_0004EE80: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004EE99; /* jp: parity */

loc_0004EE93: ;
    eax = 0xFFFFD8F0u;
    esp += 4; return; /* ret */

loc_0004EE99: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(0x2E04F8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004EEB2; /* jp: parity */

loc_0004EEAC: ;
    eax = MEM32(0x5C27D8);
    esp += 4; return; /* ret */

loc_0004EEB2: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C8D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c8d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EECB; /* jne: not equal / not zero */

loc_0004EEC3: ;
    MEM32(esp + 4) = 0x42C80000;

loc_0004EECB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    MEM32(0x2E04F8) = eax;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x232578)); /* fmul dword ptr [0x232578] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C8D4)); /* fmul dword ptr [0x22c8d4] */
    PUSH32(esp, 0x0004EEF5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0004EEF5: ;
    MEM32(0x5C27D8) = eax;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EF00
 * Original: 0x0004EF00 - 0x0004EF7B (123 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EF00(void)
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

loc_0004EF00: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004EF19; /* jp: parity */

loc_0004EF13: ;
    eax = 0xFFFFFC19u;
    esp += 4; return; /* ret */

loc_0004EF19: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C8D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c8d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EF32; /* jne: not equal / not zero */

loc_0004EF2A: ;
    MEM32(esp + 4) = 0x42C80000;

loc_0004EF32: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(0x2E04FC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004EF4B; /* jp: parity */

loc_0004EF45: ;
    eax = MEM32(0x5C27DC);
    esp += 4; return; /* ret */

loc_0004EF4B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    MEM32(0x2E04FC) = eax;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x232578)); /* fmul dword ptr [0x232578] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    PUSH32(esp, 0x0004EF75u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0004EF75: ;
    MEM32(0x5C27DC) = eax;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EF80
 * Original: 0x0004EF80 - 0x0004EF9C (28 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EF80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x34CE20);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004EF91u); RECOMP_ABI_CALL(0x001AB04Du, sub_001AB04D); /* call 0x001AB04D */

loc_0004EF91: ;
    eax = MEM32(esp);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004EFA0
 * Original: 0x0004EFA0 - 0x0004EFF8 (88 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EFA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x40D850;
    /* nop */

loc_0004EFB0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EFD5; /* je: equal / zero */

loc_0004EFB6: ;
    edi = esi + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004EFC0u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004EFC0: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004EFD5; /* jne: not equal / not zero */

loc_0004EFC5: ;
    eax = MEM32(edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004EFE6; /* je: equal / zero */

loc_0004EFCE: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004EFEF; /* jne: not equal / not zero */

loc_0004EFD5: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004EFB0; /* jl: less (signed <) */

loc_0004EFE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0004EFE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0004EFEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F000
 * Original: 0x0004F000 - 0x0004F043 (67 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x40D850;

loc_0004F007: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F035; /* je: equal / zero */

loc_0004F00D: ;
    edi = esi + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F017u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004F017: ;
    eax = MEM32(edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F035; /* je: equal / zero */

loc_0004F020: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F035; /* je: equal / zero */

loc_0004F027: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004F02Fu); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_0004F02F: ;
    MEM32(esi) = 0;

loc_0004F035: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E750 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004F007; /* jl: less (signed <) */

loc_0004F040: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F050
 * Original: 0x0004F050 - 0x0004F0A0 (80 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F050_gen(void)   /* audio-trace: shadowed by audio.c (snd play funnel) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004F050: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0004F06E; /* ja: above (unsigned >) */

loc_0004F05A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4F080); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0004F061u) goto loc_0004F061;
    if (_jt == 0x0004F06Fu) goto loc_0004F06F;
    if (_jt == 0x0004F074u) goto loc_0004F074;
    if (_jt == 0x0004F079u) goto loc_0004F079;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004F061: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F06Bu); RECOMP_ABI_CALL(0x0004EA40u, sub_0004EA40); /* call 0x0004EA40 */

loc_0004F06B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F06E: ;
    esp += 4; return; /* ret */

loc_0004F06F: ;
    g_seh_ebp = ebp; sub_0004DCF0(); return; /* tail jmp 0x0004DCF0 */

loc_0004F074: ;
    g_seh_ebp = ebp; sub_0004DD20(); return; /* tail jmp 0x0004DD20 */

loc_0004F079: ;
    g_seh_ebp = ebp; sub_0004DD30(); return; /* tail jmp 0x0004DD30 */

    edi = edi;
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */

    g_seh_ebp = ebp; sub_0004F0A0(); return; /* fallthrough 0x0004F0A0 */

}

/**
 * sub_0004F0A0
 * Original: 0x0004F0A0 - 0x0004F0D3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F0A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004F0A7u); RECOMP_ABI_CALL(0x0004E210u, sub_0004E210); /* call 0x0004E210 */

loc_0004F0A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004F0B3u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F0B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x23257C);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0004F0C6u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_0004F0C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004F0CFu); RECOMP_ABI_CALL(0x0004E2B0u, sub_0004E2B0); /* call 0x0004E2B0 */

loc_0004F0CF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004F0E0
 * Original: 0x0004F0E0 - 0x0004F11D (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F0E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004F0E7u); RECOMP_ABI_CALL(0x0004E210u, sub_0004E210); /* call 0x0004E210 */

loc_0004F0E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004F0F3u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F0F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x2E0500);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0004F10Du); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_0004F10D: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004F119u); RECOMP_ABI_CALL(0x0004E2B0u, sub_0004E2B0); /* call 0x0004E2B0 */

loc_0004F119: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004F120
 * Original: 0x0004F120 - 0x0004F274 (340 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F120: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    edx = MEM32(edi * 4 + 0x2E0510);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004F266; /* je: equal / zero */

loc_0004F140: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    eax = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0004F15B; /* je: equal / zero */

loc_0004F14B: ;
    esi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0004F150: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F150; /* jne: not equal / not zero */

loc_0004F15B: ;
    MEM8(eax) = 0x5F;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x56;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0x4F;
    MEM8(eax + 1) = 0;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0004F18B; /* je: equal / zero */

loc_0004F176: ;
    ecx = esp + 8;
    edx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0004F180: ;
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F180; /* jne: not equal / not zero */

loc_0004F18B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    edi = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0004F1E9; /* jne: not equal / not zero */

loc_0004F194: ;
    _fa = (uint32_t)(MEM8(0x30AE30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30AE30), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F1D3; /* je: equal / zero */

loc_0004F19D: ;
    _fa = (uint32_t)(MEM8(0x3139CB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3139CB), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004F1D3; /* jg: greater (signed >) */

loc_0004F1A6: ;
    eax = edi;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    _fa = (uint32_t)(MEM8(eax + 0x30D9A1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x30D9A1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F1BC; /* jne: not equal / not zero */

loc_0004F1B7: ;
    MEM8(esi) = 0x42;
    goto loc_0004F1D6;

loc_0004F1BC: ;
    SET_LO8(eax, MEM8(0x30AE54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F1CA; /* jne: not equal / not zero */

loc_0004F1C5: ;
    MEM8(esi) = 0x44;
    goto loc_0004F1D6;

loc_0004F1CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0004F1D3; /* jbe: below or equal (unsigned <=) */

loc_0004F1CE: ;
    MEM8(esi) = 0x43;
    goto loc_0004F1D6;

loc_0004F1D3: ;
    MEM8(esi) = 0x41;

loc_0004F1D6: ;
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0004F1DEu); RECOMP_ABI_CALL(0x0004D570u, sub_0004D570); /* call 0x0004D570 */

loc_0004F1DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F1E9; /* je: equal / zero */

loc_0004F1E5: ;
    MEM8(esi) = 0x32;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0004F1E9: ;
    eax = MEM32(esp + 0x30);
    MEM8(esi) = 0x2E;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = 0x42;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = 0x49;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi) = 0x4E;
    MEM8(esi + 1) = 0;
    esi = edi + 2;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004F233; /* je: equal / zero */

loc_0004F208: ;
    PUSH32(esp, 0x0004F20Du); RECOMP_ABI_CALL(0x0004E210u, sub_0004E210); /* call 0x0004E210 */

loc_0004F20D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004F218u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F218: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0004F22Bu); RECOMP_ABI_CALL(0x00027A70u, sub_00027A70); /* call 0x00027A70 */

loc_0004F22B: ;
    edx = esi;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    goto loc_0004F25C;

loc_0004F233: ;
    PUSH32(esp, 0x0004F238u); RECOMP_ABI_CALL(0x0004E210u, sub_0004E210); /* call 0x0004E210 */

loc_0004F238: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004F243u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F243: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0004F256u); RECOMP_ABI_CALL(0x00027AD0u, sub_00027AD0); /* call 0x00027AD0 */

loc_0004F256: ;
    ecx = esi;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);

loc_0004F25C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004F262u); RECOMP_ABI_CALL(0x0004E2B0u, sub_0004E2B0); /* call 0x0004E2B0 */

loc_0004F262: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0004F266: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    PUSH32(esp, 0x0004F270u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_0004F270: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004F280
 * Original: 0x0004F280 - 0x0004F2AE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004F280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004F280: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    edx = MEM32(esp + 0xC);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004F2B0
 * Original: 0x0004F2B0 - 0x0004F566 (694 bytes, 199 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F2B0_gen(void)
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

loc_0004F2B0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5C);
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0004F2D7; /* jl: less (signed <) */

loc_0004F2CE: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004F2D7: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + eax * 4 + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F2EA; /* jne: not equal / not zero */

loc_0004F2E0: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004F2EA: ;
    _fa = (uint32_t)(MEM32(esp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x6C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F306; /* je: equal / zero */

loc_0004F2F0: ;
    fp_push((double)SMEM32(esp + 0x6C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x22C8D4)); /* fadd dword ptr [0x22c8d4] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x70)); /* fimul dword ptr [esp + 0x70] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C220)); /* fmul dword ptr [0x22c220] */
    goto loc_0004F30A;

loc_0004F306: ;
    fp_push((double)SMEM32(esp + 0x70)); /* fild */

loc_0004F30A: ;
    eax = ebx + ebp + 4;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F318u); RECOMP_ABI_CALL(0x0004E2F0u, sub_0004E2F0); /* call 0x0004E2F0 */

loc_0004F318: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004F55F; /* je: equal / zero */

loc_0004F328: ;
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    PUSH32(esp, edi);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x40D850);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004F33Du); RECOMP_ABI_CALL(0x001ADACBu, sub_001ADACB); /* call 0x001ADACB */

loc_0004F33D: ;
    edx = MEM32(ebx + ebp);
    ecx = MEM32(esi + 0x40D850);
    PUSH32(esp, edx);
    eax = ebx + ebp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004F352u); RECOMP_ABI_CALL(0x001ADACBu, sub_001ADACB); /* call 0x001ADACB */

loc_0004F352: ;
    ecx = ZX16(MEM16(ebx + ebp + 0x16));
    eax = MEM32(0x34CE24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ZX16(MEM16(ebx + ebp + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40D850);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F375u); RECOMP_ABI_CALL(0x001AB3DBu, sub_001AB3DB); /* call 0x001AB3DB */

loc_0004F375: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004F37Fu); RECOMP_ABI_CALL(0x0004EE80u, sub_0004EE80); /* call 0x0004EE80 */

loc_0004F37F: ;
    edx = MEM32(esi + 0x40D850);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esi + 0x40D8A0) = eax;
    PUSH32(esp, 0x0004F395u); RECOMP_ABI_CALL(0x001AB1F7u, sub_001AB1F7); /* call 0x001AB1F7 */

loc_0004F395: ;
    _fa = (uint32_t)(MEM32(esp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x78), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F413; /* je: equal / zero */

loc_0004F39B: ;
    eax = MEM32(0x556780);
    ecx = MEM32(esi + 0x40D850);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004F3AFu); RECOMP_ABI_CALL(0x001AD1C4u, sub_001AD1C4); /* call 0x001AD1C4 */

loc_0004F3AF: ;
    eax = 6;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x2DF88C);
    edx = esp + 0x34;
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = 8;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = 7;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x4C) = 9;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = 0xA;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = 3;
    MEM32(esp + 0x60) = eax;
    goto loc_0004F43F;

loc_0004F413: ;
    eax = 2;
    _fa = (uint32_t)(MEM16(ebx + ebp + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + ebp + 6), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F450; /* jne: not equal / not zero */

loc_0004F41F: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x24;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x30) = edi;

loc_0004F43F: ;
    edx = MEM32(esi + 0x40D850);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004F450u); RECOMP_ABI_CALL(0x001AD0EBu, sub_001AD0EB); /* call 0x001AD0EB */

loc_0004F450: ;
    ecx = MEM32(ebx + ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = ebx + ebp + 0x18;
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004F506; /* je: equal / zero */

loc_0004F464: ;
    edx = ZX16(MEM16(ebx + ebp + 0x10));
    ecx = ZX16(MEM16(ebx + ebp + 0x16));
    eax = MEM32(eax);
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebp = ebx + ebp + 0x1C;
    ebx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    eax = MEM32(ebp);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x68));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x68));
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2325A8);
    PUSH32(esp, 0x0004F4ACu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004F4AC: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x3F (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F4C3; /* jne: not equal / not zero */

loc_0004F4B9: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x3F (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F4D0; /* je: equal / zero */

loc_0004F4C3: ;
    PUSH32(esp, 0x232588);
    PUSH32(esp, 0x0004F4CDu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004F4CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F4D0: ;
    eax = MEM32(esi + 0x40D850);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F4DEu); RECOMP_ABI_CALL(0x001AB37Fu, sub_001AB37F); /* call 0x001AB37F */

loc_0004F4DE: ;
    ecx = MEM32(esi + 0x40D850);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004F4F0u); RECOMP_ABI_CALL(0x001AB2BBu, sub_001AB2BB); /* call 0x001AB2BB */

loc_0004F4F0: ;
    MEM32(esi + 0x40D8AC) = 0;
    MEM32(esi + 0x40D8A4) = 1;
    goto loc_0004F528;

loc_0004F506: ;
    ebx = MEM32(esp + 0x80);
    edx = MEM32(esi + 0x40D850);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004F51Cu); RECOMP_ABI_CALL(0x001AB2BBu, sub_001AB2BB); /* call 0x001AB2BB */

loc_0004F51C: ;
    MEM32(esi + 0x40D8AC) = edi;
    MEM32(esi + 0x40D8A4) = ebx;

loc_0004F528: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x6C);
    MEM32(esi + 0x40D86C) = eax;
    MEM32(esi + 0x40D868) = ecx;
    MEM32(esi + 0x40D894) = edx;
    PUSH32(esp, 0x0004F54Bu); RECOMP_ABI_CALL(0x0004DA60u, sub_0004DA60); /* call 0x0004DA60 */

loc_0004F54B: ;
    PUSH32(esp, 0x0004F550u); RECOMP_ABI_CALL(0x0004DA70u, sub_0004DA70); /* call 0x0004DA70 */

loc_0004F550: ;
    eax = MEM32(esp + 0x7C);
    MEM32(esi + 0x40D89C) = eax;
    eax = MEM32(esp + 0x20);
    POP32(esp, esi);

loc_0004F55F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004F570
 * Original: 0x0004F570 - 0x0004F5E4 (116 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0004F58E; /* je: equal / zero */

loc_0004F584: ;
    PUSH32(esp, 0x0004F589u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F589: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004F58E: ;
    PUSH32(esp, 0x0004F593u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F593: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F5A3; /* jne: not equal / not zero */

loc_0004F59B: ;
    MEM32(0x5C27C4) = esi;
    goto loc_0004F5A8;

loc_0004F5A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F5E2; /* je: equal / zero */

loc_0004F5A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004F5BE; /* jl: less (signed <) */

loc_0004F5B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3000 (32-bit) */
    ecx = MEM32(0x2DF884);
    if (CMP_L(_fas, _fbs)) goto loc_0004F5C4; /* jl: less (signed <) */

loc_0004F5BE: ;
    ecx = MEM32(0x2DF880);

loc_0004F5C4: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F5D6u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F5D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F5DFu); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F5DF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F5E2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F5F0
 * Original: 0x0004F5F0 - 0x0004F641 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F5F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0004F60E; /* je: equal / zero */

loc_0004F604: ;
    PUSH32(esp, 0x0004F609u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F609: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004F60E: ;
    PUSH32(esp, 0x0004F613u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F613: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F63F; /* je: equal / zero */

loc_0004F61B: ;
    ecx = MEM32(0x2DF884);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F633u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F633: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F63Cu); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F63C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F63F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F650
 * Original: 0x0004F650 - 0x0004F6B7 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F650: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0004F66E; /* je: equal / zero */

loc_0004F664: ;
    PUSH32(esp, 0x0004F669u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F669: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004F66E: ;
    PUSH32(esp, 0x0004F673u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F673: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F6B5; /* je: equal / zero */

loc_0004F67B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004F691; /* jl: less (signed <) */

loc_0004F683: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3000 (32-bit) */
    ecx = MEM32(0x2DF884);
    if (CMP_L(_fas, _fbs)) goto loc_0004F697; /* jl: less (signed <) */

loc_0004F691: ;
    ecx = MEM32(0x2DF880);

loc_0004F697: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F6A9u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F6A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F6B2u); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F6B2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F6B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F6C0
 * Original: 0x0004F6C0 - 0x0004F73A (122 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0004F6DE; /* je: equal / zero */

loc_0004F6D4: ;
    PUSH32(esp, 0x0004F6D9u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F6D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004F6DE: ;
    PUSH32(esp, 0x0004F6E3u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F6E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F738; /* je: equal / zero */

loc_0004F6EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004F711; /* jl: less (signed <) */

loc_0004F6F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004F711; /* jge: greater or equal (signed >=) */

loc_0004F6FB: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0x2DF884);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    goto loc_0004F725;

loc_0004F711: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x2DF880);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0004F725: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F72Cu); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F72C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F735u); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F735: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F738: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F740
 * Original: 0x0004F740 - 0x0004F794 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F740: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0004F75E; /* je: equal / zero */

loc_0004F754: ;
    PUSH32(esp, 0x0004F759u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F759: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004F75E: ;
    PUSH32(esp, 0x0004F763u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F763: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F792; /* je: equal / zero */

loc_0004F76B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0x2DF884);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F786u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F78Fu); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F78F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004F792: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F7A0
 * Original: 0x0004F7A0 - 0x0004F861 (193 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F7A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x8000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F7BE; /* je: equal / zero */

loc_0004F7B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004F7B9u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F7B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004F7BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004F7C5u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F7C5: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F834; /* je: equal / zero */

loc_0004F7CF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004F837; /* jl: less (signed <) */

loc_0004F7D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004F837; /* jge: greater or equal (signed >=) */

loc_0004F7DF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004F7EAu); RECOMP_ABI_CALL(0x0004E4C0u, sub_0004E4C0); /* call 0x0004E4C0 */

loc_0004F7EA: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x2DF884);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004F808u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F808: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F811u); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F811: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F833; /* je: equal / zero */

loc_0004F819: ;
    MEM32(ebx * 8 + 0x5C27A0) = eax;
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx * 8 + 0x5C27A4) = edi;
    MEM32(eax + 0x40D898) = ebx;

loc_0004F833: ;
    POP32(esp, ebx);

loc_0004F834: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004F837: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x2DF880);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004F852u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F852: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F85Bu); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F85B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F870
 * Original: 0x0004F870 - 0x0004F8F3 (131 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004F870: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0004F88A; /* jns: not sign (positive) */

loc_0004F87F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004F885u); RECOMP_ABI_CALL(0x0004FF00u, sub_0004FF00); /* call 0x0004FF00 */

loc_0004F885: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0004F88A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004F891u); RECOMP_ABI_CALL(0x0004DAA0u, sub_0004DAA0); /* call 0x0004DAA0 */

loc_0004F891: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F8F0; /* je: equal / zero */

loc_0004F89B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004F8A6u); RECOMP_ABI_CALL(0x0004E4C0u, sub_0004E4C0); /* call 0x0004E4C0 */

loc_0004F8A6: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x2DF884);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004F8C4u); RECOMP_ABI_CALL(0x0004DA90u, sub_0004DA90); /* call 0x0004DA90 */

loc_0004F8C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F8CDu); RECOMP_ABI_CALL(0x0004F2B0u, sub_0004F2B0); /* call 0x0004F2B0 */

loc_0004F8CD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F8EF; /* je: equal / zero */

loc_0004F8D5: ;
    MEM32(edi * 8 + 0x5C27A0) = eax;
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi * 8 + 0x5C27A4) = ebx;
    MEM32(eax + 0x40D898) = edi;

loc_0004F8EF: ;
    POP32(esp, edi);

loc_0004F8F0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004F900
 * Original: 0x0004F900 - 0x0004FA50 (336 bytes, 118 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F900(void)
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

loc_0004F900: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x30C400;
    PUSH32(esp, 0x0004F90Eu); RECOMP_ABI_CALL(0x0006AC00u, sub_0006AC00); /* call 0x0006AC00 */

loc_0004F90E: ;
    esi = 0x40D874;
    ebx = 1;
    goto loc_0004F920;

    /* nop */

loc_0004F920: ;
    eax = MEM32(esi + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004F9F4; /* je: equal / zero */

loc_0004F92B: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F935u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_0004F935: ;
    eax = MEM32(edi);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F9F4; /* jne: not equal / not zero */

loc_0004F941: ;
    _fa = (uint32_t)(MEM32(esi + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -12), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F9E7; /* jne: not equal / not zero */

loc_0004F94A: ;
    _fa = (uint32_t)(MEM16(esi + -30)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -30), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004F9E7; /* jne: not equal / not zero */

loc_0004F954: ;
    ecx = MEM32(esi + -8);
    eax = MEM32(ecx);
    ebp = esi + 0xC;
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + -4)); /* fsub dword ptr [esi - 4] */
    edi = esi + -4;
    ecx = ebp;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004F99Du); RECOMP_ABI_CALL(0x0006B0B0u, sub_0006B0B0); /* call 0x0006B0B0 */

loc_0004F99D: ;
    ecx = edi;
    PUSH32(esp, 0x0004F9A4u); RECOMP_ABI_CALL(0x0006B0F0u, sub_0006B0F0); /* call 0x0006B0F0 */

loc_0004F9A4: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esi + -36);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004F9BAu); RECOMP_ABI_CALL(0x001AD208u, sub_001AD208); /* call 0x001AD208 */

loc_0004F9BA: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + -36);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004F9CEu); RECOMP_ABI_CALL(0x001AD23Du, sub_001AD23D); /* call 0x001AD23D */

loc_0004F9CE: ;
    ecx = MEM32(esi + -8);
    edx = MEM32(ecx);
    MEM32(edi) = edx;
    eax = MEM32(ecx + 4);
    MEM32(edi + 4) = eax;
    edx = MEM32(ecx + 8);
    MEM32(edi + 8) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(edi + 0xC) = eax;

loc_0004F9E7: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + -36);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004F9F4u); RECOMP_ABI_CALL(0x001AB1F7u, sub_001AB1F7); /* call 0x001AB1F7 */

loc_0004F9F4: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40E774) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40E774 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004F920; /* jl: less (signed <) */

loc_0004FA03: ;
    ecx = ebx;
    PUSH32(esp, 0x0004FA0Au); RECOMP_ABI_CALL(0x0006AC70u, sub_0006AC70); /* call 0x0006AC70 */

loc_0004FA0A: ;
    eax = MEM32(0x34CE20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FA1Cu); RECOMP_ABI_CALL(0x001AE6A3u, sub_001AE6A3); /* call 0x001AE6A3 */

loc_0004FA1C: ;
    ecx = MEM32(0x34CE20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004FA2Fu); RECOMP_ABI_CALL(0x001AE6FCu, sub_001AE6FC); /* call 0x001AE6FC */

loc_0004FA2F: ;
    edx = MEM32(0x34CE20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004FA3Bu); RECOMP_ABI_CALL(0x001ADFCCu, sub_001ADFCC); /* call 0x001ADFCC */

loc_0004FA3B: ;
    eax = MEM32(0x34CE20);
    PUSH32(esp, 0x40D848);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FA4Bu); RECOMP_ABI_CALL(0x001AB135u, sub_001AB135); /* call 0x001AB135 */

loc_0004FA4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004FA50
 * Original: 0x0004FA50 - 0x0004FA6A (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FA50(void)
{

loc_0004FA50: ;
    PUSH32(esp, 0x0004FA55u); RECOMP_ABI_CALL(0x0004F900u, sub_0004F900); /* call 0x0004F900 */

loc_0004FA55: ;
    PUSH32(esp, 0x0004FA5Au); RECOMP_ABI_CALL(0x0004DCA0u, sub_0004DCA0); /* call 0x0004DCA0 */

loc_0004FA5A: ;
    PUSH32(esp, 0x0004FA5Fu); RECOMP_ABI_CALL(0x000501D0u, sub_000501D0); /* call 0x000501D0 */

loc_0004FA5F: ;
    MEM32(0x5C27C4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FA70
 * Original: 0x0004FA70 - 0x0004FB6C (252 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004FA70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x310) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x310 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004FA82; /* jle: less or equal (signed <=) */

loc_0004FA7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FAB9; /* jne: not equal / not zero */

loc_0004FA82: ;
    ecx = MEM32(esp + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0004FAB9; /* ja: above (unsigned >) */

loc_0004FA8C: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x4FAD4); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0004FA93u) goto loc_0004FA93;
    if (_jt == 0x0004FAA4u) goto loc_0004FAA4;
    if (_jt == 0x0004FABAu) goto loc_0004FABA;
    if (_jt == 0x0004FAC6u) goto loc_0004FAC6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004FA93: ;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0004F570(); return; /* tail jmp 0x0004F570 */

loc_0004FAA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FAB0; /* jne: not equal / not zero */

loc_0004FAAB: ;
    g_seh_ebp = ebp; sub_0004E7A0(); return; /* tail jmp 0x0004E7A0 */

loc_0004FAB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FAB6u); RECOMP_ABI_CALL(0x0004E740u, sub_0004E740); /* call 0x0004E740 */

loc_0004FAB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004FAB9: ;
    esp += 4; return; /* ret */

loc_0004FABA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FAB9; /* jne: not equal / not zero */

loc_0004FAC1: ;
    g_seh_ebp = ebp; sub_0004E810(); return; /* tail jmp 0x0004E810 */

loc_0004FAC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FAB9; /* jne: not equal / not zero */

loc_0004FACD: ;
    g_seh_ebp = ebp; sub_0004E880(); return; /* tail jmp 0x0004E880 */

    edi = edi;
    { uint32_t _tmp = ebx;
    ebx = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("cli", 0x0004FAD5u); /* TODO: cli */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    RECOMP_UNIMPL("cli", 0x0004FAD9u); /* TODO: cli */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = 0xC60004FAu;
    RECOMP_UNIMPL("cli", 0x0004FAE1u); /* TODO: cli */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    RECOMP_UNIMPL("cli", 0x0004FAE5u); /* TODO: cli */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    RECOMP_UNIMPL("cli", 0x0004FAE9u); /* TODO: cli */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    edx = 1;
    MEM32(0x5C2838) = ecx;
    MEM32(0x5C2840) = ecx;
    ecx = 0xFFFFFC7Cu;
    MEM32(0x5C2800) = 4;
    MEM32(0x5C2804) = 0x5C2828;
    MEM32(0x5C2828) = eax;
    MEM32(0x5C2830) = edx;
    MEM32(0x5C282C) = eax;
    MEM32(0x5C2834) = eax;
    MEM32(0x5C283C) = ecx;
    MEM32(0x5C2844) = ecx;
    MEM32(0x5C27E0) = 2;
    MEM32(0x5C27E4) = 0x5C2870;
    MEM32(0x5C2870) = eax;
    MEM32(0x5C2878) = edx;
    MEM32(0x5C2874) = eax;
    MEM32(0x5C287C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FAF0
 * Original: 0x0004FAF0 - 0x0004FB6C (124 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004FAF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    edx = 1;
    MEM32(0x5C2838) = ecx;
    MEM32(0x5C2840) = ecx;
    ecx = 0xFFFFFC7Cu;
    MEM32(0x5C2800) = 4;
    MEM32(0x5C2804) = 0x5C2828;
    MEM32(0x5C2828) = eax;
    MEM32(0x5C2830) = edx;
    MEM32(0x5C282C) = eax;
    MEM32(0x5C2834) = eax;
    MEM32(0x5C283C) = ecx;
    MEM32(0x5C2844) = ecx;
    MEM32(0x5C27E0) = 2;
    MEM32(0x5C27E4) = 0x5C2870;
    MEM32(0x5C2870) = eax;
    MEM32(0x5C2878) = edx;
    MEM32(0x5C2874) = eax;
    MEM32(0x5C287C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FB70
 * Original: 0x0004FB70 - 0x0004FB71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FB70(void)
{

loc_0004FB70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FB80
 * Original: 0x0004FB80 - 0x0004FB81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FB80(void)
{

loc_0004FB80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FB90
 * Original: 0x0004FB90 - 0x0004FB91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FB90(void)
{

loc_0004FB90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FBA0
 * Original: 0x0004FBA0 - 0x0004FBA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FBA0(void)
{

loc_0004FBA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FBB0
 * Original: 0x0004FBB0 - 0x0004FBD3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004FBB0: ;
    eax = MEM32(0x5C2818);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FBC1u); RECOMP_ABI_CALL(0x00106F60u, sub_00106F60); /* call 0x00106F60 */

loc_0004FBC1: ;
    ecx = MEM32(0x6D90C8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004FBCEu); RECOMP_ABI_CALL(0x00106F60u, sub_00106F60); /* call 0x00106F60 */

loc_0004FBCE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004FBE0
 * Original: 0x0004FBE0 - 0x0004FC03 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004FBE0: ;
    eax = MEM32(0x5C2818);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FBF1u); RECOMP_ABI_CALL(0x00106F80u, sub_00106F80); /* call 0x00106F80 */

loc_0004FBF1: ;
    ecx = MEM32(0x6D90C8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004FBFEu); RECOMP_ABI_CALL(0x00106F80u, sub_00106F80); /* call 0x00106F80 */

loc_0004FBFE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004FC10
 * Original: 0x0004FC10 - 0x0004FC11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FC10(void)
{

loc_0004FC10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FC20
 * Original: 0x0004FC20 - 0x0004FC21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FC20(void)
{

loc_0004FC20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FC30
 * Original: 0x0004FC30 - 0x0004FD44 (276 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FC30_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004FC30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004FC36u); RECOMP_ABI_CALL(0x0004C9D0u, sub_0004C9D0); /* call 0x0004C9D0 */

loc_0004FC36: ;
    PUSH32(esp, 0x5C28C0);
    MEM32(0x5C28C0) = 0x235930;
    PUSH32(esp, 0x0004FC4Au); RECOMP_ABI_CALL(0x00108800u, sub_00108800); /* call 0x00108800 */

loc_0004FC4A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x235930);
    PUSH32(esp, 0x0004FC5Au); RECOMP_ABI_CALL(0x00106E30u, sub_00106E30); /* call 0x00106E30 */

loc_0004FC5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x23592C);
    MEM32(0x5C2818) = eax;
    PUSH32(esp, 0x0004FC6Du); RECOMP_ABI_CALL(0x00106E30u, sub_00106E30); /* call 0x00106E30 */

loc_0004FC6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x235928);
    MEM32(0x6D90C8) = eax;
    PUSH32(esp, 0x0004FC80u); RECOMP_ABI_CALL(0x00106E30u, sub_00106E30); /* call 0x00106E30 */

loc_0004FC80: ;
    MEM32(0x5C28B4) = eax;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FC8Fu); RECOMP_ABI_CALL(0x00108890u, sub_00108890); /* call 0x00108890 */

loc_0004FC8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004FC95u); RECOMP_ABI_CALL(0x00108BE0u, sub_00108BE0); /* call 0x00108BE0 */

loc_0004FC95: ;
    PUSH32(esp, 0x235914);
    PUSH32(esp, 0x0004FC9Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FC9F: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0004FCA7u); RECOMP_ABI_CALL(0x00108AA0u, sub_00108AA0); /* call 0x00108AA0 */

loc_0004FCA7: ;
    PUSH32(esp, 0x0004FCACu); RECOMP_ABI_CALL(0x001088B0u, sub_001088B0); /* call 0x001088B0 */

loc_0004FCAC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4FB70);
    PUSH32(esp, 0x0004FCB7u); RECOMP_ABI_CALL(0x00107EF0u, sub_00107EF0); /* call 0x00107EF0 */

loc_0004FCB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5C28C8) = esi;
    MEM32(0x6082C0) = esi;
    MEM32(0x6082C4) = esi;
    MEM32(0x5C28CC) = esi;
    MEM32(0x5C28D0) = esi;
    MEM32(0x6082C8) = esi;
    MEM32(0x64DCC0) = esi;
    MEM32(0x64DCC4) = esi;
    MEM32(0x6082CC) = esi;
    MEM32(0x6082D0) = esi;
    MEM32(0x64DCC8) = esi;
    MEM32(0x6936C0) = esi;
    MEM32(0x6936C4) = esi;
    MEM32(0x64DCCC) = esi;
    MEM32(0x64DCD0) = esi;
    MEM32(0x6936C8) = esi;
    MEM32(0x6D90C0) = esi;
    MEM32(0x6D90C4) = esi;
    MEM32(0x6936CC) = esi;
    MEM32(0x6936D0) = esi;
    MEM32(0x5C27E8) = esi;
    MEM32(0x6E90E0) = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0004FAF0(); return; /* tail jmp 0x0004FAF0 */

}

/**
 * sub_0004FD50
 * Original: 0x0004FD50 - 0x0004FEF2 (418 bytes, 115 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004FD50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004FD57u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0004FD57: ;
    esi = MEM32(esp + 0xC);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF (32-bit) */
    MEM32(0x5C2820) = eax;
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0004FD83; /* jne: not equal / not zero */

loc_0004FD72: ;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x2359A0;
    g_seh_ebp = ebp; sub_000695B0(); return; /* tail jmp 0x000695B0 */

loc_0004FD83: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x235988);
    PUSH32(esp, 0x0004FD8Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FD8F: ;
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi * 4 + 0x2E0600);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0004FEEE; /* je: equal / zero */

loc_0004FDAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x36F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0004FEEE; /* ja: above (unsigned >) */

loc_0004FDB9: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5C28C8;

loc_0004FDC1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004FDD8; /* je: equal / zero */

loc_0004FDC6: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x45A00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004FDC1; /* jl: less (signed <) */

loc_0004FDD3: ;
    goto loc_0004FECB;

loc_0004FDD8: ;
    PUSH32(esp, ebx);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x45A00);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA01214) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA01214 (32-bit) */
    PUSH32(esp, 0x459E4);
    if (CMP_LE(_fas, _fbs)) goto loc_0004FDF9; /* jle: less or equal (signed <=) */

loc_0004FDEE: ;
    eax = ebx + 0x5C28DC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_0004FE02;

loc_0004FDF9: ;
    ecx = ebx + 0x5C28DC;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);

loc_0004FE02: ;
    PUSH32(esp, 0x0004FE07u); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_0004FE07: ;
    edx = MEM32(0x5C28B0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebx + 0x5C28C8) = eax;
    PUSH32(esp, 0x0004FE1Du); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_0004FE1D: ;
    ecx = MEM32(0x235978);
    edx = MEM32(0x23597C);
    eax = MEM32(0x235980);
    MEM32(0x6E90F8) = ecx;
    SET_LO16(ecx, MEM16(0x235984));
    MEM32(0x6E90FC) = edx;
    SET_LO8(edx, MEM8(0x235986));
    MEM32(0x6E9100) = eax;
    eax = MEM32(edi * 4 + 0x2E0600);
    MEM32(ebx + 0x6082C0) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x5C28D0) = 0;
    MEM16(0x6E9104) = LO16(ecx);
    MEM8(0x6E9106) = LO8(edx);
    esi = eax;

loc_0004FE75: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FE75; /* jne: not equal / not zero */

loc_0004FE7C: ;
    edi = 0x6E90F8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0004FE84: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FE84; /* jne: not equal / not zero */

loc_0004FE8C: ;
    ecx = eax;
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
    eax = MEM32(ebx + 0x5C28C8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x6E90F8);
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0004FEABu); RECOMP_ABI_CALL(0x00108CD0u, sub_00108CD0); /* call 0x00108CD0 */

loc_0004FEAB: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx * 4 + 0x2E0600);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x23595C);
    PUSH32(esp, 0x0004FEC7u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FEC7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0004FECB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0004FEDE; /* jne: not equal / not zero */

loc_0004FED1: ;
    PUSH32(esp, 0x23593C);
    PUSH32(esp, 0x0004FEDBu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FEDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004FEDE: ;
    PUSH32(esp, 0x0004FEE3u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0004FEE3: ;
    _fb = (uint32_t)(MEM32(0x5C2820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5C2820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5C2820) = eax;

loc_0004FEEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004FF00
 * Original: 0x0004FF00 - 0x0004FFFA (250 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004FF00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004FF06u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0004FF06: ;
    ebx = MEM32(esp + 8);
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFF (32-bit) */
    MEM32(0x5C2820) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0004FF2B; /* jne: not equal / not zero */

loc_0004FF1D: ;
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x2359A0;
    g_seh_ebp = ebp; sub_000695B0(); return; /* tail jmp 0x000695B0 */

loc_0004FF2B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x235A0C);
    PUSH32(esp, 0x0004FF37u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FF37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5C28D8;

loc_0004FF41: ;
    _fa = (uint32_t)(MEM32(eax + 0x459E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x459E8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FF58; /* jne: not equal / not zero */

loc_0004FF49: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FF58; /* jne: not equal / not zero */

loc_0004FF4E: ;
    ecx = MEM32(eax + 0x459EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FF90; /* jne: not equal / not zero */

loc_0004FF58: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x45A00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D90D8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004FF41; /* jl: less (signed <) */

loc_0004FF65: ;
    PUSH32(esp, 0x0004FF6Au); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0004FF6A: ;
    _fb = (uint32_t)(MEM32(0x5C2820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5C2820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(0x5C2820) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0004FFE9; /* jne: not equal / not zero */

loc_0004FF7A: ;
    PUSH32(esp, 0x2359F8);
    PUSH32(esp, 0x0004FF84u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FF84: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004FF8Au); RECOMP_ABI_CALL(0x0004FD50u, sub_0004FD50); /* call 0x0004FD50 */

loc_0004FF8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0004FF90: ;
    PUSH32(esp, esi);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45A00);
    eax = MEM32(esi + 0x5C28C8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004FFA7u); RECOMP_ABI_CALL(0x001079C0u, sub_001079C0); /* call 0x001079C0 */

loc_0004FFA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004FFEC; /* jne: not equal / not zero */

loc_0004FFB1: ;
    ecx = MEM32(esi + 0x5C28C8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004FFBFu); RECOMP_ABI_CALL(0x00107C50u, sub_00107C50); /* call 0x00107C50 */

loc_0004FFBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2359D4);
    MEM32(esi + 0x5C28D8) = 0;
    PUSH32(esp, 0x0004FFD5u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0004FFD5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0004FFDDu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_0004FFDD: ;
    _fb = (uint32_t)(MEM32(0x5C2820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5C2820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5C2820) = eax;
    POP32(esp, esi);

loc_0004FFE9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0004FFEC: ;
    MEM32(esi + 0x5C28D8) = 2;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00050000
 * Original: 0x00050000 - 0x00050001 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050000: ;
    PUSH32(esp, ecx);

    g_seh_ebp = ebp; sub_00050001(); return; /* fallthrough 0x00050001 */

}

/**
 * sub_00050001
 * Original: 0x00050001 - 0x00050002 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050001: ;
    PUSH32(esp, esi);

    g_seh_ebp = ebp; sub_00050002(); return; /* fallthrough 0x00050002 */

}

/**
 * sub_00050002
 * Original: 0x00050002 - 0x00050007 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050002(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050002: ;
    PUSH32(esp, 0x00050007u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

    g_seh_ebp = ebp; sub_00050007(); return; /* fallthrough 0x00050007 */

}

/**
 * sub_00050007
 * Original: 0x00050007 - 0x00050023 (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050007: ;
    esi = MEM32(esp + 0xC);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF (32-bit) */
    MEM32(0x5C2820) = eax;
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00050033(); return; } /* jne: not equal / not zero */

loc_00050022: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_00050023(); return; /* fallthrough 0x00050023 */

}

/**
 * sub_00050023
 * Original: 0x00050023 - 0x00050033 (16 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050023: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x2359A0;
    g_seh_ebp = ebp; sub_000695B0(); return; /* tail jmp 0x000695B0 */

}

/**
 * sub_00050033
 * Original: 0x00050033 - 0x000501D0 (413 bytes, 119 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050033_gen(void)   /* audio-trace: shadowed by audio.c (snd control) */
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050033: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x235A38);
    PUSH32(esp, 0x0005003Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0005003F: ;
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi * 4 + 0x2E0600);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000501C5; /* je: equal / zero */

loc_0005005D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x36F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000501C5; /* ja: above (unsigned >) */

loc_00050069: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5C28C8;

loc_00050071: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050088; /* je: equal / zero */

loc_00050076: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x45A00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050071; /* jl: less (signed <) */

loc_00050083: ;
    goto loc_000501B4;

loc_00050088: ;
    PUSH32(esp, ebx);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x45A00);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA01214) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA01214 (32-bit) */
    PUSH32(esp, 0x459E4);
    if (CMP_LE(_fas, _fbs)) goto loc_000500A9; /* jle: less or equal (signed <=) */

loc_0005009E: ;
    eax = ebx + 0x5C28DC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_000500B2;

loc_000500A9: ;
    ecx = ebx + 0x5C28DC;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);

loc_000500B2: ;
    PUSH32(esp, 0x000500B7u); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_000500B7: ;
    edx = MEM32(0x5C28B0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebx + 0x5C28C8) = eax;
    PUSH32(esp, 0x000500CDu); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_000500CD: ;
    ecx = MEM32(ebx + 0x5C28C8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(ebx + 0x6082C0) = esi;
    MEM32(ebx + 0x5C28D0) = 0;
    MEM32(ebx + 0x5C28D8) = 1;
    PUSH32(esp, 0x000500F5u); RECOMP_ABI_CALL(0x00107C50u, sub_00107C50); /* call 0x00107C50 */

loc_000500F5: ;
    eax = MEM32(0x23597C);
    edx = MEM32(0x235978);
    ecx = MEM32(0x235980);
    MEM32(0x6E90FC) = eax;
    SET_LO8(eax, MEM8(0x235986));
    MEM32(0x6E90F8) = edx;
    SET_LO16(edx, MEM16(0x235984));
    MEM8(0x6E9106) = LO8(eax);
    eax = MEM32(edi * 4 + 0x2E0600);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6E9100) = ecx;
    MEM16(0x6E9104) = LO16(edx);
    esi = eax;
    goto loc_00050140;

    /* nop */

loc_00050140: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050140; /* jne: not equal / not zero */

loc_00050147: ;
    edi = 0x6E90F8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00050150: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050150; /* jne: not equal / not zero */

loc_00050158: ;
    ecx = eax;
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
    ecx = MEM32(ebx + 0x5C28C8);
    PUSH32(esp, 0x6E90F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050177u); RECOMP_ABI_CALL(0x00108CD0u, sub_00108CD0); /* call 0x00108CD0 */

loc_00050177: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax * 4 + 0x2E0600);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x23595C);
    PUSH32(esp, 0x00050193u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00050193: ;
    edx = MEM32(ebx + 0x5C28C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005019Fu); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_0005019F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x235A20);
    MEM32(ebx + 0x6082C4) = eax;
    PUSH32(esp, 0x000501B0u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000501B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_000501B4: ;
    PUSH32(esp, 0x000501B9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000501B9: ;
    _fb = (uint32_t)(MEM32(0x5C2820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5C2820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5C2820) = eax;
    POP32(esp, ebp);

loc_000501C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005012C
 * Original: 0x0005012C - 0x000501D0 (164 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005012C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005012C: ;
    MEM32(0x6E9100) = ecx;
    MEM16(0x6E9104) = LO16(edx);
    esi = eax;
    goto loc_00050140;

    /* nop */

loc_00050140: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050140; /* jne: not equal / not zero */

loc_00050147: ;
    edi = 0x6E90F8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00050150: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050150; /* jne: not equal / not zero */

loc_00050158: ;
    ecx = eax;
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
    ecx = MEM32(ebx + 0x5C28C8);
    PUSH32(esp, 0x6E90F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050177u); RECOMP_ABI_CALL(0x00108CD0u, sub_00108CD0); /* call 0x00108CD0 */

loc_00050177: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax * 4 + 0x2E0600);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x23595C);
    PUSH32(esp, 0x00050193u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00050193: ;
    edx = MEM32(ebx + 0x5C28C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005019Fu); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_0005019F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x235A20);
    MEM32(ebx + 0x6082C4) = eax;
    PUSH32(esp, 0x000501B0u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000501B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000501B9u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000501B9: ;
    _fb = (uint32_t)(MEM32(0x5C2820)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5C2820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5C2820) = eax;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000501D0
 * Original: 0x000501D0 - 0x000501E5 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000501D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000501D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x5C28C8;

    g_seh_ebp = ebp; sub_000501E5(); return; /* fallthrough 0x000501E5 */

}

/**
 * sub_000501E5
 * Original: 0x000501E5 - 0x00050471 (652 bytes, 188 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000501E5_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */
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

loc_000501E5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050268; /* je: equal / zero */

loc_000501EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000501F1u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_000501F1: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x459FC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0005022E; /* jne: not equal / not zero */

loc_00050201: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050240; /* jne: not equal / not zero */

loc_00050206: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM32(esi + 0x459F8) = ebx;
    PUSH32(esp, 0x00050214u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00050214: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x235A5C);
    PUSH32(esp, 0x0005021Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0005021F: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050227u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00050227: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    goto loc_00050240;

loc_0005022E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050239; /* jne: not equal / not zero */

loc_00050233: ;
    MEM32(esp + 0x10) = edi;
    goto loc_00050240;

loc_00050239: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050240; /* jne: not equal / not zero */

loc_0005023E: ;
    ebp = edi;

loc_00050240: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050268; /* jne: not equal / not zero */

loc_00050246: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005024Fu); RECOMP_ABI_CALL(0x001079C0u, sub_001079C0); /* call 0x001079C0 */

loc_0005024F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050268; /* jne: not equal / not zero */

loc_00050259: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050262u); RECOMP_ABI_CALL(0x00107C50u, sub_00107C50); /* call 0x00107C50 */

loc_00050262: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;

loc_00050268: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000501E5; /* jl: less (signed <) */

loc_0005027B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000503FE; /* je: equal / zero */

loc_00050284: ;
    fp_push(MEMF(0x5C27FC)); /* fld float */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x45A00);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    fp_push(MEMF(0x5C27FC)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005037F; /* jp: parity */

loc_000502A7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C28D4)); /* fadd dword ptr [ebp + 0x5c28d4] */
    MEMF(ebp + 0x5C28D4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000503B4; /* jp: parity */

loc_000502C6: ;
    ecx = MEM32(ebp + 0x5C28C8);
    PUSH32(esp, 0x5C2800);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x5C28D4) = ebx;
    PUSH32(esp, 0x000502DDu); RECOMP_ABI_CALL(0x00108FB0u, sub_00108FB0); /* call 0x00108FB0 */

loc_000502DD: ;
    eax = MEM32(0x23597C);
    ecx = MEM32(0x235980);
    edx = MEM32(0x235978);
    MEM32(0x6E90FC) = eax;
    SET_LO8(eax, MEM8(0x235986));
    MEM32(0x6E9100) = ecx;
    ecx = MEM32(ebp + 0x6082C0);
    MEM32(0x6E90F8) = edx;
    SET_LO16(edx, MEM16(0x235984));
    MEM8(0x6E9106) = LO8(eax);
    eax = MEM32(ecx * 4 + 0x2E02F8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x6E9104) = LO16(edx);
    ecx = eax;
    /* nop */

loc_00050330: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050330; /* jne: not equal / not zero */

loc_00050337: ;
    edi = 0x6E90F8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00050341: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050341; /* jne: not equal / not zero */

loc_00050349: ;
    edx = MEM32(ebp + 0x5C28C8);
    ecx = eax;
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
    PUSH32(esp, 0x6E90F8);
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x00050368u); RECOMP_ABI_CALL(0x00108CD0u, sub_00108CD0); /* call 0x00108CD0 */

loc_00050368: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x5C27FC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x235A58)); /* fmul dword ptr [0x235a58] */
    MEMF(0x5C27FC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000503B4;

loc_0005037F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C28D4)); /* fadd dword ptr [ebp + 0x5c28d4] */
    MEMF(ebp + 0x5C28D4) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(0x5C2808)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000503B4; /* jne: not equal / not zero */

loc_000503A0: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp + 0x5C28D4) = eax;
    MEM32(ebp + 0x5C28D0) = 3;

loc_000503B4: ;
    _fa = (uint32_t)(MEM32(0x6E90E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E90E0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000503D6; /* je: equal / zero */

loc_000503BC: ;
    ecx = MEM32(ebp + 0x5C28D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000503C8u); RECOMP_ABI_CALL(0x0004EF00u, sub_0004EF00); /* call 0x0004EF00 */

loc_000503C8: ;
    edx = MEM32(ebp + 0x5C28C8);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0005045B;

loc_000503D6: ;
    eax = MEM32(ebp + 0x5C28D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000503E2u); RECOMP_ABI_CALL(0x0004EF00u, sub_0004EF00); /* call 0x0004EF00 */

loc_000503E2: ;
    ecx = MEM32(ebp + 0x5C28C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000503EFu); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_000503EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5C27E8) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000503FE: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050465; /* je: equal / zero */

loc_00050407: ;
    _fa = (uint32_t)(MEM32(0x5C27E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5C27E8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050465; /* je: equal / zero */

loc_0005040F: ;
    eax = MEM32(0x6E90E0);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45A00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050449; /* je: equal / zero */

loc_0005041E: ;
    edx = MEM32(esi + 0x5C28D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005042Au); RECOMP_ABI_CALL(0x0004EF00u, sub_0004EF00); /* call 0x0004EF00 */

loc_0005042A: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5C28C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005043Au); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_0005043A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5C27E8) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00050449: ;
    ecx = MEM32(esi + 0x5C28D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050455u); RECOMP_ABI_CALL(0x0004EF00u, sub_0004EF00); /* call 0x0004EF00 */

loc_00050455: ;
    edx = MEM32(esi + 0x5C28C8);

loc_0005045B: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00050462u); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_00050462: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00050465: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5C27E8) = ebx;
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
 * sub_00050480
 * Original: 0x00050480 - 0x000504E3 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050480(void)
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

loc_00050480: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005048Cu); RECOMP_ABI_CALL(0x0004E010u, sub_0004E010); /* call 0x0004E010 */

loc_0005048C: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = eax;
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    PUSH32(esp, 0x235A78);
    MEMF(0x6D90CC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x5C2810) = edi;
    PUSH32(esp, 0x000504ADu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000504AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x5C28C8;

loc_000504B5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000504D2; /* je: equal / zero */

loc_000504BB: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000504D2; /* jne: not equal / not zero */

loc_000504C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000504C8u); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_000504C8: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;

loc_000504D2: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000504B5; /* jl: less (signed <) */

loc_000504E0: ;
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
 * sub_000504F0
 * Original: 0x000504F0 - 0x0005054F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000504F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000504F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000504FCu); RECOMP_ABI_CALL(0x0004EF00u, sub_0004EF00); /* call 0x0004EF00 */

loc_000504FC: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x235A78);
    MEM32(0x5C2810) = edi;
    MEM32(0x6D90CC) = ecx;
    PUSH32(esp, 0x00050519u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00050519: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x5C28C8;

loc_00050521: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005053E; /* je: equal / zero */

loc_00050527: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005053E; /* jne: not equal / not zero */

loc_0005052D: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050534u); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_00050534: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edx;

loc_0005053E: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050521; /* jl: less (signed <) */

loc_0005054C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050550
 * Original: 0x00050550 - 0x00050564 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050550(void)
{

loc_00050550: ;
    eax = MEM32(esp + 4);
    MEM32(0x6E90E0) = eax;
    MEM32(0x5C27E8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00050570
 * Original: 0x00050570 - 0x0005062A (186 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050570: ;
    ecx = MEM32(0x5C28C8);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050596; /* je: equal / zero */

loc_00050580: ;
    ecx = MEM32(0x5C28D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005058F; /* jne: not equal / not zero */

loc_0005058B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00050596;

loc_0005058F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050596; /* jne: not equal / not zero */

loc_00050594: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00050596: ;
    ecx = MEM32(0x6082C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000505BC; /* je: equal / zero */

loc_000505A0: ;
    ecx = MEM32(0x6082D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000505B2; /* jne: not equal / not zero */

loc_000505AB: ;
    edx = 1;
    goto loc_000505BC;

loc_000505B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000505BC; /* jne: not equal / not zero */

loc_000505B7: ;
    eax = 1;

loc_000505BC: ;
    ecx = MEM32(0x64DCC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000505DF; /* je: equal / zero */

loc_000505C6: ;
    ecx = MEM32(0x64DCD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000505D8; /* jne: not equal / not zero */

loc_000505D1: ;
    edx = 2;
    goto loc_000505DF;

loc_000505D8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000505DF; /* jne: not equal / not zero */

loc_000505DD: ;
    eax = ecx;

loc_000505DF: ;
    ecx = MEM32(0x6936C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000505F6; /* je: equal / zero */

loc_000505E9: ;
    ecx = MEM32(0x6936D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005060E; /* jne: not equal / not zero */

loc_000505F4: ;
    edx = ecx;

loc_000505F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050627; /* je: equal / zero */

loc_000505FB: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x45A00);
    MEM32(ecx + 0x5C28D0) = 3;
    esp += 4; return; /* ret */

loc_0005060E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000505F6; /* jne: not equal / not zero */

loc_00050613: ;
    eax = 3;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x45A00);
    MEM32(ecx + 0x5C28D0) = eax;
    esp += 4; return; /* ret */

loc_00050627: ;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00050630
 * Original: 0x00050630 - 0x00050783 (339 bytes, 95 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050630(void)
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

loc_00050630: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00050638u); RECOMP_ABI_CALL(0x00050570u, sub_00050570); /* call 0x00050570 */

loc_00050638: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    ecx = 0x5C28C8;

loc_00050645: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050658; /* je: equal / zero */

loc_00050649: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x45A00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050645; /* jl: less (signed <) */

loc_00050658: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0005066A; /* jne: not equal / not zero */

loc_00050661: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005077F; /* je: equal / zero */

loc_0005066A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 0x18);
    MEM32(0x5C2808) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00050694; /* je: equal / zero */

loc_00050679: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x235A90)); /* fmul dword ptr [0x235a90] */
    MEMF(0x5C27FC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0005075F;

loc_00050694: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45A00);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x459E4);
    eax = esi + 0x5C28DC;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000506AFu); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_000506AF: ;
    ecx = MEM32(0x235978);
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    edx = MEM32(0x23597C);
    ebx = eax;
    eax = MEM32(0x235980);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x235A90)); /* fmul dword ptr [0x235a90] */
    MEM32(0x6E90F8) = ecx;
    SET_LO16(ecx, MEM16(0x235984));
    MEM32(0x6E90FC) = edx;
    SET_LO8(edx, MEM8(0x235986));
    MEMF(0x5C27FC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6E9100) = eax;
    eax = MEM32(esp + 0x28);
    MEM16(0x6E9104) = LO16(ecx);
    ecx = MEM32(eax * 4 + 0x2E02F8);
    MEM8(0x6E9106) = LO8(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C28C8) = ebx;
    MEM32(esi + 0x6082C4) = edi;
    MEM32(esi + 0x5C28D4) = edi;
    edx = ecx;
    /* nop */

loc_00050720: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050720; /* jne: not equal / not zero */

loc_00050727: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x6E90F8;
    ebp = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00050731: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050731; /* jne: not equal / not zero */

loc_00050739: ;
    ecx = ebp;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x6E90F8);
    PUSH32(esp, ebx);
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
    PUSH32(esp, 0x00050754u); RECOMP_ABI_CALL(0x00108CD0u, sub_00108CD0); /* call 0x00108CD0 */

loc_00050754: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_0005075F: ;
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x45A00);
    MEM32(eax + 0x5C28D0) = 2;
    MEM32(eax + 0x5C28CC) = edi;
    MEM32(eax + 0x6082C0) = ecx;

loc_0005077F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050790
 * Original: 0x00050790 - 0x000508B3 (291 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050790_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */
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

loc_00050790: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050796u); RECOMP_ABI_CALL(0x00050570u, sub_00050570); /* call 0x00050570 */

loc_00050796: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x5C28C8;
    PUSH32(esp, esi);
    edi = edi;

loc_000507A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000507B4; /* je: equal / zero */

loc_000507A5: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x45A00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000507A0; /* jl: less (signed <) */

loc_000507B4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000507C2; /* jne: not equal / not zero */

loc_000507B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000508B0; /* je: equal / zero */

loc_000507C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(0x5C2808) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00050800; /* je: equal / zero */

loc_000507D6: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45A00);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 8) = ecx;
    MEMF(esi + 0x5C28D4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x235A90)); /* fmul dword ptr [0x235a90] */
    MEMF(0x5C27FC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0005087C;

loc_00050800: ;
    esi = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45A00);
    PUSH32(esp, 0x459E4);
    eax = esi + 0x5C28DC;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0005081Bu); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_0005081B: ;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esi + 0x5C28C8) = eax;
    MEM32(esi + 0x6082C4) = 0;
    MEM32(esi + 0x5C28D4) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x235A90)); /* fmul dword ptr [0x235a90] */
    MEMF(0x5C27FC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005084Cu); RECOMP_ABI_CALL(0x0004EF00u, sub_0004EF00); /* call 0x0004EF00 */

loc_0005084C: ;
    ecx = MEM32(esi + 0x5C28C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050859u); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_00050859: ;
    edx = MEM32(esi + 0x5C28C8);
    PUSH32(esp, 0x5C2800);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005086Au); RECOMP_ABI_CALL(0x00108FB0u, sub_00108FB0); /* call 0x00108FB0 */

loc_0005086A: ;
    eax = MEM32(esi + 0x5C28C8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050879u); RECOMP_ABI_CALL(0x00108BF0u, sub_00108BF0); /* call 0x00108BF0 */

loc_00050879: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005087C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x5C28D0) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0005089F; /* je: equal / zero */

loc_0005088E: ;
    ecx = MEM32(esi + 0x5C28C8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005089Cu); RECOMP_ABI_CALL(0x00107C10u, sub_00107C10); /* call 0x00107C10 */

loc_0005089C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005089F: ;
    MEM32(esi + 0x6082C0) = edi;
    MEM32(esi + 0x5C28CC) = 0;
    POP32(esp, edi);

loc_000508B0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000508C0
 * Original: 0x000508C0 - 0x000509E2 (290 bytes, 79 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000508C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000508C0: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5C28C8;

loc_000508C8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000508DA; /* je: equal / zero */

loc_000508CD: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x45A00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000508C8; /* jl: less (signed <) */

loc_000508DA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000509E0; /* je: equal / zero */

loc_000508E3: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x45A00);
    PUSH32(esp, 0x459E4);
    eax = ebp + 0x5C28DC;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000508FCu); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_000508FC: ;
    ecx = MEM32(0x5C2810);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + 0x5C28C8) = eax;
    PUSH32(esp, 0x0005090Fu); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_0005090F: ;
    eax = MEM32(0x235978);
    ecx = MEM32(0x23597C);
    edx = MEM32(0x6D90CC);
    MEM32(0x6E90F8) = eax;
    SET_LO16(eax, MEM16(0x235984));
    MEM32(0x6E90FC) = ecx;
    SET_LO8(ecx, MEM8(0x235986));
    MEM32(ebp + 0x5C28D4) = edx;
    edx = MEM32(0x235980);
    MEM16(0x6E9104) = LO16(eax);
    eax = MEM32(esp + 0x20);
    MEM8(0x6E9106) = LO8(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x5C28D0) = 3;
    MEM32(0x6E9100) = edx;
    ecx = eax;

loc_00050968: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050968; /* jne: not equal / not zero */

loc_0005096F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x6E90F8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00050980;

    /* nop */

loc_00050980: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050980; /* jne: not equal / not zero */

loc_00050988: ;
    ecx = eax;
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
    eax = MEM32(esp + 0x10);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
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
    PUSH32(esp, 0x6E90F8);
    if (CMP_EQ(_fa, _fb)) goto loc_000509B3; /* je: equal / zero */

loc_000509A5: ;
    edx = MEM32(ebp + 0x5C28C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000509B1u); RECOMP_ABI_CALL(0x00109210u, sub_00109210); /* call 0x00109210 */

loc_000509B1: ;
    goto loc_000509BF;

loc_000509B3: ;
    eax = MEM32(ebp + 0x5C28C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000509BFu); RECOMP_ABI_CALL(0x00108CD0u, sub_00108CD0); /* call 0x00108CD0 */

loc_000509BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x5C28CC) = 0;
    MEM32(0x5C27E8) = 0;
    MEM32(0x6E90E0) = 0;

loc_000509E0: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000509F0
 * Original: 0x000509F0 - 0x00050AC0 (208 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000509F0_gen(void)   /* audio-trace: shadowed by audio.c (snd entry) */
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000509F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5C28C8;

loc_000509F8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050A0A; /* je: equal / zero */

loc_000509FD: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x45A00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000509F8; /* jl: less (signed <) */

loc_00050A0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050ABE; /* je: equal / zero */

loc_00050A13: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45A00);
    PUSH32(esp, 0x459E4);
    eax = esi + 0x5C28DC;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00050A2Cu); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_00050A2C: ;
    ecx = MEM32(0x5C2810);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x5C28C8) = eax;
    PUSH32(esp, 0x00050A3Fu); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_00050A3F: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(0x6D90CC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x5C28D4) = edx;
    MEM32(esi + 0x5C28D0) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00050A71; /* je: equal / zero */

loc_00050A60: ;
    eax = MEM32(esi + 0x5C28C8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050A6Eu); RECOMP_ABI_CALL(0x00107C10u, sub_00107C10); /* call 0x00107C10 */

loc_00050A6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00050A71: ;
    ecx = MEM32(esi + 0x5C28C8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050A85u); RECOMP_ABI_CALL(0x00108BF0u, sub_00108BF0); /* call 0x00108BF0 */

loc_00050A85: ;
    edx = MEM32(esi + 0x5C28C8);
    PUSH32(esp, 0x5C2800);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00050A96u); RECOMP_ABI_CALL(0x00108FB0u, sub_00108FB0); /* call 0x00108FB0 */

loc_00050A96: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6082C0) = edi;
    MEM32(esi + 0x5C28CC) = 0;
    MEM32(0x5C27E8) = 0;
    MEM32(0x6E90E0) = 0;
    POP32(esp, edi);

loc_00050ABE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050AC0
 * Original: 0x00050AC0 - 0x00050B0E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5C28C8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00050AD0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050AF1; /* je: equal / zero */

loc_00050AD6: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050AF1; /* je: equal / zero */

loc_00050ADB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050AE1u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00050AE1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x00050AECu); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00050AEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_00050AF1: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050AD0; /* jl: less (signed <) */

loc_00050AFF: ;
    MEM32(0x5C27E8) = edi;
    MEM32(0x6E90E0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050B10
 * Original: 0x00050B10 - 0x00050B50 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5C28C8;
    edi = 1;
    /* nop */

loc_00050B20: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050B3F; /* je: equal / zero */

loc_00050B26: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050B3F; /* je: equal / zero */

loc_00050B2D: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050B3F; /* je: equal / zero */

loc_00050B32: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050B39u); RECOMP_ABI_CALL(0x00107C90u, sub_00107C90); /* call 0x00107C90 */

loc_00050B39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;

loc_00050B3F: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050B20; /* jl: less (signed <) */

loc_00050B4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050B50
 * Original: 0x00050B50 - 0x00050B8B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050B50: ;
    PUSH32(esp, esi);
    esi = 0x5C28C8;

loc_00050B56: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050B7B; /* je: equal / zero */

loc_00050B5C: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050B7B; /* je: equal / zero */

loc_00050B63: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050B7B; /* jne: not equal / not zero */

loc_00050B69: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050B71u); RECOMP_ABI_CALL(0x00107C90u, sub_00107C90); /* call 0x00107C90 */

loc_00050B71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00050B7B: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050B56; /* jl: less (signed <) */

loc_00050B89: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050B90
 * Original: 0x00050B90 - 0x00050BB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050B9Cu); RECOMP_ABI_CALL(0x0004E010u, sub_0004E010); /* call 0x0004E010 */

loc_00050B9C: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x235A94);
    MEM32(0x5C28B0) = edi;
    PUSH32(esp, 0x00050BAFu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00050BAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x5C28C8;

    g_seh_ebp = ebp; sub_00050BB7(); return; /* fallthrough 0x00050BB7 */

}

/**
 * sub_00050BB7
 * Original: 0x00050BB7 - 0x00050BDF (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050BB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050BB7: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050BCE; /* je: equal / zero */

loc_00050BBD: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050BCE; /* jne: not equal / not zero */

loc_00050BC4: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050BCBu); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_00050BCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00050BCE: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050BB7; /* jl: less (signed <) */

loc_00050BDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050BE0
 * Original: 0x00050BE0 - 0x00050BF3 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x235AAC);
    PUSH32(esp, 0x00050BEBu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00050BEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x5C28C8;

    g_seh_ebp = ebp; sub_00050BF3(); return; /* fallthrough 0x00050BF3 */

}

/**
 * sub_00050BF3
 * Original: 0x00050BF3 - 0x00050C46 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050BF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050BF3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050C36; /* je: equal / zero */

loc_00050BF9: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050C36; /* jne: not equal / not zero */

loc_00050C00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050C06u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_00050C06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x459FC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00050C36; /* je: equal / zero */

loc_00050C13: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM32(esi + 0x459F8) = 0;
    PUSH32(esp, 0x00050C25u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00050C25: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050C2Du); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00050C2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00050C36: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45A00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D90C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050BF3; /* jl: less (signed <) */

loc_00050C44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050C50
 * Original: 0x00050C50 - 0x00050CD2 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050C50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5C28C8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = 1;
    edx = 5;
    ecx = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00050C7C; /* je: equal / zero */

loc_00050C6A: ;
    _fa = (uint32_t)(MEM32(0x5C28D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5C28D0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050C7C; /* jne: not equal / not zero */

loc_00050C72: ;
    _fa = (uint32_t)(MEM32(0x6082C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6082C4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050C7C; /* je: equal / zero */

loc_00050C7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00050C7C: ;
    esi = MEM32(0x6082C8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050C98; /* je: equal / zero */

loc_00050C86: ;
    _fa = (uint32_t)(MEM32(0x6082D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6082D0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050C98; /* jne: not equal / not zero */

loc_00050C8E: ;
    _fa = (uint32_t)(MEM32(0x64DCC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64DCC4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050C98; /* je: equal / zero */

loc_00050C96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00050C98: ;
    esi = MEM32(0x64DCC8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050CB4; /* je: equal / zero */

loc_00050CA2: ;
    _fa = (uint32_t)(MEM32(0x64DCD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64DCD0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050CB4; /* jne: not equal / not zero */

loc_00050CAA: ;
    _fa = (uint32_t)(MEM32(0x6936C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6936C4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050CB4; /* je: equal / zero */

loc_00050CB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00050CB4: ;
    esi = MEM32(0x6936C8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050CD0; /* je: equal / zero */

loc_00050CBE: ;
    _fa = (uint32_t)(MEM32(0x6936D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6936D0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050CD0; /* jne: not equal / not zero */

loc_00050CC6: ;
    _fa = (uint32_t)(MEM32(0x6D90C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6D90C4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050CD0; /* je: equal / zero */

loc_00050CCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00050CD0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050CE0
 * Original: 0x00050CE0 - 0x00050D40 (96 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x5C28D0;
    PUSH32(esp, esi);
    /* nop */

loc_00050CF0: ;
    esi = MEM32(ecx + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050CFC; /* je: equal / zero */

loc_00050CF7: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050D10; /* je: equal / zero */

loc_00050CFC: ;
    _fb = (uint32_t)(0x45A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x45A00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D90D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6D90D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00050CF0; /* jl: less (signed <) */

loc_00050D0B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00050D10: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x45A00);
    edx = MEM32(edx + 0x5C28C8);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00050D2Cu); RECOMP_ABI_CALL(0x00107350u, sub_00107350); /* call 0x00107350 */

loc_00050D2C: ;
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 8))); }
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00050EC0
 * Original: 0x00050EC0 - 0x00050EF0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050EC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00050ECAu); RECOMP_ABI_CALL(0x00109350u, sub_00109350); /* call 0x00109350 */

loc_00050ECA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x6D90E0);
    PUSH32(esp, 0x00050EDBu); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_00050EDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5C2814) = eax;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = 1;
    /* nop */

    g_seh_ebp = ebp; sub_00050EF0(); return; /* fallthrough 0x00050EF0 */

}

/**
 * sub_00050EF0
 * Original: 0x00050EF0 - 0x00050F8D (157 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050EF0: ;
    esi = edi + edi * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x2E13C0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050F04u); RECOMP_ABI_CALL(0x00106960u, sub_00106960); /* call 0x00106960 */

loc_00050F04: ;
    ecx = MEM32(esi + 0x2E13C4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    MEM32(0x5C281C) = eax;
    PUSH32(esp, 0x00050F27u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_00050F27: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM32(0x5C2868) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00050F39; /* jne: not equal / not zero */

loc_00050F31: ;
    esi = MEM32(0x34AD34);
    goto loc_00050F4A;

loc_00050F39: ;
    edx = MEM32(0x5C281C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00050F45u); RECOMP_ABI_CALL(0x00106280u, sub_00106280); /* call 0x00106280 */

loc_00050F45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00050F4A: ;
    eax = MEM32(0x5C2868);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00050F5Au); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_00050F5A: ;
    ecx = MEM32(0x5C2868);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050F6Cu); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_00050F6C: ;
    edx = MEM32(0x5C2814);
    eax = MEM32(0x34AD34);
    ecx = MEM32(0x5C281C);
    PUSH32(esp, edx);
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00050F88u); RECOMP_ABI_CALL(0x00105E00u, sub_00105E00); /* call 0x00105E00 */

loc_00050F88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00050F90(); return; /* tail jmp 0x00050F90 */

}

/**
 * sub_00050F90
 * Original: 0x00050F90 - 0x00051120 (400 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050F90: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00050F97u); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_00050F97: ;
    _fa = (uint32_t)(MEM32(0x5C280C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5C280C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050F90; /* je: equal / zero */

loc_00050F9F: ;
    eax = MEM32(0x5C2814);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00050FABu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00050FA8u); } /* indirect call */
    }

loc_00050FAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050FD0; /* je: equal / zero */

loc_00050FB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00050F90; /* jge: greater or equal (signed >=) */

loc_00050FBD: ;
    eax = MEM32(0x5C2814);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x00050FC9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00050FC6u); } /* indirect call */
    }

loc_00050FC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050F90; /* jne: not equal / not zero */

loc_00050FD0: ;
    _fa = (uint32_t)(MEM32(0x5C280C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5C280C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00050FE0; /* jne: not equal / not zero */

loc_00050FD8: ;
    MEM32(0x5C280C) = ebx;
    goto loc_00050F90;

loc_00050FE0: ;
    _fa = (uint32_t)(MEM32(0x5C280C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5C280C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000510F1; /* je: equal / zero */

loc_00050FED: ;
    eax = MEM32(0x5C2814);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5C28B8);
    PUSH32(esp, 0x10000);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00051003u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051000u); } /* indirect call */
    }

loc_00051003: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_L(_fas, _fbs)) goto loc_00051075; /* jl: less (signed <) */

loc_00051010: ;
    ecx = MEM32(0x5C28BC);
    edx = MEM32(0x5C28B8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(0x5C2868);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005102Eu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0005102E: ;
    edi = edi;

loc_00051030: ;
    _fa = (uint32_t)(MEM32(0x5C280C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5C280C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000510F1; /* je: equal / zero */

loc_0005103D: ;
    eax = MEM32(0x5C280C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051055; /* je: equal / zero */

loc_00051046: ;
    PUSH32(esp, 0x10);
    MEM32(0x5C280C) = ebx;
    PUSH32(esp, 0x00051053u); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_00051053: ;
    goto loc_00051030;

loc_00051055: ;
    eax = MEM32(0x5C2814);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5C28B8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x00051067u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051064u); } /* indirect call */
    }

loc_00051067: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00050F90;

loc_00051075: ;
    eax = MEM32(0x5C28B8);
    ecx = MEM32(0x5C2868);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005108Du); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_0005108D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000510AD; /* jne: not equal / not zero */

loc_00051092: ;
    edx = MEM32(0x5C2868);
    PUSH32(esp, 0x34AD28);
    PUSH32(esp, 0x34AD28);
    PUSH32(esp, 0x34AD28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000510ADu); RECOMP_ABI_CALL(0x000AACD0u, sub_000AACD0); /* call 0x000AACD0 */

loc_000510AD: ;
    eax = MEM32(0x5C2868);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000510B8u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000510B8: ;
    ecx = MEM32(0x5C281C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000510C4u); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_000510C4: ;
    eax = MEM32(0x5C2814);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000510CFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000510CCu); } /* indirect call */
    }

loc_000510CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00050EF0(); return; } /* jl: less (signed <) */

loc_000510DC: ;
    eax = MEM32(0x5C2814);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000510E7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000510E4u); } /* indirect call */
    }

loc_000510E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x000510F1u); RECOMP_ABI_CALL(0x000AD193u, sub_000AD193); /* call 0x000AD193 */

loc_000510F1: ;
    eax = MEM32(0x5C2868);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000510FCu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000510FC: ;
    ecx = MEM32(0x5C281C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00051108u); RECOMP_ABI_CALL(0x00106580u, sub_00106580); /* call 0x00106580 */

loc_00051108: ;
    eax = MEM32(0x5C2814);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00051113u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051110u); } /* indirect call */
    }

loc_00051113: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005111Du); RECOMP_ABI_CALL(0x000AD193u, sub_000AD193); /* call 0x000AD193 */

loc_0005111D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00051120
 * Original: 0x00051120 - 0x0005116C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051120: ;
    eax = MEM32(esp + 4);
    edx = 0x6E90E4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00051130;

    /* nop */

loc_00051130: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051130; /* jne: not equal / not zero */

loc_0005113A: ;
    eax = MEM32(esp + 8);
    edx = 0x5C27EC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00051145: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051145; /* jne: not equal / not zero */

loc_0005114F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50EC0);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00051166u); RECOMP_ABI_CALL(0x000AD420u, sub_000AD420); /* call 0x000AD420 */

loc_00051166: ;
    MEM32(0x6E91F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00051170
 * Original: 0x00051170 - 0x000511F4 (132 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051170: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6E91F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00051183; /* jne: not equal / not zero */

loc_0005117D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00051183: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005118Bu); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_0005118B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000511A5; /* jne: not equal / not zero */

loc_00051194: ;
    PUSH32(esp, 0x235AFC);
    PUSH32(esp, 0x0005119Eu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_0005119E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000511A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000511BD; /* jne: not equal / not zero */

loc_000511AC: ;
    PUSH32(esp, 0x235AE8);
    PUSH32(esp, 0x000511B6u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000511B6: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000511BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000511EF; /* jne: not equal / not zero */

loc_000511C1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000511CCu); RECOMP_ABI_CALL(0x000AD1A5u, sub_000AD1A5); /* call 0x000AD1A5 */

loc_000511CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000511D2u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000511D2: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x6E91F8) = 0;
    POP32(esp, esi);
    eax = eax + eax + -1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000511EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00051200
 * Original: 0x00051200 - 0x0005124D (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051200: ;
    eax = MEM32(0x6E91F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051242; /* je: equal / zero */

loc_00051209: ;
    edx = MEM32(0x5C280C);
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051221; /* je: equal / zero */

loc_00051218: ;
    MEM32(0x5C280C) = ecx;

loc_0005121E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00051221: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051229u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_00051229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005121E; /* jne: not equal / not zero */

loc_0005122D: ;
    eax = MEM32(0x6E91F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051238u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00051238: ;
    MEM32(0x6E91F8) = 0;

loc_00051242: ;
    PUSH32(esp, 0x00051247u); RECOMP_ABI_CALL(0x00109F80u, sub_00109F80); /* call 0x00109F80 */

loc_00051247: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00051250
 * Original: 0x00051250 - 0x00051269 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051250: ;
    PUSH32(esp, 0x00051255u); RECOMP_ABI_CALL(0x00050AC0u, sub_00050AC0); /* call 0x00050AC0 */

loc_00051255: ;
    PUSH32(esp, 0x0005125Au); RECOMP_ABI_CALL(0x00050BE0u, sub_00050BE0); /* call 0x00050BE0 */

loc_0005125A: ;
    PUSH32(esp, 0x0005125Fu); RECOMP_ABI_CALL(0x00109F80u, sub_00109F80); /* call 0x00109F80 */

loc_0005125F: ;
    PUSH32(esp, 0x00051264u); RECOMP_ABI_CALL(0x001088A0u, sub_001088A0); /* call 0x001088A0 */

loc_00051264: ;
    g_seh_ebp = ebp; sub_00108870(); return; /* tail jmp 0x00108870 */

}

/**
 * sub_00051270
 * Original: 0x00051270 - 0x000512C4 (84 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = edi + ebx * 2;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    _fb = (uint32_t)(0x6E9208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6E9208;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00051288u); RECOMP_ABI_CALL(0x002236D7u, sub_002236D7); /* call 0x002236D7 */

loc_00051288: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000512BD; /* jne: not equal / not zero */

loc_0005128C: ;
    ecx = edi;
    edi = MEM32(0x6E9200);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, 0x20);
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi + 2;
    PUSH32(esp, eax);
    MEM32(0x6E9200) = edi;
    MEM16(eax) = 0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000512BDu); RECOMP_ABI_CALL(0x000ACE6Eu, sub_000ACE6E); /* call 0x000ACE6E */

loc_000512BD: ;
    POP32(esp, edi);
    MEM8(esi + 0x42) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000512D0
 * Original: 0x000512D0 - 0x00051315 (69 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000512D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000512D0: ;
    PUSH32(esp, esi);
    esi = eax + edx * 2;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    ecx = eax;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x6E9200);
    _fb = (uint32_t)(0x6E9208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6E9208;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000512FD; /* je: equal / zero */

loc_000512F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000512FDu); RECOMP_ABI_CALL(0x00223975u, sub_00223975); /* call 0x00223975 */

loc_000512FD: ;
    eax = MEM32(0x6E9200);
    edi = ~edi;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM8(esi) = 0;
    MEM8(esi + 0x42) = 0;
    MEM32(0x6E9200) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00051320
 * Original: 0x00051320 - 0x00051394 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051320: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ecx + esi * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x6E9200);
    _fb = (uint32_t)(0x6E9208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E9208;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00051354; /* je: equal / zero */

loc_00051350: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005135A; /* jne: not equal / not zero */

loc_00051354: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005135A: ;
    SET_LO8(ecx, MEM8(eax + 0x42));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(0x2E13E8) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_0005136B; /* jne: not equal / not zero */

loc_00051367: ;
    MEM8(eax + 0x42) = 1;

loc_0005136B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2E13E8);
    PUSH32(esp, 0x0005137Eu); RECOMP_ABI_CALL(0x000ABEE1u, sub_000ABEE1); /* call 0x000ABEE1 */

loc_0005137E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005138D; /* je: equal / zero */

loc_00051386: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005138D: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000513A0
 * Original: 0x000513A0 - 0x000513D4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000513A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000513A0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x6E9200);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000513D1; /* je: equal / zero */

loc_000513C4: ;
    eax = edx + esi * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x6E9208);

loc_000513D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000513E0
 * Original: 0x000513E0 - 0x000513FF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000513E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000513E0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = eax + ecx * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    _fb = (uint32_t)(0x6E9208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E9208;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000513FC; /* je: equal / zero */

loc_000513F8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000513FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00051400
 * Original: 0x00051400 - 0x00051406 (6 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00051406(); return; /* fallthrough 0x00051406 */

}

/**
 * sub_00051406
 * Original: 0x00051406 - 0x0005144E (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051406(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051406: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx;
    /* nop */

loc_00051410: ;
    eax = MEM32(0x6E9428);
    esi = 1;
    ecx = ebp;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005142B; /* je: equal / zero */

loc_00051422: ;
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0x0005142Bu); RECOMP_ABI_CALL(0x000512D0u, sub_000512D0); /* call 0x000512D0 */

loc_0005142B: ;
    _fa = (uint32_t)(MEM32(0x6E942C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x6E942C), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005143A; /* je: equal / zero */

loc_00051433: ;
    eax = edi;
    PUSH32(esp, 0x0005143Au); RECOMP_ABI_CALL(0x00051270u, sub_00051270); /* call 0x00051270 */

loc_0005143A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051410; /* jl: less (signed <) */

loc_00051443: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051406; /* jl: less (signed <) */

loc_00051449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00051450
 * Original: 0x00051450 - 0x00051482 (50 bytes, 13 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051450: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x88;
    edi = 0x6E9208;
    PUSH32(esp, 0x2225E0);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00051469u); RECOMP_ABI_CALL(0x00223C92u, sub_00223C92); /* call 0x00223C92 */

loc_00051469: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6E9200) = ecx;
    MEM32(0x6E942C) = eax;
    MEM32(0x6E9428) = ecx;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00051400(); return; /* tail jmp 0x00051400 */

}

/**
 * sub_00051490
 * Original: 0x00051490 - 0x000514A9 (25 bytes, 5 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051490: ;
    PUSH32(esp, 0x6E9428);
    PUSH32(esp, 0x6E942C);
    PUSH32(esp, 0x2225E0);
    PUSH32(esp, 0x000514A4u); RECOMP_ABI_CALL(0x00223CB4u, sub_00223CB4); /* call 0x00223CB4 */

loc_000514A4: ;
    g_seh_ebp = ebp; sub_00051400(); return; /* tail jmp 0x00051400 */

}

/**
 * sub_000514B0
 * Original: 0x000514B0 - 0x000514B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000514B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000514B0: ;
    MEM32(0x6E95B4) = MEM32(0x6E95B4) ^ 1;
    _fa = (uint32_t)(MEM32(0x6E95B4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000514C0
 * Original: 0x000514C0 - 0x000514C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000514C0(void)
{

loc_000514C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000514D0
 * Original: 0x000514D0 - 0x000515D4 (260 bytes, 71 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000514D0(void)
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

loc_000514D0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8FE608)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FE608), 1 (8-bit) */
    eax = MEM32(0x6E94C8);
    if (TEST_Z(_fa, _fb)) goto loc_0005152A; /* je: equal / zero */

loc_000514DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000514EB; /* jne: not equal / not zero */

loc_000514E3: ;
    fp_push(MEMF(0x235C84)); /* fld float */
    goto loc_00051504;

loc_000514EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000514F8; /* jne: not equal / not zero */

loc_000514F0: ;
    fp_push(MEMF(0x235C80)); /* fld float */
    goto loc_00051504;

loc_000514F8: ;
    fp_push(MEMF(0x2E13F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x235C80)); /* fmul dword ptr [0x235c80] */

loc_00051504: ;
    fp_push(MEMF(0x235C7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x235C80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    fp_push(MEMF(0x235C78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    goto loc_00051580;

loc_0005152A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051549; /* jne: not equal / not zero */

loc_0005152F: ;
    fp_push(MEMF(0x235C74)); /* fld float */
    fp_push(MEMF(0x235C70)); /* fld float */
    fp_push(MEMF(0x22C190)); /* fld float */
    fp_push(MEMF(0x22C194)); /* fld float */
    goto loc_00051580;

loc_00051549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051568; /* jne: not equal / not zero */

loc_0005154E: ;
    fp_push(MEMF(0x235C6C)); /* fld float */
    fp_push(MEMF(0x235C68)); /* fld float */
    fp_push(MEMF(0x235C64)); /* fld float */
    fp_push(MEMF(0x22C6EC)); /* fld float */
    goto loc_00051580;

loc_00051568: ;
    fp_push(MEMF(0x235C80)); /* fld float */
    fp_push(MEMF(0x235C78)); /* fld float */
    fp_push(MEMF(0x22C0D4)); /* fld float */
    fp_push(MEMF(0x22C0D4)); /* fld float */

loc_00051580: ;
    eax = MEM32(esp + 8);
    MEMF(esp) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = 0x3F800000;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 0x20) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(eax + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 4) & 7]); /* fadd st(4) */
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEM32(eax + 0x54) = ecx;
    edx = MEM32(esp + 8);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x48) = edx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(eax + 0x34) = (float)fp_top(); /* fst */
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000515E0
 * Original: 0x000515E0 - 0x00051645 (101 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000515E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000515E0: ;
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00051644; /* jle: less or equal (signed <=) */

loc_000515EA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    /* nop */

loc_00051600: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 4);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051623; /* je: equal / zero */

loc_00051610: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00051637; /* jle: less or equal (signed <=) */

loc_00051614: ;
    ecx = ebp + -1;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0x80108010u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00051637;

loc_00051623: ;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ebp = MEM32(esp + 0x18);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00051637: ;
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051600; /* jl: less (signed <) */

loc_00051640: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00051644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00051650
 * Original: 0x00051650 - 0x00051651 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051650(void)
{

loc_00051650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00051660
 * Original: 0x00051660 - 0x000516D5 (117 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051660: ;
    _fa = (uint32_t)(MEM8(0x8FE608)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FE608), 4 (8-bit) */
    MEM32(0x6E9430) = 0x42480000;
    if (TEST_NZ(_fa, _fb)) goto loc_0005167D; /* jne: not equal / not zero */

loc_00051673: ;
    MEM32(0x6E9430) = 0x426FC28F;

loc_0005167D: ;
    PUSH32(esp, esi);
    eax = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x6E9430);
    MEM32(0x6E9434) = eax;
    MEM32(0x6E9438) = eax;
    MEM32(0x6E943C) = esi;
    PUSH32(esp, 0x0005169Fu); RECOMP_ABI_CALL(0x0011D360u, sub_0011D360); /* call 0x0011D360 */

loc_0005169F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x514C0);
    PUSH32(esp, 0x000516AAu); RECOMP_ABI_CALL(0x00109BA0u, sub_00109BA0); /* call 0x00109BA0 */

loc_000516AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000516B2u); RECOMP_ABI_CALL(0x0004EF80u, sub_0004EF80); /* call 0x0004EF80 */

loc_000516B2: ;
    MEM32(0x6E94C4) = esi;
    MEM32(0x6E95B0) = esi;
    MEM32(0x6E94CC) = esi;
    MEM32(0x6E95BC) = eax;
    MEM32(0x6E94C8) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000516E0
 * Original: 0x000516E0 - 0x000516EA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000516E0(void)
{

loc_000516E0: ;
    ecx = MEM32(eax * 4 + 0x180BB0);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000516F0
 * Original: 0x000516F0 - 0x00051703 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000516F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000516F0: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x1809B0);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00051710
 * Original: 0x00051710 - 0x0005190C (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051710: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005172B; /* jge: greater or equal (signed >=) */

loc_00051715: ;
    ecx = MEM32(esi * 4 + 0x22BF08);
    edx = edi;
    PUSH32(esp, 0x00051723u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_00051723: ;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_0005172B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00051750; /* jge: greater or equal (signed >=) */

loc_00051733: ;
    ecx = MEM32(0x1809A8);
    eax = MEM32(esi * 4 + 0x22BCD8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809A8) = ecx;
    MEM32(esi * 4 + 0x180BB0) = edi;
    esp += 4; return; /* ret */

loc_00051750: ;
    if (CMP_NE(_fa, _fb)) goto loc_00051759; /* jne: not equal / not zero */

loc_00051752: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051758u); RECOMP_ABI_CALL(0x00160CD0u, sub_00160CD0); /* call 0x00160CD0 */

loc_00051758: ;
    esp += 4; return; /* ret */

loc_00051759: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051768; /* jne: not equal / not zero */

loc_00051761: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051767u); RECOMP_ABI_CALL(0x00161A80u, sub_00161A80); /* call 0x00161A80 */

loc_00051767: ;
    esp += 4; return; /* ret */

loc_00051768: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051777; /* jne: not equal / not zero */

loc_00051770: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051776u); RECOMP_ABI_CALL(0x001615E0u, sub_001615E0); /* call 0x001615E0 */

loc_00051776: ;
    esp += 4; return; /* ret */

loc_00051777: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051786; /* jne: not equal / not zero */

loc_0005177F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051785u); RECOMP_ABI_CALL(0x00161950u, sub_00161950); /* call 0x00161950 */

loc_00051785: ;
    esp += 4; return; /* ret */

loc_00051786: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051795; /* jne: not equal / not zero */

loc_0005178E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051794u); RECOMP_ABI_CALL(0x001619A0u, sub_001619A0); /* call 0x001619A0 */

loc_00051794: ;
    esp += 4; return; /* ret */

loc_00051795: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517A4; /* jne: not equal / not zero */

loc_0005179D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517A3u); RECOMP_ABI_CALL(0x00161A00u, sub_00161A00); /* call 0x00161A00 */

loc_000517A3: ;
    esp += 4; return; /* ret */

loc_000517A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517B3; /* jne: not equal / not zero */

loc_000517AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517B2u); RECOMP_ABI_CALL(0x001616E0u, sub_001616E0); /* call 0x001616E0 */

loc_000517B2: ;
    esp += 4; return; /* ret */

loc_000517B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517C2; /* jne: not equal / not zero */

loc_000517BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517C1u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_000517C1: ;
    esp += 4; return; /* ret */

loc_000517C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517D1; /* jne: not equal / not zero */

loc_000517CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517D0u); RECOMP_ABI_CALL(0x00162690u, sub_00162690); /* call 0x00162690 */

loc_000517D0: ;
    esp += 4; return; /* ret */

loc_000517D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517E0; /* jne: not equal / not zero */

loc_000517D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517DFu); RECOMP_ABI_CALL(0x00162730u, sub_00162730); /* call 0x00162730 */

loc_000517DF: ;
    esp += 4; return; /* ret */

loc_000517E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517EF; /* jne: not equal / not zero */

loc_000517E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517EEu); RECOMP_ABI_CALL(0x00161630u, sub_00161630); /* call 0x00161630 */

loc_000517EE: ;
    esp += 4; return; /* ret */

loc_000517EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000517FE; /* jne: not equal / not zero */

loc_000517F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000517FDu); RECOMP_ABI_CALL(0x001616A0u, sub_001616A0); /* call 0x001616A0 */

loc_000517FD: ;
    esp += 4; return; /* ret */

loc_000517FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005180D; /* jne: not equal / not zero */

loc_00051806: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005180Cu); RECOMP_ABI_CALL(0x00161720u, sub_00161720); /* call 0x00161720 */

loc_0005180C: ;
    esp += 4; return; /* ret */

loc_0005180D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005181C; /* jne: not equal / not zero */

loc_00051815: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005181Bu); RECOMP_ABI_CALL(0x00161870u, sub_00161870); /* call 0x00161870 */

loc_0005181B: ;
    esp += 4; return; /* ret */

loc_0005181C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005182B; /* jne: not equal / not zero */

loc_00051824: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005182Au); RECOMP_ABI_CALL(0x001618F0u, sub_001618F0); /* call 0x001618F0 */

loc_0005182A: ;
    esp += 4; return; /* ret */

loc_0005182B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005183A; /* jne: not equal / not zero */

loc_00051833: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051839u); RECOMP_ABI_CALL(0x00161560u, sub_00161560); /* call 0x00161560 */

loc_00051839: ;
    esp += 4; return; /* ret */

loc_0005183A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051849; /* jne: not equal / not zero */

loc_00051842: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051848u); RECOMP_ABI_CALL(0x00162970u, sub_00162970); /* call 0x00162970 */

loc_00051848: ;
    esp += 4; return; /* ret */

loc_00051849: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051858; /* jne: not equal / not zero */

loc_00051851: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051857u); RECOMP_ABI_CALL(0x001629F0u, sub_001629F0); /* call 0x001629F0 */

loc_00051857: ;
    esp += 4; return; /* ret */

loc_00051858: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051867; /* jne: not equal / not zero */

loc_00051860: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051866u); RECOMP_ABI_CALL(0x00162910u, sub_00162910); /* call 0x00162910 */

loc_00051866: ;
    esp += 4; return; /* ret */

loc_00051867: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051876; /* jne: not equal / not zero */

loc_0005186F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051875u); RECOMP_ABI_CALL(0x00162940u, sub_00162940); /* call 0x00162940 */

loc_00051875: ;
    esp += 4; return; /* ret */

loc_00051876: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051885; /* jne: not equal / not zero */

loc_0005187E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051884u); RECOMP_ABI_CALL(0x001615A0u, sub_001615A0); /* call 0x001615A0 */

loc_00051884: ;
    esp += 4; return; /* ret */

loc_00051885: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051894; /* jne: not equal / not zero */

loc_0005188D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00051893u); RECOMP_ABI_CALL(0x00161780u, sub_00161780); /* call 0x00161780 */

loc_00051893: ;
    esp += 4; return; /* ret */

loc_00051894: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518A3; /* jne: not equal / not zero */

loc_0005189C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518A2u); RECOMP_ABI_CALL(0x00162A40u, sub_00162A40); /* call 0x00162A40 */

loc_000518A2: ;
    esp += 4; return; /* ret */

loc_000518A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518B2; /* jne: not equal / not zero */

loc_000518AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518B1u); RECOMP_ABI_CALL(0x001617F0u, sub_001617F0); /* call 0x001617F0 */

loc_000518B1: ;
    esp += 4; return; /* ret */

loc_000518B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518C1; /* jne: not equal / not zero */

loc_000518BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518C0u); RECOMP_ABI_CALL(0x001627A0u, sub_001627A0); /* call 0x001627A0 */

loc_000518C0: ;
    esp += 4; return; /* ret */

loc_000518C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518D0; /* jne: not equal / not zero */

loc_000518C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518CFu); RECOMP_ABI_CALL(0x001627D0u, sub_001627D0); /* call 0x001627D0 */

loc_000518CF: ;
    esp += 4; return; /* ret */

loc_000518D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518DF; /* jne: not equal / not zero */

loc_000518D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518DEu); RECOMP_ABI_CALL(0x00162840u, sub_00162840); /* call 0x00162840 */

loc_000518DE: ;
    esp += 4; return; /* ret */

loc_000518DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518EE; /* jne: not equal / not zero */

loc_000518E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518EDu); RECOMP_ABI_CALL(0x001628B0u, sub_001628B0); /* call 0x001628B0 */

loc_000518ED: ;
    esp += 4; return; /* ret */

loc_000518EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000518FD; /* jne: not equal / not zero */

loc_000518F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000518FCu); RECOMP_ABI_CALL(0x001628D0u, sub_001628D0); /* call 0x001628D0 */

loc_000518FC: ;
    esp += 4; return; /* ret */

loc_000518FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005190B; /* jne: not equal / not zero */

loc_00051905: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005190Bu); RECOMP_ABI_CALL(0x001628F0u, sub_001628F0); /* call 0x001628F0 */

loc_0005190B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00051910
 * Original: 0x00051910 - 0x0005191A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051910(void)
{

loc_00051910: ;
    eax = MEM32(esp + 4);
    MEM32(0x2E13F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00051920
 * Original: 0x00051920 - 0x0005195F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051920: ;
    ecx = MEM32(0x6E94CC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005195B; /* je: equal / zero */

loc_0005192F: ;
    ecx = MEM32(0x6E9450);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005195B; /* je: equal / zero */

loc_00051939: ;
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00051949u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00051946u); } /* indirect call */
    }

loc_00051949: ;
    eax = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 4))); }

loc_0005195B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00051960
 * Original: 0x00051960 - 0x00051966 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051960(void)
{

loc_00051960: ;
    eax = MEM32(0x6E94CC);
    esp += 4; return; /* ret */

}

/**
 * sub_00051970
 * Original: 0x00051970 - 0x000519E6 (118 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0005199B; /* jge: greater or equal (signed >=) */

loc_00051977: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0005197E: ;
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

loc_0005199B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000519A9; /* jge: greater or equal (signed >=) */

loc_000519A0: ;
    esi = MEM32(eax * 4 + 0x22BDF0);
    goto loc_0005197E;

loc_000519A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000519B8; /* jne: not equal / not zero */

loc_000519AE: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000519B5u); RECOMP_ABI_CALL(0x00161AD0u, sub_00161AD0); /* call 0x00161AD0 */

loc_000519B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000519B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000519C7; /* jne: not equal / not zero */

loc_000519BD: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000519C4u); RECOMP_ABI_CALL(0x00161C50u, sub_00161C50); /* call 0x00161C50 */

loc_000519C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000519C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000519D6; /* jne: not equal / not zero */

loc_000519CC: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000519D3u); RECOMP_ABI_CALL(0x00161C90u, sub_00161C90); /* call 0x00161C90 */

loc_000519D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000519D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000519E3; /* jg: greater (signed >) */

loc_000519DB: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000519E3u); RECOMP_ABI_CALL(0x00161BE0u, sub_00161BE0); /* call 0x00161BE0 */

loc_000519E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00051A10
 * Original: 0x00051A10 - 0x00051A11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051A10(void)
{

loc_00051A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00051A20
 * Original: 0x00051A20 - 0x00051A2F (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051A20(void)
{

loc_00051A20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00051A27u); RECOMP_ABI_CALL(0x00163260u, sub_00163260); /* call 0x00163260 */

loc_00051A27: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00051A2Eu); RECOMP_ABI_CALL(0x001632B0u, sub_001632B0); /* call 0x001632B0 */

loc_00051A2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00051A30
 * Original: 0x00051A30 - 0x00051A3F (15 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051A30(void)
{

loc_00051A30: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00051A37u); RECOMP_ABI_CALL(0x00163260u, sub_00163260); /* call 0x00163260 */

loc_00051A37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00051A3Eu); RECOMP_ABI_CALL(0x001632B0u, sub_001632B0); /* call 0x001632B0 */

loc_00051A3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00051A40
 * Original: 0x00051A40 - 0x00051ADE (158 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00051A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6E9460);
    MEM32(0x6E9454) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00051A60u); RECOMP_ABI_CALL(0x000514D0u, sub_000514D0); /* call 0x000514D0 */

loc_00051A60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6E9588;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00051A70: ;
    eax = MEM32(esi + 0x30EC20);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x2D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00051A89u); RECOMP_ABI_CALL(0x00065E10u, sub_00065E10); /* call 0x00065E10 */

loc_00051A89: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x235C88);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00051A94u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051A94: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00051AA8u); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_00051AA8: ;
    edx = MEM32(0x6E94C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1E0);
    eax = esp + 0x18;
    PUSH32(esp, 0x2D0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00051AC3u); RECOMP_ABI_CALL(0x000515E0u, sub_000515E0); /* call 0x000515E0 */

loc_00051AC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x38 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00051A70; /* jb: below (unsigned <) */

loc_00051AD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00051AE0
 * Original: 0x00051AE0 - 0x00051B64 (132 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00051AE0(void)
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

loc_00051AE0: ;
    eax = MEM32(0x6E9454);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = eax + eax * 4;
    MEM32(0x6E9454) = eax;
    PUSH32(esp, 0);
    eax = edx * 4 + 0x6E9588;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051B0Cu); RECOMP_ABI_CALL(0x00168430u, sub_00168430); /* call 0x00168430 */

loc_00051B0C: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 4);
    eax = MEM32(0x6E9450);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051B24u); RECOMP_ABI_CALL(0x0011E320u, sub_0011E320); /* call 0x0011E320 */

loc_00051B24: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x6E9450);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00051B36u); RECOMP_ABI_CALL(0x0011D4D0u, sub_0011D4D0); /* call 0x0011D4D0 */

loc_00051B36: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("wbinvd", 0x00051B39u); /* TODO: wbinvd */
    fp_push((double)SMEM32(esi + 8)); /* fild */
    MEMF(0x6E9488) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    MEMF(0x6E94A4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 8)); /* fild */
    MEMF(0x6E94B8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    POP32(esp, esi);
    MEMF(0x6E94BC) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00051B70
 * Original: 0x00051B70 - 0x00051E09 (665 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051B70_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051B70: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x00051B81u); RECOMP_ABI_CALL(0x0004C970u, sub_0004C970); /* call 0x0004C970 */

loc_00051B81: ;
    PUSH32(esp, 0x00051B86u); RECOMP_ABI_CALL(0x0004C9E0u, sub_0004C9E0); /* call 0x0004C9E0 */

loc_00051B86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051BB4; /* je: equal / zero */

loc_00051B8A: ;
    PUSH32(esp, 0x00051B8Fu); RECOMP_ABI_CALL(0x0004C930u, sub_0004C930); /* call 0x0004C930 */

loc_00051B8F: ;
    PUSH32(esp, 0x00051B94u); RECOMP_ABI_CALL(0x0004C960u, sub_0004C960); /* call 0x0004C960 */

loc_00051B94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051BB4; /* je: equal / zero */

loc_00051B99: ;
    /* nop */

loc_00051BA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00051BA7u); RECOMP_ABI_CALL(0x000520A0u, sub_000520A0); /* call 0x000520A0 */

loc_00051BA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00051BAFu); RECOMP_ABI_CALL(0x0004C960u, sub_0004C960); /* call 0x0004C960 */

loc_00051BAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051BA0; /* jne: not equal / not zero */

loc_00051BB4: ;
    eax = MEM32(0x30ECA0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    MEM32(0x6E9458) = eax;
    MEM32(0x6E94C8) = edi;
    PUSH32(esp, 0x00051BCFu); RECOMP_ABI_CALL(0x00051A20u, sub_00051A20); /* call 0x00051A20 */

loc_00051BCF: ;
    eax = MEM32(0x6E95BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051CE3; /* je: equal / zero */

loc_00051BDC: ;
    eax = MEM32(0x6E94C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051CE3; /* jne: not equal / not zero */

loc_00051BE9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x235D1C);
    PUSH32(esp, 0x00051BF5u); RECOMP_ABI_CALL(0x00069620u, sub_00069620); /* call 0x00069620 */

loc_00051BF5: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00051BFDu); RECOMP_ABI_CALL(0x00069A90u, sub_00069A90); /* call 0x00069A90 */

loc_00051BFD: ;
    ecx = MEM32(0x6E9458);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00051C0Bu); RECOMP_ABI_CALL(0x00069840u, sub_00069840); /* call 0x00069840 */

loc_00051C0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00051C11u); RECOMP_ABI_CALL(0x00069720u, sub_00069720); /* call 0x00069720 */

loc_00051C11: ;
    edx = MEM32(0x6E9458);
    _fb = (uint32_t)(0x2F5800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2F5800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD2A18);
    PUSH32(esp, 0x235CF4);
    MEM32(0x6E9458) = edx;
    PUSH32(esp, 0x00051C32u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051C32: ;
    edx = MEM32(0x6E9458);
    MEM32(0x6E95B0) = edx;
    PUSH32(esp, 0x00051C43u); RECOMP_ABI_CALL(0x0010B570u, sub_0010B570); /* call 0x0010B570 */

loc_00051C43: ;
    eax = MEM32(0x6E95B0);
    PUSH32(esp, 0xD2A18);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00051C57u); RECOMP_ABI_CALL(0x0010B870u, sub_0010B870); /* call 0x0010B870 */

loc_00051C57: ;
    ecx = MEM32(0x6E9458);
    _fb = (uint32_t)(0xD2A97) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD2A97;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x235CE8);
    MEM32(0x6E94C4) = eax;
    MEM32(0x6E9458) = ecx;
    PUSH32(esp, 0x00051C7Bu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051C7B: ;
    edx = MEM32(0x6E94C4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00051C89u); RECOMP_ABI_CALL(0x0010A400u, sub_0010A400); /* call 0x0010A400 */

loc_00051C89: ;
    eax = MEM32(0x30ECA0);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2F5800);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x235CD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00051CA6u); RECOMP_ABI_CALL(0x001503B2u, sub_001503B2); /* call 0x001503B2 */

loc_00051CA6: ;
    eax = MEM32(0x6E94C4);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051CB8u); RECOMP_ABI_CALL(0x0010B210u, sub_0010B210); /* call 0x0010B210 */

loc_00051CB8: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00051CC0: ;
    ecx = MEM32(0x2DF87C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00051CCCu); RECOMP_ABI_CALL(0x0004DFE0u, sub_0004DFE0); /* call 0x0004DFE0 */

loc_00051CCC: ;
    edx = MEM32(0x6E94C4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00051CDAu); RECOMP_ABI_CALL(0x0010A1F0u, sub_0010A1F0); /* call 0x0010A1F0 */

loc_00051CDA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051CC0; /* jl: less (signed <) */

loc_00051CE3: ;
    PUSH32(esp, 0x00051CE8u); RECOMP_ABI_CALL(0x00051A40u, sub_00051A40); /* call 0x00051A40 */

loc_00051CE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051DFA; /* je: equal / zero */

loc_00051CF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00051D00; /* ja: above (unsigned >) */

loc_00051CF5: ;
    eax = MEM32(edi * 4 + 0x2E13F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051D02; /* jne: not equal / not zero */

loc_00051D00: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00051D02: ;
    PUSH32(esp, 0x6E9558);
    MEM32(0x6E9578) = 0x11;
    MEM32(0x6E9558) = 1;
    MEM32(0x6E955C) = 0x1312D00;
    MEM32(0x6E9560) = 0x2D0;
    MEM32(0x6E9564) = 0x1E0;
    MEM32(0x6E9568) = 5;
    PUSH32(esp, 0x00051D48u); RECOMP_ABI_CALL(0x0011FEB0u, sub_0011FEB0); /* call 0x0011FEB0 */

loc_00051D48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x235CAC);
    MEM32(0x6E9574) = eax;
    PUSH32(esp, 0x00051D58u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051D58: ;
    eax = MEM32(0x6E9458);
    PUSH32(esp, 0x6E9558);
    MEM32(0x6E95B8) = eax;
    MEM32(0x6E9570) = eax;
    PUSH32(esp, 0x00051D71u); RECOMP_ABI_CALL(0x001208D0u, sub_001208D0); /* call 0x001208D0 */

loc_00051D71: ;
    MEM32(0x6E9450) = eax;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x28); PUSH32(esp, 0x00051D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00051D7Bu); } /* indirect call */
    }

loc_00051D7E: ;
    ecx = MEM32(edi * 4 + 0x2E13F8);
    eax = MEM32(0x6E9450);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00051D91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00051D8Eu); } /* indirect call */
    }

loc_00051D91: ;
    eax = MEM32(0x6E95BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051DB9; /* je: equal / zero */

loc_00051D9D: ;
    eax = MEM32(0x6E94C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051DB9; /* jne: not equal / not zero */

loc_00051DA6: ;
    edx = MEM32(0x6E9450);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00051DB4u); RECOMP_ABI_CALL(0x0011F000u, sub_0011F000); /* call 0x0011F000 */

loc_00051DB4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00051DF0;

loc_00051DB9: ;
    eax = MEM32(0x6E9450);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051DC4u); RECOMP_ABI_CALL(0x0011F070u, sub_0011F070); /* call 0x0011F070 */

loc_00051DC4: ;
    PUSH32(esp, 0x5C2800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051DCFu); RECOMP_ABI_CALL(0x00108FB0u, sub_00108FB0); /* call 0x00108FB0 */

loc_00051DCF: ;
    edx = MEM32(0x2DF87C);
    ecx = MEM32(0x6E9450);
    esi = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00051DE3u); RECOMP_ABI_CALL(0x0004E010u, sub_0004E010); /* call 0x0004E010 */

loc_00051DE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x6E9450);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x2C); PUSH32(esp, 0x00051DEDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051DEAu); } /* indirect call */
    }

loc_00051DED: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00051DF0: ;
    MEM32(0x6E94CC) = 1;

loc_00051DFA: ;
    ecx = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00051E05u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_00051E05: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00051E10
 * Original: 0x00051E10 - 0x00051F49 (313 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00051E10_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051E10: ;
    eax = MEM32(0x6E9450);
    PUSH32(esp, 0x6E94D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051E20u); RECOMP_ABI_CALL(0x001218F0u, sub_001218F0); /* call 0x001218F0 */

loc_00051E20: ;
    eax = MEM32(0x6E94D0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051E45; /* je: equal / zero */

loc_00051E2C: ;
    PUSH32(esp, 0x6E94D0);
    PUSH32(esp, 0x00051E36u); RECOMP_ABI_CALL(0x00051AE0u, sub_00051AE0); /* call 0x00051AE0 */

loc_00051E36: ;
    ecx = MEM32(0x6E9450);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00051E42u); RECOMP_ABI_CALL(0x00120F80u, sub_00120F80); /* call 0x00120F80 */

loc_00051E42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00051E45: ;
    eax = MEM32(0x6E9450);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00051E50u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051E4Du); } /* indirect call */
    }

loc_00051E50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(0x6E94C0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00051E7B; /* jne: not equal / not zero */

loc_00051E5D: ;
    MEM32(0x6E94CC) = 0;
    PUSH32(esp, 0x00051E6Cu); RECOMP_ABI_CALL(0x0004C9E0u, sub_0004C9E0); /* call 0x0004C9E0 */

loc_00051E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051E75; /* je: equal / zero */

loc_00051E70: ;
    PUSH32(esp, 0x00051E75u); RECOMP_ABI_CALL(0x0004C950u, sub_0004C950); /* call 0x0004C950 */

loc_00051E75: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00051E7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051F3D; /* jl: less (signed <) */

loc_00051E84: ;
    eax = MEM32(0x6E9454);
    PUSH32(esp, ebx);
    ebx = MEM32(0x180DEC);
    PUSH32(esp, esi);
    esi = MEM32(0x1809B0);
    PUSH32(esp, edi);
    edi = MEM32(0x1809B4);
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x6E9588;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00051EB0u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00051EB0: ;
    edx = MEM32(0x1809A8);
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(0x1809B0) = 3;
    MEM32(0x1809A8) = edx;
    MEM32(0x1809B4) = 3;
    PUSH32(esp, 0x00051EDAu); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00051EDA: ;
    eax = MEM32(0x1809A8);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x104);
    MEM32(0x1809A8) = eax;
    MEM32(0x180D20) = 0;
    PUSH32(esp, 0x00051EFDu); RECOMP_ABI_CALL(0x00167BD0u, sub_00167BD0); /* call 0x00167BD0 */

loc_00051EFD: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x6E9460);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00051F0Du); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_00051F0D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00051F16u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_00051F16: ;
    ecx = MEM32(0x1809A8);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x1809B0) = esi;
    MEM32(0x1809A8) = ecx;
    MEM32(0x1809B4) = edi;
    PUSH32(esp, 0x00051F37u); RECOMP_ABI_CALL(0x00162600u, sub_00162600); /* call 0x00162600 */

loc_00051F37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00051F3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051E75; /* je: equal / zero */

loc_00051F46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00051F50
 * Original: 0x00051F50 - 0x0005200A (186 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051F50_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051F50: ;
    eax = MEM32(0x6E94CC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051F8B; /* je: equal / zero */

loc_00051F5C: ;
    eax = MEM32(0x6E9450);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00051F67u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051F64u); } /* indirect call */
    }

loc_00051F67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6E94CC) = esi;
    PUSH32(esp, 0x00051F75u); RECOMP_ABI_CALL(0x0004C9E0u, sub_0004C9E0); /* call 0x0004C9E0 */

loc_00051F75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051F7E; /* je: equal / zero */

loc_00051F79: ;
    PUSH32(esp, 0x00051F7Eu); RECOMP_ABI_CALL(0x0004C950u, sub_0004C950); /* call 0x0004C950 */

loc_00051F7E: ;
    PUSH32(esp, 0x235D50);
    PUSH32(esp, 0x00051F88u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051F88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00051F8B: ;
    eax = MEM32(0x6E9450);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051FA3; /* je: equal / zero */

loc_00051F94: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00051F9Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00051F97u); } /* indirect call */
    }

loc_00051F9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6E9450) = esi;

loc_00051FA3: ;
    _fa = (uint32_t)(MEM32(0x6E95B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E95B8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051FBE; /* je: equal / zero */

loc_00051FAB: ;
    PUSH32(esp, 0x235D3C);
    PUSH32(esp, 0x00051FB5u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051FB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6E95B8) = esi;

loc_00051FBE: ;
    _fa = (uint32_t)(MEM32(0x6E95B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E95B0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051FCC; /* je: equal / zero */

loc_00051FC6: ;
    MEM32(0x6E95B0) = esi;

loc_00051FCC: ;
    eax = MEM32(0x6E94C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051FF3; /* je: equal / zero */

loc_00051FD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00051FDBu); RECOMP_ABI_CALL(0x0010B080u, sub_0010B080); /* call 0x0010B080 */

loc_00051FDB: ;
    PUSH32(esp, 0x235D2C);
    PUSH32(esp, 0x00051FE5u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_00051FE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6E94C4) = esi;
    PUSH32(esp, 0x00051FF3u); RECOMP_ABI_CALL(0x0010B5F0u, sub_0010B5F0); /* call 0x0010B5F0 */

loc_00051FF3: ;
    MEM32(0x6E9458) = esi;
    PUSH32(esp, 0x00051FFEu); RECOMP_ABI_CALL(0x00051A30u, sub_00051A30); /* call 0x00051A30 */

loc_00051FFE: ;
    MEM32(0x6E94C8) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00052010
 * Original: 0x00052010 - 0x00052039 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052010: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00052019u); RECOMP_ICALL_SAFE(0x000ADB02u, _icall_esp); /* manual call 0x000ADB02 */
    }

loc_00052019: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00052038; /* jne: not equal / not zero */

loc_0005201E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00052038; /* je: equal / zero */

loc_0005202B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00052031u); RECOMP_ABI_CALL(0x000ADAEFu, sub_000ADAEF); /* call 0x000ADAEF */

loc_00052031: ;
    MEM32(esi + 8) = 0;

loc_00052038: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00052040
 * Original: 0x00052040 - 0x0005204C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052040(void)
{

loc_00052040: ;
    eax = MEM32(0x6E9800);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005204Bu); RECOMP_ICALL_SAFE(0x000ADB02u, _icall_esp); /* manual call 0x000ADB02 */
    }

loc_0005204B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00052050
 * Original: 0x00052050 - 0x00052069 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052050: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6E95C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E95C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052068; /* je: equal / zero */

loc_00052063: ;
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;

loc_00052068: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00052070
 * Original: 0x00052070 - 0x00052080 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052070: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6E95C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E95C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00052080
 * Original: 0x00052080 - 0x00052098 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00052080: ;
    eax = MEM32(0x6E9804);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6E95C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E95C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;
    g_seh_ebp = ebp; sub_00052040(); return; /* tail jmp 0x00052040 */

}

/**
 * sub_000520A0
 * Original: 0x000520A0 - 0x000520BC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000520A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000520A0: ;
    eax = MEM32(0x6E9804);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6E95C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E95C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    g_seh_ebp = ebp; sub_00052040(); return; /* tail jmp 0x00052040 */

}

/**
 * sub_000520C0
 * Original: 0x000520C0 - 0x000520F8 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000520C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000520C0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6E9804) = 0xFFFFFFFFu;
    MEM32(0x6E9808) = ecx;
    eax = 0x6E95C8;

loc_000520D7: ;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9808) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9808 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000520D7; /* jl: less (signed <) */

loc_000520EC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000520F2u); RECOMP_ABI_CALL(0x000ADB48u, sub_000ADB48); /* call 0x000ADB48 */

loc_000520F2: ;
    MEM32(0x6E9800) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00052100
 * Original: 0x00052100 - 0x00052136 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052100: ;
    PUSH32(esp, esi);
    MEM32(0x6E9804) = 0xFFFFFFFFu;
    esi = 0x6E95C8;

loc_00052110: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00052122; /* je: equal / zero */

loc_00052116: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005211Cu); RECOMP_ABI_CALL(0x000ADAEFu, sub_000ADAEF); /* call 0x000ADAEF */

loc_0005211C: ;
    MEM32(esi) = 0;

loc_00052122: ;
    MEM32(esi + -8) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9808) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6E9808 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00052110; /* jl: less (signed <) */

loc_00052134: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00052140
 * Original: 0x00052140 - 0x00052180 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052140: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6E95C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E95C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005217A; /* je: equal / zero */

loc_00052153: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0005216A; /* je: equal / zero */

loc_00052158: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00052160; /* je: equal / zero */

loc_0005215D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00052160: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005215D; /* je: equal / zero */

loc_00052166: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    goto loc_00052172;

loc_0005216A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005215D; /* je: equal / zero */

loc_00052170: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */

loc_00052172: ;
    if (TEST_Z(_fa, _fb)) goto loc_0005215D; /* je: equal / zero */

loc_00052174: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0005217A: ;
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00052180
 * Original: 0x00052180 - 0x00052186 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052180(void)
{

loc_00052180: ;
    eax = MEM32(0x6E9804);
    esp += 4; return; /* ret */

}

/**
 * sub_00052190
 * Original: 0x00052190 - 0x000521B8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052190: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6E95C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6E95C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000521B1; /* je: equal / zero */

loc_000521A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    ecx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_000521B4; /* je: equal / zero */

loc_000521AB: ;
    eax = 0x8001;
    esp += 4; return; /* ret */

loc_000521B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000521B4: ;
    SET_LO16(eax, LO16(ecx));
    esp += 4; return; /* ret */

}
