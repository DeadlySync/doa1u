/**
 * DOAU1 - Recompiled code chunk 58
 * Functions: 250 (0x001AD05D - 0x001B0032)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001AD05D
 * Original: 0x001AD05D - 0x001AD0B3 (86 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD05D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD05D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AD063u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AD063: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AD085; /* je: equal / zero */

loc_001AD06F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD07E; /* je: equal / zero */

loc_001AD073: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD07Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD078u); } /* indirect call */
    }

loc_001AD07E: ;
    eax = 0x80004005u;
    goto loc_001AD0AF;

loc_001AD085: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD09Bu); RECOMP_ABI_CALL(0x001AC326u, sub_001AC326); /* call 0x001AC326 */

loc_001AD09B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001AD0AC; /* je: equal / zero */

loc_001AD0A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD0ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD0A6u); } /* indirect call */
    }

loc_001AD0AC: ;
    eax = edi;
    POP32(esp, edi);

loc_001AD0AF: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD0B3
 * Original: 0x001AD0B3 - 0x001AD0CF (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD0B3_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD0B3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD0CCu); RECOMP_ABI_CALL(0x001AC4EDu, sub_001AC4ED); /* call 0x001AC4ED */

loc_001AD0CC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD0CF
 * Original: 0x001AD0CF - 0x001AD0EB (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD0CF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD0CF: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD0E8u); RECOMP_ABI_CALL(0x001AC53Bu, sub_001AC53B); /* call 0x001AC53B */

loc_001AD0E8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD0EB
 * Original: 0x001AD0EB - 0x001AD107 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD0EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD0EB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD104u); RECOMP_ABI_CALL(0x001AC589u, sub_001AC589); /* call 0x001AC589 */

loc_001AD104: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD107
 * Original: 0x001AD107 - 0x001AD127 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD107(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD107: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD124u); RECOMP_ABI_CALL(0x001AC5D7u, sub_001AC5D7); /* call 0x001AC5D7 */

loc_001AD124: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD127
 * Original: 0x001AD127 - 0x001AD14B (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD127(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD127: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD148u); RECOMP_ABI_CALL(0x001AC629u, sub_001AC629); /* call 0x001AC629 */

loc_001AD148: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AD14B
 * Original: 0x001AD14B - 0x001AD180 (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD14B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD14B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD17Cu); RECOMP_ABI_CALL(0x001AC67Fu, sub_001AC67F); /* call 0x001AC67F */

loc_001AD17C: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD180
 * Original: 0x001AD180 - 0x001AD1A0 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD19Du); RECOMP_ABI_CALL(0x001AC6E6u, sub_001AC6E6); /* call 0x001AC6E6 */

loc_001AD19D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD1A0
 * Original: 0x001AD1A0 - 0x001AD1C4 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD1A0: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD1C1u); RECOMP_ABI_CALL(0x001AC738u, sub_001AC738); /* call 0x001AC738 */

loc_001AD1C1: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD1C4
 * Original: 0x001AD1C4 - 0x001AD1E8 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD1C4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD1C4: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD1E5u); RECOMP_ABI_CALL(0x001AC78Eu, sub_001AC78E); /* call 0x001AC78E */

loc_001AD1E5: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD1E8
 * Original: 0x001AD1E8 - 0x001AD208 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD1E8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD1E8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD205u); RECOMP_ABI_CALL(0x001AC7E4u, sub_001AC7E4); /* call 0x001AC7E4 */

loc_001AD205: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD208
 * Original: 0x001AD208 - 0x001AD23D (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD208: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD239u); RECOMP_ABI_CALL(0x001AC836u, sub_001AC836); /* call 0x001AC836 */

loc_001AD239: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD23D
 * Original: 0x001AD23D - 0x001AD272 (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD23D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD23D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD26Eu); RECOMP_ABI_CALL(0x001AC89Du, sub_001AC89D); /* call 0x001AC89D */

loc_001AD26E: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD272
 * Original: 0x001AD272 - 0x001AD296 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD272(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD272: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD293u); RECOMP_ABI_CALL(0x001AC904u, sub_001AC904); /* call 0x001AC904 */

loc_001AD293: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD296
 * Original: 0x001AD296 - 0x001AD2BA (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD296(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD296: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD2B7u); RECOMP_ABI_CALL(0x001AC95Au, sub_001AC95A); /* call 0x001AC95A */

loc_001AD2B7: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD2BA
 * Original: 0x001AD2BA - 0x001AD2DE (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD2BA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD2BA: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD2DBu); RECOMP_ABI_CALL(0x001AC9B0u, sub_001AC9B0); /* call 0x001AC9B0 */

loc_001AD2DB: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD2DE
 * Original: 0x001AD2DE - 0x001AD302 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD2DE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD2DE: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD2FFu); RECOMP_ABI_CALL(0x001ACA06u, sub_001ACA06); /* call 0x001ACA06 */

loc_001AD2FF: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AD302
 * Original: 0x001AD302 - 0x001AD322 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD302(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD302: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD31Fu); RECOMP_ABI_CALL(0x001ACA5Cu, sub_001ACA5C); /* call 0x001ACA5C */

loc_001AD31F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD322
 * Original: 0x001AD322 - 0x001AD342 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD322(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AD322: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AD33Fu); RECOMP_ABI_CALL(0x001AC447u, sub_001AC447); /* call 0x001AC447 */

loc_001AD33F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD342
 * Original: 0x001AD342 - 0x001AD347 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD342(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD342: ;
    g_seh_ebp = ebp; sub_001ACAAE(); return; /* tail jmp 0x001ACAAE */

}

/**
 * sub_001AD347
 * Original: 0x001AD347 - 0x001AD34C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD347(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD347: ;
    g_seh_ebp = ebp; sub_001ACB00(); return; /* tail jmp 0x001ACB00 */

}

/**
 * sub_001AD34C
 * Original: 0x001AD34C - 0x001AD351 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD34C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD34C: ;
    g_seh_ebp = ebp; sub_001ACB52(); return; /* tail jmp 0x001ACB52 */

}

/**
 * sub_001AD351
 * Original: 0x001AD351 - 0x001AD356 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD351(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD351: ;
    g_seh_ebp = ebp; sub_001ACBA4(); return; /* tail jmp 0x001ACBA4 */

}

/**
 * sub_001AD356
 * Original: 0x001AD356 - 0x001AD35B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD356(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD356: ;
    g_seh_ebp = ebp; sub_001ACBFA(); return; /* tail jmp 0x001ACBFA */

}

/**
 * sub_001AD35B
 * Original: 0x001AD35B - 0x001AD384 (41 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD35B(void)
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

loc_001AD35B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD380u); RECOMP_ABI_CALL(0x001ACC54u, sub_001ACC54); /* call 0x001ACC54 */

loc_001AD380: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD384
 * Original: 0x001AD384 - 0x001AD389 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD384(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD384: ;
    g_seh_ebp = ebp; sub_001ACCBF(); return; /* tail jmp 0x001ACCBF */

}

/**
 * sub_001AD389
 * Original: 0x001AD389 - 0x001AD3A1 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD389(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD389: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001AD39Eu); RECOMP_ABI_CALL(0x001ACD15u, sub_001ACD15); /* call 0x001ACD15 */

loc_001AD39E: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD3A1
 * Original: 0x001AD3A1 - 0x001AD3B9 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD3A1(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD3A1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001AD3B6u); RECOMP_ABI_CALL(0x001ACD6Fu, sub_001ACD6F); /* call 0x001ACD6F */

loc_001AD3B6: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD3B9
 * Original: 0x001AD3B9 - 0x001AD3BE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD3B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD3B9: ;
    g_seh_ebp = ebp; sub_001ACDC9(); return; /* tail jmp 0x001ACDC9 */

}

/**
 * sub_001AD3BE
 * Original: 0x001AD3BE - 0x001AD3E7 (41 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD3BE(void)
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

loc_001AD3BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD3E3u); RECOMP_ABI_CALL(0x001ACE1Fu, sub_001ACE1F); /* call 0x001ACE1F */

loc_001AD3E3: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD3E7
 * Original: 0x001AD3E7 - 0x001AD410 (41 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD3E7(void)
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

loc_001AD3E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD40Cu); RECOMP_ABI_CALL(0x001ACE8Au, sub_001ACE8A); /* call 0x001ACE8A */

loc_001AD40C: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD410
 * Original: 0x001AD410 - 0x001AD428 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD410(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD410: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001AD425u); RECOMP_ABI_CALL(0x001ACEF5u, sub_001ACEF5); /* call 0x001ACEF5 */

loc_001AD425: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD428
 * Original: 0x001AD428 - 0x001AD440 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD428(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD428: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001AD43Du); RECOMP_ABI_CALL(0x001ACF4Fu, sub_001ACF4F); /* call 0x001ACF4F */

loc_001AD43D: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD440
 * Original: 0x001AD440 - 0x001AD458 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD440(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD440: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001AD455u); RECOMP_ABI_CALL(0x001ACFA9u, sub_001ACFA9); /* call 0x001ACFA9 */

loc_001AD455: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD458
 * Original: 0x001AD458 - 0x001AD45D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD458(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD458: ;
    g_seh_ebp = ebp; sub_001AD003(); return; /* tail jmp 0x001AD003 */

}

/**
 * sub_001AD45D
 * Original: 0x001AD45D - 0x001AD465 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD45D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD45D: ;
    g_seh_ebp = ebp; sub_001AD05D(); return; /* tail jmp 0x001AD05D */

    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD465
 * Original: 0x001AD465 - 0x001AD497 (50 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD465(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD465: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD46Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AD46F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AD497(); return; } /* je: equal / zero */

loc_001AD47E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD48D; /* je: equal / zero */

loc_001AD482: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD48Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD487u); } /* indirect call */
    }

loc_001AD48D: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AD52A(); return; /* tail jmp 0x001AD52A */

}

/**
 * sub_001AD497
 * Original: 0x001AD497 - 0x001AD52A (147 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD497(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD497: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AD4A2u); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001AD4A2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD515; /* jne: not equal / not zero */

loc_001AD4A9: ;
    esi = edi + 0x18;
    PUSH32(esp, ebx);
    ebx = esi;
    MEM32(ebp + 8) = 4;

loc_001AD4B6: ;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x001AD4BDu); RECOMP_ABI_CALL(0x001AB303u, sub_001AB303); /* call 0x001AB303 */

loc_001AD4BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AD4B6; /* jne: not equal / not zero */

loc_001AD4C5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AD4C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AD4CDu); RECOMP_ABI_CALL(0x001A95AEu, sub_001A95AE); /* call 0x001A95AE */

loc_001AD4CD: ;
    eax = MEM32(esi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD4D9u); RECOMP_ABI_CALL(0x001AB39Fu, sub_001AB39F); /* call 0x001AB39F */

loc_001AD4D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AD4E3; /* jl: less (signed <) */

loc_001AD4DD: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD4C7; /* jne: not equal / not zero */

loc_001AD4E3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD4F2; /* je: equal / zero */

loc_001AD4E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD4EFu); RECOMP_ABI_CALL(0x001A8E34u, sub_001A8E34); /* call 0x001A8E34 */

loc_001AD4EF: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AD4F2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD4C7; /* jb: below (unsigned <) */

loc_001AD4FB: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AD50D; /* je: equal / zero */

loc_001AD503: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD509u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AD509: ;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AD50D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AD513u); RECOMP_ABI_CALL(0x001A8B02u, sub_001A8B02); /* call 0x001A8B02 */

loc_001AD513: ;
    esi = eax;

loc_001AD515: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD526; /* je: equal / zero */

loc_001AD51B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD526u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD520u); } /* indirect call */
    }

loc_001AD526: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001AD52A(); return; /* fallthrough 0x001AD52A */

}

/**
 * sub_001AD52A
 * Original: 0x001AD52A - 0x001AD52E (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD52A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD52A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AD52E
 * Original: 0x001AD52E - 0x001AD57B (77 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD52E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD52E: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x281E58;
    if (CMP_EQ(_fa, _fb)) goto loc_001AD548; /* je: equal / zero */

loc_001AD541: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001AD548u); RECOMP_ABI_CALL(0x001ABCC9u, sub_001ABCC9); /* call 0x001ABCC9 */

loc_001AD548: ;
    edi = esi + 0xB4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD55D; /* je: equal / zero */

loc_001AD554: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD55Au); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AD55A: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AD55D: ;
    edi = esi + 0xB8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD572; /* je: equal / zero */

loc_001AD569: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD56Fu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AD56F: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AD572: ;
    POP32(esp, edi);
    MEM32(esi) = 0x281DFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AD57B
 * Original: 0x001AD57B - 0x001AD601 (134 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD57B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD57B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD594u); RECOMP_ABI_CALL(0x001AFFF5u, sub_001AFFF5); /* call 0x001AFFF5 */

loc_001AD594: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD5ED; /* je: equal / zero */

loc_001AD59A: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD5ED; /* jne: not equal / not zero */

loc_001AD5A3: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD5ED; /* je: equal / zero */

loc_001AD5A8: ;
    eax = ebp + -72;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = eax;

loc_001AD5B1: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AD5DF; /* jae: above or equal (unsigned >=) */

loc_001AD5B9: ;
    ecx = edi;
    edx = ebp + eax * 8 + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD5C4u); RECOMP_ABI_CALL(0x001A8B75u, sub_001A8B75); /* call 0x001A8B75 */

loc_001AD5C4: ;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + eax * 8 + -68) = ebx;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD5B1; /* jne: not equal / not zero */

loc_001AD5DF: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD5EAu); RECOMP_ABI_CALL(0x001ABBFEu, sub_001ABBFE); /* call 0x001ABBFE */

loc_001AD5EA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001AD5ED: ;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD5F5u); RECOMP_ABI_CALL(0x001A8F37u, sub_001A8F37); /* call 0x001A8F37 */

loc_001AD5F5: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD601
 * Original: 0x001AD601 - 0x001AD645 (68 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD601(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD601: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AD614u); RECOMP_ABI_CALL(0x001AD57Bu, sub_001AD57B); /* call 0x001AD57B */

loc_001AD614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD621; /* jne: not equal / not zero */

loc_001AD618: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD621u); RECOMP_ABI_CALL(0x001ABBFEu, sub_001ABBFE); /* call 0x001ABBFE */

loc_001AD621: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001AD629u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD626u); } /* indirect call */
    }

loc_001AD629: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AD641; /* jl: less (signed <) */

loc_001AD62D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001AD635u); RECOMP_ABI_CALL(0x001B53A9u, sub_001B53A9); /* call 0x001B53A9 */

loc_001AD635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AD641; /* jl: less (signed <) */

loc_001AD639: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001AD641u); RECOMP_ABI_CALL(0x001B5502u, sub_001B5502); /* call 0x001B5502 */

loc_001AD641: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD655
 * Original: 0x001AD655 - 0x001AD6A2 (77 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD655(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD655: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x80000000u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edi (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_001AD67D; /* jne: not equal / not zero */

loc_001AD66D: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD683; /* je: equal / zero */

loc_001AD677: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD67Du); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AD67D: ;
    MEM32(esi + 0xBC) = ebx;

loc_001AD683: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AD6C9(); return; } /* je: equal / zero */

loc_001AD690: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AD6A2(); return; } /* je: equal / zero */

loc_001AD697: ;
    MEM32(esi + 8) = MEM32(esi + 8) | edi;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xBC) = ecx;
    g_seh_ebp = ebp; sub_001AD6C9(); return; /* tail jmp 0x001AD6C9 */

}

/**
 * sub_001AD6A2
 * Original: 0x001AD6A2 - 0x001AD6C9 (39 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD6A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD6A2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x001AD6B2u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001AD6B2: ;
    MEM32(esi + 0xBC) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;

    g_seh_ebp = ebp; sub_001AD6C9(); return; /* fallthrough 0x001AD6C9 */

}

/**
 * sub_001AD6C9
 * Original: 0x001AD6C9 - 0x001AD6E1 (24 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD6C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD6C9: ;
    PUSH32(esp, MEM32(esi + 0xC0));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AD6D7u); RECOMP_ABI_CALL(0x001AC3F0u, sub_001AC3F0); /* call 0x001AC3F0 */

loc_001AD6D7: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD6E1
 * Original: 0x001AD6E1 - 0x001AD728 (71 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD6E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD6E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD6F8; /* jne: not equal / not zero */

loc_001AD6F0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001AD6FF; /* je: equal / zero */

loc_001AD6F8: ;
    MEM32(ebp + 0xC) = 1;

loc_001AD6FF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AD704u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AD704: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AD728(); return; } /* je: equal / zero */

loc_001AD712: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD721; /* je: equal / zero */

loc_001AD716: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD71Bu); } /* indirect call */
    }

loc_001AD721: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AD789(); return; /* tail jmp 0x001AD789 */

}

/**
 * sub_001AD728
 * Original: 0x001AD728 - 0x001AD789 (97 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD728(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD728: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xBC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD742; /* jne: not equal / not zero */

loc_001AD737: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD775; /* je: equal / zero */

loc_001AD742: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001AD74Du); RECOMP_ABI_CALL(0x001B69B5u, sub_001B69B5); /* call 0x001B69B5 */

loc_001AD74D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AD775; /* jl: less (signed <) */

loc_001AD753: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AD75Fu); RECOMP_ABI_CALL(0x001AD655u, sub_001AD655); /* call 0x001AD655 */

loc_001AD75F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AD775; /* jl: less (signed <) */

loc_001AD765: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD775; /* je: equal / zero */

loc_001AD76B: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001AD773u); RECOMP_ABI_CALL(0x001B682Cu, sub_001B682C); /* call 0x001B682C */

loc_001AD773: ;
    edi = eax;

loc_001AD775: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001AD787; /* je: equal / zero */

loc_001AD77C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AD787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD781u); } /* indirect call */
    }

loc_001AD787: ;
    eax = edi;

    g_seh_ebp = ebp; sub_001AD789(); return; /* fallthrough 0x001AD789 */

}

/**
 * sub_001AD789
 * Original: 0x001AD789 - 0x001AD78F (6 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD789: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AD7AA
 * Original: 0x001AD7AA - 0x001AD7CF (37 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD7AA(void)
{

loc_001AD7AA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 4;
    ecx = edi;
    PUSH32(esp, 0x001AD7BCu); RECOMP_ABI_CALL(0x001ABD9Cu, sub_001ABD9C); /* call 0x001ABD9C */

loc_001AD7BC: ;
    MEM32(edi) = 0x281E88;
    POP32(esp, edi);
    MEM32(esi) = 0x281E98;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AD7CF
 * Original: 0x001AD7CF - 0x001AD85B (140 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AD7CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD7CF: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x78;
    PUSH32(esp, 0x001AD7E4u); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001AD7E4: ;
    esi = MEM32(ebp + 0x78);
    ebx = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001AD804; /* je: equal / zero */

loc_001AD7F9: ;
    eax = eax | MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;

loc_001AD804: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AD80E; /* jne: not equal / not zero */

loc_001AD809: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD843; /* jne: not equal / not zero */

loc_001AD80E: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD81Fu); RECOMP_ABI_CALL(0x001B05FAu, sub_001B05FA); /* call 0x001B05FA */

loc_001AD81F: ;
    eax = esi + 0x44;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -32;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001AD83C; /* je: equal / zero */

loc_001AD830: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebp + -32;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001AD83C: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + 0x78);

loc_001AD843: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001AD85E(); return; } /* je: equal / zero */

loc_001AD84D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AD85B(); return; } /* je: equal / zero */

loc_001AD853: ;
    MEM16(ebp + 0x6E) = MEM16(ebp + 0x6E) | 0x7FF;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001AD85E(); return; /* tail jmp 0x001AD85E */

}

/**
 * sub_001AD85B
 * Original: 0x001AD85B - 0x001AD85E (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD85B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD85B: ;
    MEM32(ebp + 0x6C) = eax;

    g_seh_ebp = ebp; sub_001AD85E(); return; /* fallthrough 0x001AD85E */

}

/**
 * sub_001AD85E
 * Original: 0x001AD85E - 0x001ADA0F (433 bytes, 161 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD85E(void)
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

loc_001AD85E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD9D1; /* je: equal / zero */

loc_001AD866: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD9D1; /* je: equal / zero */

loc_001AD872: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x410001 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD889; /* jne: not equal / not zero */

loc_001AD87B: ;
    edx = MEM32(ebp + 0x68);
    eax = 0x18000000;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD8DD; /* je: equal / zero */

loc_001AD889: ;
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebx + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x1CEB58); PUSH32(esp, 0x001AD8A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD89Au); } /* indirect call */
    }

loc_001AD8A0: ;
    eax = ebx + 0x5C;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + 0x48;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001AD8BD; /* je: equal / zero */

loc_001AD8B1: ;
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 8;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = ebp + 0x48;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001AD8BD: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AD8D6; /* jnp: not parity */

loc_001AD8CC: ;
    eax = MEM32(ebp + 0x54);
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 0x10;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x68) = eax;

loc_001AD8D6: ;
    MEM8(ebp + 0x6B) = MEM8(ebp + 0x6B) | 0x18;
    _fa = (uint32_t)(MEM8(ebp + 0x6B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = MEM32(ebp + 0x78);

loc_001AD8DD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18400044) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x18400044 (32-bit) */
    edi = 0x20000000;
    if (TEST_NZ(_fa, _fb)) goto loc_001AD8F0; /* jne: not equal / not zero */

loc_001AD8EB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD947; /* jne: not equal / not zero */

loc_001AD8F0: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    PUSH32(esp, 0x001AD917u); RECOMP_ABI_CALL(0x001A8B83u, sub_001A8B83); /* call 0x001A8B83 */

loc_001AD917: ;
    fp_push(MEMF(ebx + 0x74)); /* fld float */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AD935; /* jp: parity */

loc_001AD926: ;
    fp_push(MEMF(ebx + 0x78)); /* fld float */
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AD944; /* jnp: not parity */

loc_001AD935: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + 0x64);
    MEM32(ebx + 0x78) = eax;

loc_001AD944: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001AD947: ;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fb = (uint32_t)(0x808) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0x6E), 0x808 (16-bit) */
    edi = 0x40000000;
    if (TEST_NZ(_fa, _fb)) goto loc_001AD959; /* jne: not equal / not zero */

loc_001AD954: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD986; /* jne: not equal / not zero */

loc_001AD959: ;
    eax = ebp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x1CEB60); PUSH32(esp, 0x001AD96Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD965u); } /* indirect call */
    }

loc_001AD96B: ;
    fp_push(MEMF(ebx + 0x70)); /* fld float */
    fp_push(MEMF(ebp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AD983; /* jnp: not parity */

loc_001AD97A: ;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x70) = eax;

loc_001AD983: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001AD986: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8420002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x8420002 (32-bit) */
    edi = 0x80000000u;
    if (TEST_NZ(_fa, _fb)) goto loc_001AD99D; /* jne: not equal / not zero */

loc_001AD994: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD9D1; /* je: equal / zero */

loc_001AD99D: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    { uint32_t _icall_target = MEM32(0x1CEB64); PUSH32(esp, 0x001AD9B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AD9B0u); } /* indirect call */
    }

loc_001AD9B6: ;
    fp_push(MEMF(ebx + 0x6C)); /* fld float */
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AD9CE; /* jnp: not parity */

loc_001AD9C5: ;
    eax = MEM32(ebp + 0x58);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x6C) = eax;

loc_001AD9CE: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001AD9D1: ;
    ecx = MEM32(ebp + 0x6C);
    eax = ecx;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    if ((_fa == 0)) goto loc_001AD9DE; /* je: equal / zero */

loc_001AD9DC: ;
    MEM32(esi) = eax;

loc_001AD9DE: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001AD9E9; /* je: equal / zero */

loc_001AD9E6: ;
    MEM32(esi + 4) = eax;

loc_001AD9E9: ;
    eax = 0xFFFF0000u;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001AD9F4; /* je: equal / zero */

loc_001AD9F2: ;
    MEM32(ebx) = ecx;

loc_001AD9F4: ;
    ecx = MEM32(ebp + 0x68);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001AD9FE; /* je: equal / zero */

loc_001AD9FB: ;
    MEM32(ebx + 4) = ecx;

loc_001AD9FE: ;
    ecx = ebp + 0x78;
    PUSH32(esp, 0x001ADA06u); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001ADA06: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ADA0F
 * Original: 0x001ADA0F - 0x001ADA5D (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADA0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADA0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ADA15u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ADA15: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ADA37; /* je: equal / zero */

loc_001ADA21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ADA30; /* je: equal / zero */

loc_001ADA25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADA2Au); } /* indirect call */
    }

loc_001ADA30: ;
    eax = 0x80004005u;
    goto loc_001ADA59;

loc_001ADA37: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001ADA45u); RECOMP_ABI_CALL(0x001AD601u, sub_001AD601); /* call 0x001AD601 */

loc_001ADA45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ADA56; /* je: equal / zero */

loc_001ADA4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADA56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADA50u); } /* indirect call */
    }

loc_001ADA56: ;
    eax = edi;
    POP32(esp, edi);

loc_001ADA59: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADA5D
 * Original: 0x001ADA5D - 0x001ADAAF (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADA5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADA5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ADA63u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ADA63: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001ADA85; /* je: equal / zero */

loc_001ADA6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ADA7E; /* je: equal / zero */

loc_001ADA73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADA7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADA78u); } /* indirect call */
    }

loc_001ADA7E: ;
    eax = 0x80004005u;
    goto loc_001ADAAB;

loc_001ADA85: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADA97u); RECOMP_ABI_CALL(0x001AD601u, sub_001AD601); /* call 0x001AD601 */

loc_001ADA97: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001ADAA8; /* je: equal / zero */

loc_001ADA9D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADAA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADAA2u); } /* indirect call */
    }

loc_001ADAA8: ;
    eax = edi;
    POP32(esp, edi);

loc_001ADAAB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADAAF
 * Original: 0x001ADAAF - 0x001ADACB (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADAAF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ADAAF: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ADAC8u); RECOMP_ABI_CALL(0x001ADA0Fu, sub_001ADA0F); /* call 0x001ADA0F */

loc_001ADAC8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADACB
 * Original: 0x001ADACB - 0x001ADAEB (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADACB_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ADACB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ADAE8u); RECOMP_ABI_CALL(0x001AD6E1u, sub_001AD6E1); /* call 0x001AD6E1 */

loc_001ADAE8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ADAEB
 * Original: 0x001ADAEB - 0x001ADAF5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADAEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADAEB: ;
    g_seh_ebp = ebp; sub_001ADA5D(); return; /* tail jmp 0x001ADA5D */

    g_seh_ebp = ebp; sub_001AD7CF(); return; /* tail jmp 0x001AD7CF */

}

/**
 * sub_001ADAF5
 * Original: 0x001ADAF5 - 0x001ADB84 (143 bytes, 51 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADAF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADAF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 0x3F);
    POP32(esp, ebp);
    MEM32(ebx + 4) = 1;
    MEM32(ebx) = 0x281ED4;
    edi = ebx + 0x38;
    esi = 0x1CE0EC;
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
    eax = ebx + 0x80;
    edx = 0xFFF;
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    edi = ebx + 0x84;
    POP32(esp, ecx);
    esi = 0x1CE0B8;
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
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    eax = MEM32(0x1CE4A4);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001ADB56; /* ja: above (unsigned >) */

loc_001ADB4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFC0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFC0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADB5B; /* je: equal / zero */

loc_001ADB56: ;
    PUSH32(esp, 0x001ADB5Bu); RECOMP_ABI_CALL(0x0015D43Eu, sub_0015D43E); /* call 0x0015D43E */

loc_001ADB5B: ;
    MEM32(0x1CE4A0) = eax;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = ebx + 0x10;
    eax = 0x1010101;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0);
    ecx = ebx;
    MEM8(ebx + 0x2F) = 0;
    PUSH32(esp, 0x001ADB7Du); RECOMP_ABI_CALL(0x001A9106u, sub_001A9106); /* call 0x001A9106 */

loc_001ADB7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ADB84
 * Original: 0x001ADB84 - 0x001ADBA0 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADB84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADB84: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x281DFC;
    if (TEST_Z(_fa, _fb)) goto loc_001ADB9A; /* je: equal / zero */

loc_001ADB94: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ADB9Au); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001ADB9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADBA0
 * Original: 0x001ADBA0 - 0x001ADBCE (46 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ADBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ADBA9u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ADBA9: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADBCE(); return; } /* je: equal / zero */

loc_001ADBB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ADBC7; /* je: equal / zero */

loc_001ADBBC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADBC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADBC1u); } /* indirect call */
    }

loc_001ADBC7: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001ADC36(); return; /* tail jmp 0x001ADC36 */

}

/**
 * sub_001ADBCE
 * Original: 0x001ADBCE - 0x001ADBF9 (43 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADBCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADBCE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    PUSH32(esp, 0x001ADBD9u); RECOMP_ABI_CALL(0x001A8A77u, sub_001A8A77); /* call 0x001A8A77 */

loc_001ADBD9: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADBEAu); RECOMP_ABI_CALL(0x001AD7CFu, sub_001AD7CF); /* call 0x001AD7CF */

loc_001ADBEA: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001ADBF2u); RECOMP_ABI_CALL(0x001B1F41u, sub_001B1F41); /* call 0x001B1F41 */

loc_001ADBF2: ;
    ebx = esi + 0x10;
    edi = MEM32(ebx);
    g_seh_ebp = ebp; sub_001ADC04(); return; /* tail jmp 0x001ADC04 */

}

/**
 * sub_001ADBF9
 * Original: 0x001ADBF9 - 0x001ADC04 (11 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADBF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADBF9: ;
    eax = edi + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADC02u); RECOMP_ABI_CALL(0x001A98B7u, sub_001A98B7); /* call 0x001A98B7 */

loc_001ADC02: ;
    edi = MEM32(edi);

    g_seh_ebp = ebp; sub_001ADC04(); return; /* fallthrough 0x001ADC04 */

}

/**
 * sub_001ADC04
 * Original: 0x001ADC04 - 0x001ADC36 (50 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001ADC04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADC04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADBF9(); return; } /* jne: not equal / not zero */

loc_001ADC08: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = edi;
    eax = MEM32(esi + 8);
    ecx = ebp + 8;
    MEM32(eax + 0x80) = edi;
    PUSH32(esp, 0x001ADC21u); RECOMP_ABI_CALL(0x001A8A9Cu, sub_001A8A9C); /* call 0x001A8A9C */

loc_001ADC21: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001ADC34; /* je: equal / zero */

loc_001ADC29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADC34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADC2Eu); } /* indirect call */
    }

loc_001ADC34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001ADC36(); return; /* fallthrough 0x001ADC36 */

}

/**
 * sub_001ADC36
 * Original: 0x001ADC36 - 0x001ADC3A (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADC36: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADC3A
 * Original: 0x001ADC3A - 0x001ADC55 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADC3A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001ADC42u); RECOMP_ABI_CALL(0x001AD52Eu, sub_001AD52E); /* call 0x001AD52E */

loc_001ADC42: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADC4F; /* je: equal / zero */

loc_001ADC49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ADC4Fu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001ADC4F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADC55
 * Original: 0x001ADC55 - 0x001ADC69 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADC55: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    MEM32(ebx + 8) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADC6E(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001ADC69(); return; /* fallthrough 0x001ADC69 */

}

/**
 * sub_001ADC69
 * Original: 0x001ADC69 - 0x001ADC6E (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADC69: ;
    MEM32(ebx + 0x20) = ebp;
    g_seh_ebp = ebp; sub_001ADC7C(); return; /* tail jmp 0x001ADC7C */

}

/**
 * sub_001ADC6E
 * Original: 0x001ADC6E - 0x001ADC7C (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADC6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADC69(); return; } /* jne: not equal / not zero */

loc_001ADC75: ;
    MEM32(ebx + 0x20) = 0x258;

    g_seh_ebp = ebp; sub_001ADC7C(); return; /* fallthrough 0x001ADC7C */

}

/**
 * sub_001ADC7C
 * Original: 0x001ADC7C - 0x001ADD57 (219 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADC7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001ADCEF; /* je: equal / zero */

loc_001ADC80: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x001ADC91u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001ADC91: ;
    ebp = eax;
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(0u - (uint32_t)(ebp));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebp = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0x7FF8FFF2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebp = ebp + 0x8007000Eu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xB4) = eax;
    if ((_fas < 0)) goto loc_001ADD50; /* js: sign (negative) */

loc_001ADCAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    edi = eax + 8;
    esi = 0x1CE154;
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
    edi = MEM32(ebx + 0xB4);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x1CE128;
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
    eax = MEM32(ebx + 0xB4);
    MEM32(eax) = 0x7FF0000;
    eax = MEM32(ebx + 0xB4);
    POP32(esp, edi);
    MEM32(eax + 0x7C) = 0x7F0000;
    POP32(esp, esi);

loc_001ADCEF: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), 0x400010 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001ADD20; /* je: equal / zero */

loc_001ADCF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x001ADD06u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001ADD06: ;
    MEM32(ebx + 0xB8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0xB) = MEM8(ebx + 0xB) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebp = eax;

loc_001ADD20: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001ADD50; /* jl: less (signed <) */

loc_001ADD24: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001ADD39u); RECOMP_ABI_CALL(0x001AD57Bu, sub_001AD57B); /* call 0x001AD57B */

loc_001ADD39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001ADD48; /* jne: not equal / not zero */

loc_001ADD3D: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x001ADD48u); RECOMP_ABI_CALL(0x001ABBFEu, sub_001ABBFE); /* call 0x001ABBFE */

loc_001ADD48: ;
    eax = MEM32(ebx + 0x20);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebx + 0x1C) = eax;

loc_001ADD50: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ADD57
 * Original: 0x001ADD57 - 0x001ADD7C (37 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADD57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADD57: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x281EB4;
    PUSH32(esp, 0x001ADD69u); RECOMP_ABI_CALL(0x001AD655u, sub_001AD655); /* call 0x001AD655 */

loc_001ADD69: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001ADD74u); RECOMP_ABI_CALL(0x001A9A40u, sub_001A9A40); /* call 0x001A9A40 */

loc_001ADD74: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001AD52E(); return; /* tail jmp 0x001AD52E */

}

/**
 * sub_001ADD7C
 * Original: 0x001ADD7C - 0x001ADDBC (64 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADD7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADD7C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x1BA3F0;
    if (TEST_NZ(_fa, _fb)) goto loc_001ADD96; /* jne: not equal / not zero */

loc_001ADD93: ;
    ecx = MEM32(esi + 0xC);

loc_001ADD96: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001ADDA2u); RECOMP_ABI_CALL(0x001ADC55u, sub_001ADC55); /* call 0x001ADC55 */

loc_001ADDA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ADDDC(); return; } /* jl: less (signed <) */

loc_001ADDA6: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADDBC(); return; } /* je: equal / zero */

loc_001ADDB1: ;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0xD4) = ecx;
    g_seh_ebp = ebp; sub_001ADDCB(); return; /* tail jmp 0x001ADDCB */

}

/**
 * sub_001ADDBC
 * Original: 0x001ADDBC - 0x001ADDCB (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADDBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADDBC: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADDCB(); return; } /* je: equal / zero */

loc_001ADDC1: ;
    MEM32(edi + 0xD4) = 0x1F;

    g_seh_ebp = ebp; sub_001ADDCB(); return; /* fallthrough 0x001ADDCB */

}

/**
 * sub_001ADDCB
 * Original: 0x001ADDCB - 0x001ADDDC (17 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADDCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADDCB: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADDDC(); return; } /* je: equal / zero */

loc_001ADDD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001ADDDCu); RECOMP_ABI_CALL(0x001AD655u, sub_001AD655); /* call 0x001AD655 */

    g_seh_ebp = ebp; sub_001ADDDC(); return; /* fallthrough 0x001ADDDC */

}

/**
 * sub_001ADDDC
 * Original: 0x001ADDDC - 0x001ADDE1 (5 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADDDC(void)
{

loc_001ADDDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADDE1
 * Original: 0x001ADDE1 - 0x001ADE0F (46 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADDE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADDE1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ADDE7u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ADDE7: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADE0F(); return; } /* je: equal / zero */

loc_001ADDF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ADE05; /* je: equal / zero */

loc_001ADDFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADE05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADDFFu); } /* indirect call */
    }

loc_001ADE05: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001ADEC4(); return; /* tail jmp 0x001ADEC4 */

}

/**
 * sub_001ADE0F
 * Original: 0x001ADE0F - 0x001ADE2F (32 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADE0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADE0F: ;
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x001ADE19u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ADE19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADE2F(); return; } /* je: equal / zero */

loc_001ADE1E: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x281EB4;
    ecx = eax;
    g_seh_ebp = ebp; sub_001ADE31(); return; /* tail jmp 0x001ADE31 */

}

/**
 * sub_001ADE2F
 * Original: 0x001ADE2F - 0x001ADE31 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADE2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADE2F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001ADE31(); return; /* fallthrough 0x001ADE31 */

}

/**
 * sub_001ADE31
 * Original: 0x001ADE31 - 0x001ADE82 (81 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADE31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADE31: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebp = 0x7FF8FFF2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = ecx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001ADEAC(); return; } /* js: sign (negative) */

loc_001ADE52: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x001ADE5Bu); RECOMP_ABI_CALL(0x001ADD7Cu, sub_001ADD7C); /* call 0x001ADD7C */

loc_001ADE5B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ADEAC(); return; } /* jl: less (signed <) */

loc_001ADE61: ;
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x001ADE6Bu); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ADE6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADE82(); return; } /* je: equal / zero */

loc_001ADE70: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x001ADE80u); RECOMP_ABI_CALL(0x001B6369u, sub_001B6369); /* call 0x001B6369 */

loc_001ADE80: ;
    g_seh_ebp = ebp; sub_001ADE84(); return; /* tail jmp 0x001ADE84 */

}

/**
 * sub_001ADE82
 * Original: 0x001ADE82 - 0x001ADE84 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001ADE82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADE82: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001ADE84(); return; /* fallthrough 0x001ADE84 */

}

/**
 * sub_001ADE84
 * Original: 0x001ADE84 - 0x001ADEAC (40 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADE84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADE84: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x20) = eax;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001ADEAC(); return; } /* js: sign (negative) */

loc_001ADE93: ;
    ecx = eax;
    PUSH32(esp, 0x001ADE9Au); RECOMP_ABI_CALL(0x001B6808u, sub_001B6808); /* call 0x001B6808 */

loc_001ADE9A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ADEAC(); return; } /* jl: less (signed <) */

loc_001ADEA0: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ADEACu); RECOMP_ABI_CALL(0x001ABDE1u, sub_001ABDE1); /* call 0x001ABDE1 */

    g_seh_ebp = ebp; sub_001ADEAC(); return; /* fallthrough 0x001ADEAC */

}

/**
 * sub_001ADEAC
 * Original: 0x001ADEAC - 0x001ADEC4 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADEAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADEAC: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ADEBE; /* je: equal / zero */

loc_001ADEB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001ADEBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ADEB8u); } /* indirect call */
    }

loc_001ADEBE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_001ADEC4(); return; /* fallthrough 0x001ADEC4 */

}

/**
 * sub_001ADEC4
 * Original: 0x001ADEC4 - 0x001ADEC8 (4 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADEC4(void)
{

loc_001ADEC4: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADEC8
 * Original: 0x001ADEC8 - 0x001ADEE9 (33 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADEC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADEC8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x281EC4;
    PUSH32(esp, 0x001ADED6u); RECOMP_ABI_CALL(0x001AD52Eu, sub_001AD52E); /* call 0x001AD52E */

loc_001ADED6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADEE3; /* je: equal / zero */

loc_001ADEDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ADEE3u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001ADEE3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADEE9
 * Original: 0x001ADEE9 - 0x001ADF22 (57 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADEE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADEE9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x001ADEFEu); RECOMP_ABI_CALL(0x001ADC55u, sub_001ADC55); /* call 0x001ADC55 */

loc_001ADEFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ADF1D; /* jl: less (signed <) */

loc_001ADF02: ;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0xBC) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC0) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0xC4) = ecx;

loc_001ADF1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADF22
 * Original: 0x001ADF22 - 0x001ADF42 (32 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADF22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADF22: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x001ADF2Cu); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ADF2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADF42(); return; } /* je: equal / zero */

loc_001ADF31: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x281EC4;
    ecx = eax;
    g_seh_ebp = ebp; sub_001ADF44(); return; /* tail jmp 0x001ADF44 */

}

/**
 * sub_001ADF42
 * Original: 0x001ADF42 - 0x001ADF44 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADF42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADF42: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001ADF44(); return; /* fallthrough 0x001ADF44 */

}

/**
 * sub_001ADF44
 * Original: 0x001ADF44 - 0x001ADF93 (79 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADF44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADF44: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x20) = ecx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001ADFC4(); return; } /* js: sign (negative) */

loc_001ADF63: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001ADF6Cu); RECOMP_ABI_CALL(0x001ADEE9u, sub_001ADEE9); /* call 0x001ADEE9 */

loc_001ADF6C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ADFC4(); return; } /* jl: less (signed <) */

loc_001ADF72: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x001ADF7Cu); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001ADF7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001ADF93(); return; } /* je: equal / zero */

loc_001ADF81: ;
    PUSH32(esp, MEM32(edi + 0x20));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x001ADF91u); RECOMP_ABI_CALL(0x001B2A6Du, sub_001B2A6D); /* call 0x001B2A6D */

loc_001ADF91: ;
    g_seh_ebp = ebp; sub_001ADF95(); return; /* tail jmp 0x001ADF95 */

}

/**
 * sub_001ADF93
 * Original: 0x001ADF93 - 0x001ADF95 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001ADF93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADF93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001ADF95(); return; /* fallthrough 0x001ADF95 */

}

/**
 * sub_001ADF95
 * Original: 0x001ADF95 - 0x001ADFC4 (47 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADF95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADF95: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x24) = eax;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001ADFC4(); return; } /* js: sign (negative) */

loc_001ADFA8: ;
    ecx = eax;
    PUSH32(esp, 0x001ADFAFu); RECOMP_ABI_CALL(0x001B25ABu, sub_001B25AB); /* call 0x001B25AB */

loc_001ADFAF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001ADFC4(); return; } /* jl: less (signed <) */

loc_001ADFB5: ;
    PUSH32(esp, MEM32(edi + 0x20));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ADFC4u); RECOMP_ABI_CALL(0x001ABDE1u, sub_001ABDE1); /* call 0x001ABDE1 */

    g_seh_ebp = ebp; sub_001ADFC4(); return; /* fallthrough 0x001ADFC4 */

}

/**
 * sub_001ADFC4
 * Original: 0x001ADFC4 - 0x001ADFCC (8 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADFC4(void)
{

loc_001ADFC4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADFCC
 * Original: 0x001ADFCC - 0x001ADFE4 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADFCC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ADFCC: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ADFE1u); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001ADFE1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADFE4
 * Original: 0x001ADFE4 - 0x001AE00E (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADFE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADFE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ADFEBu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001ADFEB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE00E(); return; } /* je: equal / zero */

loc_001ADFF8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE007; /* je: equal / zero */

loc_001ADFFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE007u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE001u); } /* indirect call */
    }

loc_001AE007: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AE07B(); return; /* tail jmp 0x001AE07B */

}

/**
 * sub_001AE00E
 * Original: 0x001AE00E - 0x001AE05F (81 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE00E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE00E: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x001AE015u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AE015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AE027; /* je: equal / zero */

loc_001AE01A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x001AE025u); RECOMP_ABI_CALL(0x001AC414u, sub_001AC414); /* call 0x001AC414 */

loc_001AE025: ;
    edi = eax;

loc_001AE027: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AE05F(); return; } /* js: sign (negative) */

loc_001AE03C: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AE046u); RECOMP_ABI_CALL(0x001ADDE1u, sub_001ADDE1); /* call 0x001ADDE1 */

loc_001AE046: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AE05F(); return; } /* jl: less (signed <) */

loc_001AE04C: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1C)) >> 32) & 1);
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001AE069(); return; /* tail jmp 0x001AE069 */

}

/**
 * sub_001AE05F
 * Original: 0x001AE05F - 0x001AE069 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE05F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE05F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE069(); return; } /* je: equal / zero */

loc_001AE063: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001AE069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE066u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001AE069(); return; /* fallthrough 0x001AE069 */

}

/**
 * sub_001AE069
 * Original: 0x001AE069 - 0x001AE07B (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE069: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE078; /* je: equal / zero */

loc_001AE06D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE072u); } /* indirect call */
    }

loc_001AE078: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001AE07B(); return; /* fallthrough 0x001AE07B */

}

/**
 * sub_001AE07B
 * Original: 0x001AE07B - 0x001AE080 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE07B(void)
{

loc_001AE07B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE080
 * Original: 0x001AE080 - 0x001AE0AA (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AE087u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE087: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE0AA(); return; } /* je: equal / zero */

loc_001AE094: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE0A3; /* je: equal / zero */

loc_001AE098: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE0A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE09Du); } /* indirect call */
    }

loc_001AE0A3: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AE10C(); return; /* tail jmp 0x001AE10C */

}

/**
 * sub_001AE0AA
 * Original: 0x001AE0AA - 0x001AE0F0 (70 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE0AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE0AA: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001AE0B1u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AE0B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AE0C3; /* je: equal / zero */

loc_001AE0B6: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x001AE0C1u); RECOMP_ABI_CALL(0x001AD7AAu, sub_001AD7AA); /* call 0x001AD7AA */

loc_001AE0C1: ;
    edi = eax;

loc_001AE0C3: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AE0F0(); return; } /* js: sign (negative) */

loc_001AE0D8: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AE0E2u); RECOMP_ABI_CALL(0x001ADF22u, sub_001ADF22); /* call 0x001ADF22 */

loc_001AE0E2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AE0F0(); return; } /* jl: less (signed <) */

loc_001AE0E8: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = edi;
    g_seh_ebp = ebp; sub_001AE0FA(); return; /* tail jmp 0x001AE0FA */

}

/**
 * sub_001AE0F0
 * Original: 0x001AE0F0 - 0x001AE0FA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE0F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE0FA(); return; } /* je: equal / zero */

loc_001AE0F4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001AE0FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE0F7u); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001AE0FA(); return; /* fallthrough 0x001AE0FA */

}

/**
 * sub_001AE0FA
 * Original: 0x001AE0FA - 0x001AE10C (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE0FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE0FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE109; /* je: equal / zero */

loc_001AE0FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE103u); } /* indirect call */
    }

loc_001AE109: ;
    eax = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001AE10C(); return; /* fallthrough 0x001AE10C */

}

/**
 * sub_001AE10C
 * Original: 0x001AE10C - 0x001AE111 (5 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE10C(void)
{

loc_001AE10C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE111
 * Original: 0x001AE111 - 0x001AE1F6 (229 bytes, 73 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE111(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE111: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AE117u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE117: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AE13C; /* je: equal / zero */

loc_001AE123: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE132; /* je: equal / zero */

loc_001AE127: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE132u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE12Cu); } /* indirect call */
    }

loc_001AE132: ;
    eax = 0x80004005u;
    goto loc_001AE1F2;

loc_001AE13C: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    MEM32(edx + 0x38) = edi;
    edi = MEM32(ecx + 8);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x3C) = edi;
    edi = MEM32(ecx + 0xC);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x40) = edi;
    edi = MEM32(ecx + 0x10);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x44) = edi;
    edi = MEM32(ecx + 0x14);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x48) = edi;
    edi = MEM32(ecx + 0x18);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x4C) = edi;
    edi = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x50) = edi;
    edi = MEM32(ecx + 0x20);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x54) = edi;
    edi = MEM32(ecx + 0x24);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x58) = edi;
    edi = MEM32(ecx + 0x28);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x5C) = edi;
    edi = MEM32(ecx + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x60) = edi;
    edi = MEM32(ecx + 0x30);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x64) = edi;
    edi = MEM32(ecx + 0x34);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x68) = edi;
    edi = MEM32(ecx + 0x38);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x6C) = edi;
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x70) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) | 0x3F;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AE1E1; /* jne: not equal / not zero */

loc_001AE1DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE1E1u); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE1E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE1F0; /* je: equal / zero */

loc_001AE1E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE1F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE1EAu); } /* indirect call */
    }

loc_001AE1F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AE1F2: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE1F6
 * Original: 0x001AE1F6 - 0x001AE255 (95 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE1F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE1F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AE1FCu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE1FC: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AE21E; /* je: equal / zero */

loc_001AE208: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE217; /* je: equal / zero */

loc_001AE20C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE217u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE211u); } /* indirect call */
    }

loc_001AE217: ;
    eax = 0x80004005u;
    goto loc_001AE251;

loc_001AE21E: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x68) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AE240; /* jne: not equal / not zero */

loc_001AE23A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE240u); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE240: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE24F; /* je: equal / zero */

loc_001AE244: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE24Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE249u); } /* indirect call */
    }

loc_001AE24F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AE251: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE255
 * Original: 0x001AE255 - 0x001AE2B4 (95 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE255(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE255: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AE25Bu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE25B: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AE27D; /* je: equal / zero */

loc_001AE267: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE276; /* je: equal / zero */

loc_001AE26B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE276u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE270u); } /* indirect call */
    }

loc_001AE276: ;
    eax = 0x80004005u;
    goto loc_001AE2B0;

loc_001AE27D: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x70) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 0x20;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AE29F; /* jne: not equal / not zero */

loc_001AE299: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE29Fu); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE29F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE2AE; /* je: equal / zero */

loc_001AE2A3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE2AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE2A8u); } /* indirect call */
    }

loc_001AE2AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AE2B0: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE2B4
 * Original: 0x001AE2B4 - 0x001AE313 (95 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE2B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE2B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AE2BAu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE2BA: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AE2DC; /* je: equal / zero */

loc_001AE2C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE2D5; /* je: equal / zero */

loc_001AE2CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE2D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE2CFu); } /* indirect call */
    }

loc_001AE2D5: ;
    eax = 0x80004005u;
    goto loc_001AE30F;

loc_001AE2DC: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x6C) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 0x10;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AE2FE; /* jne: not equal / not zero */

loc_001AE2F8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE2FEu); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE2FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE30D; /* je: equal / zero */

loc_001AE302: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE30Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE307u); } /* indirect call */
    }

loc_001AE30D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AE30F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE313
 * Original: 0x001AE313 - 0x001AE3A0 (141 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE313: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE31Cu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE31C: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_001AE33E; /* je: equal / zero */

loc_001AE328: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE337; /* je: equal / zero */

loc_001AE32C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE337u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE331u); } /* indirect call */
    }

loc_001AE337: ;
    eax = 0x80004005u;
    goto loc_001AE39B;

loc_001AE33E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x50) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x54) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x58) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x5C) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x60) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x20);
    MEM32(ecx + 0x64) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AE38A; /* jne: not equal / not zero */

loc_001AE384: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE38Au); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE38A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE399; /* je: equal / zero */

loc_001AE38E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE393u); } /* indirect call */
    }

loc_001AE399: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AE39B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001AE3A0
 * Original: 0x001AE3A0 - 0x001AE3CB (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE3A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE3A9u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE3A9: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE3CB(); return; } /* je: equal / zero */

loc_001AE3B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE3C4; /* je: equal / zero */

loc_001AE3B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE3C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE3BEu); } /* indirect call */
    }

loc_001AE3C4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AE40E(); return; /* tail jmp 0x001AE40E */

}

/**
 * sub_001AE3CB
 * Original: 0x001AE3CB - 0x001AE40E (67 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AE3CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE3CB: ;
    ecx = MEM32(ebp + 8);
    eax = ecx + 8;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edx + 0x38) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x10);
    MEM32(edx + 0x3C) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x14);
    MEM32(edx + 0x40) = edi;
    eax = MEM32(eax);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AE3FD; /* jne: not equal / not zero */

loc_001AE3F7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE3FDu); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE3FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE40C; /* je: equal / zero */

loc_001AE401: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE40Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE406u); } /* indirect call */
    }

loc_001AE40C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AE40E(); return; /* fallthrough 0x001AE40E */

}

/**
 * sub_001AE40E
 * Original: 0x001AE40E - 0x001AE413 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE40E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE40E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AE413
 * Original: 0x001AE413 - 0x001AE43E (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE413(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE413: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE41Cu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE41C: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE43E(); return; } /* je: equal / zero */

loc_001AE428: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE437; /* je: equal / zero */

loc_001AE42C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE431u); } /* indirect call */
    }

loc_001AE437: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AE481(); return; /* tail jmp 0x001AE481 */

}

/**
 * sub_001AE43E
 * Original: 0x001AE43E - 0x001AE481 (67 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AE43E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE43E: ;
    ecx = MEM32(ebp + 8);
    eax = ecx + 8;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edx + 0x44) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x10);
    MEM32(edx + 0x48) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x14);
    MEM32(edx + 0x4C) = edi;
    eax = MEM32(eax);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AE470; /* jne: not equal / not zero */

loc_001AE46A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE470u); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

loc_001AE470: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE47F; /* je: equal / zero */

loc_001AE474: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE47Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE479u); } /* indirect call */
    }

loc_001AE47F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AE481(); return; /* fallthrough 0x001AE481 */

}

/**
 * sub_001AE481
 * Original: 0x001AE481 - 0x001AE486 (5 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE481(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE481: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AE486
 * Original: 0x001AE486 - 0x001AE4B3 (45 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE486(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE486: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001AE48Fu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE48F: ;
    _fa = (uint32_t)(MEM32(0x1CE4A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE4A8), edi (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE4B3(); return; } /* je: equal / zero */

loc_001AE49A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE4A9; /* je: equal / zero */

loc_001AE49E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE4A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE4A3u); } /* indirect call */
    }

loc_001AE4A9: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_001AE589(); return; /* tail jmp 0x001AE589 */

}

/**
 * sub_001AE4B3
 * Original: 0x001AE4B3 - 0x001AE4CA (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE4B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE4B3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE4CA(); return; } /* jne: not equal / not zero */

loc_001AE4C0: ;
    edi = 0x88780032u;
    g_seh_ebp = ebp; sub_001AE578(); return; /* tail jmp 0x001AE578 */

}

/**
 * sub_001AE4CA
 * Original: 0x001AE4CA - 0x001AE578 (174 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE4CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE4CA: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    MEM32(edx + 0x84) = ebx;
    ebx = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x88) = ebx;
    ebx = MEM32(ecx + 8);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x8C) = ebx;
    ebx = MEM32(ecx + 0xC);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x90) = ebx;
    ebx = MEM32(ecx + 0x10);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x94) = ebx;
    ebx = MEM32(ecx + 0x14);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x98) = ebx;
    ebx = MEM32(ecx + 0x18);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x9C) = ebx;
    ebx = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA0) = ebx;
    ebx = MEM32(ecx + 0x20);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA4) = ebx;
    ebx = MEM32(ecx + 0x24);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA8) = ebx;
    ebx = MEM32(ecx + 0x28);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xAC) = ebx;
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xB0) = ecx;
    ecx = MEM32(eax + 8);
    MEM16(ecx + 0x80) = MEM16(ecx + 0x80) | 0xFFF;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE578(); return; } /* jne: not equal / not zero */

loc_001AE572: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE578u); RECOMP_ABI_CALL(0x001ADBA0u, sub_001ADBA0); /* call 0x001ADBA0 */

    g_seh_ebp = ebp; sub_001AE578(); return; /* fallthrough 0x001AE578 */

}

/**
 * sub_001AE578
 * Original: 0x001AE578 - 0x001AE589 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE578(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE578: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE587; /* je: equal / zero */

loc_001AE57C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE581u); } /* indirect call */
    }

loc_001AE587: ;
    eax = edi;

    g_seh_ebp = ebp; sub_001AE589(); return; /* fallthrough 0x001AE589 */

}

/**
 * sub_001AE589
 * Original: 0x001AE589 - 0x001AE58E (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE589(void)
{

loc_001AE589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE58E
 * Original: 0x001AE58E - 0x001AE5A9 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE58E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE58E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001AE596u); RECOMP_ABI_CALL(0x001ADD57u, sub_001ADD57); /* call 0x001ADD57 */

loc_001AE596: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AE5A3; /* je: equal / zero */

loc_001AE59D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AE5A3u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AE5A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AE5A9
 * Original: 0x001AE5A9 - 0x001AE5CD (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE5A9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AE5A9: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE5CAu); RECOMP_ABI_CALL(0x001ADFE4u, sub_001ADFE4); /* call 0x001ADFE4 */

loc_001AE5CA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE5CD
 * Original: 0x001AE5CD - 0x001AE5F1 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE5CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AE5CD: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE5EEu); RECOMP_ABI_CALL(0x001AE080u, sub_001AE080); /* call 0x001AE080 */

loc_001AE5EE: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE5F1
 * Original: 0x001AE5F1 - 0x001AE611 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE5F1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AE5F1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE60Eu); RECOMP_ABI_CALL(0x001AE111u, sub_001AE111); /* call 0x001AE111 */

loc_001AE60E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE611
 * Original: 0x001AE611 - 0x001AE635 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE611(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AE611: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE632u); RECOMP_ABI_CALL(0x001AE1F6u, sub_001AE1F6); /* call 0x001AE1F6 */

loc_001AE632: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AE635
 * Original: 0x001AE635 - 0x001AE659 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE635(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AE635: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE656u); RECOMP_ABI_CALL(0x001AE255u, sub_001AE255); /* call 0x001AE255 */

loc_001AE656: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AE659
 * Original: 0x001AE659 - 0x001AE6A3 (74 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AE659: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE69Fu); RECOMP_ABI_CALL(0x001AE313u, sub_001AE313); /* call 0x001AE313 */

loc_001AE69F: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AE6A3
 * Original: 0x001AE6A3 - 0x001AE6D8 (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE6A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AE6A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE6D4u); RECOMP_ABI_CALL(0x001AE3A0u, sub_001AE3A0); /* call 0x001AE3A0 */

loc_001AE6D4: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AE6D8
 * Original: 0x001AE6D8 - 0x001AE6FC (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE6D8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AE6D8: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE6F9u); RECOMP_ABI_CALL(0x001AE2B4u, sub_001AE2B4); /* call 0x001AE2B4 */

loc_001AE6F9: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AE6FC
 * Original: 0x001AE6FC - 0x001AE731 (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE6FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AE6FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE72Du); RECOMP_ABI_CALL(0x001AE413u, sub_001AE413); /* call 0x001AE413 */

loc_001AE72D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AE731
 * Original: 0x001AE731 - 0x001AE751 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE731(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AE731: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE74Eu); RECOMP_ABI_CALL(0x001AE486u, sub_001AE486); /* call 0x001AE486 */

loc_001AE74E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE751
 * Original: 0x001AE751 - 0x001AE76F (30 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE751(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE751: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xB4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE761u); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AE761: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE76F(); return; } /* je: equal / zero */

loc_001AE766: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE76Du); RECOMP_ABI_CALL(0x001ADAF5u, sub_001ADAF5); /* call 0x001ADAF5 */

loc_001AE76D: ;
    g_seh_ebp = ebp; sub_001AE771(); return; /* tail jmp 0x001AE771 */

}

/**
 * sub_001AE76F
 * Original: 0x001AE76F - 0x001AE771 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AE76F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE76F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AE771(); return; /* fallthrough 0x001AE771 */

}

/**
 * sub_001AE771
 * Original: 0x001AE771 - 0x001AE7AF (62 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE771: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = 0x7FF8FFF2;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AE883(); return; } /* js: sign (negative) */

loc_001AE792: ;
    PUSH32(esp, 0x540);
    PUSH32(esp, 0x001AE79Cu); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AE79C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE7AF(); return; } /* je: equal / zero */

loc_001AE7A1: ;
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    PUSH32(esp, 0x001AE7ABu); RECOMP_ABI_CALL(0x001B177Cu, sub_001B177C); /* call 0x001B177C */

loc_001AE7AB: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_001AE7B1(); return; /* tail jmp 0x001AE7B1 */

}

/**
 * sub_001AE7AF
 * Original: 0x001AE7AF - 0x001AE7B1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE7AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE7AF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AE7B1(); return; /* fallthrough 0x001AE7B1 */

}

/**
 * sub_001AE7B1
 * Original: 0x001AE7B1 - 0x001AE883 (210 bytes, 77 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE7B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE7B1: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AE883(); return; } /* js: sign (negative) */

loc_001AE7C4: ;
    PUSH32(esp, 0x001AE7C9u); RECOMP_ABI_CALL(0x001B2353u, sub_001B2353); /* call 0x001B2353 */

loc_001AE7C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AE883(); return; } /* jl: less (signed <) */

loc_001AE7D1: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x10);
    edi = ebp + -32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -96;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x40);
    eax = ebp + -96;
    PUSH32(esp, 0x626F5344);
    MEM32(ebp + -32) = 0x18;
    MEM32(ebp + -20) = 0x1BA42C;
    MEM32(ebp + -8) = 8;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x001AE812u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001AE812: ;
    MEM32(esi + 0x28) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AE883(); return; } /* js: sign (negative) */

loc_001AE822: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = edi;
    ebx = esi + 0x18;

loc_001AE82A: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE883(); return; } /* jae: above or equal (unsigned >=) */

loc_001AE832: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AE834: ;
    edx = ecx + eax;
    MEM32(ebp + eax * 8 + -96) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001AE834; /* jb: below (unsigned <) */

loc_001AE841: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x1F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001AE84A; /* jne: not equal / not zero */

loc_001AE847: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001AE84A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AE856u); RECOMP_ABI_CALL(0x001ADFE4u, sub_001ADFE4); /* call 0x001ADFE4 */

loc_001AE856: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001AE878; /* jl: less (signed <) */

loc_001AE85A: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE868u); RECOMP_ABI_CALL(0x001ADACBu, sub_001ADACB); /* call 0x001ADACB */

loc_001AE868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001AE878; /* jl: less (signed <) */

loc_001AE86C: ;
    eax = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE878u); RECOMP_ABI_CALL(0x001AB2BBu, sub_001AB2BB); /* call 0x001AB2BB */

loc_001AE878: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(8)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001AE82A; /* jge: greater or equal (signed >=) */

    g_seh_ebp = ebp; sub_001AE883(); return; /* fallthrough 0x001AE883 */

}

/**
 * sub_001AE883
 * Original: 0x001AE883 - 0x001AE88A (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE883(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE883: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AE88A
 * Original: 0x001AE88A - 0x001AE8A4 (26 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE88A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE88A: ;
    eax = MEM32(0x1CEB28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE8A4(); return; } /* je: equal / zero */

loc_001AE896: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE89Cu); RECOMP_ABI_CALL(0x001AA907u, sub_001AA907); /* call 0x001AA907 */

loc_001AE89C: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_001AE8F1(); return; /* tail jmp 0x001AE8F1 */

}

/**
 * sub_001AE8A4
 * Original: 0x001AE8A4 - 0x001AE8BC (24 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE8A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x001AE8ACu); RECOMP_ABI_CALL(0x001A89F6u, sub_001A89F6); /* call 0x001A89F6 */

loc_001AE8AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE8BC(); return; } /* je: equal / zero */

loc_001AE8B1: ;
    ecx = eax;
    PUSH32(esp, 0x001AE8B8u); RECOMP_ABI_CALL(0x001A9128u, sub_001A9128); /* call 0x001A9128 */

loc_001AE8B8: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001AE8BE(); return; /* tail jmp 0x001AE8BE */

}

/**
 * sub_001AE8BC
 * Original: 0x001AE8BC - 0x001AE8BE (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE8BC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AE8BE(); return; /* fallthrough 0x001AE8BE */

}

/**
 * sub_001AE8BE
 * Original: 0x001AE8BE - 0x001AE8E6 (40 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE8BE: ;
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_001AE8E6(); return; } /* js: sign (negative) */

loc_001AE8D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AE8D8u); RECOMP_ABI_CALL(0x001AE751u, sub_001AE751); /* call 0x001AE751 */

loc_001AE8D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AE8E6(); return; } /* jl: less (signed <) */

loc_001AE8DE: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    g_seh_ebp = ebp; sub_001AE8F0(); return; /* tail jmp 0x001AE8F0 */

}

/**
 * sub_001AE8E6
 * Original: 0x001AE8E6 - 0x001AE8F0 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE8E6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AE8F0(); return; } /* je: equal / zero */

loc_001AE8EA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001AE8F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE8EDu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001AE8F0(); return; /* fallthrough 0x001AE8F0 */

}

/**
 * sub_001AE8F0
 * Original: 0x001AE8F0 - 0x001AE8F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE8F0: ;
    POP32(esp, edi);

    g_seh_ebp = ebp; sub_001AE8F1(); return; /* fallthrough 0x001AE8F1 */

}

/**
 * sub_001AE8F1
 * Original: 0x001AE8F1 - 0x001AE8F7 (6 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8F1(void)
{

loc_001AE8F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AE8F7
 * Original: 0x001AE8F7 - 0x001AE93E (71 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE8F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AE8F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE902u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE902: ;
    esi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE90Eu); RECOMP_ABI_CALL(0x001AE88Au, sub_001AE88A); /* call 0x001AE88A */

loc_001AE90E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001AE927; /* jl: less (signed <) */

loc_001AE914: ;
    eax = MEM32(ebp + -4);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_001AE927: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE936; /* je: equal / zero */

loc_001AE92B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE936u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE930u); } /* indirect call */
    }

loc_001AE936: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE93E
 * Original: 0x001AE93E - 0x001AE995 (87 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE93E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE93E: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE94Eu); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE94E: ;
    edi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE95Au); RECOMP_ABI_CALL(0x001AE88Au, sub_001AE88A); /* call 0x001AE88A */

loc_001AE95A: ;
    esi = MEM32(ebp + -4);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE973; /* jl: less (signed <) */

loc_001AE963: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE971u); RECOMP_ABI_CALL(0x001ADFE4u, sub_001ADFE4); /* call 0x001ADFE4 */

loc_001AE971: ;
    ebx = eax;

loc_001AE973: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE97D; /* je: equal / zero */

loc_001AE977: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001AE97Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE97Au); } /* indirect call */
    }

loc_001AE97D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE98C; /* je: equal / zero */

loc_001AE981: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE98Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE986u); } /* indirect call */
    }

loc_001AE98C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AE995
 * Original: 0x001AE995 - 0x001AE9EC (87 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AE995(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE995: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE9A5u); RECOMP_ABI_CALL(0x001A8C90u, sub_001A8C90); /* call 0x001A8C90 */

loc_001AE9A5: ;
    edi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE9B1u); RECOMP_ABI_CALL(0x001AE88Au, sub_001AE88A); /* call 0x001AE88A */

loc_001AE9B1: ;
    esi = MEM32(ebp + -4);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE9CA; /* jl: less (signed <) */

loc_001AE9BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AE9C8u); RECOMP_ABI_CALL(0x001AE080u, sub_001AE080); /* call 0x001AE080 */

loc_001AE9C8: ;
    ebx = eax;

loc_001AE9CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE9D4; /* je: equal / zero */

loc_001AE9CE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001AE9D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE9D1u); } /* indirect call */
    }

loc_001AE9D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE9E3; /* je: equal / zero */

loc_001AE9D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001AE9E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AE9DDu); } /* indirect call */
    }

loc_001AE9E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AE9FE
 * Original: 0x001AE9FE - 0x001AEA17 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE9FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE9FE: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEA0D; /* jne: not equal / not zero */

loc_001AEA08: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    goto loc_001AEA14;

loc_001AEA0D: ;
    eax = ZX16(MEM16(eax + 0x10));
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AEA14: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AEA17
 * Original: 0x001AEA17 - 0x001AEA3A (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEA17(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEA17: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x1BA440);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_001AEA2F; /* jns: not sign (positive) */

loc_001AEA2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001AEA37;

loc_001AEA2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AEA37; /* jb: below (unsigned <) */

loc_001AEA34: ;
    PUSH32(esp, 0x58);
    POP32(esp, eax);

loc_001AEA37: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AEA3A
 * Original: 0x001AEA3A - 0x001AEA4D (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEA3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEA3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AEA4A; /* jl: less (signed <) */

loc_001AEA42: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x59 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AEA4A; /* jae: above or equal (unsigned >=) */

loc_001AEA49: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001AEA4A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AEA4D
 * Original: 0x001AEA4D - 0x001AEA94 (71 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEA4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEA4D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001AEA5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AEA56u); } /* indirect call */
    }

loc_001AEA5C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEA8E; /* je: equal / zero */

loc_001AEA62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD54); PUSH32(esp, 0x001AEA69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AEA63u); } /* indirect call */
    }

loc_001AEA69: ;
    edx = MEM32(0x1CEB54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEA8E; /* je: equal / zero */

loc_001AEA78: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_001AEA8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AEA94
 * Original: 0x001AEA94 - 0x001AEAAC (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEA94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEA94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x22BD54); PUSH32(esp, 0x001AEA9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AEA98u); } /* indirect call */
    }

loc_001AEA9E: ;
    ecx = MEM32(0x1CEB54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BCD0)); return; /* indirect tail jmp */

}

/**
 * sub_001AEAAC
 * Original: 0x001AEAAC - 0x001AEAFB (79 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEAAC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEAAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(0x22BAF8); PUSH32(esp, 0x001AEAC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AEABDu); } /* indirect call */
    }

loc_001AEAC3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEAF5; /* je: equal / zero */

loc_001AEAC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BAFC); PUSH32(esp, 0x001AEAD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AEACAu); } /* indirect call */
    }

loc_001AEAD0: ;
    edx = MEM32(0x1CEB50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEAF5; /* je: equal / zero */

loc_001AEADF: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_001AEAF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AEAFB
 * Original: 0x001AEAFB - 0x001AEB13 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEAFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEAFB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x22BAFC); PUSH32(esp, 0x001AEB05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AEAFFu); } /* indirect call */
    }

loc_001AEB05: ;
    ecx = MEM32(0x1CEB50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x22BB04)); return; /* indirect tail jmp */

}

/**
 * sub_001AEB13
 * Original: 0x001AEB13 - 0x001AEB4F (60 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB13: ;
    ecx = MEM32(0x1CEAA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEB4F(); return; } /* je: equal / zero */

loc_001AEB22: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AEB28u); RECOMP_ABI_CALL(0x001B3CA8u, sub_001B3CA8); /* call 0x001B3CA8 */

loc_001AEB28: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEB55(); return; } /* je: equal / zero */

loc_001AEB2E: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEB51(); return; } /* je: equal / zero */

loc_001AEB35: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001AEB51(); return; /* tail jmp 0x001AEB51 */

}

/**
 * sub_001AEB4F
 * Original: 0x001AEB4F - 0x001AEB51 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB4F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AEB51(); return; /* fallthrough 0x001AEB51 */

}

/**
 * sub_001AEB51
 * Original: 0x001AEB51 - 0x001AEB55 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB51: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEB75(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001AEB55(); return; /* fallthrough 0x001AEB55 */

}

/**
 * sub_001AEB55
 * Original: 0x001AEB55 - 0x001AEB75 (32 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB55: ;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001AEB66u); RECOMP_ABI_CALL(0x001AEA4Du, sub_001AEA4D); /* call 0x001AEA4D */

loc_001AEB66: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEB75(); return; } /* je: equal / zero */

loc_001AEB6C: ;
    MEM32(edx) = 0x6C6F6F70;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001AEB75(); return; /* fallthrough 0x001AEB75 */

}

/**
 * sub_001AEB75
 * Original: 0x001AEB75 - 0x001AEB7B (6 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB75(void)
{

loc_001AEB75: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AEB7B
 * Original: 0x001AEB7B - 0x001AEB94 (25 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB7B: ;
    edx = MEM32(esp + 4);
    eax = edx + -4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C6F6F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C6F6F70 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEB94(); return; } /* jne: not equal / not zero */

loc_001AEB8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AEB92u); RECOMP_ABI_CALL(0x001AEA94u, sub_001AEA94); /* call 0x001AEA94 */

loc_001AEB92: ;
    g_seh_ebp = ebp; sub_001AEBAC(); return; /* tail jmp 0x001AEBAC */

}

/**
 * sub_001AEB94
 * Original: 0x001AEB94 - 0x001AEBAC (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB94: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706F6C73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x706F6C73 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEBAC(); return; } /* jne: not equal / not zero */

loc_001AEB9C: ;
    ecx = MEM32(0x1CEAA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEBAC(); return; } /* je: equal / zero */

loc_001AEBA6: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AEBACu); RECOMP_ABI_CALL(0x001B3EC5u, sub_001B3EC5); /* call 0x001B3EC5 */

    g_seh_ebp = ebp; sub_001AEBAC(); return; /* fallthrough 0x001AEBAC */

}

/**
 * sub_001AEBAC
 * Original: 0x001AEBAC - 0x001AEBAF (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEBAC(void)
{

loc_001AEBAC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AEBAF
 * Original: 0x001AEBAF - 0x001AEBB2 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEBAF(void)
{

loc_001AEBAF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AEBB2
 * Original: 0x001AEBB2 - 0x001AEBFC (74 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEBB2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEBB2: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(ecx + 2) = LO16(eax);
    eax = ZX16(LO16(eax));
    MEM16(ecx + 0xE) = LO16(edx);
    edx = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = MEM32(esp + 0x10);
    MEM16(ecx + 0x10) = MEM16(ecx + 0x10) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM16(ecx) = 1;
    MEM16(ecx + 0xC) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AEBFC
 * Original: 0x001AEBFC - 0x001AEC3F (67 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEBFC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEBFC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + 2) = LO16(edx);
    edx = edx + edx * 8;
    ecx = ecx + ecx * 8;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = 0x69;
    MEM16(eax + 0xE) = 4;
    MEM16(eax + 0xC) = LO16(edx);
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0x10) = 2;
    MEM16(eax + 0x12) = 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AEC3F
 * Original: 0x001AEC3F - 0x001AEC68 (41 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEC3F(void)
{

loc_001AEC3F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 1;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 3) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AEC68
 * Original: 0x001AEC68 - 0x001AECE4 (124 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEC68(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEC68: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEC7E; /* je: equal / zero */

loc_001AEC77: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEC7E; /* je: equal / zero */

loc_001AEC7C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AEC7E: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEC9D; /* je: equal / zero */

loc_001AEC89: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEC9D; /* je: equal / zero */

loc_001AEC8F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEC9D; /* je: equal / zero */

loc_001AEC95: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 6 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEC9D; /* je: equal / zero */

loc_001AEC9B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AEC9D: ;
    SET_LO16(eax, MEM16(ecx + 0xE));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 8 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AECAF; /* je: equal / zero */

loc_001AECA7: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x10 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AECAF; /* je: equal / zero */

loc_001AECAD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AECAF: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xBC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AECC2; /* jb: below (unsigned <) */

loc_001AECBA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EDEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2EDEF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AECC4; /* jbe: below or equal (unsigned <=) */

loc_001AECC2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AECC4: ;
    edx = ZX16(LO16(esi));
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = ZX16(MEM16(ecx + 0xC));
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AECDE; /* je: equal / zero */

loc_001AECDC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AECDE: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AECE4
 * Original: 0x001AECE4 - 0x001AED0B (39 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AECE4(void)
{

loc_001AECE4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 0x69;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 4;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AED0B
 * Original: 0x001AED0B - 0x001AED7B (112 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AED0B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AED0B: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AED21; /* je: equal / zero */

loc_001AED19: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0x69 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AED21; /* je: equal / zero */

loc_001AED1F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED21: ;
    _fa = (uint32_t)(MEM16(edx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x10), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AED2A; /* je: equal / zero */

loc_001AED28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED2A: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx + 2));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AED3B; /* jb: below (unsigned <) */

loc_001AED35: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AED3D; /* jbe: below or equal (unsigned <=) */

loc_001AED3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED3D: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AED50; /* jb: below (unsigned <) */

loc_001AED48: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EDEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2EDEF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AED52; /* jbe: below or equal (unsigned <=) */

loc_001AED50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED52: ;
    _fa = (uint32_t)(MEM16(edx + 0xE)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0xE), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AED5B; /* je: equal / zero */

loc_001AED59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED5B: ;
    _fa = (uint32_t)(MEM16(edx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x12), 0x40 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AED64; /* je: equal / zero */

loc_001AED62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED64: ;
    edx = ZX16(MEM16(edx + 0xC));
    ecx = ZX16(LO16(esi));
    ecx = ecx + ecx * 8;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001AED78; /* je: equal / zero */

loc_001AED76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AED78: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AED7B
 * Original: 0x001AED7B - 0x001AEDA1 (38 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AED7B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x18;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x1CDBF8;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) { g_seh_ebp = ebp; sub_001AEDA1(); return; } /* jne: not equal / not zero */

loc_001AED95: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AED9Fu); RECOMP_ABI_CALL(0x001AEC3Fu, sub_001AEC3F); /* call 0x001AEC3F */

loc_001AED9F: ;
    g_seh_ebp = ebp; sub_001AEDBB(); return; /* tail jmp 0x001AEDBB */

}

/**
 * sub_001AEDA1
 * Original: 0x001AEDA1 - 0x001AEDC4 (35 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEDA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEDA1: ;
    PUSH32(esp, 4);
    esi = eax;
    POP32(esp, ecx);
    edi = 0x1CDBE8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001AEDBB; /* jne: not equal / not zero */

loc_001AEDB1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AEDBBu); RECOMP_ABI_CALL(0x001AECE4u, sub_001AECE4); /* call 0x001AECE4 */

loc_001AEDBB: ;
    eax = MEM32(ebx + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AEDBB
 * Original: 0x001AEDBB - 0x001AEDC4 (9 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEDBB(void)
{

loc_001AEDBB: ;
    eax = MEM32(ebx + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AEDC4
 * Original: 0x001AEDC4 - 0x001AEE4C (136 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AEDC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEDC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001AEDE6; /* je: equal / zero */

loc_001AEDDC: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0xFFFE (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEDE6; /* je: equal / zero */

loc_001AEDE3: ;
    MEM32(ebp + -4) = eax;

loc_001AEDE6: ;
    _fa = (uint32_t)(MEM16(ebx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x10), 0x16 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEDF0; /* je: equal / zero */

loc_001AEDED: ;
    MEM32(ebp + -4) = eax;

loc_001AEDF0: ;
    eax = ebx + 0x18;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x1CDBF8;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001AEE0C; /* jne: not equal / not zero */

loc_001AEE03: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEE0Au); RECOMP_ABI_CALL(0x001AEC68u, sub_001AEC68); /* call 0x001AEC68 */

loc_001AEE0A: ;
    goto loc_001AEE23;

loc_001AEE0C: ;
    PUSH32(esp, 4);
    esi = eax;
    POP32(esp, ecx);
    edi = 0x1CDBE8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001AEE31; /* jne: not equal / not zero */

loc_001AEE1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEE23u); RECOMP_ABI_CALL(0x001AED0Bu, sub_001AED0B); /* call 0x001AED0B */

loc_001AEE23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE2A; /* jne: not equal / not zero */

loc_001AEE27: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AEE2A: ;
    _fa = (uint32_t)(MEM16(ebx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEE35; /* je: equal / zero */

loc_001AEE31: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AEE35: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x14), 0xFFFFFFC0u (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001AEE45; /* je: equal / zero */

loc_001AEE41: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AEE45: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AEE4C
 * Original: 0x001AEE4C - 0x001AEE66 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEE4C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEE4C: ;
    PUSH32(esp, ebx);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEE66
 * Original: 0x001AEE66 - 0x001AEE9A (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEE66(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEE66: ;
    PUSH32(esp, ebx);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x18) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ecx;
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF0000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ecx;
    ebx = ebx << 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEE9A
 * Original: 0x001AEE9A - 0x001AEEA8 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEE9A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEE9A: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001AEEA8
 * Original: 0x001AEEA8 - 0x001AEF01 (89 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AEEA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEEA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEEC7u); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_001AEEC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001AEED0; /* jne: not equal / not zero */

loc_001AEECE: ;
    MEM32(esi) = edi;

loc_001AEED0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEEF9; /* jne: not equal / not zero */

loc_001AEED4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEED9u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AEED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AEEE6; /* jg: greater (signed >) */

loc_001AEEDD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEEE2u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AEEE2: ;
    edi = eax;
    goto loc_001AEEF9;

loc_001AEEE6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEEEBu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AEEEB: ;
    edi = eax;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001AEEF9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001AEF01
 * Original: 0x001AEF01 - 0x001AEF0E (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEF01(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEF01: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AEF0E
 * Original: 0x001AEF0E - 0x001AEF18 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEF0E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEF0E: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AEF24
 * Original: 0x001AEF24 - 0x001AEF46 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEF24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEF24: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AEF34; /* je: equal / zero */

loc_001AEF2D: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x001AEF34u); RECOMP_ABI_CALL(0x0015D4A7u, sub_0015D4A7); /* call 0x0015D4A7 */

loc_001AEF34: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEF46(); return; } /* je: equal / zero */

loc_001AEF3B: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEF46
 * Original: 0x001AEF46 - 0x001AEF5C (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEF46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEF46: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEF5A; /* je: equal / zero */

loc_001AEF4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEF5A; /* je: equal / zero */

loc_001AEF51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AEF57u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_001AEF57: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AEF5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEF5C
 * Original: 0x001AEF5C - 0x001AEF98 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AEF5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEF5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi));
    MEM32(ebp + 0xC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEF82u); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_001AEF82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEFAD(); return; } /* jne: not equal / not zero */

loc_001AEF86: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AEF8Bu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AEF8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEF98(); return; } /* jne: not equal / not zero */

loc_001AEF92: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001AEFAD(); return; /* tail jmp 0x001AEFAD */

}

/**
 * sub_001AEF98
 * Original: 0x001AEF98 - 0x001AEFAD (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEF98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEF98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AEFA6; /* jle: less or equal (signed <=) */

loc_001AEF9C: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001AEFA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AEFE6(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001AEFAD(); return; /* fallthrough 0x001AEFAD */

}

/**
 * sub_001AEFAD
 * Original: 0x001AEFAD - 0x001AEFBB (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEFAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEFAD: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEFBB(); return; } /* je: equal / zero */

loc_001AEFB3: ;
    eax = MEM32(ebx + 8);
    MEM32(esi + 8) = eax;
    g_seh_ebp = ebp; sub_001AEFE6(); return; /* tail jmp 0x001AEFE6 */

}

/**
 * sub_001AEFBB
 * Original: 0x001AEFBB - 0x001AEFC9 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEFBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEFBB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEFC9(); return; } /* je: equal / zero */

loc_001AEFC2: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001AEFD5(); return; /* tail jmp 0x001AEFD5 */

}

/**
 * sub_001AEFC9
 * Original: 0x001AEFC9 - 0x001AEFD5 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEFC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEFC9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEFD5(); return; } /* je: equal / zero */

loc_001AEFCE: ;
    MEM32(ebp + -4) = 0x8003001Eu;

    g_seh_ebp = ebp; sub_001AEFD5(); return; /* fallthrough 0x001AEFD5 */

}

/**
 * sub_001AEFD5
 * Original: 0x001AEFD5 - 0x001AEFE6 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEFD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEFD5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEFE6(); return; } /* je: equal / zero */

loc_001AEFD9: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AEFE6(); return; } /* je: equal / zero */

loc_001AEFE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AEFE6u); RECOMP_ABI_CALL(0x000AD558u, sub_000AD558); /* call 0x000AD558 */

    g_seh_ebp = ebp; sub_001AEFE6(); return; /* fallthrough 0x001AEFE6 */

}

/**
 * sub_001AEFE6
 * Original: 0x001AEFE6 - 0x001AEFF0 (10 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEFE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEFE6: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AEFF0
 * Original: 0x001AEFF0 - 0x001AF020 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AEFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AEFF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF00Au); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_001AF00A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF037(); return; } /* jne: not equal / not zero */

loc_001AF00E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF013u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF020(); return; } /* jg: greater (signed >) */

loc_001AF017: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF01Cu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF01C: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AF033(); return; /* tail jmp 0x001AF033 */

}

/**
 * sub_001AF020
 * Original: 0x001AF020 - 0x001AF033 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF020: ;
    PUSH32(esp, 0x001AF025u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF025: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AF033(); return; /* fallthrough 0x001AF033 */

}

/**
 * sub_001AF033
 * Original: 0x001AF033 - 0x001AF037 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF033(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF033: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF04F(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001AF037(); return; /* fallthrough 0x001AF037 */

}

/**
 * sub_001AF037
 * Original: 0x001AF037 - 0x001AF045 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF037(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF037: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF045(); return; } /* je: equal / zero */

loc_001AF03E: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001AF04F(); return; /* tail jmp 0x001AF04F */

}

/**
 * sub_001AF045
 * Original: 0x001AF045 - 0x001AF04F (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF045(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF045: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF04F(); return; } /* je: equal / zero */

loc_001AF04A: ;
    esi = 0x8003001Du;

    g_seh_ebp = ebp; sub_001AF04F(); return; /* fallthrough 0x001AF04F */

}

/**
 * sub_001AF04F
 * Original: 0x001AF04F - 0x001AF057 (8 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF04F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF04F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF057
 * Original: 0x001AF057 - 0x001AF070 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF057(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF057: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF081(); return; } /* je: equal / zero */

loc_001AF063: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF070(); return; } /* jne: not equal / not zero */

loc_001AF06B: ;
    MEM32(ecx + 8) = eax;
    g_seh_ebp = ebp; sub_001AF073(); return; /* tail jmp 0x001AF073 */

}

/**
 * sub_001AF070
 * Original: 0x001AF070 - 0x001AF073 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF070: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 8) = MEM32(ecx + 8) + eax;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_001AF073(); return; /* fallthrough 0x001AF073 */

}

/**
 * sub_001AF073
 * Original: 0x001AF073 - 0x001AF081 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF073(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF073: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF0CB(); return; } /* je: equal / zero */

loc_001AF07A: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001AF0CB(); return; /* tail jmp 0x001AF0CB */

}

/**
 * sub_001AF081
 * Original: 0x001AF081 - 0x001AF0AA (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF081(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF081: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0x001AF091u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_001AF091: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF0C1(); return; } /* jne: not equal / not zero */

loc_001AF098: ;
    PUSH32(esp, 0x001AF09Du); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF09D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF0AA(); return; } /* jg: greater (signed >) */

loc_001AF0A1: ;
    PUSH32(esp, 0x001AF0A6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF0A6: ;
    edi = eax;
    g_seh_ebp = ebp; sub_001AF0BD(); return; /* tail jmp 0x001AF0BD */

}

/**
 * sub_001AF0AA
 * Original: 0x001AF0AA - 0x001AF0BD (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0AA: ;
    PUSH32(esp, 0x001AF0AFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF0AF: ;
    edi = eax;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AF0BD(); return; /* fallthrough 0x001AF0BD */

}

/**
 * sub_001AF0BD
 * Original: 0x001AF0BD - 0x001AF0C1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF0CA(); return; } /* jl: less (signed <) */

    g_seh_ebp = ebp; sub_001AF0C1(); return; /* fallthrough 0x001AF0C1 */

}

/**
 * sub_001AF0C1
 * Original: 0x001AF0C1 - 0x001AF0CA (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0C1: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF0CA(); return; } /* je: equal / zero */

loc_001AF0C8: ;
    MEM32(eax) = esi;

    g_seh_ebp = ebp; sub_001AF0CA(); return; /* fallthrough 0x001AF0CA */

}

/**
 * sub_001AF0CA
 * Original: 0x001AF0CA - 0x001AF0CB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0CA: ;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001AF0CB(); return; /* fallthrough 0x001AF0CB */

}

/**
 * sub_001AF0CB
 * Original: 0x001AF0CB - 0x001AF0D2 (7 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0CB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF0D2
 * Original: 0x001AF0D2 - 0x001AF0FA (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0D2: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0x001AF0DDu); RECOMP_ABI_CALL(0x000AB1B1u, sub_000AB1B1); /* call 0x000AB1B1 */

loc_001AF0DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF10D(); return; } /* jne: not equal / not zero */

loc_001AF0E8: ;
    PUSH32(esp, 0x001AF0EDu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF0ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF0FA(); return; } /* jg: greater (signed >) */

loc_001AF0F1: ;
    PUSH32(esp, 0x001AF0F6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF0F6: ;
    esi = eax;
    g_seh_ebp = ebp; sub_001AF10D(); return; /* tail jmp 0x001AF10D */

}

/**
 * sub_001AF0FA
 * Original: 0x001AF0FA - 0x001AF10D (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0FA: ;
    PUSH32(esp, 0x001AF0FFu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF0FF: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001AF10D(); return; /* fallthrough 0x001AF10D */

}

/**
 * sub_001AF10D
 * Original: 0x001AF10D - 0x001AF113 (6 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF10D(void)
{

loc_001AF10D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF113
 * Original: 0x001AF113 - 0x001AF14A (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF113(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF113: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001AF11Du); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_001AF11D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF146; /* jne: not equal / not zero */

loc_001AF121: ;
    PUSH32(esp, 0x001AF126u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF126: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AF133; /* jg: greater (signed >) */

loc_001AF12A: ;
    PUSH32(esp, 0x001AF12Fu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF12F: ;
    esi = eax;
    goto loc_001AF146;

loc_001AF133: ;
    PUSH32(esp, 0x001AF138u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001AF138: ;
    esi = eax;
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x80070000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001AF146: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF14A
 * Original: 0x001AF14A - 0x001AF160 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF14A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF14A: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001AF161
 * Original: 0x001AF161 - 0x001AF195 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF161(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF161: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF195(); return; } /* je: equal / zero */

loc_001AF17C: ;
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46464952) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46464952 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF190; /* je: equal / zero */

loc_001AF189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D524F46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D524F46 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF197(); return; } /* jne: not equal / not zero */

loc_001AF190: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001AF197(); return; /* tail jmp 0x001AF197 */

}

/**
 * sub_001AF195
 * Original: 0x001AF195 - 0x001AF197 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF195: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AF197(); return; /* fallthrough 0x001AF197 */

}

/**
 * sub_001AF197
 * Original: 0x001AF197 - 0x001AF1DA (67 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF197(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF197: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AF1A2u); RECOMP_ABI_CALL(0x001AF057u, sub_001AF057); /* call 0x001AF057 */

loc_001AF1A2: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF208(); return; } /* jl: less (signed <) */

loc_001AF1A8: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AF1B8u); RECOMP_ABI_CALL(0x001AEF5Cu, sub_001AEF5C); /* call 0x001AEF5C */

loc_001AF1B8: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF208(); return; } /* jl: less (signed <) */

loc_001AF1BE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF1DA(); return; } /* je: equal / zero */

loc_001AF1C4: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D524F46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x4D524F46 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF1DA(); return; } /* jne: not equal / not zero */

loc_001AF1CD: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x001AF1D5u); RECOMP_ABI_CALL(0x001AEE66u, sub_001AEE66); /* call 0x001AEE66 */

loc_001AF1D5: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001AF1DD(); return; /* tail jmp 0x001AF1DD */

}

/**
 * sub_001AF1DA
 * Original: 0x001AF1DA - 0x001AF1DD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF1DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF1DA: ;
    eax = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_001AF1DD(); return; /* fallthrough 0x001AF1DD */

}

/**
 * sub_001AF1DD
 * Original: 0x001AF1DD - 0x001AF1F8 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF1DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF1DD: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF1F8(); return; } /* je: equal / zero */

loc_001AF1E5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF1EE; /* jne: not equal / not zero */

loc_001AF1E9: ;
    edx = 0x90110000u;

loc_001AF1EE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF208(); return; } /* jl: less (signed <) */

loc_001AF1F2: ;
    edi = edi + eax + 8;
    g_seh_ebp = ebp; sub_001AF197(); return; /* tail jmp 0x001AF197 */

}

/**
 * sub_001AF1F8
 * Original: 0x001AF1F8 - 0x001AF208 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF1F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF1F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;

    g_seh_ebp = ebp; sub_001AF208(); return; /* fallthrough 0x001AF208 */

}

/**
 * sub_001AF208
 * Original: 0x001AF208 - 0x001AF211 (9 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF208: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF211
 * Original: 0x001AF211 - 0x001AF230 (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF211(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF211: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF23D(); return; } /* jbe: below or equal (unsigned <=) */

loc_001AF228: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF230(); return; } /* jb: below (unsigned <) */

loc_001AF22C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001AF234(); return; /* tail jmp 0x001AF234 */

}

/**
 * sub_001AF230
 * Original: 0x001AF230 - 0x001AF234 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF230: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;

    g_seh_ebp = ebp; sub_001AF234(); return; /* fallthrough 0x001AF234 */

}

/**
 * sub_001AF234
 * Original: 0x001AF234 - 0x001AF23D (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF234(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF234: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF26A(); return; } /* je: equal / zero */

loc_001AF23B: ;
    MEM32(eax) = edi;

    g_seh_ebp = ebp; sub_001AF23D(); return; /* fallthrough 0x001AF23D */

}

/**
 * sub_001AF23D
 * Original: 0x001AF23D - 0x001AF26A (45 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF23D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF23D: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AF24Fu); RECOMP_ABI_CALL(0x001AF057u, sub_001AF057); /* call 0x001AF057 */

loc_001AF24F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF264; /* jl: less (signed <) */

loc_001AF253: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x001AF264u); RECOMP_ABI_CALL(0x001AEF5Cu, sub_001AEF5C); /* call 0x001AEF5C */

loc_001AF264: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AF264
 * Original: 0x001AF264 - 0x001AF26A (6 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF264(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF264: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AF26A
 * Original: 0x001AF26A - 0x001AF271 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF26A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF26A: ;
    eax = 0x90110001u;
    g_seh_ebp = ebp; sub_001AF264(); return; /* tail jmp 0x001AF264 */

}

/**
 * sub_001AF2D3
 * Original: 0x001AF2D3 - 0x001AF361 (142 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF2D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF2D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x20746D66);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF300u); RECOMP_ABI_CALL(0x001AF161u, sub_001AF161); /* call 0x001AF161 */

loc_001AF300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AF359; /* jl: less (signed <) */

loc_001AF307: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AF314; /* jae: above or equal (unsigned >=) */

loc_001AF312: ;
    eax = ebx;

loc_001AF314: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF324u); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF324: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AF357; /* jl: less (signed <) */

loc_001AF32B: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AF346; /* jbe: below or equal (unsigned <=) */

loc_001AF332: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_001AF346: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF357; /* je: equal / zero */

loc_001AF34D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF355; /* ja: above (unsigned >) */

loc_001AF352: ;
    PUSH32(esp, 0x12);
    POP32(esp, ebx);

loc_001AF355: ;
    MEM32(eax) = ebx;

loc_001AF357: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001AF359: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF361
 * Original: 0x001AF361 - 0x001AF4B6 (341 bytes, 123 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF361(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF361: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -68) = ebx;
    MEM32(ebp + -64) = ebx;
    MEM32(ebp + -60) = ebx;
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -52) = ebx;
    MEM32(ebp + -48) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001AF49F; /* je: equal / zero */

loc_001AF38A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF49F; /* je: equal / zero */

loc_001AF393: ;
    PUSH32(esp, 0x4D4D4F43);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF3A5u); RECOMP_ABI_CALL(0x001AF161u, sub_001AF161); /* call 0x001AF161 */

loc_001AF3A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AF4AC; /* jl: less (signed <) */

loc_001AF3B0: ;
    esi = MEM32(ebp + -52);
    PUSH32(esp, 0x14);
    POP32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    eax = edi;
    if (CMP_A(_fa, _fb)) goto loc_001AF3BE; /* ja: above (unsigned >) */

loc_001AF3BC: ;
    eax = esi;

loc_001AF3BE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF3CDu); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF3CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AF4AC; /* jl: less (signed <) */

loc_001AF3D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AF3F4; /* jae: above or equal (unsigned >=) */

loc_001AF3DC: ;
    ecx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + esi + -44;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001AF3F4: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ebx (32-bit) */
    eax = 0x454E4F4E;
    if (CMP_NE(_fa, _fb)) goto loc_001AF401; /* jne: not equal / not zero */

loc_001AF3FE: ;
    MEM32(ebp + -28) = eax;

loc_001AF401: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF40D; /* je: equal / zero */

loc_001AF406: ;
    MEM32(ebp + -4) = 0x90110002u;

loc_001AF40D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF4AC; /* jl: less (signed <) */

loc_001AF416: ;
    ecx = MEM32(ebp + -44);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF41Eu); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF41E: ;
    ecx = MEM32(ebp + -38);
    MEM16(ebp + -44) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF42Au); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF42A: ;
    ecx = MEM32(ebp + -36);
    MEM16(ebp + -38) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF436u); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF436: ;
    ecx = MEM32(ebp + -34);
    MEM16(ebp + -36) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF442u); RECOMP_ABI_CALL(0x001AEE66u, sub_001AEE66); /* call 0x001AEE66 */

loc_001AF442: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -38));
    MEM32(ebp + -34) = eax;
    edx = MEM32(ebp + -36);
    ecx = 0x401E;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF461u); RECOMP_ABI_CALL(0x001A8F81u, sub_001A8F81); /* call 0x001A8F81 */

loc_001AF461: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF46D; /* ja: above (unsigned >) */

loc_001AF46B: ;
    ecx = eax;

loc_001AF46D: ;
    edi = MEM32(ebp + 8);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + -24;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
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
    if (CMP_BE(_fa, _fb)) goto loc_001AF49F; /* jbe: below or equal (unsigned <=) */

loc_001AF486: ;
    edi = MEM32(ebp + 8);
    ecx = eax + -18;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x12;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_001AF49F: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF4AC; /* je: equal / zero */

loc_001AF4A6: ;
    MEM32(eax) = 0x12;

loc_001AF4AC: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF4B6
 * Original: 0x001AF4B6 - 0x001AF554 (158 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF4B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF4B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x706D7377);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -60;
    MEM32(ebp + -60) = esi;
    MEM32(ebp + -56) = esi;
    MEM32(ebp + -52) = esi;
    MEM32(ebp + -48) = esi;
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -40) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF4E3u); RECOMP_ABI_CALL(0x001AF161u, sub_001AF161); /* call 0x001AF161 */

loc_001AF4E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF54F; /* jl: less (signed <) */

loc_001AF4E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF4FAu); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF4FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF54E; /* jl: less (signed <) */

loc_001AF4FE: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF52C; /* je: equal / zero */

loc_001AF503: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF513u); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF513: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF522; /* jl: less (signed <) */

loc_001AF517: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF52C; /* je: equal / zero */

loc_001AF51C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF52C; /* je: equal / zero */

loc_001AF522: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AF4FE; /* jge: greater or equal (signed >=) */

loc_001AF52C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF54E; /* jl: less (signed <) */

loc_001AF530: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF53A; /* jne: not equal / not zero */

loc_001AF535: ;
    eax = 0x90110003u;

loc_001AF53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF54E; /* jl: less (signed <) */

loc_001AF53E: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -8);
    MEM32(ecx) = edx;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -4);
    MEM32(ecx) = edx;

loc_001AF54E: ;
    POP32(esp, edi);

loc_001AF54F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AF554
 * Original: 0x001AF554 - 0x001AF5EF (155 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF554(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF554: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6C706D73);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp + -24;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF581u); RECOMP_ABI_CALL(0x001AF161u, sub_001AF161); /* call 0x001AF161 */

loc_001AF581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF5EA; /* jl: less (signed <) */

loc_001AF585: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF598u); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF598: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF5E9; /* jl: less (signed <) */

loc_001AF59C: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF5C4; /* je: equal / zero */

loc_001AF5A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF5B1u); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF5B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF5BA; /* jl: less (signed <) */

loc_001AF5B5: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF5C4; /* je: equal / zero */

loc_001AF5BA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AF59C; /* jge: greater or equal (signed >=) */

loc_001AF5C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF5E9; /* jl: less (signed <) */

loc_001AF5C8: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF5D2; /* jne: not equal / not zero */

loc_001AF5CD: ;
    eax = 0x90110003u;

loc_001AF5D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF5E9; /* jl: less (signed <) */

loc_001AF5D6: ;
    ecx = MEM32(ebp + -40);
    edx = MEM32(ebp + 8);
    MEM32(edx) = ecx;
    edx = MEM32(ebp + -36);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;

loc_001AF5E9: ;
    POP32(esp, edi);

loc_001AF5EA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AF5EF
 * Original: 0x001AF5EF - 0x001AF66F (128 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF5EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF5EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    PUSH32(esp, 0x54534E49);
    eax = ebx + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp + -76;
    MEM32(ebp + -76) = edi;
    MEM32(ebp + -72) = edi;
    MEM32(ebp + -68) = edi;
    MEM32(ebp + -64) = edi;
    MEM32(ebp + -60) = edi;
    MEM32(ebp + -56) = edi;
    MEM32(ebp + -52) = edi;
    MEM32(ebp + -48) = edi;
    MEM32(ebp + -44) = edi;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -36) = edi;
    MEM32(ebp + -32) = edi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF635u); RECOMP_ABI_CALL(0x001AF161u, sub_001AF161); /* call 0x001AF161 */

loc_001AF635: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF7B5(); return; } /* jl: less (signed <) */

loc_001AF63F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -76;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF64Fu); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF64F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF7B5(); return; } /* jl: less (signed <) */

loc_001AF659: ;
    ecx = MEM32(ebp + -20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF661u); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF661: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF66F(); return; } /* jne: not equal / not zero */

loc_001AF667: ;
    eax = ebp + -20;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001AF687(); return; /* tail jmp 0x001AF687 */

}

/**
 * sub_001AF66A
 * Original: 0x001AF66A - 0x001AF66F (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF66A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF66A: ;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001AF687(); return; /* tail jmp 0x001AF687 */

}

/**
 * sub_001AF66F
 * Original: 0x001AF66F - 0x001AF682 (19 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF66F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF66F: ;
    ecx = MEM32(ebp + -14);
    PUSH32(esp, 0x001AF677u); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF677: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF682(); return; } /* jne: not equal / not zero */

loc_001AF67D: ;
    eax = ebp + -14;
    g_seh_ebp = ebp; sub_001AF66A(); return; /* tail jmp 0x001AF66A */

}

/**
 * sub_001AF682
 * Original: 0x001AF682 - 0x001AF687 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF682(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF682: ;
    esi = 0x90110003u;

    g_seh_ebp = ebp; sub_001AF687(); return; /* fallthrough 0x001AF687 */

}

/**
 * sub_001AF687
 * Original: 0x001AF687 - 0x001AF7B5 (302 bytes, 97 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF687(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF687: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF7B5(); return; } /* jl: less (signed <) */

loc_001AF68F: ;
    PUSH32(esp, 0x4B52414D);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebp + -52;
    PUSH32(esp, 0x001AF6A0u); RECOMP_ABI_CALL(0x001AF161u, sub_001AF161); /* call 0x001AF161 */

loc_001AF6A0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001AF7B5(); return; } /* jl: less (signed <) */

loc_001AF6AA: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x001AF6B9u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001AF6B9: ;
    ebx = eax;
    esi = ebx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001AF7AB; /* js: sign (negative) */

loc_001AF6D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -36));
    ecx = ebp + -52;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AF6E1u); RECOMP_ABI_CALL(0x001AF211u, sub_001AF211); /* call 0x001AF211 */

loc_001AF6E1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001AF7AB; /* jl: less (signed <) */

loc_001AF6EB: ;
    SET_LO16(ecx, MEM16(ebx));
    PUSH32(esp, 0x001AF6F3u); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF6F3: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(ebx) = LO16(eax);
    edi = ebx + 2;
    if (CMP_BE(_fa, _fb)) goto loc_001AF722; /* jbe: below or equal (unsigned <=) */

loc_001AF700: ;
    edx = MEM32(ebp + -8);
    SET_LO16(edx, MEM16(edx + 2));
    MEM16(ebp + -4) = LO16(edx);

loc_001AF70B: ;
    SET_LO16(edx, MEM16(ebp + -4));
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001AF722; /* je: equal / zero */

loc_001AF714: ;
    edx = ZX8(MEM8(edi + 6));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    edi = edi + edx + 8;
    if (CMP_B(_fa, _fb)) goto loc_001AF70B; /* jb: below (unsigned <) */

loc_001AF722: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001AF72C; /* jb: below (unsigned <) */

loc_001AF727: ;
    esi = 0x90110003u;

loc_001AF72C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001AF7A9; /* jl: less (signed <) */

loc_001AF730: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = ebx + 2;
    if (CMP_BE(_fa, _fb)) goto loc_001AF764; /* jbe: below or equal (unsigned <=) */

loc_001AF73C: ;
    ecx = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(ecx + 4));
    MEM16(ebp + -8) = LO16(ecx);

loc_001AF747: ;
    SET_LO16(ecx, MEM16(ebp + -8));
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), LO16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001AF764; /* je: equal / zero */

loc_001AF750: ;
    ecx = ZX8(MEM8(edx + 6));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + ecx + 8;
    SET_LO16(ecx, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001AF747; /* jb: below (unsigned <) */

loc_001AF764: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001AF76F; /* jb: below (unsigned <) */

loc_001AF76A: ;
    esi = 0x90110003u;

loc_001AF76F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001AF7A9; /* jl: less (signed <) */

loc_001AF773: ;
    ecx = MEM32(edi + 2);
    PUSH32(esp, 0x001AF77Bu); RECOMP_ABI_CALL(0x001AEE66u, sub_001AEE66); /* call 0x001AEE66 */

loc_001AF77B: ;
    MEM32(edi + 2) = eax;
    ecx = MEM32(edx + 2);
    PUSH32(esp, 0x001AF786u); RECOMP_ABI_CALL(0x001AEE66u, sub_001AEE66); /* call 0x001AEE66 */

loc_001AF786: ;
    MEM32(edx + 2) = eax;
    ecx = MEM32(edi + 2);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001AF795; /* jb: below (unsigned <) */

loc_001AF790: ;
    esi = 0x90110003u;

loc_001AF795: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001AF7A9; /* jl: less (signed <) */

loc_001AF799: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(edx + 2);
    _fb = (uint32_t)(MEM32(edi + 2)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edi + 2)));
    eax = eax - MEM32(edi + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;

loc_001AF7A9: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AF7AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF7B5(); return; } /* je: equal / zero */

loc_001AF7AF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AF7B5u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

    g_seh_ebp = ebp; sub_001AF7B5(); return; /* fallthrough 0x001AF7B5 */

}

/**
 * sub_001AF7B5
 * Original: 0x001AF7B5 - 0x001AF7BE (9 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF7B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF7B5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AF7BE
 * Original: 0x001AF7BE - 0x001AF7D9 (27 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF7BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF7BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001AF7C6u); RECOMP_ABI_CALL(0x001AEF24u, sub_001AEF24); /* call 0x001AEF24 */

loc_001AF7C6: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF7D7; /* je: equal / zero */

loc_001AF7CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AF7D3u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001AF7D3: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AF7D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF7D9
 * Original: 0x001AF7D9 - 0x001AF7FF (38 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF7D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF7D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x10 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF7FF(); return; } /* jne: not equal / not zero */

loc_001AF7E3: ;
    esi = MEM32(ebp + 0xC);
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebp + 8);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001AF810(); return; } /* je: equal / zero */

loc_001AF7ED: ;
    SET_LO16(ecx, MEM16(edx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF7F5u); RECOMP_ABI_CALL(0x001AEE4Cu, sub_001AEE4C); /* call 0x001AEE4C */

loc_001AF7F5: ;
    MEM16(edx) = LO16(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AF7ED; /* jne: not equal / not zero */

loc_001AF7FD: ;
    g_seh_ebp = ebp; sub_001AF810(); return; /* tail jmp 0x001AF810 */

}

/**
 * sub_001AF7FF
 * Original: 0x001AF7FF - 0x001AF810 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF7FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF7FF: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001AF810(); return; } /* je: equal / zero */

loc_001AF809: ;
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + 0x80;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AF809; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001AF810(); return; /* fallthrough 0x001AF810 */

}

/**
 * sub_001AF810
 * Original: 0x001AF810 - 0x001AF815 (5 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF810: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF815
 * Original: 0x001AF815 - 0x001AF843 (46 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF815(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF815: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x001AF82Bu); RECOMP_ABI_CALL(0x001AEFF0u, sub_001AEFF0); /* call 0x001AEFF0 */

loc_001AF82B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AF83E; /* jl: less (signed <) */

loc_001AF82F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF837; /* je: equal / zero */

loc_001AF833: ;
    ecx = MEM32(edi);
    goto loc_001AF83B;

loc_001AF837: ;
    ecx = MEM32(esp + 0x10);

loc_001AF83B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AF83E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF843
 * Original: 0x001AF843 - 0x001AF8B1 (110 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF843(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF843: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF851u); RECOMP_ABI_CALL(0x001AE9FEu, sub_001AE9FE); /* call 0x001AE9FE */

loc_001AF851: ;
    ebx = eax + 8;
    ecx = ebx + 0x14;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001AF8A9; /* jb: below (unsigned <) */

loc_001AF85F: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    ecx = ebx + ecx + 0xC;
    MEM32(edx + 4) = ecx;
    MEM32(edx) = 0x46464952;
    MEM32(edx + 8) = 0x45564157;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(edx + 4) = eax;
    MEM32(edx) = 0x20746D66;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 8;
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
    eax = MEM32(ebp + 0xC);
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
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0x61746164;
    MEM32(edx + 4) = eax;
    POP32(esp, edi);

loc_001AF8A9: ;
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AF8B1
 * Original: 0x001AF8B1 - 0x001AF905 (84 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AF8B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AF8B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF8C5u); RECOMP_ABI_CALL(0x001AF843u, sub_001AF843); /* call 0x001AF843 */

loc_001AF8C5: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    MEM32(edi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF8D6u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001AF8D6: ;
    ecx = MEM32(ebp + 0x10);
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    if ((_fas < 0)) goto loc_001AF8FD; /* js: sign (negative) */

loc_001AF8EF: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AF8FDu); RECOMP_ABI_CALL(0x001AF843u, sub_001AF843); /* call 0x001AF843 */

loc_001AF8FD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AF95C
 * Original: 0x001AF95C - 0x001AF986 (42 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF95C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF95C: ;
    eax = MEM32(esp + 8);
    ecx = eax + -1;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 7);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(ecx, LO16(ecx) >> 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 7);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(ecx, LO16(ecx) >> 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    eax = eax + ecx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AFA61
 * Original: 0x001AFA61 - 0x001AFAA7 (70 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AFA61(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AFA61: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0x69 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001AFAA2; /* jne: not equal / not zero */

loc_001AFA6B: ;
    _fa = (uint32_t)(MEM16(edx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x10), 2 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001AFAA2; /* jne: not equal / not zero */

loc_001AFA72: ;
    SET_LO16(eax, MEM16(edx + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001AFAA2; /* jb: below (unsigned <) */

loc_001AFA7C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001AFAA2; /* ja: above (unsigned >) */

loc_001AFA82: ;
    _fa = (uint32_t)(MEM16(edx + 0xE)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0xE), 4 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001AFAA2; /* jne: not equal / not zero */

loc_001AFA89: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + 0x12));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AFA96u); RECOMP_ABI_CALL(0x001AF95Cu, sub_001AF95C); /* call 0x001AF95C */

loc_001AFA96: ;
    _fb = (uint32_t)(MEM16(edx + 0xC)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(edx + 0xC)));
    SET_LO16(eax, LO16(eax) - MEM16(edx + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(0u - (uint32_t)(LO16(eax))));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001AFAA4;

loc_001AFAA2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AFAA4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFAA7
 * Original: 0x001AFAA7 - 0x001AFB0E (103 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AFAA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFAA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    POP32(esp, eax);
    if ((_fas >= 0)) goto loc_001AFABD; /* jns: not sign (positive) */

loc_001AFAB8: ;
    PUSH32(esp, 8);
    POP32(esp, eax);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_001AFABD: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AFAC9; /* jl: less (signed <) */

loc_001AFAC4: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001AFAC9: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AFAD4; /* jl: less (signed <) */

loc_001AFACF: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001AFAD4: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AFADF; /* jl: less (signed <) */

loc_001AFADA: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001AFADF: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFAEC; /* je: equal / zero */

loc_001AFAE5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001AFAF3;

loc_001AFAEC: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;

loc_001AFAF3: ;
    edx = 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AFB05; /* jg: greater (signed >) */

loc_001AFAFC: ;
    edx = 0xFFFF8000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AFB07; /* jge: greater or equal (signed >=) */

loc_001AFB05: ;
    ecx = edx;

loc_001AFB07: ;
    MEM32(esi) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AFB0E
 * Original: 0x001AFB0E - 0x001AFB69 (91 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFB0E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFB0E: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFB22; /* je: equal / zero */

loc_001AFB20: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AFB22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFB2F; /* je: equal / zero */

loc_001AFB27: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001AFB2F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFB39; /* je: equal / zero */

loc_001AFB34: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AFB39: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFB40; /* je: equal / zero */

loc_001AFB3E: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_001AFB40: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFB66; /* je: equal / zero */

loc_001AFB4D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFF0001u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_001AFB66: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AFB69
 * Original: 0x001AFB69 - 0x001AFC44 (219 bytes, 87 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AFB69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFB69: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFC37; /* je: equal / zero */

loc_001AFB80: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;

loc_001AFB8F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(ebp + -8);
    MEM32(ebp + 8) = eax;
    esi = ZX16(LO16(ebx));
    eax = ZX16(LO16(eax));
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax + 4;
    MEM32(ebp + 0x10) = ecx;
    MEM32(ebp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001AFC24; /* je: equal / zero */

loc_001AFBB5: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx * 2 + 0x1BA460);
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, ecx);
    ecx = ebp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFBD0u); RECOMP_ABI_CALL(0x001AFAA7u, sub_001AFAA7); /* call 0x001AFAA7 */

loc_001AFBD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFBDAu); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFBDA: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFC0D; /* je: equal / zero */

loc_001AFBE3: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx * 2 + 0x1BA460);
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, ecx);
    ecx = ebp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFBFEu); RECOMP_ABI_CALL(0x001AFAA7u, sub_001AFAA7); /* call 0x001AFAA7 */

loc_001AFBFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFC08u); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFC08: ;
    ebx = eax;
    SET_LO8(eax, MEM8(ebp + -12));

loc_001AFC0D: ;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | MEM8(ebp + -16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ecx) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001AFBB5; /* jne: not equal / not zero */

loc_001AFC21: ;
    eax = MEM32(ebp + 0xC);

loc_001AFC24: ;
    MEM32(eax) = esi;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;
    if ((_fa != 0)) goto loc_001AFB8F; /* jne: not equal / not zero */

loc_001AFC35: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001AFC37: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001AFC44
 * Original: 0x001AFC44 - 0x001AFDA6 (354 bytes, 128 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AFC44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFC44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001AFD91; /* je: equal / zero */

loc_001AFC66: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;

loc_001AFC75: ;
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + 0xC);
    MEM32(ebp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -36) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    eax = ZX16(LO16(eax));
    ebx = ZX16(LO16(edi));
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX16(MEM16(ebp + -4));
    MEM32(ebp + -40) = ecx;
    ecx = ZX16(LO16(ecx));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    ecx = edx + 8;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001AFD7B; /* je: equal / zero */

loc_001AFCB8: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AFCCE; /* jae: above or equal (unsigned >=) */

loc_001AFCC6: ;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + 8) = edi;
    goto loc_001AFCD5;

loc_001AFCCE: ;
    MEM32(ebp + 8) = 8;

loc_001AFCD5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AFD59; /* jbe: below or equal (unsigned <=) */

loc_001AFCDB: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -20) = eax;

loc_001AFCE5: ;
    ecx = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x1BA460);
    eax = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, ecx);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFD00u); RECOMP_ABI_CALL(0x001AFAA7u, sub_001AFAA7); /* call 0x001AFAA7 */

loc_001AFD00: ;
    PUSH32(esp, MEM32(ebp + -8));
    edi = eax;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFD0Bu); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFD0B: ;
    ecx = MEM32(ebp + 0x18);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x1BA460);
    MEM32(ebp + -12) = MEM32(ebp + -12) | edi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFD31u); RECOMP_ABI_CALL(0x001AFAA7u, sub_001AFAA7); /* call 0x001AFAA7 */

loc_001AFD31: ;
    PUSH32(esp, MEM32(ebp + -4));
    edi = eax;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFD3Cu); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFD3C: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = MEM32(ebp + -16) | edi;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AFCE5; /* jne: not equal / not zero */

loc_001AFD50: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -44);

loc_001AFD59: ;
    edi = MEM32(ebp + -12);
    MEM32(ecx) = edi;
    edi = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edi;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = ecx;
    if ((_fa != 0)) goto loc_001AFCB8; /* jne: not equal / not zero */

loc_001AFD78: ;
    edi = MEM32(ebp + -8);

loc_001AFD7B: ;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = eax;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edx;
    if ((_fa != 0)) goto loc_001AFC75; /* jne: not equal / not zero */

loc_001AFD8F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001AFD91: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x20);
    MEM32(eax) = edi;
    eax = MEM32(ebp + -4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001AFDA6
 * Original: 0x001AFDA6 - 0x001AFE9E (248 bytes, 90 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AFDA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFDA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(ebp + -8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001AFE97; /* je: equal / zero */

loc_001AFDBD: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;

loc_001AFDCA: ;
    eax = MEM32(ebp + -12);
    esi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esi);
    ecx = SX16(LO16(eax));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    edi = esi + 4;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFDF0u); RECOMP_ABI_CALL(0x001AEA3Au, sub_001AEA3A); /* call 0x001AEA3A */

loc_001AFDF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFE90; /* je: equal / zero */

loc_001AFDF8: ;
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(ebx) = LO16(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFE7E; /* je: equal / zero */

loc_001AFE07: ;
    goto loc_001AFE0C;

loc_001AFE09: ;
    edi = MEM32(ebp + -16);

loc_001AFE0C: ;
    SET_LO8(eax, MEM8(edi));
    esi = ZX8(LO8(eax));
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x1BA460);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + -16) = edi;
    edi = esi;
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFE2Fu); RECOMP_ABI_CALL(0x001AFB0Eu, sub_001AFB0E); /* call 0x001AFB0E */

loc_001AFE2F: ;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFE3Bu); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFE3B: ;
    edi = eax;
    eax = MEM32(ebp + 0x18);
    MEM16(ebx) = LO16(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001AFE7B; /* je: equal / zero */

loc_001AFE4A: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x1BA460);
    PUSH32(esp, ecx);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFE60u); RECOMP_ABI_CALL(0x001AFB0Eu, sub_001AFB0E); /* call 0x001AFB0E */

loc_001AFE60: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    MEM32(ebp + 0x18) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFE6Eu); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFE6E: ;
    MEM16(ebx) = LO16(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    if ((_fa != 0)) goto loc_001AFE09; /* jne: not equal / not zero */

loc_001AFE7B: ;
    esi = MEM32(ebp + 8);

loc_001AFE7E: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(ebp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001AFDCA; /* jne: not equal / not zero */

loc_001AFE8E: ;
    goto loc_001AFE94;

loc_001AFE90: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AFE94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001AFE97: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001AFE9E
 * Original: 0x001AFE9E - 0x001AFFF5 (343 bytes, 116 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AFE9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFE9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(ebp + -24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001AFFEE; /* je: equal / zero */

loc_001AFEB5: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(ebp + -36) = eax;
    PUSH32(esp, edi);

loc_001AFEBF: ;
    eax = MEM32(ebp + -36);
    esi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi);
    ecx = SX16(LO16(eax));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ZX8(LO8(eax));
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFEDFu); RECOMP_ABI_CALL(0x001AEA3Au, sub_001AEA3A); /* call 0x001AEA3A */

loc_001AFEDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFFE7; /* je: equal / zero */

loc_001AFEE7: ;
    eax = MEM32(esi + 4);
    ecx = esi + 8;
    MEM32(ebp + -28) = ecx;
    ecx = SX16(LO16(eax));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    MEM32(ebp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFF02u); RECOMP_ABI_CALL(0x001AEA3Au, sub_001AEA3A); /* call 0x001AEA3A */

loc_001AFF02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFFE7; /* je: equal / zero */

loc_001AFF0A: ;
    eax = ZX16(MEM16(ebp + 0x18));
    ecx = ZX16(MEM16(ebp + -4));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFFD5; /* je: equal / zero */

loc_001AFF2B: ;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    MEM32(ebp + -28) = eax;
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -16) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001AFF4E; /* jb: below (unsigned <) */

loc_001AFF4B: ;
    MEM32(ebp + -16) = eax;

loc_001AFF4E: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AFFC6; /* jbe: below or equal (unsigned <=) */

loc_001AFF55: ;
    MEM32(ebp + -32) = eax;

loc_001AFF58: ;
    eax = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x1BA460);
    esi = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFF70u); RECOMP_ABI_CALL(0x001AFB0Eu, sub_001AFB0E); /* call 0x001AFB0E */

loc_001AFF70: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFF7Au); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFF7A: ;
    esi = MEM32(ebp + -12);
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebx * 2 + 0x1BA460);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFF94u); RECOMP_ABI_CALL(0x001AFB0Eu, sub_001AFB0E); /* call 0x001AFB0E */

loc_001AFF94: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001AFF9Eu); RECOMP_ABI_CALL(0x001AEA17u, sub_001AEA17); /* call 0x001AEA17 */

loc_001AFF9E: ;
    ecx = ZX16(MEM16(ebp + -4));
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -12) = MEM32(ebp + -12) >> 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    eax = ZX16(MEM16(ebp + 0x18));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    if ((_fa != 0)) goto loc_001AFF58; /* jne: not equal / not zero */

loc_001AFFC3: ;
    esi = MEM32(ebp + 8);

loc_001AFFC6: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = ecx;
    if ((_fa != 0)) goto loc_001AFF2B; /* jne: not equal / not zero */

loc_001AFFD5: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(ebp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001AFEBF; /* jne: not equal / not zero */

loc_001AFFE5: ;
    goto loc_001AFFEB;

loc_001AFFE7: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AFFEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001AFFEE: ;
    eax = MEM32(ebp + -24);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001AFFF2
 * Original: 0x001AFFF2 - 0x001AFFF5 (3 bytes, 1 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFFF2(void)
{

loc_001AFFF2: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001AFFF5
 * Original: 0x001AFFF5 - 0x001AFFFF (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFFF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AFFF5: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001AFFFF(); return; /* fallthrough 0x001AFFFF */

}

/**
 * sub_001AFFFF
 * Original: 0x001AFFFF - 0x001B001A (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFFFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AFFFF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B0028(); return; } /* je: equal / zero */

loc_001B0002: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B001C(); return; } /* je: equal / zero */

loc_001B0007: ;
    _fb = (uint32_t)(0xFF95) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xFF95;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B0032(); return; } /* jne: not equal / not zero */

loc_001B000E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001B0018u); RECOMP_ABI_CALL(0x001AED7Bu, sub_001AED7B); /* call 0x001AED7B */

loc_001B0018: ;
    esi = eax;

    g_seh_ebp = ebp; sub_001B001A(); return; /* fallthrough 0x001B001A */

}

/**
 * sub_001B001A
 * Original: 0x001B001A - 0x001B001C (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B001A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B001A: ;
    g_seh_ebp = ebp; sub_001B0032(); return; /* tail jmp 0x001B0032 */

}

/**
 * sub_001B001C
 * Original: 0x001B001C - 0x001B0028 (12 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B001C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B001C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001B0026u); RECOMP_ABI_CALL(0x001AECE4u, sub_001AECE4); /* call 0x001AECE4 */

loc_001B0026: ;
    g_seh_ebp = ebp; sub_001B0032(); return; /* tail jmp 0x001B0032 */

}

/**
 * sub_001B0028
 * Original: 0x001B0028 - 0x001B0038 (16 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0028(void)
{

loc_001B0028: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001B0032u); RECOMP_ABI_CALL(0x001AEC3Fu, sub_001AEC3F); /* call 0x001AEC3F */

loc_001B0032: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B0032
 * Original: 0x001B0032 - 0x001B0038 (6 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0032(void)
{

loc_001B0032: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
