/**
 * DOAU1 - Recompiled code chunk 27
 * Functions: 250 (0x00107350 - 0x0010BC40)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00107350
 * Original: 0x00107350 - 0x001074F3 (419 bytes, 131 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107350(void)
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

loc_00107350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001074E1; /* je: equal / zero */

loc_00107360: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001074E1; /* je: equal / zero */

loc_0010736C: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001074E1; /* je: equal / zero */

loc_00107378: ;
    eax = MEM32(0x9702C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107391; /* jne: not equal / not zero */

loc_00107381: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107389u); RECOMP_ABI_CALL(0x00107290u, sub_00107290); /* call 0x00107290 */

loc_00107389: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00107391: ;
    MEM32(0x9A9944) = 0;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107414; /* je: equal / zero */

loc_001073A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107414; /* je: equal / zero */

loc_001073A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107409; /* jne: not equal / not zero */

loc_001073AA: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001073B3u); RECOMP_ABI_CALL(0x0010FD00u, sub_0010FD00); /* call 0x0010FD00 */

loc_001073B3: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001073C0u); RECOMP_ABI_CALL(0x0010FCB0u, sub_0010FCB0); /* call 0x0010FCB0 */

loc_001073C0: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001073CDu); RECOMP_ABI_CALL(0x0010FCD0u, sub_0010FCD0); /* call 0x0010FCD0 */

loc_001073CD: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x9A9948)); /* fimul dword ptr [0x9a9948] */
    PUSH32(esp, 0x001073F6u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001073F6: ;
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x9C);
    eax = edx + eax + 1;
    MEM32(edi) = eax;
    goto loc_001074CC;

loc_00107409: ;
    MEM32(edi) = 0;
    goto loc_001074CC;

loc_00107414: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107438; /* jne: not equal / not zero */

loc_0010741B: ;
    ecx = MEM32(0x97030C);
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0x9C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    goto loc_00107440;

loc_00107438: ;
    edx = MEM32(esi + 0x9C);
    MEM32(edi) = edx;

loc_00107440: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107450u); RECOMP_ABI_CALL(0x00107290u, sub_00107290); /* call 0x00107290 */

loc_00107450: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_push((double)SMEM32(edi)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(0x9A9948)); /* fidiv dword ptr [0x9a9948] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x281EEC)); /* fmul dword ptr [0x281eec] */
    MEMF(0x9A9944) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x281FEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x281fec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00107491; /* je: equal / zero */

loc_0010747E: ;
    fp_push(MEMF(0x9A9944)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2A93CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2a93cc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001074CC; /* jp: parity */

loc_00107491: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001074A4u); RECOMP_ABI_CALL(0x001103B0u, sub_001103B0); /* call 0x001103B0 */

loc_001074A4: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x9A9948)); /* fimul dword ptr [0x9a9948] */
    PUSH32(esp, 0x001074BAu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001074BA: ;
    MEM32(esi + 0x9C) = eax;
    edx = MEM32(0x97030C);
    MEM32(esi + 0xA0) = edx;

loc_001074CC: ;
    eax = MEM32(esi + 0x88);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x9A9948);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001074E1: ;
    PUSH32(esp, 0x2A93A4);
    PUSH32(esp, 0x001074EBu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001074EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_00107500
 * Original: 0x00107500 - 0x0010752E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107500(void)
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

loc_00107500: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00107517u); RECOMP_ABI_CALL(0x00107350u, sub_00107350); /* call 0x00107350 */

loc_00107517: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x10)); /* fidiv dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C8D4)); /* fmul dword ptr [0x22c8d4] */
    PUSH32(esp, 0x0010752Au); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0010752A: ;
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
 * sub_00107530
 * Original: 0x00107530 - 0x0010755E (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00107530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107530: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107549; /* jne: not equal / not zero */

loc_00107538: ;
    PUSH32(esp, 0x2A93D0);
    PUSH32(esp, 0x00107542u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107542: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107549: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010755B; /* jl: less (signed <) */

loc_0010754F: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FD00(); return; /* tail jmp 0x0010FD00 */

loc_0010755B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00107560
 * Original: 0x00107560 - 0x0010758E (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00107560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107560: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107579; /* jne: not equal / not zero */

loc_00107568: ;
    PUSH32(esp, 0x2A93FC);
    PUSH32(esp, 0x00107572u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107572: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107579: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010758B; /* jl: less (signed <) */

loc_0010757F: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FCB0(); return; /* tail jmp 0x0010FCB0 */

loc_0010758B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00107590
 * Original: 0x00107590 - 0x001075BE (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00107590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107590: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001075A9; /* jne: not equal / not zero */

loc_00107598: ;
    PUSH32(esp, 0x2A9428);
    PUSH32(esp, 0x001075A2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001075A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001075A9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001075BB; /* jl: less (signed <) */

loc_001075AF: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FCC0(); return; /* tail jmp 0x0010FCC0 */

loc_001075BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001075C0
 * Original: 0x001075C0 - 0x001075EE (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001075C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001075C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001075D9; /* jne: not equal / not zero */

loc_001075C8: ;
    PUSH32(esp, 0x2A9454);
    PUSH32(esp, 0x001075D2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001075D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001075D9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001075EB; /* jl: less (signed <) */

loc_001075DF: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FE60(); return; /* tail jmp 0x0010FE60 */

loc_001075EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001075F0
 * Original: 0x001075F0 - 0x0010761E (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001075F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001075F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107609; /* jne: not equal / not zero */

loc_001075F8: ;
    PUSH32(esp, 0x2A9480);
    PUSH32(esp, 0x00107602u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107602: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107609: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010761B; /* jl: less (signed <) */

loc_0010760F: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FE70(); return; /* tail jmp 0x0010FE70 */

loc_0010761B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00107620
 * Original: 0x00107620 - 0x00107687 (103 bytes, 40 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107638; /* jne: not equal / not zero */

loc_00107629: ;
    PUSH32(esp, 0x2A94D8);
    PUSH32(esp, 0x00107633u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107633: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00107638: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00107647u); RECOMP_ABI_CALL(0x0010FDE0u, sub_0010FDE0); /* call 0x0010FDE0 */

loc_00107647: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF80 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107652; /* jne: not equal / not zero */

loc_00107650: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00107652: ;
    ecx = MEM32(esp + 0x14);
    edx = ecx + eax;
    MEM16(esi + edi * 2 + 0x42) = LO16(edx);
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107677; /* jge: greater or equal (signed >=) */

loc_00107666: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107671u); RECOMP_ABI_CALL(0x00110440u, sub_00110440); /* call 0x00110440 */

loc_00107671: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00107677: ;
    PUSH32(esp, 0x2A94AC);
    PUSH32(esp, 0x00107681u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107681: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107690
 * Original: 0x00107690 - 0x001076B2 (34 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107690: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001076A8; /* jne: not equal / not zero */

loc_00107698: ;
    PUSH32(esp, 0x2A9504);
    PUSH32(esp, 0x001076A2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001076A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001076A8: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x42);
    esp += 4; return; /* ret */

}

/**
 * sub_001076C0
 * Original: 0x001076C0 - 0x001076F8 (56 bytes, 21 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001076C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001076C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001076D8; /* jne: not equal / not zero */

loc_001076C9: ;
    PUSH32(esp, 0x2A9530);
    PUSH32(esp, 0x001076D3u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001076D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001076D8: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001076E6u); RECOMP_ABI_CALL(0x00110450u, sub_00110450); /* call 0x00110450 */

loc_001076E6: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001076EFu); RECOMP_ABI_CALL(0x001104B0u, sub_001104B0); /* call 0x001104B0 */

loc_001076EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x46) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107700
 * Original: 0x00107700 - 0x0010771D (29 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107700: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107718; /* jne: not equal / not zero */

loc_00107708: ;
    PUSH32(esp, 0x2A9560);
    PUSH32(esp, 0x00107712u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107712: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00107718: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x46);
    esp += 4; return; /* ret */

}

/**
 * sub_00107720
 * Original: 0x00107720 - 0x00107762 (66 bytes, 24 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107720: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107738; /* jne: not equal / not zero */

loc_00107729: ;
    PUSH32(esp, 0x2A9590);
    PUSH32(esp, 0x00107733u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107733: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00107738: ;
    ecx = MEM32(esi + 4);
    SET_LO16(eax, MEM16(esp + 0xC));
    PUSH32(esp, ecx);
    MEM16(esi + 0x40) = LO16(eax);
    PUSH32(esp, 0x0010774Au); RECOMP_ABI_CALL(0x0010FDA0u, sub_0010FDA0); /* call 0x0010FDA0 */

loc_0010774A: ;
    ecx = MEM32(esi + 0xC);
    edx = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010775Du); RECOMP_ABI_CALL(0x00110430u, sub_00110430); /* call 0x00110430 */

loc_0010775D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107770
 * Original: 0x00107770 - 0x0010778D (29 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107788; /* jne: not equal / not zero */

loc_00107778: ;
    PUSH32(esp, 0x2A95BC);
    PUSH32(esp, 0x00107782u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107782: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00107788: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00107790
 * Original: 0x00107790 - 0x001077A4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107790: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010779Du); RECOMP_ABI_CALL(0x0010FDA0u, sub_0010FDA0); /* call 0x0010FDA0 */

loc_0010779D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_001077B0
 * Original: 0x001077B0 - 0x001077C9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001077B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001077B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001077C2u); RECOMP_ABI_CALL(0x0010FDE0u, sub_0010FDE0); /* call 0x0010FDE0 */

loc_001077C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_001077D0
 * Original: 0x001077D0 - 0x001077E0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001077D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001077D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0010FE20(); return; /* tail jmp 0x0010FE20 */

}

/**
 * sub_00107820
 * Original: 0x00107820 - 0x0010782F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107820(void)
{

loc_00107820: ;
    eax = MEM32(esp + 4);
    MEM32(0x9702C8) = eax;
    MEM32(0x9702CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00107830
 * Original: 0x00107830 - 0x00107853 (35 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107830: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107846; /* jne: not equal / not zero */

loc_00107838: ;
    PUSH32(esp, 0x2A95E8);
    PUSH32(esp, 0x00107842u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107842: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00107846: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x38) = eax;
    MEM32(0x9702CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00107860
 * Original: 0x00107860 - 0x001078CF (111 bytes, 41 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107860(void)
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

loc_00107860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107878; /* jne: not equal / not zero */

loc_00107869: ;
    PUSH32(esp, 0x2A9614);
    PUSH32(esp, 0x00107873u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107873: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00107878: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00107885u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00107885: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    eax = eax + eax * 8;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001078AE; /* jl: less (signed <) */

loc_001078AC: ;
    eax = ecx;

loc_001078AE: ;
    MEM16(esi + 0x3E) = LO16(eax);
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001078CD; /* je: equal / zero */

loc_001078B9: ;
    eax = SX16(LO16(eax));
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001078CAu); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_001078CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001078CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001078D0
 * Original: 0x001078D0 - 0x00107921 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001078D0(void)
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

loc_001078D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001078E7; /* jne: not equal / not zero */

loc_001078D9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2A9644;
    g_seh_ebp = ebp; sub_0010BA40(); return; /* tail jmp 0x0010BA40 */

loc_001078E7: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C264)); /* fmul dword ptr [0x22c264] */
    PUSH32(esp, 0x001078FFu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_001078FF: ;
    MEM16(esi + 0x3E) = LO16(eax);
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010791E; /* je: equal / zero */

loc_0010790A: ;
    eax = SX16(LO16(eax));
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010791Bu); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_0010791B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010791E: ;
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
 * sub_00107930
 * Original: 0x00107930 - 0x0010796E (62 bytes, 22 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107930: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107946; /* jne: not equal / not zero */

loc_00107938: ;
    PUSH32(esp, 0x2A9674);
    PUSH32(esp, 0x00107942u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107942: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00107946: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 8);
    MEM16(eax + 0x3E) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010796D; /* je: equal / zero */

loc_00107955: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x3C);
    edx = SX16(LO16(edx));
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010796Au); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_0010796A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010796D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107970
 * Original: 0x00107970 - 0x00107979 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107970(void)
{

loc_00107970: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x3E);
    esp += 4; return; /* ret */

}

/**
 * sub_00107980
 * Original: 0x00107980 - 0x001079BD (61 bytes, 24 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00107980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107980: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107999; /* jne: not equal / not zero */

loc_00107988: ;
    PUSH32(esp, 0x2A96A4);
    PUSH32(esp, 0x00107992u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107992: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107999: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001079BA; /* je: equal / zero */

loc_001079A0: ;
    eax = ecx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x001079AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001079A7u); } /* indirect call */
    }

loc_001079AA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_001079BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001079C0
 * Original: 0x001079C0 - 0x001079FF (63 bytes, 26 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001079C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001079C0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001079EE; /* je: equal / zero */

loc_001079C8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001079EE; /* jl: less (signed <) */

loc_001079D0: ;
    edx = MEM32(ecx + eax * 4 + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001079EB; /* je: equal / zero */

loc_001079D8: ;
    eax = edx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x001079E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001079DFu); } /* indirect call */
    }

loc_001079E2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_001079EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001079EE: ;
    PUSH32(esp, 0x2A96D4);
    PUSH32(esp, 0x001079F8u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001079F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00107A00
 * Original: 0x00107A00 - 0x00107A86 (134 bytes, 52 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107A00(void)
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

loc_00107A00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00107A28; /* jne: not equal / not zero */

loc_00107A12: ;
    PUSH32(esp, 0x2A9704);
    PUSH32(esp, 0x00107A1Cu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107A1C: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00107A28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107A2Eu); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_00107A2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107A7F; /* jl: less (signed <) */

loc_00107A36: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107A7F; /* je: equal / zero */

loc_00107A3D: ;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x00107A46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00107A43u); } /* indirect call */
    }

loc_00107A46: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00107A4Eu); RECOMP_ABI_CALL(0x00107590u, sub_00107590); /* call 0x00107590 */

loc_00107A4E: ;
    ecx = eax + eax * 8;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00107A6Du); RECOMP_ABI_CALL(0x00107560u, sub_00107560); /* call 0x00107560 */

loc_00107A6D: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(MEMF(esp) / fp_top()); /* fdivr dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00107A7F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_00107A90
 * Original: 0x00107A90 - 0x00107AD3 (67 bytes, 29 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107AAB; /* jne: not equal / not zero */

loc_00107A99: ;
    PUSH32(esp, 0x2A9738);
    PUSH32(esp, 0x00107AA3u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107AA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00107AAB: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107ACF; /* je: equal / zero */

loc_00107AB2: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x00107ABAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00107AB7u); } /* indirect call */
    }

loc_00107ABA: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

loc_00107ACF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107AE0
 * Original: 0x00107AE0 - 0x00107AEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107AE0(void)
{

loc_00107AE0: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x6D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00107AF0
 * Original: 0x00107AF0 - 0x00107B17 (39 bytes, 14 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107AF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107B09; /* jne: not equal / not zero */

loc_00107AF8: ;
    PUSH32(esp, 0x2A9768);
    PUSH32(esp, 0x00107B02u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107B02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107B09: ;
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00107B20
 * Original: 0x00107B20 - 0x00107B8E (110 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107B20: ;
    PUSH32(esp, 0x00107B25u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00107B25: ;
    eax = MEM32(0x9702C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107B33; /* je: equal / zero */

loc_00107B2E: ;
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_00107B33: ;
    PUSH32(esp, esi);
    MEM32(0x9702C4) = 1;
    PUSH32(esp, 0x00107B43u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00107B43: ;
    PUSH32(esp, 0x00107B48u); RECOMP_ABI_CALL(0x001102E0u, sub_001102E0); /* call 0x001102E0 */

loc_00107B48: ;
    MEM32(0x9702C4) = 2;
    esi = 0x9A8D40;

loc_00107B57: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107B65; /* jne: not equal / not zero */

loc_00107B5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107B62u); RECOMP_ABI_CALL(0x00112080u, sub_00112080); /* call 0x00112080 */

loc_00107B62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107B65: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A9940) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A9940 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107B57; /* jl: less (signed <) */

loc_00107B73: ;
    MEM32(0x9702C4) = 3;
    PUSH32(esp, 0x00107B82u); RECOMP_ABI_CALL(0x001103F0u, sub_001103F0); /* call 0x001103F0 */

loc_00107B82: ;
    MEM32(0x9702C4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107B90
 * Original: 0x00107B90 - 0x00107B95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107B90: ;
    g_seh_ebp = ebp; sub_00107B20(); return; /* tail jmp 0x00107B20 */

}

/**
 * sub_00107BA0
 * Original: 0x00107BA0 - 0x00107BBE (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107BA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107BB9; /* jne: not equal / not zero */

loc_00107BA8: ;
    PUSH32(esp, 0x2A9794);
    PUSH32(esp, 0x00107BB2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107BB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107BB9: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_00107BC0
 * Original: 0x00107BC0 - 0x00107BE7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107BC0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107BD7; /* jne: not equal / not zero */

loc_00107BCA: ;
    MEM32(esp + 4) = 0x2A97C0;
    g_seh_ebp = ebp; sub_0010BA40(); return; /* tail jmp 0x0010BA40 */

loc_00107BD7: ;
    MEM16(eax + 0x60) = LO16(ecx);
    MEM32(eax + 0x64) = ecx;
    MEM16(eax + 0x68) = LO16(ecx);
    MEM16(eax + 0x6A) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00107BF0
 * Original: 0x00107BF0 - 0x00107C0D (29 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107BF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107C09; /* jne: not equal / not zero */

loc_00107BF8: ;
    PUSH32(esp, 0x2A97F0);
    PUSH32(esp, 0x00107C02u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107C02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107C09: ;
    eax = MEM32(eax + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00107C10
 * Original: 0x00107C10 - 0x00107C2E (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107C10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107C26; /* jne: not equal / not zero */

loc_00107C18: ;
    PUSH32(esp, 0x2A981C);
    PUSH32(esp, 0x00107C22u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107C22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00107C26: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x6C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00107C30
 * Original: 0x00107C30 - 0x00107C4C (28 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107C30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107C48; /* jne: not equal / not zero */

loc_00107C38: ;
    PUSH32(esp, 0x2A9848);
    PUSH32(esp, 0x00107C42u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107C42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00107C48: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00107C50
 * Original: 0x00107C50 - 0x00107C6E (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107C50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107C66; /* jne: not equal / not zero */

loc_00107C58: ;
    PUSH32(esp, 0x2A9874);
    PUSH32(esp, 0x00107C62u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107C62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00107C66: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x70) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00107C70
 * Original: 0x00107C70 - 0x00107C8E (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107C70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107C89; /* jne: not equal / not zero */

loc_00107C78: ;
    PUSH32(esp, 0x2A98A8);
    PUSH32(esp, 0x00107C82u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107C82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00107C89: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x71);
    esp += 4; return; /* ret */

}

/**
 * sub_00107C90
 * Original: 0x00107C90 - 0x00107D56 (198 bytes, 63 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107C90(void)
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

loc_00107C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107CAA; /* jne: not equal / not zero */

loc_00107C9A: ;
    PUSH32(esp, 0x2A98DC);
    PUSH32(esp, 0x00107CA4u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107CA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00107CAA: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x72);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00107D51; /* je: equal / zero */

loc_00107CC0: ;
    PUSH32(esp, 0x00107CC5u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00107CC5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM8(esi + 0x72) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00107CD2; /* je: equal / zero */

loc_00107CCD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107D4C; /* jne: not equal / not zero */

loc_00107CD2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107CF0; /* jne: not equal / not zero */

loc_00107CD7: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107CE2u); RECOMP_ABI_CALL(0x001103A0u, sub_001103A0); /* call 0x001103A0 */

loc_00107CE2: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00107CEBu); RECOMP_ABI_CALL(0x00113590u, sub_00113590); /* call 0x00113590 */

loc_00107CEB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00107D0A;

loc_00107CF0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00107CFBu); RECOMP_ABI_CALL(0x001103A0u, sub_001103A0); /* call 0x001103A0 */

loc_00107CFB: ;
    ecx = MEM32(0x97030C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = ecx;

loc_00107D0A: ;
    edi = MEM32(0x9702C0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x9702C0) = 0;
    PUSH32(esp, 0x00107D2Au); RECOMP_ABI_CALL(0x00107350u, sub_00107350); /* call 0x00107350 */

loc_00107D2A: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9702C0) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x9A9948)); /* fimul dword ptr [0x9a9948] */
    PUSH32(esp, 0x00107D46u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00107D46: ;
    MEM32(esi + 0x9C) = eax;

loc_00107D4C: ;
    PUSH32(esp, 0x00107D51u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00107D51: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_00107D60
 * Original: 0x00107D60 - 0x00107D7D (29 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107D60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107D78; /* jne: not equal / not zero */

loc_00107D68: ;
    PUSH32(esp, 0x2A9904);
    PUSH32(esp, 0x00107D72u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00107D72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00107D78: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x72);
    esp += 4; return; /* ret */

}

/**
 * sub_00107D80
 * Original: 0x00107D80 - 0x00107D85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107D80: ;
    g_seh_ebp = ebp; sub_00110500(); return; /* tail jmp 0x00110500 */

}

/**
 * sub_00107D90
 * Original: 0x00107D90 - 0x00107D95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107D90: ;
    g_seh_ebp = ebp; sub_00110510(); return; /* tail jmp 0x00110510 */

}

/**
 * sub_00107DA0
 * Original: 0x00107DA0 - 0x00107E29 (137 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107DA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00107DBEu); RECOMP_ABI_CALL(0x001136A0u, sub_001136A0); /* call 0x001136A0 */

loc_00107DBE: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107DC9u); RECOMP_ABI_CALL(0x00112F60u, sub_00112F60); /* call 0x00112F60 */

loc_00107DC9: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00107DD1u); RECOMP_ABI_CALL(0x0010F420u, sub_0010F420); /* call 0x0010F420 */

loc_00107DD1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107E24; /* jne: not equal / not zero */

loc_00107DD9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00107DDFu); RECOMP_ABI_CALL(0x0010FD20u, sub_0010FD20); /* call 0x0010FD20 */

loc_00107DDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (CMP_LE(_fas, _fbs)) goto loc_00107DF4; /* jle: less or equal (signed <=) */

loc_00107DE9: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    edx = eax + eax * 2;
    MEM32(esi + 0x48) = edx;
    goto loc_00107E02;

loc_00107DF4: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x48) = eax;

loc_00107E02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00107E08u); RECOMP_ABI_CALL(0x0010FCE0u, sub_0010FCE0); /* call 0x0010FCE0 */

loc_00107E08: ;
    ecx = eax;
    eax = MEM32(esi + 0x48);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x00107E21u); RECOMP_ABI_CALL(0x0010F480u, sub_0010F480); /* call 0x0010F480 */

loc_00107E21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107E24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00107E30
 * Original: 0x00107E30 - 0x00107E40 (16 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107E30: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00112D30(); return; /* tail jmp 0x00112D30 */

}

/**
 * sub_00107E70
 * Original: 0x00107E70 - 0x00107E78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107E70(void)
{

loc_00107E70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00107E80
 * Original: 0x00107E80 - 0x00107E90 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107E80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0010F4B0(); return; /* tail jmp 0x0010F4B0 */

}

/**
 * sub_00107EA0
 * Original: 0x00107EA0 - 0x00107EA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00107EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00107EA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00107EB0
 * Original: 0x00107EB0 - 0x00107EB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107EB0(void)
{

loc_00107EB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107EC0
 * Original: 0x00107EC0 - 0x00107EC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107EC0(void)
{

loc_00107EC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107ED0
 * Original: 0x00107ED0 - 0x00107ED1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107ED0(void)
{

loc_00107ED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107EE0
 * Original: 0x00107EE0 - 0x00107EE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107EE0(void)
{

loc_00107EE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107EF0
 * Original: 0x00107EF0 - 0x00107EF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107EF0: ;
    g_seh_ebp = ebp; sub_0010BA20(); return; /* tail jmp 0x0010BA20 */

}

/**
 * sub_00107F00
 * Original: 0x00107F00 - 0x00107F7E (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107F00(void)
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

loc_00107F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00107F12; /* jne: not equal / not zero */

loc_00107F0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00107F12: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00107F22u); RECOMP_ABI_CALL(0x001104D0u, sub_001104D0); /* call 0x001104D0 */

loc_00107F22: ;
    edi = eax;
    PUSH32(esp, 0x00107F29u); RECOMP_ABI_CALL(0x00107B20u, sub_00107B20); /* call 0x00107B20 */

loc_00107F29: ;
    ebx = MEM32(0x9702C0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x9702C0) = 0;
    PUSH32(esp, 0x00107F49u); RECOMP_ABI_CALL(0x00107350u, sub_00107350); /* call 0x00107350 */

loc_00107F49: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9702C0) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x9A9948)); /* fimul dword ptr [0x9a9948] */
    PUSH32(esp, 0x00107F65u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00107F65: ;
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(0x97030C);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0xA0) = ecx;
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
 * sub_00107F80
 * Original: 0x00107F80 - 0x00107F8B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107F80(void)
{

loc_00107F80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x88);
    esp += 4; return; /* ret */

}

/**
 * sub_00107F90
 * Original: 0x00107F90 - 0x00107F9F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107F90(void)
{

loc_00107F90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00107FA0
 * Original: 0x00107FA0 - 0x00107FB0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107FA0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0010FBD0(); return; /* tail jmp 0x0010FBD0 */

}

/**
 * sub_00107FB0
 * Original: 0x00107FB0 - 0x00107FD3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107FB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x98) = LO8(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107FD2; /* je: equal / zero */

loc_00107FC5: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FB80(); return; /* tail jmp 0x0010FB80 */

loc_00107FD2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00107FE0
 * Original: 0x00107FE0 - 0x00107FEC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107FE0(void)
{

loc_00107FE0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_00107FF0
 * Original: 0x00107FF0 - 0x00108000 (16 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107FF0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FC00(); return; /* tail jmp 0x0010FC00 */

}

/**
 * sub_00108030
 * Original: 0x00108030 - 0x00108055 (37 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108030: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108049; /* jne: not equal / not zero */

loc_00108038: ;
    PUSH32(esp, 0x2A9990);
    PUSH32(esp, 0x00108042u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108042: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00108049: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FB30(); return; /* tail jmp 0x0010FB30 */

}

/**
 * sub_00108060
 * Original: 0x00108060 - 0x00108082 (34 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108060: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108076; /* jne: not equal / not zero */

loc_00108068: ;
    PUSH32(esp, 0x2A9990);
    PUSH32(esp, 0x00108072u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108072: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00108076: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010FB50(); return; /* tail jmp 0x0010FB50 */

}

/**
 * sub_00108090
 * Original: 0x00108090 - 0x001080FE (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108090: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001080E4; /* jl: less (signed <) */

loc_0010809C: ;
    eax = MEM32(esp + 0x18);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_HI8(edx, MEM8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001080E4; /* jne: not equal / not zero */

loc_001080AE: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = esp + 0x11;
    PUSH32(esp, edx);
    edx = esp + 0x16;
    PUSH32(esp, edx);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001080DDu); RECOMP_ABI_CALL(0x00110CC0u, sub_00110CC0); /* call 0x00110CC0 */

loc_001080DD: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001080EA; /* jge: greater or equal (signed >=) */

loc_001080E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001080EA: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108100
 * Original: 0x00108100 - 0x0010812A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108100: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010811B; /* jl: less (signed <) */

loc_00108109: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_HI8(edx, MEM8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8001 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010811E; /* je: equal / zero */

loc_0010811B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010811E: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00108130
 * Original: 0x00108130 - 0x00108243 (275 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108130: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108146; /* jne: not equal / not zero */

loc_0010813F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00108146: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    ebx = ebx + ebx * 8;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00108172u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010816Fu); } /* indirect call */
    }

loc_00108172: ;
    eax = MEM32(esp + 0x24);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x34) = eax;
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
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = edx;
    edx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001081ABu); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_001081AB: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001081B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001081B5u); } /* indirect call */
    }

loc_001081B8: ;
    edx = MEM32(esi);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001081C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001081C2u); } /* indirect call */
    }

loc_001081C5: ;
    ecx = MEM32(esi);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x6C) = edi;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x001081D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001081D6u); } /* indirect call */
    }

loc_001081D9: ;
    eax = MEM32(esp + 0x5C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    ecx = ebp;
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
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00108211u); RECOMP_ABI_CALL(0x00113970u, sub_00113970); /* call 0x00113970 */

loc_00108211: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0010821Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010821Bu); } /* indirect call */
    }

loc_0010821E: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0010822Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108228u); } /* indirect call */
    }

loc_0010822B: ;
    ecx = MEM32(esp + 0x4C);
    eax = ecx + ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108250
 * Original: 0x00108250 - 0x00108255 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108250: ;
    g_seh_ebp = ebp; sub_00113BC0(); return; /* tail jmp 0x00113BC0 */

}

/**
 * sub_00108260
 * Original: 0x00108260 - 0x00108282 (34 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108260: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108276; /* jne: not equal / not zero */

loc_00108268: ;
    PUSH32(esp, 0x2A99BC);
    PUSH32(esp, 0x00108272u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108272: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00108276: ;
    edx = MEM32(eax + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0010FBA0(); return; /* tail jmp 0x0010FBA0 */

}

/**
 * sub_00108290
 * Original: 0x00108290 - 0x00108295 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108290: ;
    g_seh_ebp = ebp; sub_0010FBB0(); return; /* tail jmp 0x0010FBB0 */

}

/**
 * sub_001082A0
 * Original: 0x001082A0 - 0x001082A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001082A0(void)
{

loc_001082A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001082B0
 * Original: 0x001082B0 - 0x001082C0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001082B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001082B0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0010FBC0(); return; /* tail jmp 0x0010FBC0 */

}

/**
 * sub_001082C0
 * Original: 0x001082C0 - 0x001083ED (301 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001082C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001082C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001082DB; /* jne: not equal / not zero */

loc_001082CC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x2A99EC;
    g_seh_ebp = ebp; sub_0010BA40(); return; /* tail jmp 0x0010BA40 */

loc_001082DB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001082E1u); RECOMP_ABI_CALL(0x00106FF0u, sub_00106FF0); /* call 0x00106FF0 */

loc_001082E1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001082E7u); RECOMP_ABI_CALL(0x00107000u, sub_00107000); /* call 0x00107000 */

loc_001082E7: ;
    SET_LO8(eax, MEM8(ebp));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001082FA; /* jne: not equal / not zero */

loc_001082F1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001082F7u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_001082F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001082FA: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010830D; /* je: equal / zero */

loc_00108301: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, 0x0010830Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0010830A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010830D: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108320; /* je: equal / zero */

loc_00108314: ;
    PUSH32(esp, eax);
    MEM32(ebp + 4) = ebx;
    PUSH32(esp, 0x0010831Du); RECOMP_ABI_CALL(0x0010F3E0u, sub_0010F3E0); /* call 0x0010F3E0 */

loc_0010831D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108320: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010833D; /* je: equal / zero */

loc_00108329: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, 0x00108334u); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_00108334: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010833Au); RECOMP_ABI_CALL(0x0010C6C0u, sub_0010C6C0); /* call 0x0010C6C0 */

loc_0010833A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010833D: ;
    eax = MEM32(ebp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108356; /* je: equal / zero */

loc_00108347: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x94) = ebx;
    PUSH32(esp, 0x00108353u); RECOMP_ABI_CALL(0x00110B30u, sub_00110B30); /* call 0x00110B30 */

loc_00108353: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108356: ;
    PUSH32(esp, 0x0010835Bu); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_0010835B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010836E; /* je: equal / zero */

loc_00108362: ;
    MEM32(ebp + 0x10) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0010836Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00108368u); } /* indirect call */
    }

loc_0010836B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010836E: ;
    SET_LO8(eax, MEM8(ebp + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001083C3; /* jle: less or equal (signed <=) */

loc_00108377: ;
    esi = ebp + 0x78;
    /* nop */

loc_00108380: ;
    eax = MEM32(esi + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108393; /* je: equal / zero */

loc_00108387: ;
    MEM32(esi + -96) = ebx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00108390u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010838Du); } /* indirect call */
    }

loc_00108390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108393: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001083A4; /* je: equal / zero */

loc_00108399: ;
    MEM32(esi) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x001083A1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010839Eu); } /* indirect call */
    }

loc_001083A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083A4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001083B7; /* je: equal / zero */

loc_001083AB: ;
    MEM32(esi + 8) = ebx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001083B4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001083B1u); } /* indirect call */
    }

loc_001083B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083B7: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00108380; /* jl: less (signed <) */

loc_001083C3: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001083D6; /* je: equal / zero */

loc_001083CA: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x74) = ebx;
    PUSH32(esp, 0x001083D3u); RECOMP_ABI_CALL(0x0010EF70u, sub_0010EF70); /* call 0x0010EF70 */

loc_001083D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083D6: ;
    edi = ebp;
    ecx = 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp) = LO8(ebx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

}

/**
 * sub_001083F0
 * Original: 0x001083F0 - 0x00108414 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001083F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001083F0: ;
    PUSH32(esp, esi);
    esi = 0x9A8D40;

loc_001083F6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108404; /* jne: not equal / not zero */

loc_001083FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108401u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00108401: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108404: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A9940) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A9940 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001083F6; /* jl: less (signed <) */

loc_00108412: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00108420
 * Original: 0x00108420 - 0x00108425 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108420: ;
    g_seh_ebp = ebp; sub_001083F0(); return; /* tail jmp 0x001083F0 */

}

/**
 * sub_00108430
 * Original: 0x00108430 - 0x0010847A (74 bytes, 28 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108430: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010846A; /* je: equal / zero */

loc_0010843A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010846A; /* je: equal / zero */

loc_00108442: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108448u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00108448: ;
    PUSH32(esp, 0x0010844Du); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_0010844D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108454u); RECOMP_ABI_CALL(0x00107010u, sub_00107010); /* call 0x00107010 */

loc_00108454: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esi + 2) = 3;
    PUSH32(esp, 0x00108460u); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_00108460: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_0010846A: ;
    PUSH32(esp, 0x2A9A14);
    PUSH32(esp, 0x00108474u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108474: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00108480
 * Original: 0x00108480 - 0x0010855B (219 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010850A; /* je: equal / zero */

loc_0010848D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010850A; /* je: equal / zero */

loc_00108491: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001084E7; /* jne: not equal / not zero */

loc_00108495: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010849Eu); RECOMP_ABI_CALL(0x0010FD00u, sub_0010FD00); /* call 0x0010FD00 */

loc_0010849E: ;
    edi = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001084ADu); RECOMP_ABI_CALL(0x0010FCB0u, sub_0010FCB0); /* call 0x0010FCB0 */

loc_001084AD: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001084BCu); RECOMP_ABI_CALL(0x0010FCD0u, sub_0010FCD0); /* call 0x0010FCD0 */

loc_001084BC: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi));
    MEM32(edi) = eax;
    edx = MEM32(esi + 0xA4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x88);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001084E7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    MEM32(ecx) = 1;
    edx = MEM32(esi + 0x88);
    ecx = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010850A: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00108514u); RECOMP_ABI_CALL(0x0010FCB0u, sub_0010FCB0); /* call 0x0010FCB0 */

loc_00108514: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00108523u); RECOMP_ABI_CALL(0x0010FB40u, sub_0010FB40); /* call 0x0010FB40 */

loc_00108523: ;
    edi = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010852Eu); RECOMP_ABI_CALL(0x001103C0u, sub_001103C0); /* call 0x001103C0 */

loc_0010852E: ;
    ebx = MEM32(esi + 0xA4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00108540u); RECOMP_ABI_CALL(0x001079C0u, sub_001079C0); /* call 0x001079C0 */

loc_00108540: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x88);
    edx = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00108560
 * Original: 0x00108560 - 0x001087CD (621 bytes, 213 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108560: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = eax + 0x3F;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFFC0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001087BB; /* jl: less (signed <) */

loc_00108582: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001087BB; /* je: equal / zero */

loc_0010858A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001087BB; /* jl: less (signed <) */

loc_00108592: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x9A8E00;
    /* nop */

loc_001085A0: ;
    _fa = (uint32_t)(MEM8(eax + -192)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -192), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001085DC; /* je: equal / zero */

loc_001085A9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001085D1; /* je: equal / zero */

loc_001085AE: ;
    _fa = (uint32_t)(MEM8(eax + 0xC0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC0), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001085D4; /* je: equal / zero */

loc_001085B7: ;
    _fa = (uint32_t)(MEM8(eax + 0x180)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x180), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001085D9; /* je: equal / zero */

loc_001085C0: ;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x300)) >> 32) & 1);
    eax = eax + 0x300;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A9A00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A9A00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001085A0; /* jl: less (signed <) */

loc_001085CF: ;
    goto loc_001085DC;

loc_001085D1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001085DC;

loc_001085D4: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001085DC;

loc_001085D9: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(3)) >> 32) & 1);
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001085DC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001085F3; /* jne: not equal / not zero */

loc_001085E1: ;
    PUSH32(esp, 0x2A9A64);
    PUSH32(esp, 0x001085EBu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001085EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001085F3: ;
    PUSH32(esp, esi);
    esi = ecx + ecx * 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    if (6) _cf = (int)(((esi) >> (32 - (6))) & 1);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x9A8D40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x9A8D40)) >> 32) & 1);
    esi = esi + 0x9A8D40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x30;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x40C0);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x124));
    eax = eax - 0x124;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + ebp;
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x24);
    MEM32(esi + 0x2C) = ebp;
    PUSH32(esp, eax);
    ecx = eax + edi + 0x24;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM8(esi + 3) = LO8(ebx);
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = 0x24;
    MEM32(esi + 0xAC) = ecx;
    MEM32(esi + 0x30) = 0x2000;
    MEM32(esi + 0x34) = 0x2060;
    MEM32(esi + 0x14) = ebp;
    PUSH32(esp, 0x00108668u); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_00108668: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00108702; /* je: equal / zero */

loc_00108676: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010867Du); RECOMP_ABI_CALL(0x0010BDA0u, sub_0010BDA0); /* call 0x0010BDA0 */

loc_0010867D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00108702; /* je: equal / zero */

loc_00108687: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001086C3; /* jle: less or equal (signed <=) */

loc_0010868D: ;
    ebp = esi + 0x18;

loc_00108690: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ecx)) >> 32) & 1);
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = edx + eax * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001086AFu); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_001086AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00108702; /* je: equal / zero */

loc_001086B9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00108690; /* jl: less (signed <) */

loc_001086C1: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001086C3: ;
    ecx = MEM32(esi + 0x10);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001086D1u); RECOMP_ABI_CALL(0x0010FEB0u, sub_0010FEB0); /* call 0x0010FEB0 */

loc_001086D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00108702; /* je: equal / zero */

loc_001086DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001086E2u); RECOMP_ABI_CALL(0x00110340u, sub_00110340); /* call 0x00110340 */

loc_001086E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00108702; /* je: equal / zero */

loc_001086EC: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001086F5u); RECOMP_ABI_CALL(0x001105A0u, sub_001105A0); /* call 0x001105A0 */

loc_001086F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x94) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00108712; /* jne: not equal / not zero */

loc_00108702: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108708u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00108708: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00108712: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010871Cu); RECOMP_ABI_CALL(0x00110670u, sub_00110670); /* call 0x00110670 */

loc_0010871C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00108724u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00108724: ;
    edx = MEM32(0x9702C8);
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi + 0x3C) = LO16(eax);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C264)); /* fmul dword ptr [0x22c264] */
    PUSH32(esp, 0x00108756u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_00108756: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(esi + 0x3E) = LO16(eax);
    MEM16(esi + 0x40) = LO16(ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_00108775; /* jle: less or equal (signed <=) */

loc_00108762: ;
    ecx = ebx;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + 0x42;
    eax = 0xFF80FF80u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_00108775: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM16(esi + 0x46) = LO16(ebp);
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM32(esi + 0x54) = ebp;
    MEM32(esi + 0x58) = ebp;
    MEM32(esi + 0x5C) = ebp;
    MEM16(esi + 0x60) = LO16(ebp);
    MEM32(esi + 0x64) = ebp;
    MEM16(esi + 0x68) = LO16(ebp);
    MEM16(esi + 0x6A) = LO16(ebp);
    MEM8(esi + 0x6D) = LO8(ebx);
    MEM8(esi + 0x72) = 0;
    MEM32(esi + 0x88) = ebp;
    PUSH32(esp, 0x001087AAu); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_001087AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(ebx);
    PUSH32(esp, 0x001087B4u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_001087B4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001087BB: ;
    PUSH32(esp, 0x2A9A3C);
    PUSH32(esp, 0x001087C5u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001087C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001087D0
 * Original: 0x001087D0 - 0x001087E5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001087D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001087D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001087E1u); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_001087E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001087F0
 * Original: 0x001087F0 - 0x001087FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001087F0(void)
{

loc_001087F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001087FAu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001087FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00108800
 * Original: 0x00108800 - 0x00108865 (101 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108800: ;
    PUSH32(esp, 0x00108805u); RECOMP_ABI_CALL(0x00109040u, sub_00109040); /* call 0x00109040 */

loc_00108805: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1087F0);
    PUSH32(esp, 0x00108811u); RECOMP_ABI_CALL(0x0010D020u, sub_0010D020); /* call 0x0010D020 */

loc_00108811: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x115990);
    PUSH32(esp, 0x2A9A94);
    PUSH32(esp, 0x00108822u); RECOMP_ABI_CALL(0x0010DD50u, sub_0010DD50); /* call 0x0010DD50 */

loc_00108822: ;
    PUSH32(esp, 0x00108827u); RECOMP_ABI_CALL(0x001142E0u, sub_001142E0); /* call 0x001142E0 */

loc_00108827: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1142D0);
    PUSH32(esp, 0x2A9A90);
    PUSH32(esp, 0x00108838u); RECOMP_ABI_CALL(0x0010DD50u, sub_0010DD50); /* call 0x0010DD50 */

loc_00108838: ;
    PUSH32(esp, 0x2A9A90);
    PUSH32(esp, 0x00108842u); RECOMP_ABI_CALL(0x0010D590u, sub_0010D590); /* call 0x0010D590 */

loc_00108842: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108858; /* je: equal / zero */

loc_0010884D: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00114A90(); return; /* tail jmp 0x00114A90 */

loc_00108858: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00114A90(); return; /* tail jmp 0x00114A90 */

}

/**
 * sub_00108870
 * Original: 0x00108870 - 0x00108888 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108870: ;
    PUSH32(esp, 0x00108875u); RECOMP_ABI_CALL(0x00106DE0u, sub_00106DE0); /* call 0x00106DE0 */

loc_00108875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010887E; /* jle: less or equal (signed <=) */

loc_00108879: ;
    PUSH32(esp, 0x0010887Eu); RECOMP_ABI_CALL(0x00106E00u, sub_00106E00); /* call 0x00106E00 */

loc_0010887E: ;
    PUSH32(esp, 0x00108883u); RECOMP_ABI_CALL(0x0010C7D0u, sub_0010C7D0); /* call 0x0010C7D0 */

loc_00108883: ;
    g_seh_ebp = ebp; sub_00115780(); return; /* tail jmp 0x00115780 */

}

/**
 * sub_00108890
 * Original: 0x00108890 - 0x001088A0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0010889Cu); RECOMP_ABI_CALL(0x001121B0u, sub_001121B0); /* call 0x001121B0 */

loc_0010889C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001088A0
 * Original: 0x001088A0 - 0x001088A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001088A0(void)
{

loc_001088A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001088B0
 * Original: 0x001088B0 - 0x001088B9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001088B0(void)
{

loc_001088B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001088B7u); RECOMP_ABI_CALL(0x00116180u, sub_00116180); /* call 0x00116180 */

loc_001088B7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001088C0
 * Original: 0x001088C0 - 0x001088C9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001088C0(void)
{

loc_001088C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001088C7u); RECOMP_ABI_CALL(0x00116180u, sub_00116180); /* call 0x00116180 */

loc_001088C7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001088D0
 * Original: 0x001088D0 - 0x0010891A (74 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001088D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001088D0: ;
    PUSH32(esp, 0x001088D5u); RECOMP_ABI_CALL(0x00107B20u, sub_00107B20); /* call 0x00107B20 */

loc_001088D5: ;
    _fa = (uint32_t)(MEM32(0x970314)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x970314), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001088F5; /* je: equal / zero */

loc_001088DE: ;
    edi = edi;

loc_001088E0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x001088E7u); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_001088E7: ;
    PUSH32(esp, 0x001088ECu); RECOMP_ABI_CALL(0x00107B20u, sub_00107B20); /* call 0x00107B20 */

loc_001088EC: ;
    _fa = (uint32_t)(MEM32(0x970314)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x970314), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001088E0; /* jne: not equal / not zero */

loc_001088F5: ;
    PUSH32(esp, 0);
    MEM32(0x970314) = 0;
    PUSH32(esp, 0x00108906u); RECOMP_ABI_CALL(0x000AD193u, sub_000AD193); /* call 0x000AD193 */

loc_00108906: ;
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
    PUSH32(esp, 0x00108915u); RECOMP_ABI_CALL(0x001088D0u, sub_001088D0); /* call 0x001088D0 */

loc_00108915: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00108920
 * Original: 0x00108920 - 0x0010895E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108920: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x970310)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x970310), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010895C; /* je: equal / zero */

loc_0010892A: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x108910);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x970314) = 0;
    PUSH32(esp, 0x0010894Au); RECOMP_ABI_CALL(0x000AD420u, sub_000AD420); /* call 0x000AD420 */

loc_0010894A: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00108952u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00108952: ;
    MEM32(0x970310) = 1;

loc_0010895C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00108960
 * Original: 0x00108960 - 0x0010898E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108960: ;
    MEM32(0x970314) = 1;
    eax = MEM32(0x970314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108983; /* je: equal / zero */

loc_00108973: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010897Au); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_0010897A: ;
    eax = MEM32(0x970314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108973; /* jne: not equal / not zero */

loc_00108983: ;
    MEM32(0x970310) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00108990
 * Original: 0x00108990 - 0x0010899A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108990(void)
{

loc_00108990: ;
    eax = MEM32(esp + 4);
    MEM32(0x2F93B8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001089A0
 * Original: 0x001089A0 - 0x001089AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001089A0(void)
{

loc_001089A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001089AAu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001089AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001089B0
 * Original: 0x001089B0 - 0x001089BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001089B0(void)
{

loc_001089B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001089BAu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001089BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001089C0
 * Original: 0x001089C0 - 0x001089D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001089C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001089C0: ;
    eax = MEM32(0x97030C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x97030C) = eax;
    g_seh_ebp = ebp; sub_00107B20(); return; /* tail jmp 0x00107B20 */

}

/**
 * sub_001089D0
 * Original: 0x001089D0 - 0x001089D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001089D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001089D0: ;
    PUSH32(esp, 0x001089D5u); RECOMP_ABI_CALL(0x00110820u, sub_00110820); /* call 0x00110820 */

loc_001089D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001089E0
 * Original: 0x001089E0 - 0x001089E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001089E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001089E0: ;
    PUSH32(esp, 0x001089E5u); RECOMP_ABI_CALL(0x00107B20u, sub_00107B20); /* call 0x00107B20 */

loc_001089E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001089F0
 * Original: 0x001089F0 - 0x001089F8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001089F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001089F0: ;
    PUSH32(esp, 0x001089F5u); RECOMP_ABI_CALL(0x00117190u, sub_00117190); /* call 0x00117190 */

loc_001089F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108A00
 * Original: 0x00108A00 - 0x00108A71 (113 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108A00: ;
    MEM32(0x9702FC) = MEM32(0x9702FC) - 1;
    _fa = (uint32_t)(MEM32(0x9702FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00108A70; /* jne: not equal / not zero */

loc_00108A08: ;
    PUSH32(esp, 0x00108A0Du); RECOMP_ABI_CALL(0x001083F0u, sub_001083F0); /* call 0x001083F0 */

loc_00108A0D: ;
    PUSH32(esp, 0x00108A12u); RECOMP_ABI_CALL(0x00110320u, sub_00110320); /* call 0x00110320 */

loc_00108A12: ;
    PUSH32(esp, 0x00108A17u); RECOMP_ABI_CALL(0x0010B950u, sub_0010B950); /* call 0x0010B950 */

loc_00108A17: ;
    PUSH32(esp, 0x00108A1Cu); RECOMP_ABI_CALL(0x0010BC30u, sub_0010BC30); /* call 0x0010BC30 */

loc_00108A1C: ;
    PUSH32(esp, 0x00108A21u); RECOMP_ABI_CALL(0x00118360u, sub_00118360); /* call 0x00118360 */

loc_00108A21: ;
    PUSH32(esp, 0x00108A26u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00108A26: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00108A2Fu); RECOMP_ABI_CALL(0x001181A0u, sub_001181A0); /* call 0x001181A0 */

loc_00108A2F: ;
    eax = MEM32(0x970308);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00108A3Cu); RECOMP_ABI_CALL(0x001181A0u, sub_001181A0); /* call 0x001181A0 */

loc_00108A3C: ;
    ecx = MEM32(0x970304);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00108A4Au); RECOMP_ABI_CALL(0x001181A0u, sub_001181A0); /* call 0x001181A0 */

loc_00108A4A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00108A52u); RECOMP_ABI_CALL(0x00118030u, sub_00118030); /* call 0x00118030 */

loc_00108A52: ;
    PUSH32(esp, 0x00108A57u); RECOMP_ABI_CALL(0x0010F380u, sub_0010F380); /* call 0x0010F380 */

loc_00108A57: ;
    PUSH32(esp, 0x00108A5Cu); RECOMP_ABI_CALL(0x0010BA00u, sub_0010BA00); /* call 0x0010BA00 */

loc_00108A5C: ;
    PUSH32(esp, 0x00108A61u); RECOMP_ABI_CALL(0x001177D0u, sub_001177D0); /* call 0x001177D0 */

loc_00108A61: ;
    PUSH32(esp, 0x00108A66u); RECOMP_ABI_CALL(0x00109380u, sub_00109380); /* call 0x00109380 */

loc_00108A66: ;
    PUSH32(esp, 0x00108A6Bu); RECOMP_ABI_CALL(0x00117260u, sub_00117260); /* call 0x00117260 */

loc_00108A6B: ;
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_00108A70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00108A80
 * Original: 0x00108A80 - 0x00108A9B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00108A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108A80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00108A87u); RECOMP_ABI_CALL(0x001089E0u, sub_001089E0); /* call 0x001089E0 */

loc_00108A87: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00108A8Eu); RECOMP_ABI_CALL(0x001089F0u, sub_001089F0); /* call 0x001089F0 */

loc_00108A8E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00108A95u); RECOMP_ABI_CALL(0x001089D0u, sub_001089D0); /* call 0x001089D0 */

loc_00108A95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108AA0
 * Original: 0x00108AA0 - 0x00108B9E (254 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108AA0: ;
    eax = MEM32(0x9702F8);
    eax = MEM32(0x9702FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x9702F8);
    if (CMP_NE(_fa, _fb)) goto loc_00108B97; /* jne: not equal / not zero */

loc_00108AB8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00108ABEu); RECOMP_ABI_CALL(0x0010C700u, sub_0010C700); /* call 0x0010C700 */

loc_00108ABE: ;
    PUSH32(esp, 0x00108AC3u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00108AC3: ;
    PUSH32(esp, 0x00108AC8u); RECOMP_ABI_CALL(0x00117240u, sub_00117240); /* call 0x00117240 */

loc_00108AC8: ;
    PUSH32(esp, 0x00108ACDu); RECOMP_ABI_CALL(0x00109350u, sub_00109350); /* call 0x00109350 */

loc_00108ACD: ;
    PUSH32(esp, 0x00108AD2u); RECOMP_ABI_CALL(0x001177B0u, sub_001177B0); /* call 0x001177B0 */

loc_00108AD2: ;
    PUSH32(esp, 0x00108AD7u); RECOMP_ABI_CALL(0x0010B9E0u, sub_0010B9E0); /* call 0x0010B9E0 */

loc_00108AD7: ;
    PUSH32(esp, 0x00108ADCu); RECOMP_ABI_CALL(0x0010BC00u, sub_0010BC00); /* call 0x0010BC00 */

loc_00108ADC: ;
    PUSH32(esp, 0x00108AE1u); RECOMP_ABI_CALL(0x0010F360u, sub_0010F360); /* call 0x0010F360 */

loc_00108AE1: ;
    PUSH32(esp, 0x00108AE6u); RECOMP_ABI_CALL(0x0010B8B0u, sub_0010B8B0); /* call 0x0010B8B0 */

loc_00108AE6: ;
    PUSH32(esp, 0x00108AEBu); RECOMP_ABI_CALL(0x00110310u, sub_00110310); /* call 0x00110310 */

loc_00108AEB: ;
    PUSH32(esp, 0x00108AF0u); RECOMP_ABI_CALL(0x00118310u, sub_00118310); /* call 0x00118310 */

loc_00108AF0: ;
    PUSH32(esp, 0x00108AF5u); RECOMP_ABI_CALL(0x00118010u, sub_00118010); /* call 0x00118010 */

loc_00108AF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1089A0);
    PUSH32(esp, 0x00108B01u); RECOMP_ABI_CALL(0x00110330u, sub_00110330); /* call 0x00110330 */

loc_00108B01: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1089B0);
    PUSH32(esp, 0x00108B0Du); RECOMP_ABI_CALL(0x001183B0u, sub_001183B0); /* call 0x001183B0 */

loc_00108B0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = 0x9A8D40;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00108B23u); RECOMP_ABI_CALL(0x00109B90u, sub_00109B90); /* call 0x00109B90 */

loc_00108B23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00108B68; /* jne: not equal / not zero */

loc_00108B29: ;
    _fa = (uint32_t)(MEM32(0x2F93B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2F93B8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108B68; /* jne: not equal / not zero */

loc_00108B32: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1089E0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00108B42u); RECOMP_ABI_CALL(0x001181F0u, sub_001181F0); /* call 0x001181F0 */

loc_00108B42: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1089F0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00108B50u); RECOMP_ABI_CALL(0x00118140u, sub_00118140); /* call 0x00118140 */

loc_00108B50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1089D0);
    PUSH32(esp, 5);
    MEM32(0x970308) = eax;
    PUSH32(esp, 0x00108B63u); RECOMP_ABI_CALL(0x00118140u, sub_00118140); /* call 0x00118140 */

loc_00108B63: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00108B79;

loc_00108B68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x108A80);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00108B76u); RECOMP_ABI_CALL(0x00118140u, sub_00118140); /* call 0x00118140 */

loc_00108B76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108B79: ;
    PUSH32(esp, 0x3C);
    MEM32(0x970304) = eax;
    MEM32(0x97030C) = 0;
    PUSH32(esp, 0x00108B8Fu); RECOMP_ABI_CALL(0x00107820u, sub_00107820); /* call 0x00107820 */

loc_00108B8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00108B97u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00108B97: ;
    MEM32(0x9702FC) = MEM32(0x9702FC) + 1;
    _fa = (uint32_t)(MEM32(0x9702FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00108BA0
 * Original: 0x00108BA0 - 0x00108BAF (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108BA0: ;
    MEM32(0x9702FC) = 0;
    g_seh_ebp = ebp; sub_00108AA0(); return; /* tail jmp 0x00108AA0 */

}

/**
 * sub_00108BB0
 * Original: 0x00108BB0 - 0x00108BD4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108BB0(void)
{

loc_00108BB0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00108BD3u); RECOMP_ABI_CALL(0x000AD420u, sub_000AD420); /* call 0x000AD420 */

loc_00108BD3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00108BE0
 * Original: 0x00108BE0 - 0x00108BEF (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108BE0: ;
    MEM32(0x97037C) = 0x108BB0;
    g_seh_ebp = ebp; sub_0010A090(); return; /* tail jmp 0x0010A090 */

}

/**
 * sub_00108BF0
 * Original: 0x00108BF0 - 0x00108CC4 (212 bytes, 73 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108BF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108C0E; /* jne: not equal / not zero */

loc_00108BFC: ;
    PUSH32(esp, 0x2A9B08);
    PUSH32(esp, 0x00108C06u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108C06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00108C0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108C16u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00108C16: ;
    edi = MEM32(esp + 0x34);
    ebx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xAC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00108C3Bu); RECOMP_ABI_CALL(0x00106370u, sub_00106370); /* call 0x00106370 */

loc_00108C3B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108CBD; /* jne: not equal / not zero */

loc_00108C42: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108C7A; /* jne: not equal / not zero */

loc_00108C49: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00108C57u); RECOMP_ABI_CALL(0x0010BB50u, sub_0010BB50); /* call 0x0010BB50 */

loc_00108C57: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2A9AE4);
    PUSH32(esp, 0x00108C66u); RECOMP_ABI_CALL(0x0010BA80u, sub_0010BA80); /* call 0x0010BA80 */

loc_00108C66: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM16(esi + 0x60) = 0xFFFF;
    MEM8(esi + 1) = 6;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00108C7A: ;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xBC) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0xB8) = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0xA8) = LO8(eax);
    MEM8(esi + 2) = LO8(eax);
    PUSH32(esp, 0x00108CBAu); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_00108CBA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108CBD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108CD0
 * Original: 0x00108CD0 - 0x00108D54 (132 bytes, 41 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00108D44; /* je: equal / zero */

loc_00108CDA: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108D44; /* je: equal / zero */

loc_00108CE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108CE8u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00108CE8: ;
    edx = MEM32(esi + 0xAC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;

loc_00108CF3: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108CF3; /* jne: not equal / not zero */

loc_00108CFD: ;
    eax = MEM32(esi + 0xAC);
    MEM32(esi + 0xB0) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = 0;
    MEM32(esi + 0xB8) = 0;
    MEM32(esi + 0xBC) = 0xFFFFF;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0xA8) = LO8(eax);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x00108D3Eu); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_00108D3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00108D44: ;
    PUSH32(esp, 0x2A9B34);
    PUSH32(esp, 0x00108D4Eu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108D4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00108D60
 * Original: 0x00108D60 - 0x00108DD9 (121 bytes, 48 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00108DC8; /* je: equal / zero */

loc_00108D6B: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108DC8; /* je: equal / zero */

loc_00108D73: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00108DC8; /* jl: less (signed <) */

loc_00108D7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108D81u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00108D81: ;
    PUSH32(esp, 0x00108D86u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00108D86: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00108D8Du); RECOMP_ABI_CALL(0x00117AC0u, sub_00117AC0); /* call 0x00117AC0 */

loc_00108D8D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108DAA; /* jne: not equal / not zero */

loc_00108D94: ;
    PUSH32(esp, 0x00108D99u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00108D99: ;
    PUSH32(esp, 0x2A9B8C);
    PUSH32(esp, 0x00108DA3u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108DA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00108DAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108DB1u); RECOMP_ABI_CALL(0x00107010u, sub_00107010); /* call 0x00107010 */

loc_00108DB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM8(esi + 2) = 2;
    PUSH32(esp, 0x00108DBDu); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_00108DBD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_00108DC8: ;
    PUSH32(esp, 0x2A9B60);
    PUSH32(esp, 0x00108DD2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108DD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00108DE0
 * Original: 0x00108DE0 - 0x00108EC4 (228 bytes, 78 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108DE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00108EB3; /* je: equal / zero */

loc_00108DEF: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108EB3; /* je: equal / zero */

loc_00108DFB: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00108EB3; /* jl: less (signed <) */

loc_00108E07: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00108E0Du); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_00108E0D: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    edx = eax;
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 0x16));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00108EC0; /* jge: greater or equal (signed >=) */

loc_00108E3D: ;
    PUSH32(esp, 0x00108E42u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00108E42: ;
    ecx = MEM32(esi + edi * 8 + 8);
    eax = ecx;
    MEM32(esp + 0x10) = ecx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(esp + 0x12));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x40000000);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00108E78u); RECOMP_ABI_CALL(0x00117AC0u, sub_00117AC0); /* call 0x00117AC0 */

loc_00108E78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108E95; /* jne: not equal / not zero */

loc_00108E7F: ;
    PUSH32(esp, 0x00108E84u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_00108E84: ;
    PUSH32(esp, 0x2A9BE4);
    PUSH32(esp, 0x00108E8Eu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108E8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00108E95: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00108E9Cu); RECOMP_ABI_CALL(0x00107010u, sub_00107010); /* call 0x00107010 */

loc_00108E9C: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM8(ebx + 2) = 2;
    PUSH32(esp, 0x00108EA8u); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_00108EA8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

loc_00108EB3: ;
    PUSH32(esp, 0x2A9BB8);
    PUSH32(esp, 0x00108EBDu); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00108EBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108EC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00108ED0
 * Original: 0x00108ED0 - 0x00108EE8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108ED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00108EE4u); RECOMP_ABI_CALL(0x00108D60u, sub_00108D60); /* call 0x00108D60 */

loc_00108EE4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108EF0
 * Original: 0x00108EF0 - 0x00108EFD (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108EF0: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00108BE0(); return; /* tail jmp 0x00108BE0 */

}

/**
 * sub_00108F00
 * Original: 0x00108F00 - 0x00108F05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108F00: ;
    g_seh_ebp = ebp; sub_00108EF0(); return; /* tail jmp 0x00108EF0 */

}

/**
 * sub_00108F10
 * Original: 0x00108F10 - 0x00108F15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108F10: ;
    g_seh_ebp = ebp; sub_00109F80(); return; /* tail jmp 0x00109F80 */

}

/**
 * sub_00108F20
 * Original: 0x00108F20 - 0x00108F25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108F20: ;
    g_seh_ebp = ebp; sub_00107B20(); return; /* tail jmp 0x00107B20 */

}

/**
 * sub_00108F30
 * Original: 0x00108F30 - 0x00108F55 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00108F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108F30: ;
    eax = MEM32(0x970318);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00108F52; /* jne: not equal / not zero */

loc_00108F39: ;
    MEM32(0x970318) = 1;
    PUSH32(esp, 0x00108F48u); RECOMP_ABI_CALL(0x00107B20u, sub_00107B20); /* call 0x00107B20 */

loc_00108F48: ;
    MEM32(0x970318) = 0;

loc_00108F52: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00108F60
 * Original: 0x00108F60 - 0x00108F6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F60(void)
{

loc_00108F60: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x50);
    eax = MEM32(edx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00108F70
 * Original: 0x00108F70 - 0x00108F8A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108F70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108F89; /* je: equal / zero */

loc_00108F78: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108F88; /* je: equal / zero */

loc_00108F81: ;
    PUSH32(esp, 0x00108F86u); RECOMP_ABI_CALL(0x00108F60u, sub_00108F60); /* call 0x00108F60 */

loc_00108F86: ;
    MEM32(esi) = eax;

loc_00108F88: ;
    POP32(esp, esi);

loc_00108F89: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00108F90
 * Original: 0x00108F90 - 0x00108FA9 (25 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108F90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108FA8; /* je: equal / zero */

loc_00108F98: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00108FA2u); RECOMP_ABI_CALL(0x00108F60u, sub_00108F60); /* call 0x00108F60 */

loc_00108FA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00108FA8u); RECOMP_ABI_CALL(0x001AB283u, sub_001AB283); /* call 0x001AB283 */

loc_00108FA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00108FB0
 * Original: 0x00108FB0 - 0x00108FC8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108FB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108FC7; /* je: equal / zero */

loc_00108FB8: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + 0x50);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00116DC0(); return; /* tail jmp 0x00116DC0 */

loc_00108FC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00108FD0
 * Original: 0x00108FD0 - 0x00108FE9 (25 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108FD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00108FE8; /* je: equal / zero */

loc_00108FD8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00108FE2u); RECOMP_ABI_CALL(0x00108F60u, sub_00108F60); /* call 0x00108F60 */

loc_00108FE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00108FE8u); RECOMP_ABI_CALL(0x001AB29Fu, sub_001AB29F); /* call 0x001AB29F */

loc_00108FE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00108FF0
 * Original: 0x00108FF0 - 0x00108FF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108FF0(void)
{

loc_00108FF0: ;
    eax = MEM32(0x2A9C64);
    esp += 4; return; /* ret */

}

/**
 * sub_00109000
 * Original: 0x00109000 - 0x00109005 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109000: ;
    g_seh_ebp = ebp; sub_00114860(); return; /* tail jmp 0x00114860 */

}

/**
 * sub_00109010
 * Original: 0x00109010 - 0x00109015 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109010: ;
    g_seh_ebp = ebp; sub_00114C10(); return; /* tail jmp 0x00114C10 */

}

/**
 * sub_00109020
 * Original: 0x00109020 - 0x00109034 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00109030u); RECOMP_ABI_CALL(0x00114A80u, sub_00114A80); /* call 0x00114A80 */

loc_00109030: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00109040
 * Original: 0x00109040 - 0x00109046 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109040(void)
{

loc_00109040: ;
    eax = 0x2A9C18;
    esp += 4; return; /* ret */

}

/**
 * sub_00109050
 * Original: 0x00109050 - 0x0010905F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109050: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00109057u); RECOMP_ABI_CALL(0x0010C5F0u, sub_0010C5F0); /* call 0x0010C5F0 */

loc_00109057: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001151D0(); return; /* tail jmp 0x001151D0 */

}

/**
 * sub_00109060
 * Original: 0x00109060 - 0x00109065 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109060: ;
    g_seh_ebp = ebp; sub_00114C20(); return; /* tail jmp 0x00114C20 */

}

/**
 * sub_00109070
 * Original: 0x00109070 - 0x00109075 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109070: ;
    g_seh_ebp = ebp; sub_00114C40(); return; /* tail jmp 0x00114C40 */

}

/**
 * sub_00109080
 * Original: 0x00109080 - 0x00109085 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109080: ;
    g_seh_ebp = ebp; sub_00114C60(); return; /* tail jmp 0x00114C60 */

}

/**
 * sub_00109090
 * Original: 0x00109090 - 0x00109095 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109090: ;
    g_seh_ebp = ebp; sub_00114CA0(); return; /* tail jmp 0x00114CA0 */

}

/**
 * sub_001090A0
 * Original: 0x001090A0 - 0x001090A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001090A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001090A0: ;
    g_seh_ebp = ebp; sub_00114CB0(); return; /* tail jmp 0x00114CB0 */

}

/**
 * sub_001090B0
 * Original: 0x001090B0 - 0x001090B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001090B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001090B0: ;
    g_seh_ebp = ebp; sub_00114CC0(); return; /* tail jmp 0x00114CC0 */

}

/**
 * sub_001090C0
 * Original: 0x001090C0 - 0x001090ED (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001090C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001090C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x94);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001090D6u); RECOMP_ABI_CALL(0x00110B50u, sub_00110B50); /* call 0x00110B50 */

loc_001090D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001090EB; /* jge: greater or equal (signed >=) */

loc_001090DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2A9C98);
    PUSH32(esp, 0x001090E8u); RECOMP_ABI_CALL(0x0010BA80u, sub_0010BA80); /* call 0x0010BA80 */

loc_001090E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001090EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001090F0
 * Original: 0x001090F0 - 0x00109179 (137 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001090F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001090F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x94);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xAC);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109125u); RECOMP_ABI_CALL(0x00106370u, sub_00106370); /* call 0x00106370 */

loc_00109125: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109152; /* jne: not equal / not zero */

loc_0010912C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109132u); RECOMP_ABI_CALL(0x00106450u, sub_00106450); /* call 0x00106450 */

loc_00109132: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00109148u); RECOMP_ABI_CALL(0x00110680u, sub_00110680); /* call 0x00110680 */

loc_00109148: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00109152: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109160u); RECOMP_ABI_CALL(0x0010BB50u, sub_0010BB50); /* call 0x0010BB50 */

loc_00109160: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A9CB4);
    PUSH32(esp, 0x0010916Fu); RECOMP_ABI_CALL(0x0010BA80u, sub_0010BA80); /* call 0x0010BA80 */

loc_0010916F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00109180
 * Original: 0x00109180 - 0x001091D5 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109192u); RECOMP_ABI_CALL(0x00107140u, sub_00107140); /* call 0x00107140 */

loc_00109192: ;
    PUSH32(esp, 0x00109197u); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_00109197: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001091A1u); RECOMP_ABI_CALL(0x00107010u, sub_00107010); /* call 0x00107010 */

loc_001091A1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x001091AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001091A7u); } /* indirect call */
    }

loc_001091AA: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM8(esi + 2) = 4;
    PUSH32(esp, 0x001091BCu); RECOMP_ABI_CALL(0x00110A50u, sub_00110A50); /* call 0x00110A50 */

loc_001091BC: ;
    PUSH32(esp, 0x001091C1u); RECOMP_ABI_CALL(0x0010C720u, sub_0010C720); /* call 0x0010C720 */

loc_001091C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001091C7u); RECOMP_ABI_CALL(0x00110B70u, sub_00110B70); /* call 0x00110B70 */

loc_001091C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001091CFu); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_001091CF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001091E0
 * Original: 0x001091E0 - 0x00109205 (37 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001091E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001091E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001091F6; /* jne: not equal / not zero */

loc_001091E8: ;
    PUSH32(esp, 0x2A9CDC);
    PUSH32(esp, 0x001091F2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001091F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001091F6: ;
    edx = MEM32(eax + 0x94);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00110B10(); return; /* tail jmp 0x00110B10 */

}

/**
 * sub_00109210
 * Original: 0x00109210 - 0x0010925B (75 bytes, 31 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010924B; /* je: equal / zero */

loc_0010921A: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010924B; /* je: equal / zero */

loc_00109222: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010922Fu); RECOMP_ABI_CALL(0x001107A0u, sub_001107A0); /* call 0x001107A0 */

loc_0010922F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109236u); RECOMP_ABI_CALL(0x001090C0u, sub_001090C0); /* call 0x001090C0 */

loc_00109236: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010923Eu); RECOMP_ABI_CALL(0x00110B10u, sub_00110B10); /* call 0x00110B10 */

loc_0010923E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109244u); RECOMP_ABI_CALL(0x00109180u, sub_00109180); /* call 0x00109180 */

loc_00109244: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010924B: ;
    PUSH32(esp, 0x2A9D0C);
    PUSH32(esp, 0x00109255u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_00109255: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00109260
 * Original: 0x00109260 - 0x001092C7 (103 bytes, 42 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001092B6; /* je: equal / zero */

loc_0010926B: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001092B6; /* jg: greater (signed >) */

loc_00109273: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001092B6; /* jge: greater or equal (signed >=) */

loc_0010927B: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001092B6; /* jl: less (signed <) */

loc_00109283: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001092B6; /* jg: greater (signed >) */

loc_0010928B: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109298u); RECOMP_ABI_CALL(0x001107A0u, sub_001107A0); /* call 0x001107A0 */

loc_00109298: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001092A0u); RECOMP_ABI_CALL(0x001090F0u, sub_001090F0); /* call 0x001090F0 */

loc_001092A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001092A8u); RECOMP_ABI_CALL(0x00110B10u, sub_00110B10); /* call 0x00110B10 */

loc_001092A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001092AEu); RECOMP_ABI_CALL(0x00109180u, sub_00109180); /* call 0x00109180 */

loc_001092AE: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001092B6: ;
    PUSH32(esp, 0x2A9D3C);
    PUSH32(esp, 0x001092C0u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001092C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001092D0
 * Original: 0x001092D0 - 0x001092D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001092D0(void)
{

loc_001092D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001092E0
 * Original: 0x001092E0 - 0x00109308 (40 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001092E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001092E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001092F9; /* jne: not equal / not zero */

loc_001092E8: ;
    PUSH32(esp, 0x2A9D68);
    PUSH32(esp, 0x001092F2u); RECOMP_ABI_CALL(0x0010BA40u, sub_0010BA40); /* call 0x0010BA40 */

loc_001092F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001092F9: ;
    eax = MEM32(eax + 0x94);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00110870(); return; /* tail jmp 0x00110870 */

}

/**
 * sub_00109310
 * Original: 0x00109310 - 0x0010933C (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109310: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109325; /* jne: not equal / not zero */

loc_00109318: ;
    MEM32(esp + 4) = 0x2A9D94;
    g_seh_ebp = ebp; sub_0010BA40(); return; /* tail jmp 0x0010BA40 */

loc_00109325: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010933B; /* jne: not equal / not zero */

loc_0010932C: ;
    eax = MEM32(eax + 0x94);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00110770(); return; /* tail jmp 0x00110770 */

loc_0010933B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109340
 * Original: 0x00109340 - 0x0010934C (12 bytes, 4 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109340(void)
{

loc_00109340: ;
    PUSH32(esp, 0x2A9E00);
    PUSH32(esp, 0x0010934Au); RECOMP_ABI_CALL(0x00118420u, sub_00118420); /* call 0x00118420 */

loc_0010934A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00109350
 * Original: 0x00109350 - 0x00109379 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109350: ;
    PUSH32(esp, 0x00109355u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00109355: ;
    eax = MEM32(0x97031C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010936E; /* jne: not equal / not zero */

loc_0010935E: ;
    PUSH32(esp, edi);
    ecx = 0x1000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x9A4D40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0010936E: ;
    MEM32(0x97031C) = MEM32(0x97031C) + 1;
    _fa = (uint32_t)(MEM32(0x97031C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_00109380
 * Original: 0x00109380 - 0x001093A2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109380: ;
    PUSH32(esp, 0x00109385u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00109385: ;
    MEM32(0x97031C) = MEM32(0x97031C) - 1;
    _fa = (uint32_t)(MEM32(0x97031C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010939D; /* jne: not equal / not zero */

loc_0010938D: ;
    PUSH32(esp, edi);
    ecx = 0x1000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x9A4D40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0010939D: ;
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_001093B0
 * Original: 0x001093B0 - 0x001093D2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001093B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001093B0: ;
    PUSH32(esp, 0x001093B5u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001093B5: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001093CD; /* je: equal / zero */

loc_001093BD: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = eax;
    POP32(esp, edi);

loc_001093CD: ;
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_001093E0
 * Original: 0x001093E0 - 0x001093E8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001093E0(void)
{

loc_001093E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001093F0
 * Original: 0x001093F0 - 0x00109403 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001093F0(void)
{

loc_001093F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00109410
 * Original: 0x00109410 - 0x0010943B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109410: ;
    PUSH32(esp, 0x00109415u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00109415: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_00109440
 * Original: 0x00109440 - 0x00109472 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00109440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109440: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109451; /* jne: not equal / not zero */

loc_00109449: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_00109451: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0010945D; /* jne: not equal / not zero */

loc_00109459: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

loc_0010945D: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010946F; /* je: equal / zero */

loc_00109464: ;
    edx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0010946Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010946Au); } /* indirect call */
    }

loc_0010946C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010946F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00109480
 * Original: 0x00109480 - 0x0010957C (252 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00109487u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00109487: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001094F0; /* jne: not equal / not zero */

loc_00109493: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001094A9; /* jge: greater or equal (signed >=) */

loc_001094A7: ;
    eax = edx;

loc_001094A9: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001094BA; /* jge: greater or equal (signed >=) */

loc_001094B8: ;
    edx = eax;

loc_001094BA: ;
    MEM32(esi + 4) = edx;
    edi = MEM32(ecx + 0x14);
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x20))); }
    eax = MEM32(ecx + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x28);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x28) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001094F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109552; /* jne: not equal / not zero */

loc_001094F5: ;
    edx = MEM32(ecx + 0x24);
    edi = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010950B; /* jge: greater or equal (signed >=) */

loc_00109509: ;
    eax = edx;

loc_0010950B: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0010951C; /* jge: greater or equal (signed >=) */

loc_0010951A: ;
    edx = eax;

loc_0010951C: ;
    MEM32(esi + 4) = edx;
    edi = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x20))); }
    edi = MEM32(ecx + 0xC);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x30);
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_00109552: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109575; /* je: equal / zero */

loc_0010956A: ;
    ecx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00109572u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109570u); } /* indirect call */
    }

loc_00109572: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00109575: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

}

/**
 * sub_00109580
 * Original: 0x00109580 - 0x0010968F (271 bytes, 104 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00109580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109580: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010968C; /* jle: less or equal (signed <=) */

loc_00109591: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010968B; /* je: equal / zero */

loc_0010959D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109632; /* jne: not equal / not zero */

loc_001095AA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    edx = MEM32(ebx + 0x1C);
    ecx = MEM32(ebx + 0x24);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001095DA; /* jge: greater or equal (signed >=) */

loc_001095BD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001095C5; /* jge: greater or equal (signed >=) */

loc_001095C3: ;
    ecx = edi;

loc_001095C5: ;
    edi = MEM32(ebx + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_001095DA: ;
    ecx = MEM32(ebp + 4);
    edi = MEM32(ebx + 0x1C);
    edx = MEM32(ebp);
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010960E; /* jle: less or equal (signed <=) */

loc_001095F0: ;
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001095FA; /* jl: less (signed <) */

loc_001095F8: ;
    ecx = esi;

loc_001095FA: ;
    esi = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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

loc_0010960E: ;
    PUSH32(esp, 0x00109613u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00109613: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x34);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x34) = eax;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_00109632: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010965D; /* jne: not equal / not zero */

loc_00109636: ;
    PUSH32(esp, 0x0010963Bu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0010963B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 4);
    esi = MEM32(eax + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x2C);
    MEM32(eax + 0x10) = esi;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + 0x2C) = edx;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_0010965D: ;
    PUSH32(esp, 0x00109662u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00109662: ;
    MEM32(ebp + 4) = 0;
    MEM32(ebp) = 0;
    PUSH32(esp, 0x00109675u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00109675: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010968B; /* je: equal / zero */

loc_00109680: ;
    edx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00109688u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109686u); } /* indirect call */
    }

loc_00109688: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010968B: ;
    POP32(esp, esi);

loc_0010968C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00109690
 * Original: 0x00109690 - 0x001097B0 (288 bytes, 116 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001097AE; /* jle: less or equal (signed <=) */

loc_001096A0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001097AE; /* je: equal / zero */

loc_001096A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001096B0u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001096B0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010971B; /* jne: not equal / not zero */

loc_001096B8: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi);
    ebx = edx;
    _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001096FB; /* jne: not equal / not zero */

loc_001096DA: ;
    ecx = MEM32(edi + 0x10);
    MEM32(edi + 0x14) = ebx;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x28);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x28) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001096FB: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010970D; /* je: equal / zero */

loc_00109702: ;
    ecx = MEM32(edi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0010970Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109708u); } /* indirect call */
    }

loc_0010970A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010970D: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0x28) = MEM32(edi + 0x28) - edx;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_0010971B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109783; /* jne: not equal / not zero */

loc_00109720: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi);
    ebx = edx;
    _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109763; /* jne: not equal / not zero */

loc_00109742: ;
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 0x18) = ebx;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x30);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x30) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_00109763: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109775; /* je: equal / zero */

loc_0010976A: ;
    ecx = MEM32(edi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00109772u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109770u); } /* indirect call */
    }

loc_00109772: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00109775: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - edx;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_00109783: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001097A6; /* je: equal / zero */

loc_0010979B: ;
    ecx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001097A3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001097A1u); } /* indirect call */
    }

loc_001097A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001097A6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118450(); return; /* tail jmp 0x00118450 */

loc_001097AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001097B0
 * Original: 0x001097B0 - 0x00109863 (179 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001097B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001097B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001097B7u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001097B7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_001097FA; /* jne: not equal / not zero */

loc_001097C3: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001097DF; /* jl: less (signed <) */

loc_001097DD: ;
    esi = ecx;

loc_001097DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010984E; /* jl: less (signed <) */

loc_001097E3: ;
    edx = MEM32(esp + 0x18);
    esi = edi;
    MEM32(edx) = esi;
    PUSH32(esp, 0x001097F0u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_001097F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001097FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109836; /* jne: not equal / not zero */

loc_001097FF: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0010981B; /* jl: less (signed <) */

loc_00109819: ;
    esi = ecx;

loc_0010981B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010984E; /* jl: less (signed <) */

loc_0010981F: ;
    edx = MEM32(esp + 0x18);
    esi = edi;
    MEM32(edx) = esi;
    PUSH32(esp, 0x0010982Cu); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_0010982C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00109836: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x38);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010984E; /* je: equal / zero */

loc_00109843: ;
    ecx = MEM32(ecx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0010984Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109849u); } /* indirect call */
    }

loc_0010984B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010984E: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = esi;
    PUSH32(esp, 0x00109859u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00109859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109870
 * Original: 0x00109870 - 0x00109878 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109870(void)
{

loc_00109870: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00109880
 * Original: 0x00109880 - 0x00109888 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109880(void)
{

loc_00109880: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00109890
 * Original: 0x00109890 - 0x00109898 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109890(void)
{

loc_00109890: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_001098A0
 * Original: 0x001098A0 - 0x001098B8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098A0(void)
{

loc_001098A0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = eax + ecx * 2 + 0xA;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    MEM32(ecx + edx * 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001098C0
 * Original: 0x001098C0 - 0x001098D4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098C0(void)
{

loc_001098C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = eax + ecx * 2 + 0xA;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001098E0
 * Original: 0x001098E0 - 0x0010998A (170 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001098E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001098E6u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001098E6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x9A4D84;
    /* nop */

loc_001098F0: ;
    ecx = MEM32(eax + -64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109929; /* je: equal / zero */

loc_001098F7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010991E; /* je: equal / zero */

loc_001098FC: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109921; /* je: equal / zero */

loc_00109903: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109926; /* je: equal / zero */

loc_0010990D: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A8D84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A8D84 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001098F0; /* jl: less (signed <) */

loc_0010991C: ;
    goto loc_00109929;

loc_0010991E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00109929;

loc_00109921: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00109929;

loc_00109926: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00109929: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010993C; /* jne: not equal / not zero */

loc_00109931: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00109938u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00109938: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010993C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x9A4D40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9A4D40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x2F93BC;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 8) = 0x2A9DF0;
    MEM32(esi + 0x38) = 0x109340;
    MEM32(esi + 0x3C) = esi;
    PUSH32(esp, 0x0010997Eu); RECOMP_ABI_CALL(0x00109410u, sub_00109410); /* call 0x00109410 */

loc_0010997E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00109986u); RECOMP_ABI_CALL(0x00118450u, sub_00118450); /* call 0x00118450 */

loc_00109986: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109990
 * Original: 0x00109990 - 0x001099A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109990: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A4D00);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x0010999Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109995u); } /* indirect call */
    }

loc_0010999B: ;
    eax = MEM32(0x97033C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x97033C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001099B0
 * Original: 0x001099B0 - 0x001099C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001099B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001099B0: ;
    eax = MEM32(0x97033C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A4D00);
    MEM32(0x97033C) = eax;
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x001099C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001099C0u); } /* indirect call */
    }

loc_001099C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001099D0
 * Original: 0x001099D0 - 0x001099E5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001099D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001099D0: ;
    ecx = MEM32(esp + 4);
    eax = 1;
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001099F0
 * Original: 0x001099F0 - 0x00109A59 (105 bytes, 30 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001099F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001099F0: ;
    PUSH32(esp, esi);
    MEM32(0x970340) = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00109A00: ;
    eax = MEM32(0x970324);
    ecx = MEM32(0x9A4CE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109A12u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109A12: ;
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109A1Eu); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_00109A1E: ;
    eax = MEM32(0x970340);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109A30; /* je: equal / zero */

loc_00109A27: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DC6C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2DC6C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00109A00; /* jl: less (signed <) */

loc_00109A30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DC6C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2DC6C0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00109A46; /* jne: not equal / not zero */

loc_00109A39: ;
    PUSH32(esp, 0x2A9E0C);
    PUSH32(esp, 0x00109A43u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109A43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00109A46: ;
    eax = MEM32(0x970338);
    ecx = MEM32(0x9A4CE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109A58u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109A58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109A60
 * Original: 0x00109A60 - 0x00109A61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109A60(void)
{

loc_00109A60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109A70
 * Original: 0x00109A70 - 0x00109AA3 (51 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00109A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109A70: ;
    eax = MEM32(0x97035C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109A94; /* jne: not equal / not zero */

loc_00109A79: ;
    /* nop */

loc_00109A80: ;
    eax = MEM32(0x970344);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x970344) = eax;
    eax = MEM32(0x97035C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109A80; /* je: equal / zero */

loc_00109A94: ;
    MEM32(0x970360) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109AB0
 * Original: 0x00109AB0 - 0x00109B4E (158 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00109AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109AB0: ;
    eax = MEM32(0x970374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109B3F; /* jne: not equal / not zero */

loc_00109ABD: ;
    PUSH32(esp, esi);
    esi = 1;

loc_00109AC3: ;
    eax = MEM32(0x97034C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x97034C) = eax;
    PUSH32(esp, 0x00109AD3u); RECOMP_ABI_CALL(0x00117F60u, sub_00117F60); /* call 0x00117F60 */

loc_00109AD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109ADF; /* je: equal / zero */

loc_00109AD7: ;
    _fa = (uint32_t)(MEM32(0x970340)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x970340), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109B2A; /* jne: not equal / not zero */

loc_00109ADF: ;
    _fa = (uint32_t)(MEM32(0x970340)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x970340), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109B04; /* jne: not equal / not zero */

loc_00109AE7: ;
    MEM32(0x970340) = 0;
    ecx = MEM32(0x970338);
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109B04u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109B04: ;
    eax = MEM32(0x970354);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109B1E; /* je: equal / zero */

loc_00109B0D: ;
    eax = MEM32(0x970358);
    ecx = MEM32(0x970354);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00109B1Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109B19u); } /* indirect call */
    }

loc_00109B1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00109B1E: ;
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109B2Au); RECOMP_ABI_CALL(0x000AD0AEu, sub_000AD0AE); /* call 0x000AD0AE */

loc_00109B2A: ;
    eax = MEM32(0x970374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109AC3; /* je: equal / zero */

loc_00109B33: ;
    MEM32(0x970378) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00109B3F: ;
    MEM32(0x970378) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109B50
 * Original: 0x00109B50 - 0x00109B55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109B50: ;
    g_seh_ebp = ebp; sub_00117F20(); return; /* tail jmp 0x00117F20 */

}

/**
 * sub_00109B60
 * Original: 0x00109B60 - 0x00109B65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109B60: ;
    g_seh_ebp = ebp; sub_00117F50(); return; /* tail jmp 0x00117F50 */

}

/**
 * sub_00109B70
 * Original: 0x00109B70 - 0x00109B75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109B70: ;
    g_seh_ebp = ebp; sub_00117F60(); return; /* tail jmp 0x00117F60 */

}

/**
 * sub_00109B80
 * Original: 0x00109B80 - 0x00109B8F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109B80: ;
    PUSH32(esp, 0x00109B85u); RECOMP_ABI_CALL(0x00117F20u, sub_00117F20); /* call 0x00117F20 */

loc_00109B85: ;
    PUSH32(esp, 0x00109B8Au); RECOMP_ABI_CALL(0x00117F50u, sub_00117F50); /* call 0x00117F50 */

loc_00109B8A: ;
    g_seh_ebp = ebp; sub_00117F60(); return; /* tail jmp 0x00117F60 */

}

/**
 * sub_00109B90
 * Original: 0x00109B90 - 0x00109B9C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00109B90: ;
    eax = MEM32(0x970320);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00109BA0
 * Original: 0x00109BA0 - 0x00109BA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109BA0: ;
    g_seh_ebp = ebp; sub_001182A0(); return; /* tail jmp 0x001182A0 */

}

/**
 * sub_00109BB0
 * Original: 0x00109BB0 - 0x00109BB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109BB0: ;
    g_seh_ebp = ebp; sub_00117B90(); return; /* tail jmp 0x00117B90 */

}

/**
 * sub_00109BC0
 * Original: 0x00109BC0 - 0x00109BC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109BC0: ;
    g_seh_ebp = ebp; sub_001180E0(); return; /* tail jmp 0x001180E0 */

}

/**
 * sub_00109BD0
 * Original: 0x00109BD0 - 0x00109BD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BD0(void)
{

loc_00109BD0: ;
    eax = MEM32(0x97033C);
    esp += 4; return; /* ret */

}

/**
 * sub_00109BE0
 * Original: 0x00109BE0 - 0x00109BE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109BE0: ;
    g_seh_ebp = ebp; sub_00117F50(); return; /* tail jmp 0x00117F50 */

}

/**
 * sub_00109BF0
 * Original: 0x00109BF0 - 0x00109BF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109BF0: ;
    g_seh_ebp = ebp; sub_001630D0(); return; /* tail jmp 0x001630D0 */

}

/**
 * sub_00109C00
 * Original: 0x00109C00 - 0x00109C14 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109C00(void)
{

loc_00109C00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x970354) = eax;
    MEM32(0x970358) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00109C20
 * Original: 0x00109C20 - 0x00109DA1 (385 bytes, 112 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109C20: ;
    eax = MEM32(0x9A4D1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00109CA9; /* je: equal / zero */

loc_00109C36: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00109C40;

    /* nop */

loc_00109C40: ;
    MEM32(0x970364) = edi;
    eax = MEM32(0x9A4D1C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109C53u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109C53: ;
    ecx = MEM32(0x9A4D1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109C5Fu); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_00109C5F: ;
    edx = MEM32(0x9A4D1C);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109C70u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_00109C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109C7D; /* jne: not equal / not zero */

loc_00109C77: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00109C40; /* jl: less (signed <) */

loc_00109C7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109C92; /* jne: not equal / not zero */

loc_00109C82: ;
    PUSH32(esp, 0x2A9EA4);
    PUSH32(esp, 0x00109C8Cu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109C8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00109C92: ;
    MEM32(0x970368) = ebp;
    MEM32(0x970364) = ebp;
    eax = MEM32(0x9A4D1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109CA9u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00109CA9: ;
    _fa = (uint32_t)(MEM32(0x9A4D30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9A4D30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109D28; /* je: equal / zero */

loc_00109CB1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00109CC0;

    /* nop */
    /* nop */

loc_00109CC0: ;
    MEM32(0x97036C) = edi;
    ecx = MEM32(0x9A4D30);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109CD4u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109CD4: ;
    edx = MEM32(0x9A4D30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109CE0u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_00109CE0: ;
    eax = MEM32(0x9A4D30);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109CF0u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_00109CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109CFD; /* jne: not equal / not zero */

loc_00109CF7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00109CC0; /* jl: less (signed <) */

loc_00109CFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109D10; /* jne: not equal / not zero */

loc_00109D02: ;
    PUSH32(esp, 0x2A9E74);
    PUSH32(esp, 0x00109D0Cu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109D0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109D10: ;
    MEM32(0x970370) = ebp;
    MEM32(0x97036C) = ebp;
    ecx = MEM32(0x9A4D30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109D28u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00109D28: ;
    _fa = (uint32_t)(MEM32(0x9A4CE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9A4CE0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109D9A; /* je: equal / zero */

loc_00109D30: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00109D32: ;
    MEM32(0x970374) = edi;
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109D46u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109D46: ;
    eax = MEM32(0x9A4CE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109D51u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_00109D51: ;
    ecx = MEM32(0x9A4CE0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109D62u); RECOMP_ABI_CALL(0x000AD9E4u, sub_000AD9E4); /* call 0x000AD9E4 */

loc_00109D62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109D6F; /* jne: not equal / not zero */

loc_00109D69: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00109D32; /* jl: less (signed <) */

loc_00109D6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109D82; /* jne: not equal / not zero */

loc_00109D74: ;
    PUSH32(esp, 0x2A9E40);
    PUSH32(esp, 0x00109D7Eu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109D7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109D82: ;
    MEM32(0x970378) = ebp;
    MEM32(0x970374) = ebp;
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109D9Au); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_00109D9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00109DB0
 * Original: 0x00109DB0 - 0x00109EA4 (244 bytes, 78 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109DB0: ;
    eax = MEM32(0x97032C);
    ecx = MEM32(0x9A4D1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00109DC5u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109DC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109DD9; /* jne: not equal / not zero */

loc_00109DC9: ;
    PUSH32(esp, 0x2AA0A8);
    PUSH32(esp, 0x00109DD3u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109DD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00109DD9: ;
    edx = MEM32(0x970330);
    eax = MEM32(0x9A4D30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109DEBu); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109DEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109DFD; /* jne: not equal / not zero */

loc_00109DEF: ;
    PUSH32(esp, 0x2AA060);
    PUSH32(esp, 0x00109DF9u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109DF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109DFD: ;
    ecx = MEM32(0x970338);
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109E10u); RECOMP_ABI_CALL(0x000ACF81u, sub_000ACF81); /* call 0x000ACF81 */

loc_00109E10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E22; /* jne: not equal / not zero */

loc_00109E14: ;
    PUSH32(esp, 0x2AA018);
    PUSH32(esp, 0x00109E1Eu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109E1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109E22: ;
    eax = MEM32(0x9A4D1C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109E2Fu); RECOMP_ABI_CALL(0x000AD027u, sub_000AD027); /* call 0x000AD027 */

loc_00109E2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E41; /* jne: not equal / not zero */

loc_00109E33: ;
    PUSH32(esp, 0x2A9FC8);
    PUSH32(esp, 0x00109E3Du); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109E3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109E41: ;
    ecx = MEM32(0x9A4D30);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109E4Fu); RECOMP_ABI_CALL(0x000AD027u, sub_000AD027); /* call 0x000AD027 */

loc_00109E4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E61; /* jne: not equal / not zero */

loc_00109E53: ;
    PUSH32(esp, 0x2A9F78);
    PUSH32(esp, 0x00109E5Du); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109E5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109E61: ;
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00109E6Fu); RECOMP_ABI_CALL(0x000AD027u, sub_000AD027); /* call 0x000AD027 */

loc_00109E6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E81; /* jne: not equal / not zero */

loc_00109E73: ;
    PUSH32(esp, 0x2A9F28);
    PUSH32(esp, 0x00109E7Du); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109E7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109E81: ;
    eax = MEM32(0x9A4D2C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109E8Eu); RECOMP_ABI_CALL(0x000AD027u, sub_000AD027); /* call 0x000AD027 */

loc_00109E8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109EA0; /* jne: not equal / not zero */

loc_00109E92: ;
    PUSH32(esp, 0x2A9ED8);
    PUSH32(esp, 0x00109E9Cu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109E9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00109EA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109EB0
 * Original: 0x00109EB0 - 0x00109EB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109EB0: ;
    g_seh_ebp = ebp; sub_00109BF0(); return; /* tail jmp 0x00109BF0 */

}

/**
 * sub_00109EC0
 * Original: 0x00109EC0 - 0x00109F32 (114 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00109EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109EC0: ;
    eax = MEM32(0x970364);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109F23; /* jne: not equal / not zero */

loc_00109EC9: ;
    /* nop */

loc_00109ED0: ;
    { /* ADX-YIELD SHIM worker66 (iter-12): yield outside the ADXM server lock
       * so this audio-worker spin stops starving the main render thread.
       * Reversible: RECOMP_ADX_YIELD=0 restores the tight spin. See recomp_manual.c. */
      extern void recomp_adx_worker_yield(void);
      recomp_adx_worker_yield(); }
    PUSH32(esp, 0x00109ED5u); RECOMP_ABI_CALL(0x00109EB0u, sub_00109EB0); /* call 0x00109EB0 */

loc_00109ED5: ;
    PUSH32(esp, 0x00109EDAu); RECOMP_ABI_CALL(0x000AD180u, sub_000AD180); /* call 0x000AD180 */

loc_00109EDA: ;
    eax = MEM32(0x970348);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x970348) = eax;
    PUSH32(esp, 0x00109EEAu); RECOMP_ABI_CALL(0x00117B90u, sub_00117B90); /* call 0x00117B90 */

loc_00109EEA: ;
    PUSH32(esp, 0x00109EEFu); RECOMP_ABI_CALL(0x00117F20u, sub_00117F20); /* call 0x00117F20 */

loc_00109EEF: ;
    PUSH32(esp, 0x00109EF4u); RECOMP_ABI_CALL(0x001180E0u, sub_001180E0); /* call 0x001180E0 */

loc_00109EF4: ;
    ecx = MEM32(0x9A4CE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00109F00u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_00109F00: ;
    eax = MEM32(0x970354);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109F1A; /* je: equal / zero */

loc_00109F09: ;
    edx = MEM32(0x970358);
    eax = MEM32(0x970354);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00109F17u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00109F15u); } /* indirect call */
    }

loc_00109F17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00109F1A: ;
    eax = MEM32(0x970364);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109ED0; /* je: equal / zero */

loc_00109F23: ;
    MEM32(0x970368) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109F40
 * Original: 0x00109F40 - 0x00109F77 (55 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00109F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109F40: ;
    eax = MEM32(0x97036C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109F68; /* jne: not equal / not zero */

loc_00109F49: ;
    /* nop */

loc_00109F50: ;
    { /* ADX-YIELD SHIM worker67 (iter-12): yield outside the ADXM server lock
       * so this audio-worker spin stops starving the main render thread.
       * Reversible: RECOMP_ADX_YIELD=0 restores the tight spin. See recomp_manual.c. */
      extern void recomp_adx_worker_yield(void);
      recomp_adx_worker_yield(); }
    PUSH32(esp, 0x00109F55u); RECOMP_ABI_CALL(0x00109EB0u, sub_00109EB0); /* call 0x00109EB0 */

loc_00109F55: ;
    PUSH32(esp, 0x00109F5Au); RECOMP_ABI_CALL(0x000AD180u, sub_000AD180); /* call 0x000AD180 */

loc_00109F5A: ;
    PUSH32(esp, 0x00109F5Fu); RECOMP_ABI_CALL(0x00117F40u, sub_00117F40); /* call 0x00117F40 */

loc_00109F5F: ;
    eax = MEM32(0x97036C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109F50; /* je: equal / zero */

loc_00109F68: ;
    MEM32(0x970370) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109F80
 * Original: 0x00109F80 - 0x00109F98 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109F80: ;
    eax = MEM32(0x970320);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x970320) = eax;
    if ((_fa != 0)) goto loc_00109F97; /* jne: not equal / not zero */

loc_00109F8D: ;
    PUSH32(esp, 0x00109F92u); RECOMP_ABI_CALL(0x00109C20u, sub_00109C20); /* call 0x00109C20 */

loc_00109F92: ;
    g_seh_ebp = ebp; sub_00118030(); return; /* tail jmp 0x00118030 */

loc_00109F97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109FA0
 * Original: 0x00109FA0 - 0x0010A087 (231 bytes, 65 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00109FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109FA0: ;
    eax = MEM32(0x97037C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A084; /* je: equal / zero */

loc_00109FAD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A4D24);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x109EC0);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00109FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109FC2u); } /* indirect call */
    }

loc_00109FC4: ;
    MEM32(0x9A4D1C) = eax;
    eax = MEM32(0x9A4D1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109FE6; /* jne: not equal / not zero */

loc_00109FD5: ;
    PUSH32(esp, 0x2AA1C8);
    PUSH32(esp, 0x00109FDFu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_00109FDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00109FE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A4D20);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x109F40);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x97037C); PUSH32(esp, 0x0010A001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109FFBu); } /* indirect call */
    }

loc_0010A001: ;
    MEM32(0x9A4D30) = eax;
    eax = MEM32(0x9A4D30);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A023; /* jne: not equal / not zero */

loc_0010A012: ;
    PUSH32(esp, 0x2AA180);
    PUSH32(esp, 0x0010A01Cu); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_0010A01C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A023: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A4D28);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x109AB0);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x97037C); PUSH32(esp, 0x0010A03Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A038u); } /* indirect call */
    }

loc_0010A03E: ;
    MEM32(0x9A4CE0) = eax;
    eax = MEM32(0x9A4CE0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A060; /* jne: not equal / not zero */

loc_0010A04F: ;
    PUSH32(esp, 0x2AA138);
    PUSH32(esp, 0x0010A059u); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_0010A059: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A060: ;
    MEM32(0x9A4D2C) = 0xFFFFFFFEu;
    eax = MEM32(0x9A4D2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A084; /* jne: not equal / not zero */

loc_0010A073: ;
    PUSH32(esp, 0x2AA0F0);
    PUSH32(esp, 0x0010A07Du); RECOMP_ABI_CALL(0x00117C50u, sub_00117C50); /* call 0x00117C50 */

loc_0010A07D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A084: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A090
 * Original: 0x0010A090 - 0x0010A1CC (316 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A090: ;
    eax = MEM32(0x970320);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A1BF; /* jne: not equal / not zero */

loc_0010A0A0: ;
    MEM32(0x97035C) = esi;
    MEM32(0x970360) = esi;
    MEM32(0x970364) = esi;
    MEM32(0x970368) = esi;
    MEM32(0x970374) = esi;
    MEM32(0x970378) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A4D00);
    MEM32(0x970348) = esi;
    { uint32_t _icall_target = MEM32(0x22BD0C); PUSH32(esp, 0x0010A0D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A0CFu); } /* indirect call */
    }

loc_0010A0D5: ;
    PUSH32(esp, 0x0010A0DAu); RECOMP_ABI_CALL(0x00118010u, sub_00118010); /* call 0x00118010 */

loc_0010A0DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x109990);
    PUSH32(esp, 0x0010A0E5u); RECOMP_ABI_CALL(0x00117DE0u, sub_00117DE0); /* call 0x00117DE0 */

loc_0010A0E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1099B0);
    PUSH32(esp, 0x0010A0F0u); RECOMP_ABI_CALL(0x00117E00u, sub_00117E00); /* call 0x00117E00 */

loc_0010A0F0: ;
    PUSH32(esp, 0x1099D0);
    PUSH32(esp, 0x0010A0FAu); RECOMP_ABI_CALL(0x00118060u, sub_00118060); /* call 0x00118060 */

loc_0010A0FA: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A13A; /* jne: not equal / not zero */

loc_0010A105: ;
    MEM32(0x970334) = esi;
    eax = 1;
    MEM32(0x970324) = 0xF;
    MEM32(0x970328) = 2;
    MEM32(0x97032C) = eax;
    MEM32(0x970330) = eax;
    MEM32(0x970338) = 0xFFFFFFFEu;
    goto loc_0010A16F;

loc_0010A13A: ;
    ecx = MEM32(eax);
    MEM32(0x970324) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x970328) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x97032C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x970330) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x970334) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x970338) = edx;

loc_0010A16F: ;
    PUSH32(esp, 0x0010A174u); RECOMP_ABI_CALL(0x00109FA0u, sub_00109FA0); /* call 0x00109FA0 */

loc_0010A174: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A181; /* jl: less (signed <) */

loc_0010A178: ;
    PUSH32(esp, 0x0010A17Du); RECOMP_ABI_CALL(0x00109DB0u, sub_00109DB0); /* call 0x00109DB0 */

loc_0010A17D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010A18C; /* jge: greater or equal (signed >=) */

loc_0010A181: ;
    PUSH32(esp, 0x0010A186u); RECOMP_ABI_CALL(0x00109C20u, sub_00109C20); /* call 0x00109C20 */

loc_0010A186: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118030(); return; /* tail jmp 0x00118030 */

loc_0010A18C: ;
    eax = MEM32(0x9A4D1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A197u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_0010A197: ;
    ecx = MEM32(0x9A4D30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A1A3u); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_0010A1A3: ;
    edx = MEM32(0x9A4CE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A1AFu); RECOMP_ABI_CALL(0x000AD0D4u, sub_000AD0D4); /* call 0x000AD0D4 */

loc_0010A1AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1099F0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0010A1BCu); RECOMP_ABI_CALL(0x00118270u, sub_00118270); /* call 0x00118270 */

loc_0010A1BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010A1BF: ;
    eax = MEM32(0x970320);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x970320) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A1D0
 * Original: 0x0010A1D0 - 0x0010A1DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A1D0(void)
{

loc_0010A1D0: ;
    eax = MEM32(esp + 4);
    MEM32(0x97048C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A1E0
 * Original: 0x0010A1E0 - 0x0010A1E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010A1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A1E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A1F0
 * Original: 0x0010A1F0 - 0x0010A31C (300 bytes, 83 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A1F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A20E; /* jne: not equal / not zero */

loc_0010A1FC: ;
    PUSH32(esp, 0x2AA270);
    PUSH32(esp, 0x0010A206u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A206: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A20E: ;
    eax = MEM32(esp + 0x28);
    ecx = eax + eax * 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010A21F; /* jle: less or equal (signed <=) */

loc_0010A21B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0010A22C;

loc_0010A21F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFD8F0u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010A22C; /* jge: greater or equal (signed >=) */

loc_0010A227: ;
    ecx = 0xFFFFD8F0u;

loc_0010A22C: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esi + eax * 4 + 0x208) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0010A30A; /* ja: above (unsigned >) */

loc_0010A240: ;
    ecx = 2;
    { uint32_t _jt = MEM32(eax * 4 + 0x10A31C); /* switch: 6 entries, 3 targets */
    if (_jt == 0x0010A24Cu) goto loc_0010A24C;
    if (_jt == 0x0010A26Eu) goto loc_0010A26E;
    if (_jt == 0x0010A290u) goto loc_0010A290;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010A24C: ;
    edx = MEM32(esi + 0x208);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x20C);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x14) = 1;
    goto loc_0010A2AC;

loc_0010A26E: ;
    edx = MEM32(esi + 0x210);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x214);
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x14) = 5;
    goto loc_0010A2AC;

loc_0010A290: ;
    edx = MEM32(esi + 0x218);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x21C);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = 3;

loc_0010A2AC: ;
    MEM32(esp + 0x18) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(esi + edi * 4 + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010A2F2; /* jne: not equal / not zero */

loc_0010A2CF: ;
    eax = MEM32(esi + edi * 4 + 0xC);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A2DEu); RECOMP_ABI_CALL(0x00108FB0u, sub_00108FB0); /* call 0x00108FB0 */

loc_0010A2DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edi * 4 + 0x1E4) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A2F2: ;
    edx = MEM32(esi + edi * 4 + 0xC);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A301u); RECOMP_ABI_CALL(0x00108FD0u, sub_00108FD0); /* call 0x00108FD0 */

loc_0010A301: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A30A: ;
    PUSH32(esp, 0x2AA240);
    PUSH32(esp, 0x0010A314u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A314: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A340
 * Original: 0x0010A340 - 0x0010A35E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A340: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A359; /* jne: not equal / not zero */

loc_0010A348: ;
    PUSH32(esp, 0x2AA29C);
    PUSH32(esp, 0x0010A352u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A352: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A359: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A360
 * Original: 0x0010A360 - 0x0010A3BA (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A360: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A378; /* jne: not equal / not zero */

loc_0010A369: ;
    PUSH32(esp, 0x2AA2C8);
    PUSH32(esp, 0x0010A373u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A373: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010A378: ;
    eax = MEM32(eax + 0xC);
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0010A39Au); RECOMP_ABI_CALL(0x00107350u, sub_00107350); /* call 0x00107350 */

loc_0010A39A: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A3AB; /* je: equal / zero */

loc_0010A3A5: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;

loc_0010A3AB: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A3B8; /* je: equal / zero */

loc_0010A3B3: ;
    edx = MEM32(esp);
    MEM32(eax) = edx;

loc_0010A3B8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A3C0
 * Original: 0x0010A3C0 - 0x0010A3F6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A3C0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A3D8; /* jne: not equal / not zero */

loc_0010A3C8: ;
    PUSH32(esp, 0x2AA328);
    PUSH32(esp, 0x0010A3D2u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A3D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010A3D8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010A3F1; /* jle: less or equal (signed <=) */

loc_0010A3E1: ;
    PUSH32(esp, 0x2AA2F4);
    PUSH32(esp, 0x0010A3EBu); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A3EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010A3F1: ;
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A400
 * Original: 0x0010A400 - 0x0010A421 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A400: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A416; /* jne: not equal / not zero */

loc_0010A408: ;
    PUSH32(esp, 0x2AA354);
    PUSH32(esp, 0x0010A412u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A412: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A416: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x1B0) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A430
 * Original: 0x0010A430 - 0x0010A451 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A446; /* jne: not equal / not zero */

loc_0010A438: ;
    PUSH32(esp, 0x2AA380);
    PUSH32(esp, 0x0010A442u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A442: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A446: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x1B1) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A460
 * Original: 0x0010A460 - 0x0010A481 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A460: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A476; /* jne: not equal / not zero */

loc_0010A468: ;
    PUSH32(esp, 0x2AA3AC);
    PUSH32(esp, 0x0010A472u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A472: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A476: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x1C0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A490
 * Original: 0x0010A490 - 0x0010A4B0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A490: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A4A9; /* jne: not equal / not zero */

loc_0010A498: ;
    PUSH32(esp, 0x2AA3D8);
    PUSH32(esp, 0x0010A4A2u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A4A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A4A9: ;
    eax = MEM32(eax + 0x1C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A4B0
 * Original: 0x0010A4B0 - 0x0010A4E9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A4B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A4C8; /* jne: not equal / not zero */

loc_0010A4B9: ;
    PUSH32(esp, 0x2AA404);
    PUSH32(esp, 0x0010A4C3u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A4C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A4C8: ;
    PUSH32(esp, 0x0010A4CDu); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010A4CD: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x1C4) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_0010A4F0
 * Original: 0x0010A4F0 - 0x0010A52D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A4F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A506; /* jne: not equal / not zero */

loc_0010A4F8: ;
    PUSH32(esp, 0x2AA430);
    PUSH32(esp, 0x0010A502u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A502: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A506: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A516; /* je: equal / zero */

loc_0010A50E: ;
    edx = MEM32(eax + 0x1C4);
    MEM32(ecx) = edx;

loc_0010A516: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A52C; /* je: equal / zero */

loc_0010A51E: ;
    edx = MEM32(eax + 0x1C8);
    _fb = (uint32_t)(MEM32(eax + 0x1C4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x1C4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;

loc_0010A52C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A530
 * Original: 0x0010A530 - 0x0010A54F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A530: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A548; /* jne: not equal / not zero */

loc_0010A538: ;
    PUSH32(esp, 0x2AA45C);
    PUSH32(esp, 0x0010A542u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A542: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010A548: ;
    eax = MEM32(eax + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A550
 * Original: 0x0010A550 - 0x0010A56F (31 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A568; /* jne: not equal / not zero */

loc_0010A558: ;
    PUSH32(esp, 0x2AA488);
    PUSH32(esp, 0x0010A562u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A562: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010A568: ;
    eax = MEM32(eax + 0x1A8);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A570
 * Original: 0x0010A570 - 0x0010A571 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A570(void)
{

loc_0010A570: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A580
 * Original: 0x0010A580 - 0x0010A5D8 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A59B; /* jne: not equal / not zero */

loc_0010A589: ;
    PUSH32(esp, 0x2AA4C4);
    PUSH32(esp, 0x0010A593u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A593: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A59B: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A5D4; /* jl: less (signed <) */

loc_0010A5A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010A5D4; /* jg: greater (signed >) */

loc_0010A5A6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A5AFu); RECOMP_ABI_CALL(0x00118770u, sub_00118770); /* call 0x00118770 */

loc_0010A5AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010A5C7; /* je: equal / zero */

loc_0010A5B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010A5D4; /* jne: not equal / not zero */

loc_0010A5BA: ;
    ecx = MEM32(esi + 0xC);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00107530(); return; /* tail jmp 0x00107530 */

loc_0010A5C7: ;
    edx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00118750(); return; /* tail jmp 0x00118750 */

loc_0010A5D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A5E0
 * Original: 0x0010A5E0 - 0x0010A613 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010A5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A5E0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A5F9; /* jne: not equal / not zero */

loc_0010A5E8: ;
    PUSH32(esp, 0x2AA4FC);
    PUSH32(esp, 0x0010A5F2u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A5F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A5F9: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A610; /* jl: less (signed <) */

loc_0010A600: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010A610; /* jg: greater (signed >) */

loc_0010A604: ;
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00118600(); return; /* tail jmp 0x00118600 */

loc_0010A610: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A620
 * Original: 0x0010A620 - 0x0010A653 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010A620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A620: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A639; /* jne: not equal / not zero */

loc_0010A628: ;
    PUSH32(esp, 0x2AA538);
    PUSH32(esp, 0x0010A632u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A632: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A639: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A650; /* jl: less (signed <) */

loc_0010A640: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010A650; /* jg: greater (signed >) */

loc_0010A644: ;
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00118650(); return; /* tail jmp 0x00118650 */

loc_0010A650: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A660
 * Original: 0x0010A660 - 0x0010A693 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010A660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A660: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A679; /* jne: not equal / not zero */

loc_0010A668: ;
    PUSH32(esp, 0x2AA574);
    PUSH32(esp, 0x0010A672u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A672: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010A679: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A690; /* jl: less (signed <) */

loc_0010A680: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010A690; /* jg: greater (signed >) */

loc_0010A684: ;
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001186E0(); return; /* tail jmp 0x001186E0 */

loc_0010A690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A6A0
 * Original: 0x0010A6A0 - 0x0010A723 (131 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A6A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A6BD; /* jne: not equal / not zero */

loc_0010A6AB: ;
    PUSH32(esp, 0x2AA5AC);
    PUSH32(esp, 0x0010A6B5u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010A6B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A6BD: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A71F; /* jl: less (signed <) */

loc_0010A6C5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010A71F; /* jg: greater (signed >) */

loc_0010A6CA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010A6D5u); RECOMP_ABI_CALL(0x00118600u, sub_00118600); /* call 0x00118600 */

loc_0010A6D5: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0010A717; /* jle: less or equal (signed <=) */

loc_0010A6E2: ;
    PUSH32(esp, ebx);

loc_0010A6E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010A6EAu); RECOMP_ABI_CALL(0x00118610u, sub_00118610); /* call 0x00118610 */

loc_0010A6EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0010A6F3u); RECOMP_ABI_CALL(0x00118630u, sub_00118630); /* call 0x00118630 */

loc_0010A6F3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = eax + eax * 8;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x24);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0010A6E3; /* jl: less (signed <) */

loc_0010A716: ;
    POP32(esp, ebx);

loc_0010A717: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A71F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A730
 * Original: 0x0010A730 - 0x0010A855 (293 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A730: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1AC);
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A74F; /* je: equal / zero */

loc_0010A745: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A852; /* jne: not equal / not zero */

loc_0010A74F: ;
    SET_LO8(edx, MEM8(esi + 0x1B0));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    MEM32(esi + 0x1BC) = edi;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0010A77D; /* jne: not equal / not zero */

loc_0010A769: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A77D; /* jl: less (signed <) */

loc_0010A771: ;
    eax = MEM32(esi + 0x1C4);
    MEM32(esi + 0x1BC) = eax;

loc_0010A77D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B1), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A851; /* jne: not equal / not zero */

loc_0010A789: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A792u); RECOMP_ABI_CALL(0x00118650u, sub_00118650); /* call 0x00118650 */

loc_0010A792: ;
    ecx = MEM32(esi + 0x1BC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010A851; /* jge: greater or equal (signed >=) */

loc_0010A7A3: ;
    PUSH32(esp, 0x0010A7A8u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010A7A8: ;
    edx = MEM32(esi + 4);
    edi = MEM32(esi + 0x1BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A7B7u); RECOMP_ABI_CALL(0x00118770u, sub_00118770); /* call 0x00118770 */

loc_0010A7B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010A7F1; /* je: equal / zero */

loc_0010A7BF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010A84C; /* jne: not equal / not zero */

loc_0010A7C6: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A7D1u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0010A7D1: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A7DCu); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0010A7DC: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A7E5u); RECOMP_ABI_CALL(0x0010BEE0u, sub_0010BEE0); /* call 0x0010BEE0 */

loc_0010A7E5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010A7EDu); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010A7ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010A7F1: ;
    edx = MEM32(esi + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A805u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0010A805: ;
    eax = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A81Fu); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0010A81F: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    eax = edx + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A840u); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0010A840: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A849u); RECOMP_ABI_CALL(0x0010BEE0u, sub_0010BEE0); /* call 0x0010BEE0 */

loc_0010A849: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010A84C: ;
    PUSH32(esp, 0x0010A851u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010A851: ;
    POP32(esp, edi);

loc_0010A852: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A860
 * Original: 0x0010A860 - 0x0010A922 (194 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A86Fu); RECOMP_ABI_CALL(0x0010C660u, sub_0010C660); /* call 0x0010C660 */

loc_0010A86F: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x0010A87Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A878u); } /* indirect call */
    }

loc_0010A87B: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010A8A8; /* jle: less or equal (signed <=) */

loc_0010A887: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x94;
    edi = edi;

loc_0010A890: ;
    eax = MEM32(ebx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010A898u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A895u); } /* indirect call */
    }

loc_0010A898: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A890; /* jl: less (signed <) */

loc_0010A8A7: ;
    POP32(esp, ebx);

loc_0010A8A8: ;
    ecx = MEM32(esi + 0x1D8);
    edx = MEM32(esi + 0x1D4);
    eax = MEM32(esi + 0x1D0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1CC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A8CDu); RECOMP_ABI_CALL(0x0010BDE0u, sub_0010BDE0); /* call 0x0010BDE0 */

loc_0010A8CD: ;
    eax = MEM32(esi + 0x118);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A8E7u); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_0010A8E7: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A8F2u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0010A8F2: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A8FDu); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0010A8FD: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A906u); RECOMP_ABI_CALL(0x0010BEE0u, sub_0010BEE0); /* call 0x0010BEE0 */

loc_0010A906: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A911u); RECOMP_ABI_CALL(0x001185E0u, sub_001185E0); /* call 0x001185E0 */

loc_0010A911: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00118590(); return; /* tail jmp 0x00118590 */

}

/**
 * sub_0010A930
 * Original: 0x0010A930 - 0x0010A93F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A930: ;
    PUSH32(esp, eax);
    eax = MEM32(edx + ecx * 4 + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A93Bu); RECOMP_ABI_CALL(0x00107720u, sub_00107720); /* call 0x00107720 */

loc_0010A93B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010A940
 * Original: 0x0010A940 - 0x0010A9AB (107 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 2);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x40C0);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(ebx + 3));
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xFFFFFFC0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0010A99C; /* jle: less or equal (signed <=) */

loc_0010A96B: ;
    ebp = ebx + 0xC;
    edi = edi;

loc_0010A970: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A97Cu); RECOMP_ABI_CALL(0x00108560u, sub_00108560); /* call 0x00108560 */

loc_0010A97C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010A9A3; /* je: equal / zero */

loc_0010A986: ;
    eax = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0010A970; /* jl: less (signed <) */

loc_0010A99C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010A9A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A9B0
 * Original: 0x0010A9B0 - 0x0010A9E4 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A9B0: ;
    SET_LO8(eax, MEM8(ebx + 3));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010A9E2; /* jle: less or equal (signed <=) */

loc_0010A9BA: ;
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    edi = edi;

loc_0010A9C0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A9D5; /* je: equal / zero */

loc_0010A9C6: ;
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0010A9D2u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_0010A9D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010A9D5: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 3);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010A9C0; /* jl: less (signed <) */

loc_0010A9E1: ;
    POP32(esp, esi);

loc_0010A9E2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A9F0
 * Original: 0x0010A9F0 - 0x0010AA1A (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A9F0: ;
    SET_LO8(eax, MEM8(ebx + 3));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AA18; /* jle: less or equal (signed <=) */

loc_0010A9FA: ;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    edi = edi;

loc_0010AA00: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AA08u); RECOMP_ABI_CALL(0x001071C0u, sub_001071C0); /* call 0x001071C0 */

loc_0010AA08: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010AA00; /* jl: less (signed <) */

loc_0010AA17: ;
    POP32(esp, edi);

loc_0010AA18: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AA20
 * Original: 0x0010AA20 - 0x0010AA53 (51 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010AA20: ;
    SET_LO8(eax, MEM8(ebx + 3));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AA50; /* jle: less or equal (signed <=) */

loc_0010AA2F: ;
    PUSH32(esp, edi);
    edi = ebx + 0xC;

loc_0010AA33: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AA43; /* je: equal / zero */

loc_0010AA39: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AA40u); RECOMP_ABI_CALL(0x00107C90u, sub_00107C90); /* call 0x00107C90 */

loc_0010AA40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010AA43: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 3);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010AA33; /* jl: less (signed <) */

loc_0010AA4F: ;
    POP32(esp, edi);

loc_0010AA50: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AA60
 * Original: 0x0010AA60 - 0x0010AA9B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010AA60: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AA6Cu); RECOMP_ABI_CALL(0x00118600u, sub_00118600); /* call 0x00118600 */

loc_0010AA6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AA99; /* jle: less or equal (signed <=) */

loc_0010AA73: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    /* nop */

loc_0010AA80: ;
    ecx = MEM32(esi + 0x88);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010AA8Fu); RECOMP_ABI_CALL(0x00108430u, sub_00108430); /* call 0x00108430 */

loc_0010AA8F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010AA80; /* jne: not equal / not zero */

loc_0010AA98: ;
    POP32(esp, edi);

loc_0010AA99: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AAA0
 * Original: 0x0010AAA0 - 0x0010AAD5 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010AAA0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AAACu); RECOMP_ABI_CALL(0x00118600u, sub_00118600); /* call 0x00118600 */

loc_0010AAAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AAD3; /* jle: less or equal (signed <=) */

loc_0010AAB3: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    /* nop */

loc_0010AAC0: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AAC9u); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_0010AAC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010AAC0; /* jne: not equal / not zero */

loc_0010AAD2: ;
    POP32(esp, edi);

loc_0010AAD3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AAE0
 * Original: 0x0010AAE0 - 0x0010AB39 (89 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010AAE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AAF0u); RECOMP_ABI_CALL(0x00118600u, sub_00118600); /* call 0x00118600 */

loc_0010AAF0: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AB2E; /* jle: less or equal (signed <=) */

loc_0010AAFB: ;
    PUSH32(esp, edi);
    edi = ebp + 0xC;
    /* nop */

loc_0010AB00: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AB08u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_0010AB08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AB29; /* je: equal / zero */

loc_0010AB10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AB2D; /* jne: not equal / not zero */

loc_0010AB15: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010AB00; /* jl: less (signed <) */

loc_0010AB1D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010AB29: ;
    MEM8(ebp + 1) = 4;

loc_0010AB2D: ;
    POP32(esp, edi);

loc_0010AB2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AB40
 * Original: 0x0010AB40 - 0x0010AB93 (83 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010AB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010AB40: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AB49u); RECOMP_ABI_CALL(0x00118580u, sub_00118580); /* call 0x00118580 */

loc_0010AB49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AB90; /* jne: not equal / not zero */

loc_0010AB51: ;
    SET_LO8(eax, MEM8(ebx + 3));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AB81; /* jle: less or equal (signed <=) */

loc_0010AB5B: ;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    /* nop */

loc_0010AB60: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AB68u); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_0010AB68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AB74; /* je: equal / zero */

loc_0010AB70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AB80; /* jne: not equal / not zero */

loc_0010AB74: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010AB60; /* jl: less (signed <) */

loc_0010AB80: ;
    POP32(esp, edi);

loc_0010AB81: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 3);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0010AB90; /* jne: not equal / not zero */

loc_0010AB8A: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0010AB90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010ABA0
 * Original: 0x0010ABA0 - 0x0010AC1E (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010ABA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010ABA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010ABB7; /* jne: not equal / not zero */

loc_0010ABA9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x2AA5E8;
    g_seh_ebp = ebp; sub_00118460(); return; /* tail jmp 0x00118460 */

loc_0010ABB7: ;
    PUSH32(esp, ebx);
    ebx = esi;
    PUSH32(esp, 0x0010ABBFu); RECOMP_ABI_CALL(0x0010A9F0u, sub_0010A9F0); /* call 0x0010A9F0 */

loc_0010ABBF: ;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010ABD1; /* je: equal / zero */

loc_0010ABC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010ABCEu); RECOMP_ABI_CALL(0x0010BF40u, sub_0010BF40); /* call 0x0010BF40 */

loc_0010ABCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010ABD1: ;
    PUSH32(esp, 0x0010ABD6u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010ABD6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010ABE6; /* je: equal / zero */

loc_0010ABDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010ABE3u); RECOMP_ABI_CALL(0x001185B0u, sub_001185B0); /* call 0x001185B0 */

loc_0010ABE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010ABE6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1DC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AC08; /* jne: not equal / not zero */

loc_0010ABEF: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x90) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010AC08; /* je: equal / zero */

loc_0010ABFF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0010AC05u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010AC02u); } /* indirect call */
    }

loc_0010AC05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010AC08: ;
    MEM32(esi + 0x90) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 0x1AC) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_0010AC20
 * Original: 0x0010AC20 - 0x0010AC84 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AC20(void)
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

loc_0010AC20: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x1E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010AC69; /* jnp: not parity */

loc_0010AC3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010AC40u); RECOMP_ABI_CALL(0x0010A6A0u, sub_0010A6A0); /* call 0x0010A6A0 */

loc_0010AC40: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = MEM32(esi + 0x118);
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1E0)); /* fmul dword ptr [esi + 0x1e0] */
    PUSH32(esp, 0x0010AC5Au); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_0010AC5A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AC64u); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_0010AC64: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010AC69: ;
    eax = MEM32(esi + 0x118);
    PUSH32(esp, eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010AC7Fu); RECOMP_ABI_CALL(0x0010C450u, sub_0010C450); /* call 0x0010C450 */

loc_0010AC7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010AC90
 * Original: 0x0010AC90 - 0x0010ACC1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AC90(void)
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

loc_0010AC90: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi + 0x1E0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010ACA4u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010ACA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010ACAAu); RECOMP_ABI_CALL(0x0010A340u, sub_0010A340); /* call 0x0010A340 */

loc_0010ACAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010ACBB; /* jne: not equal / not zero */

loc_0010ACB2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010ACB8u); RECOMP_ABI_CALL(0x0010AC20u, sub_0010AC20); /* call 0x0010AC20 */

loc_0010ACB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010ACBB: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010ACD0
 * Original: 0x0010ACD0 - 0x0010AD20 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010ACD0(void)
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

loc_0010ACD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010ACDEu); RECOMP_ABI_CALL(0x0010A6A0u, sub_0010A6A0); /* call 0x0010A6A0 */

loc_0010ACDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010ACF3; /* je: equal / zero */

loc_0010ACE9: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010ACFE; /* jne: not equal / not zero */

loc_0010ACF3: ;
    fp_push(MEMF(0x22C0D4)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010ACFE: ;
    esi = MEM32(esi + 0x90);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0010AD0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010AD09u); } /* indirect call */
    }

loc_0010AD0C: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */
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
 * sub_0010AD20
 * Original: 0x0010AD20 - 0x0010AD57 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010AD20: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AD36; /* jne: not equal / not zero */

loc_0010AD27: ;
    PUSH32(esp, 0x2AA614);
    PUSH32(esp, 0x0010AD31u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010AD31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010AD36: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0010AD3Cu); RECOMP_ABI_CALL(0x0010A340u, sub_0010A340); /* call 0x0010A340 */

loc_0010AD3C: ;
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM32(ebx + 0x1A8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0010AD55; /* je: equal / zero */

loc_0010AD4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010AD52u); RECOMP_ABI_CALL(0x0010AA20u, sub_0010AA20); /* call 0x0010AA20 */

loc_0010AD52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010AD55: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AD60
 * Original: 0x0010AD60 - 0x0010B04D (749 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010AD60: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0010AFC9; /* jne: not equal / not zero */

loc_0010AD74: ;
    PUSH32(esp, 1);
    ebx = esi;
    PUSH32(esp, 0x0010AD7Du); RECOMP_ABI_CALL(0x0010AA20u, sub_0010AA20); /* call 0x0010AA20 */

loc_0010AD7D: ;
    eax = MEM32(esi + 0x1AC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AF84; /* jne: not equal / not zero */

loc_0010AD8E: ;
    eax = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010ADF3; /* je: equal / zero */

loc_0010AD98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010ADF3; /* je: equal / zero */

loc_0010AD9D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010ADA3u); RECOMP_ABI_CALL(0x00118580u, sub_00118580); /* call 0x00118580 */

loc_0010ADA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010ADE5; /* jne: not equal / not zero */

loc_0010ADAA: ;
    SET_LO8(eax, MEM8(esi + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010ADD7; /* jle: less or equal (signed <=) */

loc_0010ADB3: ;
    ebx = esi + 0x94;
    /* nop */

loc_0010ADC0: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x0010ADC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010ADC5u); } /* indirect call */
    }

loc_0010ADC8: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010ADC0; /* jl: less (signed <) */

loc_0010ADD7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010ADDDu); RECOMP_ABI_CALL(0x00118590u, sub_00118590); /* call 0x00118590 */

loc_0010ADDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010AFC9;

loc_0010ADE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AFC9; /* jne: not equal / not zero */

loc_0010ADEE: ;
    goto loc_0010AF66;

loc_0010ADF3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010ADFCu); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_0010ADFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0010AE06u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010AE06: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AE2B; /* jne: not equal / not zero */

loc_0010AE0F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AE2B; /* je: equal / zero */

loc_0010AE14: ;
    MEM8(esi + 0x1B2) = 0;
    PUSH32(esp, 0x0010AE20u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010AE20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010AE26u); RECOMP_ABI_CALL(0x0010A860u, sub_0010A860); /* call 0x0010A860 */

loc_0010AE26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010AE30;

loc_0010AE2B: ;
    PUSH32(esp, 0x0010AE30u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010AE30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AE36u); RECOMP_ABI_CALL(0x00118580u, sub_00118580); /* call 0x00118580 */

loc_0010AE36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AFC9; /* jne: not equal / not zero */

loc_0010AE42: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AE48u); RECOMP_ABI_CALL(0x00118600u, sub_00118600); /* call 0x00118600 */

loc_0010AE48: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AE4Eu); RECOMP_ABI_CALL(0x00118770u, sub_00118770); /* call 0x00118770 */

loc_0010AE4E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010AEC0; /* je: equal / zero */

loc_0010AE56: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010AF6D; /* jne: not equal / not zero */

loc_0010AE5D: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AE68u); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0010AE68: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AE70u); RECOMP_ABI_CALL(0x001185E0u, sub_001185E0); /* call 0x001185E0 */

loc_0010AE70: ;
    SET_LO8(eax, MEM8(esi + 0x1B0));
    ebx = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AE8A; /* je: equal / zero */

loc_0010AE82: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AE94; /* jne: not equal / not zero */

loc_0010AE8A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AE91u); RECOMP_ABI_CALL(0x001185F0u, sub_001185F0); /* call 0x001185F0 */

loc_0010AE91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010AE94: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010AE9Eu); RECOMP_ABI_CALL(0x00107FB0u, sub_00107FB0); /* call 0x00107FB0 */

loc_0010AE9E: ;
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AEAEu); RECOMP_ABI_CALL(0x00108430u, sub_00108430); /* call 0x00108430 */

loc_0010AEAE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1AC) = 1;
    goto loc_0010AFC9;

loc_0010AEC0: ;
    edi = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x1BC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0010AF79; /* jl: less (signed <) */

loc_0010AED4: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010AEDDu); RECOMP_ABI_CALL(0x00118650u, sub_00118650); /* call 0x00118650 */

loc_0010AEDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010AF79; /* jge: greater or equal (signed >=) */

loc_0010AEE8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AEF9u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0010AEF9: ;
    eax = MEM32(esp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010AF13u); RECOMP_ABI_CALL(0x0010BE70u, sub_0010BE70); /* call 0x0010BE70 */

loc_0010AF13: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010AF33u); RECOMP_ABI_CALL(0x0010BFC0u, sub_0010BFC0); /* call 0x0010BFC0 */

loc_0010AF33: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AF3Bu); RECOMP_ABI_CALL(0x001185E0u, sub_001185E0); /* call 0x001185E0 */

loc_0010AF3B: ;
    SET_LO8(eax, MEM8(esi + 0x1B0));
    ebx = 1;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AF55; /* je: equal / zero */

loc_0010AF4D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AF5F; /* jne: not equal / not zero */

loc_0010AF55: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AF5Cu); RECOMP_ABI_CALL(0x001185F0u, sub_001185F0); /* call 0x001185F0 */

loc_0010AF5C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010AF5F: ;
    eax = esi;
    PUSH32(esp, 0x0010AF66u); RECOMP_ABI_CALL(0x0010AAA0u, sub_0010AAA0); /* call 0x0010AAA0 */

loc_0010AF66: ;
    eax = esi;
    PUSH32(esp, 0x0010AF6Du); RECOMP_ABI_CALL(0x0010AA60u, sub_0010AA60); /* call 0x0010AA60 */

loc_0010AF6D: ;
    MEM32(esi + 0x1AC) = 1;
    goto loc_0010AFC9;

loc_0010AF79: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 1) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010AF84: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010AF8Au); RECOMP_ABI_CALL(0x0010AAE0u, sub_0010AAE0); /* call 0x0010AAE0 */

loc_0010AF8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AFC9; /* jne: not equal / not zero */

loc_0010AF92: ;
    PUSH32(esp, 0x0010AF97u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010AF97: ;
    eax = MEM32(esi + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AFAD; /* jne: not equal / not zero */

loc_0010AFA1: ;
    PUSH32(esp, 0);
    ebx = esi;
    PUSH32(esp, 0x0010AFAAu); RECOMP_ABI_CALL(0x0010AA20u, sub_0010AA20); /* call 0x0010AA20 */

loc_0010AFAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010AFAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010AFB3u); RECOMP_ABI_CALL(0x0010AC20u, sub_0010AC20); /* call 0x0010AC20 */

loc_0010AFB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 2;
    MEM32(esi + 0x1AC) = 0;
    PUSH32(esp, 0x0010AFC9u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010AFC9: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B024; /* jne: not equal / not zero */

loc_0010AFCF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010AFD5u); RECOMP_ABI_CALL(0x00118770u, sub_00118770); /* call 0x00118770 */

loc_0010AFD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010B006; /* je: equal / zero */

loc_0010AFDD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010B024; /* jne: not equal / not zero */

loc_0010AFE0: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010AFE9u); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_0010AFE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B024; /* je: equal / zero */

loc_0010AFF1: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010AFFAu); RECOMP_ABI_CALL(0x00107240u, sub_00107240); /* call 0x00107240 */

loc_0010AFFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B020; /* je: equal / zero */

loc_0010B002: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    goto loc_0010B01E;

loc_0010B006: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010B00Cu); RECOMP_ABI_CALL(0x00118580u, sub_00118580); /* call 0x00118580 */

loc_0010B00C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B024; /* jne: not equal / not zero */

loc_0010B014: ;
    ebx = esi;
    PUSH32(esp, 0x0010B01Bu); RECOMP_ABI_CALL(0x0010AB40u, sub_0010AB40); /* call 0x0010AB40 */

loc_0010B01B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */

loc_0010B01E: ;
    if (CMP_NE(_fa, _fb)) goto loc_0010B024; /* jne: not equal / not zero */

loc_0010B020: ;
    MEM8(esi + 1) = 3;

loc_0010B024: ;
    PUSH32(esp, 0x0010B029u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B029: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B041; /* je: equal / zero */

loc_0010B030: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B036u); RECOMP_ABI_CALL(0x0010BE60u, sub_0010BE60); /* call 0x0010BE60 */

loc_0010B036: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B041; /* jne: not equal / not zero */

loc_0010B03E: ;
    MEM8(esi + 1) = LO8(eax);

loc_0010B041: ;
    PUSH32(esp, 0x0010B046u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010B046: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B050
 * Original: 0x0010B050 - 0x0010B07C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B050: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B061; /* jne: not equal / not zero */

loc_0010B054: ;
    MEM32(esp + 4) = 0x2AA674;
    g_seh_ebp = ebp; sub_00118460(); return; /* tail jmp 0x00118460 */

loc_0010B061: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010B073; /* jle: less or equal (signed <=) */

loc_0010B066: ;
    MEM32(esp + 4) = 0x2AA640;
    g_seh_ebp = ebp; sub_00118460(); return; /* tail jmp 0x00118460 */

loc_0010B073: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0010A930(); return; /* tail jmp 0x0010A930 */

}

/**
 * sub_0010B080
 * Original: 0x0010B080 - 0x0010B142 (194 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B09B; /* jne: not equal / not zero */

loc_0010B08C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x2AA6A0;
    g_seh_ebp = ebp; sub_00118460(); return; /* tail jmp 0x00118460 */

loc_0010B09B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B0A2u); RECOMP_ABI_CALL(0x0010ABA0u, sub_0010ABA0); /* call 0x0010ABA0 */

loc_0010B0A2: ;
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B0C0; /* je: equal / zero */

loc_0010B0AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0010B0B7u); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_0010B0B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010B0BDu); RECOMP_ABI_CALL(0x0010C6C0u, sub_0010C6C0); /* call 0x0010C6C0 */

loc_0010B0BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B0C0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B0CE; /* je: equal / zero */

loc_0010B0C5: ;
    ebx = esi;
    PUSH32(esp, 0x0010B0CCu); RECOMP_ABI_CALL(0x0010A9B0u, sub_0010A9B0); /* call 0x0010A9B0 */

loc_0010B0CC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010B0CE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0010B0D4u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B0D4: ;
    SET_LO8(eax, MEM8(esi + 3));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010B100; /* jle: less or equal (signed <=) */

loc_0010B0DD: ;
    edi = esi + 0x94;

loc_0010B0E3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B0F4; /* je: equal / zero */

loc_0010B0E9: ;
    MEM32(edi) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0010B0F1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010B0EEu); } /* indirect call */
    }

loc_0010B0F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B0F4: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B0E3; /* jl: less (signed <) */

loc_0010B100: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B11A; /* je: equal / zero */

loc_0010B10B: ;
    MEM32(esi + 0x8C) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0010B117u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010B114u); } /* indirect call */
    }

loc_0010B117: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B11A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B12D; /* je: equal / zero */

loc_0010B121: ;
    PUSH32(esp, eax);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0010B12Au); RECOMP_ABI_CALL(0x00118560u, sub_00118560); /* call 0x00118560 */

loc_0010B12A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B12D: ;
    edi = esi;
    ecx = 0x88;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM8(esi) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_0010B150
 * Original: 0x0010B150 - 0x0010B174 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B150: ;
    PUSH32(esp, esi);
    esi = 0x9A4460;

loc_0010B156: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B164; /* jne: not equal / not zero */

loc_0010B15B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B161u); RECOMP_ABI_CALL(0x0010B080u, sub_0010B080); /* call 0x0010B080 */

loc_0010B161: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B164: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4CE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A4CE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B156; /* jl: less (signed <) */

loc_0010B172: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B180
 * Original: 0x0010B180 - 0x0010B20B (139 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B180: ;
    eax = MEM32(0x2A9A98);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B1FB; /* je: equal / zero */

loc_0010B18F: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B1FB; /* je: equal / zero */

loc_0010B197: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B19Du); RECOMP_ABI_CALL(0x0010ABA0u, sub_0010ABA0); /* call 0x0010ABA0 */

loc_0010B19D: ;
    PUSH32(esp, 0x0010B1A2u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B1A2: ;
    eax = MEM32(esi + 0x8C);
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esi + 0x1CC) = edi;
    MEM32(esi + 0x1D0) = ecx;
    MEM32(esi + 0x1D4) = 0;
    MEM32(esi + 0x1D8) = 0xFFFFF;
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x0010B1DCu); RECOMP_ABI_CALL(0x001185C0u, sub_001185C0); /* call 0x001185C0 */

loc_0010B1DC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    MEM32(esi + 0x1DC) = 0;
    MEM8(esi + 0x1B2) = LO8(eax);
    MEM8(esi + 1) = LO8(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

loc_0010B1FB: ;
    PUSH32(esp, 0x2AA6CC);
    PUSH32(esp, 0x0010B205u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010B205: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B210
 * Original: 0x0010B210 - 0x0010B322 (274 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B210: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B314; /* je: equal / zero */

loc_0010B221: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B314; /* je: equal / zero */

loc_0010B22B: ;
    SET_LO8(eax, MEM8(ecx + 2));
    PUSH32(esp, ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    SET_LO8(eax, MEM8(ecx + 3));
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0010B268; /* jle: less or equal (signed <=) */

loc_0010B237: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B251; /* jge: greater or equal (signed >=) */

loc_0010B23B: ;
    eax = SX8(LO8(eax));
    MEM32(esp + 8) = eax;
    ebx = 6;
    MEM32(esp + 0xC) = 2;
    goto loc_0010B287;

loc_0010B251: ;
    MEM32(esp + 8) = 3;
    ebx = 6;
    MEM32(esp + 0xC) = 2;
    goto loc_0010B287;

loc_0010B268: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B275; /* jge: greater or equal (signed >=) */

loc_0010B26C: ;
    eax = SX8(LO8(eax));
    MEM32(esp + 8) = eax;
    goto loc_0010B27D;

loc_0010B275: ;
    MEM32(esp + 8) = 6;

loc_0010B27D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = 1;

loc_0010B287: ;
    eax = MEM32(esp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010B306; /* jle: less or equal (signed <=) */

loc_0010B291: ;
    PUSH32(esp, ebp);
    eax = 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ebp = ecx + 0x208;
    edi = ecx + 0x1F4;
    MEM32(esp + 0x18) = eax;
    goto loc_0010B2B0;

loc_0010B2AC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0010B2B0: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B2F5; /* jne: not equal / not zero */

loc_0010B2B5: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B2CD; /* jne: not equal / not zero */

loc_0010B2BC: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + -4) = esi;
    MEM32(edi) = eax;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = edx;
    goto loc_0010B2D3;

loc_0010B2CD: ;
    MEM32(ebp + -24) = esi;
    MEM32(ebp) = edx;

loc_0010B2D3: ;
    edx = MEM32(ebp + -508);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010B2E3u); RECOMP_ABI_CALL(0x00119100u, sub_00119100); /* call 0x00119100 */

loc_0010B2E3: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = 1;

loc_0010B2F5: ;
    edx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B2AC; /* jl: less (signed <) */

loc_0010B304: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0010B306: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0010B180(); return; /* tail jmp 0x0010B180 */

loc_0010B314: ;
    PUSH32(esp, 0x2AA6F8);
    PUSH32(esp, 0x0010B31Eu); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010B31E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B330
 * Original: 0x0010B330 - 0x0010B3E6 (182 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B330: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B34E; /* jne: not equal / not zero */

loc_0010B33C: ;
    PUSH32(esp, 0x2AA724);
    PUSH32(esp, 0x0010B346u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010B346: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010B34E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B355u); RECOMP_ABI_CALL(0x0010ABA0u, sub_0010ABA0); /* call 0x0010ABA0 */

loc_0010B355: ;
    PUSH32(esp, 0x0010B35Au); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B35A: ;
    edi = MEM32(esp + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x970380);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010B37Du); RECOMP_ABI_CALL(0x00106370u, sub_00106370); /* call 0x00106370 */

loc_0010B37D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B3DB; /* jne: not equal / not zero */

loc_0010B384: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010B38Au); RECOMP_ABI_CALL(0x00106450u, sub_00106450); /* call 0x00106450 */

loc_0010B38A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x1CC) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x1D8) = eax;
    eax = MEM32(esi + 0x8C);
    MEM32(esi + 0x1D0) = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x1D4) = edx;
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x0010B3C4u); RECOMP_ABI_CALL(0x001185C0u, sub_001185C0); /* call 0x001185C0 */

loc_0010B3C4: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1DC) = eax;
    MEM8(esi + 0x1B2) = LO8(eax);
    MEM8(esi + 1) = LO8(eax);

loc_0010B3DB: ;
    PUSH32(esp, 0x0010B3E0u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010B3E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B3F0
 * Original: 0x0010B3F0 - 0x0010B445 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B3F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B435; /* je: equal / zero */

loc_0010B3FA: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B435; /* je: equal / zero */

loc_0010B402: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B408u); RECOMP_ABI_CALL(0x0010ABA0u, sub_0010ABA0); /* call 0x0010ABA0 */

loc_0010B408: ;
    PUSH32(esp, 0x0010B40Du); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B40D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0010B41Du); RECOMP_ABI_CALL(0x001185C0u, sub_001185C0); /* call 0x001185C0 */

loc_0010B41D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1DC) = 3;
    MEM8(esi + 1) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

loc_0010B435: ;
    PUSH32(esp, 0x2AA750);
    PUSH32(esp, 0x0010B43Fu); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010B43F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B450
 * Original: 0x0010B450 - 0x0010B4B0 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B4A0; /* je: equal / zero */

loc_0010B45A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B4A0; /* je: equal / zero */

loc_0010B462: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B468u); RECOMP_ABI_CALL(0x0010ABA0u, sub_0010ABA0); /* call 0x0010ABA0 */

loc_0010B468: ;
    PUSH32(esp, 0x0010B46Du); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B46D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010B478u); RECOMP_ABI_CALL(0x00117AC0u, sub_00117AC0); /* call 0x00117AC0 */

loc_0010B478: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x0010B488u); RECOMP_ABI_CALL(0x001185C0u, sub_001185C0); /* call 0x001185C0 */

loc_0010B488: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1DC) = 2;
    MEM8(esi + 1) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

loc_0010B4A0: ;
    PUSH32(esp, 0x2AA77C);
    PUSH32(esp, 0x0010B4AAu); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010B4AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B4B0
 * Original: 0x0010B4B0 - 0x0010B4C9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B4B6u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B4B6: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x0010B4C3u); RECOMP_ABI_CALL(0x0010AD20u, sub_0010AD20); /* call 0x0010AD20 */

loc_0010B4C3: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_0010B4D0
 * Original: 0x0010B4D0 - 0x0010B4F7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B4D0: ;
    PUSH32(esp, 0x970488);
    PUSH32(esp, 0x0010B4DAu); RECOMP_ABI_CALL(0x001182C0u, sub_001182C0); /* call 0x001182C0 */

loc_0010B4DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B4F6; /* je: equal / zero */

loc_0010B4E1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x0010B4EBu); RECOMP_ABI_CALL(0x0010AD60u, sub_0010AD60); /* call 0x0010AD60 */

loc_0010B4EB: ;
    MEM32(0x970488) = 0;
    POP32(esp, esi);

loc_0010B4F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B500
 * Original: 0x0010B500 - 0x0010B524 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B500: ;
    PUSH32(esp, esi);
    esi = 0x9A4460;

loc_0010B506: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B514; /* jne: not equal / not zero */

loc_0010B50B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B511u); RECOMP_ABI_CALL(0x0010B4D0u, sub_0010B4D0); /* call 0x0010B4D0 */

loc_0010B511: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B514: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4CE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A4CE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B506; /* jl: less (signed <) */

loc_0010B522: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B530
 * Original: 0x0010B530 - 0x0010B54F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B530: ;
    PUSH32(esp, 0x0010B535u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B535: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B547u); RECOMP_ABI_CALL(0x0010B050u, sub_0010B050); /* call 0x0010B050 */

loc_0010B547: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00118480(); return; /* tail jmp 0x00118480 */

}

/**
 * sub_0010B550
 * Original: 0x0010B550 - 0x0010B55D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010B550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B550: ;
    PUSH32(esp, 0x0010B555u); RECOMP_ABI_CALL(0x0010B500u, sub_0010B500); /* call 0x0010B500 */

loc_0010B555: ;
    PUSH32(esp, 0x0010B55Au); RECOMP_ABI_CALL(0x00119000u, sub_00119000); /* call 0x00119000 */

loc_0010B55A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B560
 * Original: 0x0010B560 - 0x0010B56D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010B560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B560: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0010B567u); RECOMP_ABI_CALL(0x0010B550u, sub_0010B550); /* call 0x0010B550 */

loc_0010B567: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B570
 * Original: 0x0010B570 - 0x0010B5EA (122 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B570: ;
    eax = MEM32(0x2AA20C);
    eax = MEM32(0x970480);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B5E3; /* jne: not equal / not zero */

loc_0010B57E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010B584u); RECOMP_ABI_CALL(0x00118490u, sub_00118490); /* call 0x00118490 */

loc_0010B584: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x220;
    edi = 0x9A4460;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0010B597u); RECOMP_ABI_CALL(0x00109B90u, sub_00109B90); /* call 0x00109B90 */

loc_0010B597: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0010B5CF; /* jne: not equal / not zero */

loc_0010B59F: ;
    PUSH32(esp, 0x10B550);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0010B5ADu); RECOMP_ABI_CALL(0x001181F0u, sub_001181F0); /* call 0x001181F0 */

loc_0010B5AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10A1E0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0010B5BBu); RECOMP_ABI_CALL(0x00118140u, sub_00118140); /* call 0x00118140 */

loc_0010B5BB: ;
    MEM32(0x970484) = eax;
    eax = MEM32(0x970480);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x970480) = eax;
    esp += 4; return; /* ret */

loc_0010B5CF: ;
    PUSH32(esp, 0x10B560);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0010B5DBu); RECOMP_ABI_CALL(0x00118140u, sub_00118140); /* call 0x00118140 */

loc_0010B5DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x970484) = eax;

loc_0010B5E3: ;
    MEM32(0x970480) = MEM32(0x970480) + 1;
    _fa = (uint32_t)(MEM32(0x970480)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B5F0
 * Original: 0x0010B5F0 - 0x0010B64A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B5F0: ;
    MEM32(0x970480) = MEM32(0x970480) - 1;
    _fa = (uint32_t)(MEM32(0x970480)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010B649; /* jne: not equal / not zero */

loc_0010B5F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x9A4460;
    /* nop */

loc_0010B600: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B60E; /* jne: not equal / not zero */

loc_0010B605: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B60Bu); RECOMP_ABI_CALL(0x0010B080u, sub_0010B080); /* call 0x0010B080 */

loc_0010B60B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B60E: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4CE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A4CE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B600; /* jl: less (signed <) */

loc_0010B61C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = 0x220;
    edi = 0x9A4460;
    PUSH32(esp, 2);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0010B632u); RECOMP_ABI_CALL(0x001181A0u, sub_001181A0); /* call 0x001181A0 */

loc_0010B632: ;
    eax = MEM32(0x970484);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0010B63Fu); RECOMP_ABI_CALL(0x001181A0u, sub_001181A0); /* call 0x001181A0 */

loc_0010B63F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001184C0(); return; /* tail jmp 0x001184C0 */

loc_0010B649: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B650
 * Original: 0x0010B650 - 0x0010B862 (530 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = ecx + 0x3F;
    ebp = ebp & 0xFFFFFFC0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x40C0);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0010B690; /* jne: not equal / not zero */

loc_0010B67D: ;
    PUSH32(esp, 0x2AA7A8);
    PUSH32(esp, 0x0010B687u); RECOMP_ABI_CALL(0x00118460u, sub_00118460); /* call 0x00118460 */

loc_0010B687: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010B690: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x9A4460;

loc_0010B698: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B6AA; /* je: equal / zero */

loc_0010B69D: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A4CE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A4CE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B698; /* jl: less (signed <) */

loc_0010B6AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B85D; /* je: equal / zero */

loc_0010B6B5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x220);
    _fb = (uint32_t)(0x9A4460) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9A4460;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = 0x88;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(esi + 3) = LO8(eax);
    eax = ebp;
    ebx = esi;
    MEM8(esi + 2) = LO8(edx);
    MEM32(esi + 0x1A0) = 0x2000;
    MEM32(esi + 0x1A4) = 0x40;
    PUSH32(esp, 0x0010B6F2u); RECOMP_ABI_CALL(0x0010A940u, sub_0010A940); /* call 0x0010A940 */

loc_0010B6F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B802; /* jl: less (signed <) */

loc_0010B6FA: ;
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0010B802; /* js: sign (negative) */

loc_0010B711: ;
    SET_LO8(eax, MEM8(esi + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0010B77F; /* jle: less or equal (signed <=) */

loc_0010B71E: ;
    edi = esi + 0x120;
    goto loc_0010B730;

    /* nop */
    /* nop */

loc_0010B730: ;
    MEM32(edi) = ebp;
    eax = MEM32(esi + 0x1A4);
    ecx = MEM32(esi + 0x1A0);
    edx = ecx + eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0010B802; /* js: sign (negative) */

loc_0010B74E: ;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B758u); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_0010B758: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + -140) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010B802; /* je: equal / zero */

loc_0010B769: ;
    eax = MEM32(esp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0010B730; /* jl: less (signed <) */

loc_0010B77D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010B77F: ;
    eax = ebx + -8192;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x2000);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x11C) = 0x2000;
    MEM32(esi + 0x114) = ebp;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0010B7BCu); RECOMP_ABI_CALL(0x001098E0u, sub_001098E0); /* call 0x001098E0 */

loc_0010B7BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x8C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010B802; /* je: equal / zero */

loc_0010B7C9: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(esp + 0x18);
    edx = esi + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010B7E1u); RECOMP_ABI_CALL(0x00118C10u, sub_00118C10); /* call 0x00118C10 */

loc_0010B7E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010B802; /* je: equal / zero */

loc_0010B7EB: ;
    edx = MEM32(esi + 0x8C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010B7F8u); RECOMP_ABI_CALL(0x0010BDA0u, sub_0010BDA0); /* call 0x0010BDA0 */

loc_0010B7F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0010B813; /* jne: not equal / not zero */

loc_0010B802: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B808u); RECOMP_ABI_CALL(0x0010B080u, sub_0010B080); /* call 0x0010B080 */

loc_0010B808: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010B813: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10A730);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B81Fu); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_0010B81F: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1A8) = edi;
    MEM8(esi + 0x1B1) = LO8(eax);
    MEM32(esi + 0x1B8) = edi;
    MEM32(esi + 0x1C0) = edi;
    MEM32(esi + 0x1BC) = edi;
    MEM32(esi + 0x1C4) = edi;
    MEM32(esi + 0x1C8) = eax;
    MEM8(esi) = LO8(eax);
    MEM8(esi + 0x1B0) = 0;
    eax = esi;
    POP32(esp, edi);

loc_0010B85D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B870
 * Original: 0x0010B870 - 0x0010B8A5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B870: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010B876u); RECOMP_ABI_CALL(0x00118470u, sub_00118470); /* call 0x00118470 */

loc_0010B876: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0010B88Du); RECOMP_ABI_CALL(0x0010B650u, sub_0010B650); /* call 0x0010B650 */

loc_0010B88D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1E0) = 0;
    PUSH32(esp, 0x0010B8A1u); RECOMP_ABI_CALL(0x00118480u, sub_00118480); /* call 0x00118480 */

loc_0010B8A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B8B0
 * Original: 0x0010B8B0 - 0x0010B941 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B8B0: ;
    eax = MEM32(0x2AA7D4);
    eax = MEM32(0x970490);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B93A; /* jne: not equal / not zero */

loc_0010B8C0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x110;
    edi = 0x9A4020;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x100;
    edi = 0x9A3C20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x40;
    edi = 0x9A3AC0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9A3BE0) = ecx;
    MEM32(0x9A3BE4) = ecx;
    MEM32(0x9A3BE8) = ecx;
    MEM32(0x9A3BEC) = ecx;
    MEM32(0x9A3BF0) = ecx;
    MEM32(0x9A3BF4) = ecx;
    MEM32(0x9A3BF8) = ecx;
    MEM32(0x9A3BFC) = ecx;
    MEM32(0x9A3BC0) = edx;
    MEM32(0x9A3BC4) = edx;
    MEM32(0x9A3C04) = edx;
    MEM32(0x9A3C00) = edx;
    MEM32(0x9A3AA0) = eax;
    POP32(esp, edi);

loc_0010B93A: ;
    MEM32(0x970490) = MEM32(0x970490) + 1;
    _fa = (uint32_t)(MEM32(0x970490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B950
 * Original: 0x0010B950 - 0x0010B9D1 (129 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B950: ;
    MEM32(0x970490) = MEM32(0x970490) - 1;
    _fa = (uint32_t)(MEM32(0x970490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010B9D0; /* jne: not equal / not zero */

loc_0010B958: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010B95Eu); RECOMP_ABI_CALL(0x001065F0u, sub_001065F0); /* call 0x001065F0 */

loc_0010B95E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9A3C00) = eax;
    MEM32(0x9A3C04) = eax;
    MEM32(0x9A3BC4) = eax;
    MEM32(0x9A3BC0) = eax;
    MEM32(0x9A3BE0) = eax;
    MEM32(0x9A3BE4) = eax;
    MEM32(0x9A3BE8) = eax;
    MEM32(0x9A3BEC) = eax;
    MEM32(0x9A3BF0) = eax;
    MEM32(0x9A3BF4) = eax;
    MEM32(0x9A3BF8) = eax;
    MEM32(0x9A3BFC) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x40;
    edi = 0x9A3AC0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x100;
    edi = 0x9A3C20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x110;
    edi = 0x9A4020;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x9A3AA0) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_0010B9D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B9E0
 * Original: 0x0010B9E0 - 0x0010B9FB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B9E0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = 0x9A39A0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x9704B4) = eax;
    MEM32(0x9704B8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BA00
 * Original: 0x0010BA00 - 0x0010BA1B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BA00: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = 0x9A39A0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x9704B4) = eax;
    MEM32(0x9704B8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BA20
 * Original: 0x0010BA20 - 0x0010BA40 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010BA20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x9704B4) = eax;
    MEM32(0x9704B8) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001182A0(); return; /* tail jmp 0x001182A0 */

}

/**
 * sub_0010BA40
 * Original: 0x0010BA40 - 0x0010BA7E (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010BA40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9A39A0);
    PUSH32(esp, 0x0010BA54u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_0010BA54: ;
    eax = MEM32(0x9704B4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BA71; /* je: equal / zero */

loc_0010BA60: ;
    ecx = MEM32(0x9704B8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A39A0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0010BA6Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010BA6Cu); } /* indirect call */
    }

loc_0010BA6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010BA71: ;
    MEM32(esp + 4) = 0x9A39A0;
    g_seh_ebp = ebp; sub_00117C00(); return; /* tail jmp 0x00117C00 */

}

/**
 * sub_0010BA80
 * Original: 0x0010BA80 - 0x0010BAD1 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BA80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9A39A0);
    PUSH32(esp, 0x0010BA94u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_0010BA94: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x9A39A0);
    PUSH32(esp, 0x0010BAA8u); RECOMP_ABI_CALL(0x00154170u, sub_00154170); /* call 0x00154170 */

loc_0010BAA8: ;
    eax = MEM32(0x9704B4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BAC5; /* je: equal / zero */

loc_0010BAB4: ;
    edx = MEM32(0x9704B8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A39A0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0010BAC2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010BAC0u); } /* indirect call */
    }

loc_0010BAC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010BAC5: ;
    PUSH32(esp, 0x9A39A0);
    PUSH32(esp, 0x0010BACFu); RECOMP_ABI_CALL(0x00117C00u, sub_00117C00); /* call 0x00117C00 */

loc_0010BACF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BAE0
 * Original: 0x0010BAE0 - 0x0010BAF0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010BAE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

    g_seh_ebp = ebp; sub_0010BAF0(); return; /* fallthrough 0x0010BAF0 */

}

/**
 * sub_0010BAF0
 * Original: 0x0010BAF0 - 0x0010BB47 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BAF0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + esi) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010BB07; /* je: equal / zero */

loc_0010BAFF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010BAF0; /* jl: less (signed <) */

loc_0010BB05: ;
    goto loc_0010BB0B;

loc_0010BB07: ;
    MEM8(ecx + esi) = 0;

loc_0010BB0B: ;
    eax = 0x970494;
    edx = eax + 1;

loc_0010BB13: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BB13; /* jne: not equal / not zero */

loc_0010BB1A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010BB29; /* jl: less (signed <) */

loc_0010BB27: ;
    ecx = eax;

loc_0010BB29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010BB40; /* jle: less or equal (signed <=) */

loc_0010BB2F: ;
    edi = ecx + 0x970493;

loc_0010BB35: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax + esi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010BB35; /* jl: less (signed <) */

loc_0010BB40: ;
    POP32(esp, edi);
    MEM8(eax + esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BB50
 * Original: 0x0010BB50 - 0x0010BBC4 (116 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BB50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010BB66u); RECOMP_ABI_CALL(0x0010BAE0u, sub_0010BAE0); /* call 0x0010BAE0 */

loc_0010BB66: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    edi = edi;

loc_0010BB70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BB70; /* jne: not equal / not zero */

loc_0010BB77: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0xAA8098);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010BB88u); RECOMP_ABI_CALL(0x00154170u, sub_00154170); /* call 0x00154170 */

loc_0010BB88: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_0010BB90: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BB90; /* jne: not equal / not zero */

loc_0010BB97: ;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 1;
    edi = edi;

loc_0010BBA0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BBA0; /* jne: not equal / not zero */

loc_0010BBA7: ;
    edx = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010BBBEu); RECOMP_ABI_CALL(0x0010BAE0u, sub_0010BAE0); /* call 0x0010BAE0 */

loc_0010BBBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BBD0
 * Original: 0x0010BBD0 - 0x0010BBDA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BBD0(void)
{

loc_0010BBD0: ;
    eax = MEM32(esp + 4);
    MEM32(0x2F93EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010BBE0
 * Original: 0x0010BBE0 - 0x0010BBF7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BBE0: ;
    eax = MEM32(esp + 4);
    ecx = 0x28;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x2F93F0) = ecx;
    MEM32(0x2F93F4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010BC00
 * Original: 0x0010BC00 - 0x0010BC16 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BC00: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C0;
    edi = 0x9A2AA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BC20
 * Original: 0x0010BC20 - 0x0010BC21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BC20(void)
{

loc_0010BC20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010BC30
 * Original: 0x0010BC30 - 0x0010BC31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BC30(void)
{

loc_0010BC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010BC40
 * Original: 0x0010BC40 - 0x0010BCDB (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0010BC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BC40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, 0x0010BC4Au); RECOMP_ABI_CALL(0x0010C710u, sub_0010C710); /* call 0x0010C710 */

loc_0010BC4A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = ebp;
    edx = edx & 0x800007FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 1) = 1;
    MEM8(esi + 2) = 0;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ebp;
    if ((_fas >= 0)) goto loc_0010BC78; /* jns: not sign (positive) */

loc_0010BC70: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFF800u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0010BC78: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x2C) = 0x200;
    MEM32(esi + 0x58) = 0;
    MEM32(esi + 0x5C) = 0xFFFFF;
    MEM32(esi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010BCCE; /* je: equal / zero */

loc_0010BCAE: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0010BCB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010BCB3u); } /* indirect call */
    }

loc_0010BCB6: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0010BCC0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0010BCBDu); } /* indirect call */
    }

loc_0010BCC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;

loc_0010BCCE: ;
    MEM8(esi + 0x44) = 0;
    MEM8(esi) = 1;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0010C720(); return; /* tail jmp 0x0010C720 */

}
