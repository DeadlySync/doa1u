/**
 * DOAU1 - Recompiled code chunk 39
 * Functions: 250 (0x00147E1B - 0x0014EF90)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00147E1B
 * Original: 0x00147E1B - 0x00147E79 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E1B(void)
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

loc_00147E1B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147E79
 * Original: 0x00147E79 - 0x00147EA4 (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E79(void)
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

loc_00147E79: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146043(); return; /* tail jmp 0x00146043 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147EA4
 * Original: 0x00147EA4 - 0x00147F07 (99 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147EA4(void)
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

loc_00147EA4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147F07
 * Original: 0x00147F07 - 0x00147F68 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147F07(void)
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

loc_00147F07: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147F68
 * Original: 0x00147F68 - 0x00147F96 (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147F68(void)
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

loc_00147F68: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146043(); return; /* tail jmp 0x00146043 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147F96
 * Original: 0x00147F96 - 0x00147FF7 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147F96(void)
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

loc_00147F96: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147FF7
 * Original: 0x00147FF7 - 0x00148056 (95 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147FF7(void)
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

loc_00147FF7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148056
 * Original: 0x00148056 - 0x00148082 (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148056(void)
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

loc_00148056: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146043(); return; /* tail jmp 0x00146043 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148082
 * Original: 0x00148082 - 0x001480AF (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148082(void)
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

loc_00148082: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xB);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001480AF
 * Original: 0x001480AF - 0x001480DA (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001480AF(void)
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

loc_001480AF: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xB);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001480DA
 * Original: 0x001480DA - 0x00148108 (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001480DA(void)
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

loc_001480DA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148108
 * Original: 0x00148108 - 0x00148134 (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148108(void)
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

loc_00148108: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148134
 * Original: 0x00148134 - 0x00148164 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148134(void)
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

loc_00148134: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148164
 * Original: 0x00148164 - 0x00148192 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148164(void)
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

loc_00148164: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148192
 * Original: 0x00148192 - 0x001481C0 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148192(void)
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

loc_00148192: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001481C0
 * Original: 0x001481C0 - 0x001481EC (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001481C0(void)
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

loc_001481C0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001481EC
 * Original: 0x001481EC - 0x00148219 (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001481EC(void)
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

loc_001481EC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148219
 * Original: 0x00148219 - 0x00148244 (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148219(void)
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

loc_00148219: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148244
 * Original: 0x00148244 - 0x00148271 (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148244(void)
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

loc_00148244: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xD);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148271
 * Original: 0x00148271 - 0x0014829C (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148271(void)
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

loc_00148271: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xD);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014829C
 * Original: 0x0014829C - 0x001482CB (47 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014829C(void)
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

loc_0014829C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001482CB
 * Original: 0x001482CB - 0x001482F8 (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001482CB(void)
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

loc_001482CB: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001482F8
 * Original: 0x001482F8 - 0x00148325 (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001482F8(void)
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

loc_001482F8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148325
 * Original: 0x00148325 - 0x00148350 (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148325(void)
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

loc_00148325: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00145D74(); return; /* tail jmp 0x00145D74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148350
 * Original: 0x00148350 - 0x0014837D (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148350(void)
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

loc_00148350: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014837D
 * Original: 0x0014837D - 0x001483A8 (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014837D(void)
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

loc_0014837D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001483A8
 * Original: 0x001483A8 - 0x001483D6 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001483A8(void)
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

loc_001483A8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001483D6
 * Original: 0x001483D6 - 0x00148402 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001483D6(void)
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

loc_001483D6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148402
 * Original: 0x00148402 - 0x0014842F (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148402(void)
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

loc_00148402: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014842F
 * Original: 0x0014842F - 0x0014845A (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014842F(void)
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

loc_0014842F: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014845A
 * Original: 0x0014845A - 0x00148487 (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014845A(void)
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

loc_0014845A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148487
 * Original: 0x00148487 - 0x001484B2 (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148487(void)
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

loc_00148487: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146140(); return; /* tail jmp 0x00146140 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001484B2
 * Original: 0x001484B2 - 0x001484DF (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001484B2(void)
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

loc_001484B2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 9);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001484DF
 * Original: 0x001484DF - 0x0014850A (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001484DF(void)
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

loc_001484DF: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 9);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014850A
 * Original: 0x0014850A - 0x00148536 (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014850A(void)
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

loc_0014850A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148536
 * Original: 0x00148536 - 0x00148560 (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148536(void)
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

loc_00148536: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148560
 * Original: 0x00148560 - 0x0014858D (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148560(void)
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

loc_00148560: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014858D
 * Original: 0x0014858D - 0x001485B8 (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014858D(void)
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

loc_0014858D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001485B8
 * Original: 0x001485B8 - 0x001485E6 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001485B8(void)
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

loc_001485B8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001485E6
 * Original: 0x001485E6 - 0x00148612 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001485E6(void)
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

loc_001485E6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_seh_ebp = ebp; sub_00146239(); return; /* tail jmp 0x00146239 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148612
 * Original: 0x00148612 - 0x00148704 (242 bytes, 75 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148612(void)
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

loc_00148612: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(LO16(ecx));
    MEM32(esp + 0x20) = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x20) = ecx;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x7F (8-bit) */
    MEM32(esp + 0x20) = ecx;
    MEM32(edx + 0xC) = 0x14;
    if (TEST_NZ(_fa, _fb)) goto loc_00148659; /* jne: not equal / not zero */

loc_00148644: ;
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX8(LO8(ebx));
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xC) = 0x1C;

loc_00148659: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148668; /* jge: greater or equal (signed >=) */

loc_0014865D: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edx + 8) = 1;
    goto loc_0014866F;

loc_00148668: ;
    MEM32(edx + 8) = 0;

loc_0014866F: ;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    MEM32(esp + 0x20) = ecx;
    ecx = ZX8(MEM8(ebx + ecx));
    ebx = MEM32(edx + 4);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x24));
    ebx = MEM32(edx + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001486AD; /* je: equal / zero */

loc_001486A7: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;

loc_001486AD: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(ecx + 0x34);
    ecx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001486FD; /* jl: less (signed <) */

loc_001486CF: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00145CB0(); return; /* tail jmp 0x00145CB0 */

loc_001486FD: ;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_00145CB0(); return; /* tail jmp 0x00145CB0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001486CF
 * Original: 0x001486CF - 0x001486FD (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001486CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001486CF: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00145CB0(); return; /* tail jmp 0x00145CB0 */

}

/**
 * sub_001486FD
 * Original: 0x001486FD - 0x00148704 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001486FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001486FD: ;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_seh_ebp = ebp; sub_00145CB0(); return; /* tail jmp 0x00145CB0 */

}

/**
 * sub_00148704
 * Original: 0x00148704 - 0x00148849 (325 bytes, 64 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148704(void)
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

loc_00148704: ;
    ecx = MEM32(esp + 0x1C);
    ebx = ebx >> 0x15;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xB;
    ecx = MEM32(ecx + 0x14);
    ebx = ebx & 0x3FF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001487EB;

loc_00148720: ;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00148722: ;
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    MEM32(esp + 0x20) = ecx;
    ecx = ZX8(MEM8(ebx + ecx));
    ebx = MEM32(edx + 4);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x24));
    ebx = MEM32(edx + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014875D; /* je: equal / zero */

loc_00148757: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;

loc_0014875D: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(ecx + 0x34);
    ecx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00145CB0(); return; /* tail jmp 0x00145CB0 */

loc_001487EB: ;
    MEM32(esp + 0x20) = ebx;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x20);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148720; /* jl: less (signed <) */

loc_0014881B: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00148722;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00148849
 * Original: 0x00148849 - 0x00149181 (2360 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148849(void)
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

loc_00148849: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_001488A9
 * Original: 0x001488A9 - 0x00149181 (2264 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001488A9(void)
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

loc_001488A9: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148907
 * Original: 0x00148907 - 0x00149181 (2170 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148907(void)
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

loc_00148907: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148B04; /* jl: less (signed <) */

loc_00148948: ;
    goto loc_00148FC8;

loc_00148B04: ;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014894D
 * Original: 0x0014894D - 0x00149181 (2100 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014894D(void)
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

loc_0014894D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_001489AD
 * Original: 0x001489AD - 0x00149181 (2004 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001489AD(void)
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

loc_001489AD: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148A0B
 * Original: 0x00148A0B - 0x00149181 (1910 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148A0B(void)
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

loc_00148A0B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148A69
 * Original: 0x00148A69 - 0x00149181 (1816 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148A69(void)
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

loc_00148A69: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148AC5
 * Original: 0x00148AC5 - 0x00149181 (1724 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148AC5(void)
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

loc_00148AC5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00148B04: ;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148B0C
 * Original: 0x00148B0C - 0x00149181 (1653 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148B0C(void)
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

loc_00148B0C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148B6A
 * Original: 0x00148B6A - 0x00149181 (1559 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148B6A(void)
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

loc_00148B6A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148BC6
 * Original: 0x00148BC6 - 0x00149181 (1467 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148BC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148BC6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00148BD2: ;
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00148BDA
 * Original: 0x00148BDA - 0x00149181 (1447 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148BDA(void)
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

loc_00148BDA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148C3C
 * Original: 0x00148C3C - 0x00149181 (1349 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148C3C(void)
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

loc_00148C3C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148C9C
 * Original: 0x00148C9C - 0x00149181 (1253 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148C9C(void)
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

loc_00148C9C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148DDF; /* jl: less (signed <) */

loc_00148CDD: ;
    goto loc_00148FC8;

loc_00148DDF: ;
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148CE2
 * Original: 0x00148CE2 - 0x00149181 (1183 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148CE2(void)
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

loc_00148CE2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148D42
 * Original: 0x00148D42 - 0x00149181 (1087 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148D42(void)
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

loc_00148D42: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_0014913A;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_0014913A: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00149156: ;
    ebp = ebp << 9;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148DA0
 * Original: 0x00148DA0 - 0x00149181 (993 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148DA0(void)
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

loc_00148DA0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00148DDF: ;
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148DE7
 * Original: 0x00148DE7 - 0x00149181 (922 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148DE7(void)
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

loc_00148DE7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148EBA; /* jl: less (signed <) */

loc_00148E28: ;
    goto loc_00148FC8;

loc_00148EBA: ;
    ebp = ebp << 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148E7A
 * Original: 0x00148E7A - 0x00149181 (775 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148E7A(void)
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

loc_00148E7A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00148FC8; /* jge: greater or equal (signed >=) */

loc_00148EBA: ;
    ebp = ebp << 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148EC2
 * Original: 0x00148EC2 - 0x00149181 (703 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148EC2(void)
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

loc_00148EC2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148EEC
 * Original: 0x00148EEC - 0x00149181 (661 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148EEC(void)
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

loc_00148EEC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148F14
 * Original: 0x00148F14 - 0x00149181 (621 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F14(void)
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

loc_00148F14: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148F3B
 * Original: 0x00148F3B - 0x00149181 (582 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F3B(void)
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

loc_00148F3B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148F60
 * Original: 0x00148F60 - 0x00149181 (545 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F60(void)
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

loc_00148F60: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    goto loc_00148FB0;

loc_00148FB0: ;
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00148F8A
 * Original: 0x00148F8A - 0x00149181 (503 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F8A(void)
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

loc_00148F8A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00148FF6; /* jl: less (signed <) */

loc_00148FC8: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x13) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149159;

loc_00148FF6: ;
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00149159;

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_00149159
 * Original: 0x00149159 - 0x00149801 (1704 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149159(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149159: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014917A; /* je: equal / zero */

loc_00149178: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014917A: ;
    MEM32(edx + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(0x87) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x87)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x87);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(esi + -2048524268)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    eax = 0x8D001485u;
    _fa = (uint32_t)(MEM32(eax + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + eax), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    _fa = (uint32_t)(MEM32(eax + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + eax), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fa = (uint32_t)(MEM32(eax + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + eax), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(ebp + -2065760236));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    SET_LO8(edx, 0x84);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint32_t _tmp = MEM32(esp + edx + 0x14911700);
    MEM32(esp + edx + 0x14911700) = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -124)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + -124) = MEM8(edx + -124) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + -124)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */

    g_seh_ebp = ebp; sub_00149801(); return; /* fallthrough 0x00149801 */

}

/**
 * sub_00149801
 * Original: 0x00149801 - 0x00149850 (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00149801(void)
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

loc_00149801: ;
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    MEM32(esp + 0x10) = ecx;
    ecx = ZX8(MEM8(ebx + ecx));
    ebx = MEM32(edx + 4);
    ebx = ebx + ebx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x24));
    ebx = MEM32(edx + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00149835; /* je: equal / zero */

loc_0014982F: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;

loc_00149835: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x1C);
    /* nop */

    g_seh_ebp = ebp; sub_00149850(); return; /* fallthrough 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149850
 * Original: 0x00149850 - 0x00149923 (211 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149850(void)
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

loc_00149850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00149877; /* je: equal / zero */

loc_00149858: ;
    ebx = MEM32(esp + 0x20);
    ecx = 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;

loc_00149877: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1FF (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0014CC3B(); return; } /* ja: above (unsigned >) */

loc_0014988A: ;
    ecx = ZX8(MEM8(ecx + 0x14CF18));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x14CC80)); return; /* indirect tail jmp */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

    g_seh_ebp = ebp; sub_00149923(); return; /* fallthrough 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149898
 * Original: 0x00149898 - 0x0014C1D7 (10559 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149898(void)
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

loc_00149898: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001499E1; /* jl: less (signed <) */

loc_0014993B: ;
    goto loc_0014C1A5;

loc_001499E1: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149923
 * Original: 0x00149923 - 0x001499F1 (206 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149923(void)
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

loc_00149923: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001499E1; /* jl: less (signed <) */

loc_0014993B: ;
    g_seh_ebp = ebp; sub_0014C1A5(); return; /* tail jmp 0x0014C1A5 */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0014C1A5(); return; } /* jge: greater or equal (signed >=) */

loc_001499E1: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149940
 * Original: 0x00149940 - 0x0014C1D7 (10391 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149940(void)
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

loc_00149940: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_001499E1: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001499F1
 * Original: 0x001499F1 - 0x0014C1D7 (10214 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001499F1(void)
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

loc_001499F1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_00149A62: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149A62
 * Original: 0x00149A62 - 0x00149BE3 (385 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A62(void)
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

loc_00149A62: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

    g_seh_ebp = ebp; sub_00149BE3(); return; /* fallthrough 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149A72
 * Original: 0x00149A72 - 0x00149B00 (142 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A72(void)
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

loc_00149A72: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149B00
 * Original: 0x00149B00 - 0x00149B8C (140 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149B00(void)
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

loc_00149B00: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149B8C
 * Original: 0x00149B8C - 0x0014C1D7 (9803 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149B8C(void)
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

loc_00149B8C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00149A62(); return; } /* jl: less (signed <) */

loc_00149BFB: ;
    goto loc_0014C1A5;

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149BE3
 * Original: 0x00149BE3 - 0x00149C00 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00149BE3(void)
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

loc_00149BE3: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00149A62(); return; } /* jl: less (signed <) */

loc_00149BFB: ;
    g_seh_ebp = ebp; sub_0014C1A5(); return; /* tail jmp 0x0014C1A5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149C00
 * Original: 0x00149C00 - 0x0014C1D7 (9687 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149C00(void)
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

loc_00149C00: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_00149C73: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149C73
 * Original: 0x00149C73 - 0x00149CDC (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149C73(void)
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

loc_00149C73: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

    g_seh_ebp = ebp; sub_00149CDC(); return; /* fallthrough 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149C83
 * Original: 0x00149C83 - 0x0014C1D7 (9556 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149C83(void)
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

loc_00149C83: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00149C73(); return; } /* jl: less (signed <) */

loc_00149CF0: ;
    goto loc_0014C1A5;

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149CDC
 * Original: 0x00149CDC - 0x00149CF5 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00149CDC(void)
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

loc_00149CDC: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00149C73(); return; } /* jl: less (signed <) */

loc_00149CF0: ;
    g_seh_ebp = ebp; sub_0014C1A5(); return; /* tail jmp 0x0014C1A5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149CF5
 * Original: 0x00149CF5 - 0x0014C1D7 (9442 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149CF5(void)
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

loc_00149CF5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_00149D68: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149D68
 * Original: 0x00149D68 - 0x00149DD1 (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149D68(void)
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

loc_00149D68: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */

    g_seh_ebp = ebp; sub_00149DD1(); return; /* fallthrough 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149D78
 * Original: 0x00149D78 - 0x0014C1D7 (9311 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149D78(void)
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

loc_00149D78: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00149D68(); return; } /* jl: less (signed <) */

loc_00149DE5: ;
    goto loc_0014C1A5;

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149DD1
 * Original: 0x00149DD1 - 0x00149DEA (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00149DD1(void)
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

loc_00149DD1: ;
    ebx = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00149D68(); return; } /* jl: less (signed <) */

loc_00149DE5: ;
    g_seh_ebp = ebp; sub_0014C1A5(); return; /* tail jmp 0x0014C1A5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149DEA
 * Original: 0x00149DEA - 0x00149E45 (91 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149DEA(void)
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

loc_00149DEA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149E45
 * Original: 0x00149E45 - 0x00149EA1 (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149E45(void)
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

loc_00149E45: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149EA1
 * Original: 0x00149EA1 - 0x00149F01 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149EA1(void)
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

loc_00149EA1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149F01
 * Original: 0x00149F01 - 0x00149F5F (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149F01(void)
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

loc_00149F01: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149F5F
 * Original: 0x00149F5F - 0x00149FBF (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149F5F(void)
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

loc_00149F5F: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149FBF
 * Original: 0x00149FBF - 0x0014A01D (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149FBF(void)
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

loc_00149FBF: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A01D
 * Original: 0x0014A01D - 0x0014A07B (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A01D(void)
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

loc_0014A01D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A07B
 * Original: 0x0014A07B - 0x0014A0D7 (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A07B(void)
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

loc_0014A07B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A0D7
 * Original: 0x0014A0D7 - 0x0014C1D7 (8448 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A0D7(void)
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

loc_0014A0D7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_0014A116: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A116
 * Original: 0x0014A116 - 0x0014A126 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A116(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A116: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

}

/**
 * sub_0014A126
 * Original: 0x0014A126 - 0x0014A1B4 (142 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A126(void)
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

loc_0014A126: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A1B4
 * Original: 0x0014A1B4 - 0x0014A240 (140 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1B4(void)
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

loc_0014A1B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A240
 * Original: 0x0014A240 - 0x0014A29C (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A240(void)
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

loc_0014A240: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A29C
 * Original: 0x0014A29C - 0x0014A328 (140 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A29C(void)
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

loc_0014A29C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A328
 * Original: 0x0014A328 - 0x0014A3B2 (138 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A328(void)
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

loc_0014A328: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A3B2
 * Original: 0x0014A3B2 - 0x0014A40C (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A3B2(void)
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

loc_0014A3B2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A40C
 * Original: 0x0014A40C - 0x0014A46A (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A40C(void)
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

loc_0014A40C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A46A
 * Original: 0x0014A46A - 0x0014A4C6 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A46A(void)
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

loc_0014A46A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A4C6
 * Original: 0x0014A4C6 - 0x0014A524 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A4C6(void)
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

loc_0014A4C6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A524
 * Original: 0x0014A524 - 0x0014A580 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A524(void)
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

loc_0014A524: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A580
 * Original: 0x0014A580 - 0x0014A5DC (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A580(void)
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

loc_0014A580: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A5DC
 * Original: 0x0014A5DC - 0x0014A636 (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A5DC(void)
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

loc_0014A5DC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A636
 * Original: 0x0014A636 - 0x0014A694 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A636(void)
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

loc_0014A636: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A694
 * Original: 0x0014A694 - 0x0014A6F0 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A694(void)
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

loc_0014A694: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A6F0
 * Original: 0x0014A6F0 - 0x0014A74E (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A6F0(void)
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

loc_0014A6F0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A74E
 * Original: 0x0014A74E - 0x0014A7AA (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A74E(void)
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

loc_0014A74E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A7AA
 * Original: 0x0014A7AA - 0x0014A806 (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A7AA(void)
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

loc_0014A7AA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A806
 * Original: 0x0014A806 - 0x0014A860 (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A806(void)
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

loc_0014A806: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A860
 * Original: 0x0014A860 - 0x0014C1D7 (6519 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A860(void)
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

loc_0014A860: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0014A116(); return; } /* jl: less (signed <) */

loc_0014A89D: ;
    goto loc_0014C1A5;

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A8A2
 * Original: 0x0014A8A2 - 0x0014A902 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A8A2(void)
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

loc_0014A8A2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A902
 * Original: 0x0014A902 - 0x0014A960 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A902(void)
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

loc_0014A902: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A960
 * Original: 0x0014A960 - 0x0014A9C2 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A960(void)
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

loc_0014A960: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A9C2
 * Original: 0x0014A9C2 - 0x0014AA22 (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A9C2(void)
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

loc_0014A9C2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AA22
 * Original: 0x0014AA22 - 0x0014AA84 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AA22(void)
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

loc_0014AA22: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AA84
 * Original: 0x0014AA84 - 0x0014AAE4 (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AA84(void)
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

loc_0014AA84: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AAE4
 * Original: 0x0014AAE4 - 0x0014AB44 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AAE4(void)
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

loc_0014AAE4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AB44
 * Original: 0x0014AB44 - 0x0014ABA2 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AB44(void)
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

loc_0014AB44: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014ABA2
 * Original: 0x0014ABA2 - 0x0014C1D7 (5685 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ABA2(void)
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

loc_0014ABA2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_0014ABE3: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014ABF3
 * Original: 0x0014ABF3 - 0x0014AC51 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ABF3(void)
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

loc_0014ABF3: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AC51
 * Original: 0x0014AC51 - 0x0014ACAD (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AC51(void)
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

loc_0014AC51: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014ACAD
 * Original: 0x0014ACAD - 0x0014AD0D (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ACAD(void)
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

loc_0014ACAD: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AD0D
 * Original: 0x0014AD0D - 0x0014AD6B (94 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AD0D(void)
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

loc_0014AD0D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AD6B
 * Original: 0x0014AD6B - 0x0014ADCB (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AD6B(void)
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

loc_0014AD6B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014ADCB
 * Original: 0x0014ADCB - 0x0014AE29 (94 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ADCB(void)
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

loc_0014ADCB: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AE29
 * Original: 0x0014AE29 - 0x0014AE87 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE29(void)
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

loc_0014AE29: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AE87
 * Original: 0x0014AE87 - 0x0014AEE3 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE87(void)
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

loc_0014AE87: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AF27
 * Original: 0x0014AF27 - 0x0014AF87 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF27(void)
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

loc_0014AF27: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AF87
 * Original: 0x0014AF87 - 0x0014AFE5 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF87(void)
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

loc_0014AF87: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AFE5
 * Original: 0x0014AFE5 - 0x0014B047 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AFE5(void)
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

loc_0014AFE5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B047
 * Original: 0x0014B047 - 0x0014B0A7 (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B047(void)
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

loc_0014B047: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B0A7
 * Original: 0x0014B0A7 - 0x0014C1D7 (4400 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B0A7(void)
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

loc_0014B0A7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C1A5; /* jge: greater or equal (signed >=) */

loc_0014B0E8: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B0F8
 * Original: 0x0014B0F8 - 0x0014B156 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B0F8(void)
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

loc_0014B0F8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B156
 * Original: 0x0014B156 - 0x0014B1B2 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B156(void)
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

loc_0014B156: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B1B2
 * Original: 0x0014B1B2 - 0x0014B212 (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B1B2(void)
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

loc_0014B1B2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B212
 * Original: 0x0014B212 - 0x0014B270 (94 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B212(void)
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

loc_0014B212: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B2B4
 * Original: 0x0014B2B4 - 0x0014B312 (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B2B4(void)
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

loc_0014B2B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B312
 * Original: 0x0014B312 - 0x0014B36E (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B312(void)
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

loc_0014B312: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B36E
 * Original: 0x0014B36E - 0x0014B3CE (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B36E(void)
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

loc_0014B36E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B3CE
 * Original: 0x0014B3CE - 0x0014B42C (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B3CE(void)
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

loc_0014B3CE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B458
 * Original: 0x0014B458 - 0x0014B4B4 (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B458(void)
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

loc_0014B458: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B4B4
 * Original: 0x0014B4B4 - 0x0014B50E (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B4B4(void)
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

loc_0014B4B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B50E
 * Original: 0x0014B50E - 0x0014B56C (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B50E(void)
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

loc_0014B50E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B56C
 * Original: 0x0014B56C - 0x0014B5C8 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B56C(void)
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

loc_0014B56C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B5F2
 * Original: 0x0014B5F2 - 0x0014B652 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B5F2(void)
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

loc_0014B5F2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B652
 * Original: 0x0014B652 - 0x0014B6B0 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B652(void)
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

loc_0014B652: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B6B0
 * Original: 0x0014B6B0 - 0x0014B6DE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B6B0(void)
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

loc_0014B6B0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B6DE
 * Original: 0x0014B6DE - 0x0014B73C (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B6DE(void)
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

loc_0014B6DE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B73C
 * Original: 0x0014B73C - 0x0014B798 (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B73C(void)
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

loc_0014B73C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B798
 * Original: 0x0014B798 - 0x0014B7C4 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B798(void)
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

loc_0014B798: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B7C4
 * Original: 0x0014B7C4 - 0x0014B824 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B7C4(void)
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

loc_0014B7C4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B824
 * Original: 0x0014B824 - 0x0014B882 (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B824(void)
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

loc_0014B824: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B882
 * Original: 0x0014B882 - 0x0014B8B0 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B882(void)
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

loc_0014B882: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B8B0
 * Original: 0x0014B8B0 - 0x0014B90E (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B8B0(void)
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

loc_0014B8B0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B90E
 * Original: 0x0014B90E - 0x0014B96A (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B90E(void)
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

loc_0014B90E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B96A
 * Original: 0x0014B96A - 0x0014B996 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B96A(void)
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

loc_0014B96A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 5);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B996
 * Original: 0x0014B996 - 0x0014B9F4 (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B996(void)
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

loc_0014B996: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B9F4
 * Original: 0x0014B9F4 - 0x0014BA50 (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B9F4(void)
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

loc_0014B9F4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BA50
 * Original: 0x0014BA50 - 0x0014BA7C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BA50(void)
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

loc_0014BA50: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BA7C
 * Original: 0x0014BA7C - 0x0014BAD8 (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BA7C(void)
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

loc_0014BA7C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BAD8
 * Original: 0x0014BAD8 - 0x0014BB32 (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BAD8(void)
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

loc_0014BAD8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BB32
 * Original: 0x0014BB32 - 0x0014BB5C (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BB32(void)
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

loc_0014BB32: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149BE3(); return; /* tail jmp 0x00149BE3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BB5C
 * Original: 0x0014BB5C - 0x0014BB8A (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BB5C(void)
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

loc_0014BB5C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xB);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BB8A
 * Original: 0x0014BB8A - 0x0014BBB6 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BB8A(void)
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

loc_0014BB8A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xB);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BBB6
 * Original: 0x0014BBB6 - 0x0014BBE2 (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BBB6(void)
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

loc_0014BBB6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xB);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BBE2
 * Original: 0x0014BBE2 - 0x0014BC0C (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BBE2(void)
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

loc_0014BBE2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xB);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BC0C
 * Original: 0x0014BC0C - 0x0014BC3A (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC0C(void)
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

loc_0014BC0C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BC3A
 * Original: 0x0014BC3A - 0x0014BC66 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC3A(void)
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

loc_0014BC3A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)7);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BC66
 * Original: 0x0014BC66 - 0x0014BC94 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC66(void)
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

loc_0014BC66: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BC94
 * Original: 0x0014BC94 - 0x0014BCC0 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC94(void)
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

loc_0014BC94: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BCC0
 * Original: 0x0014BCC0 - 0x0014BCEE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BCC0(void)
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

loc_0014BCC0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BCEE
 * Original: 0x0014BCEE - 0x0014BD1A (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BCEE(void)
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

loc_0014BCEE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BD1A
 * Original: 0x0014BD1A - 0x0014BD48 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BD1A(void)
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

loc_0014BD1A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xD);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BD48
 * Original: 0x0014BD48 - 0x0014BD74 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BD48(void)
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

loc_0014BD48: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xD);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BD74
 * Original: 0x0014BD74 - 0x0014BDA0 (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BD74(void)
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

loc_0014BD74: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BDA0
 * Original: 0x0014BDA0 - 0x0014BDCA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BDA0(void)
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

loc_0014BDA0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BDCA
 * Original: 0x0014BDCA - 0x0014BDF8 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BDCA(void)
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

loc_0014BDCA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BDF8
 * Original: 0x0014BDF8 - 0x0014BE24 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BDF8(void)
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

loc_0014BDF8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149923(); return; /* tail jmp 0x00149923 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BE24
 * Original: 0x0014BE24 - 0x0014BE52 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE24(void)
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

loc_0014BE24: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BE52
 * Original: 0x0014BE52 - 0x0014BE7E (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE52(void)
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

loc_0014BE52: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BE7E
 * Original: 0x0014BE7E - 0x0014BEAC (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE7E(void)
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

loc_0014BE7E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BEAC
 * Original: 0x0014BEAC - 0x0014BED8 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BEAC(void)
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

loc_0014BEAC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BED8
 * Original: 0x0014BED8 - 0x0014BF06 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BED8(void)
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

loc_0014BED8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BF06
 * Original: 0x0014BF06 - 0x0014BF32 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF06(void)
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

loc_0014BF06: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 7);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BF32
 * Original: 0x0014BF32 - 0x0014BF60 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF32(void)
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

loc_0014BF32: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BF60
 * Original: 0x0014BF60 - 0x0014BF8C (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF60(void)
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

loc_0014BF60: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149CDC(); return; /* tail jmp 0x00149CDC */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BF8C
 * Original: 0x0014BF8C - 0x0014BFBA (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF8C(void)
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

loc_0014BF8C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 9);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BFBA
 * Original: 0x0014BFBA - 0x0014BFE6 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BFBA(void)
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

loc_0014BFBA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 9);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014BFE6
 * Original: 0x0014BFE6 - 0x0014C012 (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BFE6(void)
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

loc_0014BFE6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 8;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C012
 * Original: 0x0014C012 - 0x0014C03C (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C012(void)
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

loc_0014C012: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 8;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C03C
 * Original: 0x0014C03C - 0x0014C06A (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C03C(void)
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

loc_0014C03C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C06A
 * Original: 0x0014C06A - 0x0014C096 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C06A(void)
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

loc_0014C06A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C096
 * Original: 0x0014C096 - 0x0014C0C4 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C096(void)
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

loc_0014C096: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C0C4
 * Original: 0x0014C0C4 - 0x0014C0F0 (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C0C4(void)
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

loc_0014C0C4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 4;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_seh_ebp = ebp; sub_00149DD1(); return; /* tail jmp 0x00149DD1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C0F0
 * Original: 0x0014C0F0 - 0x0014C1E6 (246 bytes, 76 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C0F0(void)
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

loc_0014C0F0: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(LO16(ecx));
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = SX8(LO8(ebx));
    ecx = SX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x7F (8-bit) */
    MEM32(edx) = ebx;
    MEM32(edx + 0xC) = 0x14;
    if (TEST_NZ(_fa, _fb)) goto loc_0014C131; /* jne: not equal / not zero */

loc_0014C11C: ;
    ebx = MEM32(esp + 0x10);
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xC) = 0x1C;

loc_0014C131: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C140; /* jge: greater or equal (signed >=) */

loc_0014C135: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edx + 8) = 1;
    goto loc_0014C147;

loc_0014C140: ;
    MEM32(edx + 8) = 0;

loc_0014C147: ;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    MEM32(esp + 0x10) = ecx;
    ecx = ZX8(MEM8(ebx + ecx));
    ebx = MEM32(edx + 4);
    ebx = ebx + ebx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x24));
    ebx = MEM32(edx + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014C187; /* je: equal / zero */

loc_0014C181: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ecx;

loc_0014C187: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C1D7; /* jl: less (signed <) */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

loc_0014C1D7: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C1A5
 * Original: 0x0014C1A5 - 0x0014C1D7 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C1A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C1A5: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

}

/**
 * sub_0014C1D7
 * Original: 0x0014C1D7 - 0x0014C1E6 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C1D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C1D7: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

}

/**
 * sub_0014C1E6
 * Original: 0x0014C1E6 - 0x0014C2F6 (272 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C1E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C1E6: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xB;
    ebx = MEM32(ebp + 0x14);
    ecx = ecx & 0x3FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0014C28B;

loc_0014C202: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

loc_0014C28B: ;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C202; /* jl: less (signed <) */

loc_0014C2BB: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

}

/**
 * sub_0014C202
 * Original: 0x0014C202 - 0x0014C21A (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C202(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C202: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

}

/**
 * sub_0014C21A
 * Original: 0x0014C21A - 0x0014C2F6 (220 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C21A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C21A: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xD;
    ebx = MEM32(ebp + 0x18);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0014C28B;

loc_0014C28B: ;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0014C202(); return; } /* jl: less (signed <) */

loc_0014C2BB: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

}

/**
 * sub_0014C233
 * Original: 0x0014C233 - 0x0014C2F6 (195 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C233(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C233: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0xC) = 0xE;
    ebx = MEM32(ebp + 0x1C);
    ecx = ecx & 0x1FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0014C28B;

loc_0014C28B: ;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0014C202(); return; } /* jl: less (signed <) */

loc_0014C2BB: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

}

/**
 * sub_0014C24C
 * Original: 0x0014C24C - 0x0014C2F6 (170 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C24C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C24C: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C266; /* jge: greater or equal (signed >=) */

loc_0014C257: ;
    MEM32(edx + 0xC) = 0xF;
    ebx = MEM32(ebp + 0x20);
    ecx = ecx >> 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014C288;

loc_0014C266: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C27B; /* jge: greater or equal (signed >=) */

loc_0014C26C: ;
    MEM32(edx + 0xC) = 0x10;
    ebx = MEM32(ebp + 0x24);
    ecx = ecx >> 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014C288;

loc_0014C27B: ;
    MEM32(edx + 0xC) = 0x11;
    ebx = MEM32(ebp + 0x28);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014C288: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0014C202(); return; } /* jl: less (signed <) */

loc_0014C2BB: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

}

/**
 * sub_0014C266
 * Original: 0x0014C266 - 0x0014C28B (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C266(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C266: ;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C27B; /* jge: greater or equal (signed >=) */

loc_0014C26C: ;
    MEM32(edx + 0xC) = 0x10;
    ebx = MEM32(ebp + 0x24);
    ecx = ecx >> 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014C288;

loc_0014C27B: ;
    MEM32(edx + 0xC) = 0x11;
    ebx = MEM32(ebp + 0x28);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014C288: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0014C28B(); return; /* fallthrough 0x0014C28B */

}

/**
 * sub_0014C28B
 * Original: 0x0014C28B - 0x0014C2C9 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C28B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C28B: ;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + ecx * 2);
    ebx = ZX8(LO8(ecx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX8(LO8(ecx));
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0014C202(); return; } /* jl: less (signed <) */

loc_0014C2BB: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));

    g_seh_ebp = ebp; sub_0014C2C9(); return; /* fallthrough 0x0014C2C9 */

}

/**
 * sub_0014C2C9
 * Original: 0x0014C2C9 - 0x0014C2F6 (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C2C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C2C9: ;
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    ecx = MEM32(edx);
    esi = esi + ecx + 1;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_00149801(); return; /* tail jmp 0x00149801 */

}

/**
 * sub_0014C2F6
 * Original: 0x0014C2F6 - 0x0014CC60 (2410 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C2F6(void)
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

loc_0014C2F6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    esi = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0014C5A0; /* jl: less (signed <) */

loc_0014C367: ;
    goto loc_0014CAB0;

loc_0014C5A0: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C3C5
 * Original: 0x0014C3C5 - 0x0014CC60 (2203 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C3C5(void)
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

loc_0014C3C5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0014C5E8; /* jl: less (signed <) */

loc_0014C403: ;
    goto loc_0014CAB0;

loc_0014C5E8: ;
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C408
 * Original: 0x0014C408 - 0x0014CC60 (2136 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C408(void)
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

loc_0014C408: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    esi = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0014C888; /* jl: less (signed <) */

loc_0014C479: ;
    goto loc_0014CAB0;

loc_0014C888: ;
    ebx = MEM32(esp + 0x1C);
    goto loc_0014CC38;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC38: ;
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C533
 * Original: 0x0014C533 - 0x0014CC60 (1837 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C533(void)
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

loc_0014C533: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAB0; /* jge: greater or equal (signed >=) */

loc_0014C5A0: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C5AC
 * Original: 0x0014C5AC - 0x0014CC60 (1716 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C5AC(void)
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

loc_0014C5AC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAB0; /* jge: greater or equal (signed >=) */

loc_0014C5E8: ;
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C6A6
 * Original: 0x0014C6A6 - 0x0014CC60 (1466 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C6A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C6A6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAB0; /* jge: greater or equal (signed >=) */

loc_0014C6B2: ;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014C778
 * Original: 0x0014C778 - 0x0014CC60 (1256 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C778(void)
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

loc_0014C778: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0014C8CD; /* jl: less (signed <) */

loc_0014C7B6: ;
    goto loc_0014CAB0;

loc_0014C8CD: ;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C819
 * Original: 0x0014C819 - 0x0014CC60 (1095 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C819(void)
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

loc_0014C819: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = ecx;
    ebx = MEM32(edx + 0x20);
    ebx = ZX8(MEM8(ebx + ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x24));
    ebx = ebx + ebx * 2;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + ecx * 4)); /* fmul dword ptr [ebx + ecx*4] */
    ebx = MEM32(edx + 0x1C);
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ebp + 0x34);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAB0; /* jge: greater or equal (signed >=) */

loc_0014C888: ;
    ebx = MEM32(esp + 0x1C);
    goto loc_0014CC38;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC38: ;
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C891
 * Original: 0x0014C891 - 0x0014CC60 (975 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C891(void)
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

loc_0014C891: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAB0; /* jge: greater or equal (signed >=) */

loc_0014C8CD: ;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C8D5
 * Original: 0x0014C8D5 - 0x0014CC60 (907 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C8D5(void)
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

loc_0014C8D5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 2;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    esi = MEM32(ebp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0014C9A2; /* jl: less (signed <) */

loc_0014C913: ;
    goto loc_0014CAB0;

loc_0014C9A2: ;
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014C966
 * Original: 0x0014C966 - 0x0014CC60 (762 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C966(void)
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

loc_0014C966: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    MEM32(edx + 0x14) = ecx;
    esi = MEM32(edx + 0x20);
    esi = ZX8(MEM8(esi + ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x24));
    esi = esi + esi * 4;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebp + 0x34);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + ecx * 4)); /* fmul dword ptr [esi + ecx*4] */
    esi = MEM32(edx + 0x1C);
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAB0; /* jge: greater or equal (signed >=) */

loc_0014C9A2: ;
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0014CC3B;

loc_0014CAB0: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 1));
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    MEM8(esp + 0x23) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014CC3B;

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
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
 * sub_0014CC3B
 * Original: 0x0014CC3B - 0x0014D120 (1253 bytes, 42 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CC3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CC3B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edi;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC59; /* je: equal / zero */

loc_0014CC57: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0014CC59: ;
    MEM32(edx + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0014D120(); return; /* fallthrough 0x0014D120 */

}

/**
 * sub_0014D120
 * Original: 0x0014D120 - 0x0014D161 (65 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D120(void)
{

loc_0014D120: ;
    eax = 0x222090;
    edx = 0x2221E0;
    ecx = 0x222140;
    MEM32(0x98ADE0) = edx;
    MEM32(0x98ADE4) = ecx;
    MEM32(0x98ADE8) = eax;
    MEM32(0x98ADEC) = 0x221F70;
    MEM32(0x98ADF0) = edx;
    MEM32(0x98ADF4) = ecx;
    MEM32(0x98ADF8) = eax;
    MEM32(0x98ADFC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D170
 * Original: 0x0014D170 - 0x0014D1D8 (104 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0014D170: ;
    edx = MEM32(eax + 0x1A4);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax + 0xD00;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x154) = edx;
    MEM32(eax + 0x158) = ecx;
    MEM32(eax + 0x160) = ecx;
    MEM32(eax + 0x168) = ecx;
    MEM32(eax + 0x170) = ecx;
    MEM32(eax + 0x178) = ecx;
    MEM32(eax + 0x180) = ecx;
    ecx = 8;
    MEM32(eax + 0x15C) = ecx;
    MEM32(eax + 0x164) = ecx;
    MEM32(eax + 0x16C) = ecx;
    MEM32(eax + 0x174) = ecx;
    MEM32(eax + 0x17C) = ecx;
    MEM32(eax + 0x184) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D1E0
 * Original: 0x0014D1E0 - 0x0014D22B (75 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0014D1E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1A4);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x120) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x280);
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x130) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x282);
    MEM32(eax + 0x138) = ecx;
    MEM32(eax + 0x140) = ecx;
    MEM32(eax + 0x148) = ecx;
    MEM32(eax + 0x150) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D230
 * Original: 0x0014D230 - 0x0014D24F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0014D230: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1A4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x154) = eax;
    MEM32(ecx + 0x120) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D250
 * Original: 0x0014D250 - 0x0014D255 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D250: ;
    g_seh_ebp = ebp; sub_0014D120(); return; /* tail jmp 0x0014D120 */

}

/**
 * sub_0014D260
 * Original: 0x0014D260 - 0x0014D27C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D271u); RECOMP_ABI_CALL(0x00150260u, sub_00150260); /* call 0x00150260 */

loc_0014D271: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014D170(); return; /* tail jmp 0x0014D170 */

}

/**
 * sub_0014D280
 * Original: 0x0014D280 - 0x0014D281 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D280(void)
{

loc_0014D280: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D290
 * Original: 0x0014D290 - 0x0014D2A2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D290: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1300);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0014D2B0
 * Original: 0x0014D2B0 - 0x0014D2BB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D2B0(void)
{

loc_0014D2B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1304);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D2C0
 * Original: 0x0014D2C0 - 0x0014D39F (223 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D2C0: ;
    eax = ebx + 0x1120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D2DA; /* je: equal / zero */

loc_0014D2CA: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x9AB9E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D2D7u); RECOMP_ABI_CALL(0x00141F40u, sub_00141F40); /* call 0x00141F40 */

loc_0014D2D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014D2DA: ;
    eax = ebx + 0x1100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D2F4; /* je: equal / zero */

loc_0014D2E4: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B0A30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D2F1u); RECOMP_ABI_CALL(0x00141F40u, sub_00141F40); /* call 0x00141F40 */

loc_0014D2F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014D2F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x1260;
    ecx = 8;
    esi = 0x2B0AD0;
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
    eax = MEM32(0x9ABAA4);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1280) = eax;
    MEM32(ebx + 0x1284) = 0x15;
    ecx = MEM32(0x9ABA8C);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1288) = ecx;
    MEM32(ebx + 0x128C) = 0x13;
    edx = MEM32(0x9ABAB0);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFE0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1290) = edx;
    MEM32(ebx + 0x1294) = 0x12;
    eax = MEM32(0x9ABA60);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1298) = eax;
    MEM32(ebx + 0x129C) = 0x11;
    ecx = MEM32(0x9ABA64);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x12A0) = ecx;
    MEM32(ebx + 0x12A4) = 0x10;
    edx = MEM32(0x9ABAAC);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFE0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx + 0x12A8) = edx;
    MEM32(ebx + 0x12AC) = 0xF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D3A0
 * Original: 0x0014D3A0 - 0x0014D474 (212 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D3A0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014D3A8: ;
    MEM8(esp + eax + 0x40) = LO8(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014D3A8; /* jl: less (signed <) */

loc_0014D3B2: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014D3C0u); RECOMP_ABI_CALL(0x00141930u, sub_00141930); /* call 0x00141930 */

loc_0014D3C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0014D3D0;

    /* nop */
    edi = edi;

loc_0014D3D0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x2B0A50);
    SET_LO8(ecx, MEM8(esp + edx));
    edx = (uint32_t)(int32_t)SMEM8(esp + eax);
    MEM8(eax + 0x9AB9E0) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x2B0A90));
    MEM8(edx + 0x9ABA20) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x2B0A51);
    SET_LO8(ecx, MEM8(esp + edx));
    edx = (uint32_t)(int32_t)SMEM8(esp + eax + 1);
    MEM8(eax + 0x9AB9E1) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x2B0A91));
    MEM8(edx + 0x9ABA20) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x2B0A52);
    SET_LO8(ecx, MEM8(esp + edx));
    edx = (uint32_t)(int32_t)SMEM8(esp + eax + 2);
    MEM8(eax + 0x9AB9E2) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x2B0A92));
    MEM8(edx + 0x9ABA20) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x2B0A53);
    SET_LO8(ecx, MEM8(esp + edx));
    edx = (uint32_t)(int32_t)SMEM8(esp + eax + 3);
    MEM8(eax + 0x9AB9E3) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x2B0A93));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM8(edx + 0x9ABA20) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0014D3D0; /* jl: less (signed <) */

loc_0014D45F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x88);
    PUSH32(esp, 0x0014D46Cu); RECOMP_ABI_CALL(0x0014D2C0u, sub_0014D2C0); /* call 0x0014D2C0 */

loc_0014D46C: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014D480
 * Original: 0x0014D480 - 0x0014D481 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D480(void)
{

loc_0014D480: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D490
 * Original: 0x0014D490 - 0x0014D49A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D490(void)
{

loc_0014D490: ;
    eax = MEM32(esp + 4);
    MEM32(0x2FCC68) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D4A0
 * Original: 0x0014D4A0 - 0x0014D4A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D4A0(void)
{

loc_0014D4A0: ;
    eax = MEM32(0x2FCC68);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D4B0
 * Original: 0x0014D4B0 - 0x0014D844 (916 bytes, 262 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014D4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D4B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2B0B60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014D4C3u); RECOMP_ABI_CALL(0x0014D490u, sub_0014D490); /* call 0x0014D490 */

loc_0014D4C3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edi = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 4);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -56) = ecx;
    ecx = ebx + eax * 8 + 0x1F;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + 0x14) = 0;
    MEM32(ebp + -48) = 2;
    /* nop */

loc_0014D520: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014D548; /* jbe: below or equal (unsigned <=) */

loc_0014D52B: ;
    MEM32(ebp + -52) = eax;
    edi = edi;

loc_0014D530: ;
    SET_LO8(ebx, MEM8(edi));
    MEM8(ecx) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + eax * 4) = LO8(ebx);
    ebx = MEM32(ebp + -52);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -52) = ebx;
    if ((_fa != 0)) goto loc_0014D530; /* jne: not equal / not zero */

loc_0014D545: ;
    ebx = MEM32(ebp + -16);

loc_0014D548: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = MEM32(ebp + -48) - 1;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014D520; /* jne: not equal / not zero */

loc_0014D564: ;
    edi = 0;
    ecx = 8;

loc_0014D56E: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014D587: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014D587; /* jne: not equal / not zero */

loc_0014D5AA: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014D56E; /* jg: greater (signed >) */

loc_0014D5F3: ;
    (void)0; /* emms - empty MMX state */
    edx = MEM32(ebp + -20);
    MEM32(ebp + 0x14) = edx;
    ebx = 2;

loc_0014D600: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

loc_0014D60A: ;
    edi = MEM32(ebp + -8);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -12);
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014D60A; /* jl: less (signed <) */

loc_0014D7BD: ;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -8);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ecx + eax * 4;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + 0x14) = ecx;
    if ((_fa != 0)) goto loc_0014D600; /* jne: not equal / not zero */

loc_0014D7F1: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 4);
    esi = MEM32(edi + 8);
    edx = eax + ecx;
    MEM32(ebp + -32) = edx;
    edx = ecx + eax * 2;
    MEM32(ebp + -36) = edx;
    edx = ecx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -40) = edx;
    edx = eax + esi;
    MEM32(ebp + -44) = edx;
    edx = esi + eax * 2;
    MEM32(ebp + -48) = edx;
    edx = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -52) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0014DE63(); return; } /* jbe: below or equal (unsigned <=) */

loc_0014D83A: ;
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -56) = eax;

    g_seh_ebp = ebp; sub_0014D844(); return; /* fallthrough 0x0014D844 */

}

/**
 * sub_0014D844
 * Original: 0x0014D844 - 0x0014D859 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D844(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D844: ;
    mm7 = MMX_PXOR(mm7, mm7); /* pxor */
    eax = MEM32(ebp + -28);
    ebx = MEM32(ebp + -36);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebp + -4);

    g_seh_ebp = ebp; sub_0014D859(); return; /* fallthrough 0x0014D859 */

}

/**
 * sub_0014D859
 * Original: 0x0014D859 - 0x0014DC60 (1031 bytes, 284 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D859(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D859: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B40)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B40)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B38)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B38)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi, mm0); /* movq */
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B48)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + edx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014D859; /* jne: not equal / not zero */

loc_0014D908: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -40);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebp + -4);
    ebx = eax;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014D920: ;
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B48)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + eax, mm0); /* movq */
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B38)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B38)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B40)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B40)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + ebx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014D920; /* jne: not equal / not zero */

loc_0014D9D0: ;
    eax = MEM32(ebp + -24);
    ebx = MEM32(ebp + -48);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -4);
    edx = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014D9ED: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B40)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B40)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B38)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B38)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + ecx, mm0); /* movq */
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B48)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + edx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014D9ED; /* jne: not equal / not zero */

loc_0014DA9D: ;
    eax = MEM32(ebp + -4);
    ebx = eax;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -44);
    edx = MEM32(ebp + -52);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014DABF: ;
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B48)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + eax, mm0); /* movq */
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B38)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B38)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B40)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B40)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + ebx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014DABF; /* jne: not equal / not zero */

loc_0014DB6F: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(ebp + -28);
    edi = MEM32(ebp + -32);
    esi = MEM32(ebp + -36);
    edx = MEM32(ebp + -40);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ebp + -52);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -32) = edi;
    edi = MEM32(ebp + -24);
    MEM32(ebp + -36) = esi;
    esi = MEM32(ebp + -44);
    MEM32(ebp + -40) = edx;
    edx = MEM32(ebp + -48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -48) = edx;
    MEM32(ebp + -52) = ecx;
    edi = 0;
    ecx = 8;

loc_0014DBC8: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014DBE1: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014DBE1; /* jne: not equal / not zero */

loc_0014DC04: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014DBC8; /* jg: greater (signed >) */

loc_0014DC4D: ;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + -20);
    MEM32(ebp + 0x14) = eax;
    ebx = 4;
    /* nop */

    g_seh_ebp = ebp; sub_0014DC60(); return; /* fallthrough 0x0014DC60 */

}

/**
 * sub_0014DC60
 * Original: 0x0014DC60 - 0x0014DC6A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DC60: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

    g_seh_ebp = ebp; sub_0014DC6A(); return; /* fallthrough 0x0014DC6A */

}

/**
 * sub_0014DC6A
 * Original: 0x0014DC6A - 0x0014DE63 (505 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DC6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DC6A: ;
    edi = MEM32(ebp + -8);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -12);
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014DC6A; /* jl: less (signed <) */

loc_0014DE1D: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -8);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -12);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx + ecx * 4;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + 0x14) = edx;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0014DC60(); return; } /* jne: not equal / not zero */

loc_0014DE51: ;
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0014D844(); return; } /* jne: not equal / not zero */

loc_0014DE5A: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -28);

    g_seh_ebp = ebp; sub_0014DE63(); return; /* fallthrough 0x0014DE63 */

}

/**
 * sub_0014DE63
 * Original: 0x0014DE63 - 0x0014DF56 (243 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DE63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DE63: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -52) = 2;
    /* nop */

loc_0014DE70: ;
    edx = MEM32(ebp + -16);
    eax = ebx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014DE9B; /* jbe: below or equal (unsigned <=) */

loc_0014DE80: ;
    MEM32(ebp + 0x14) = edx;

loc_0014DE83: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + edx * 4) = LO8(ebx);
    ebx = MEM32(ebp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = ebx;
    if ((_fa != 0)) goto loc_0014DE83; /* jne: not equal / not zero */

loc_0014DE98: ;
    ebx = MEM32(ebp + -56);

loc_0014DE9B: ;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -52);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -52) = eax;
    if ((_fa != 0)) goto loc_0014DE70; /* jne: not equal / not zero */

loc_0014DEBA: ;
    edi = 0;
    ecx = 8;

loc_0014DEC4: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014DEDD: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014DEDD; /* jne: not equal / not zero */

loc_0014DF00: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014DEC4; /* jg: greater (signed >) */

loc_0014DF49: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + -20);
    MEM32(ebp + 0x14) = ecx;
    ebx = 2;

    g_seh_ebp = ebp; sub_0014DF56(); return; /* fallthrough 0x0014DF56 */

}

/**
 * sub_0014DF56
 * Original: 0x0014DF56 - 0x0014DF60 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DF56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DF56: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

    g_seh_ebp = ebp; sub_0014DF60(); return; /* fallthrough 0x0014DF60 */

}

/**
 * sub_0014DF60
 * Original: 0x0014DF60 - 0x0014E14E (494 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DF60: ;
    edi = MEM32(ebp + -8);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -12);
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014DF60; /* jl: less (signed <) */

loc_0014E113: ;
    (void)0; /* emms - empty MMX state */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0xC);
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -12);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + edx * 4;
    edx = MEM32(ebp + -4);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + 0x14) = ecx;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0014DF56(); return; } /* jne: not equal / not zero */

loc_0014E147: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E150
 * Original: 0x0014E150 - 0x0014EC74 (2852 bytes, 802 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014E150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2B0B84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E163u); RECOMP_ABI_CALL(0x0014D490u, sub_0014D490); /* call 0x0014D490 */

loc_0014E163: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edi = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 4);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -60) = ecx;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax * 8;
    MEM32(ebp + 0x14) = ecx;
    ecx = ecx + ebx + 0x1F;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + 0x14) = 0;
    MEM32(ebp + -48) = 2;

loc_0014E1C6: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014E1EC; /* jbe: below or equal (unsigned <=) */

loc_0014E1D1: ;
    MEM32(ebp + -52) = eax;

loc_0014E1D4: ;
    SET_LO8(ebx, MEM8(edi));
    MEM8(ecx) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + eax * 4) = LO8(ebx);
    ebx = MEM32(ebp + -52);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -52) = ebx;
    if ((_fa != 0)) goto loc_0014E1D4; /* jne: not equal / not zero */

loc_0014E1E9: ;
    ebx = MEM32(ebp + -16);

loc_0014E1EC: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = MEM32(ebp + -48) - 1;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E1C6; /* jne: not equal / not zero */

loc_0014E208: ;
    edi = 0;
    ecx = 8;

loc_0014E212: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014E22B: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E22B; /* jne: not equal / not zero */

loc_0014E24E: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014E212; /* jg: greater (signed >) */

loc_0014E297: ;
    (void)0; /* emms - empty MMX state */
    edx = MEM32(ebp + -20);
    MEM32(ebp + 0x14) = edx;
    MEM32(ebp + -52) = 2;

loc_0014E2A6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

loc_0014E2B0: ;
    edi = MEM32(ebp + -8);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -12);
    ebx = ecx;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E2B0; /* jl: less (signed <) */

loc_0014E4DF: ;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0xC);
    edi = MEM32(ebp + -8);
    esi = MEM32(ebp + -12);
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -52);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + 0x14) = edx;
    MEM32(ebp + -52) = eax;
    if ((_fa != 0)) goto loc_0014E2A6; /* jne: not equal / not zero */

loc_0014E515: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 4);
    esi = MEM32(edi + 8);
    edx = eax + ecx;
    MEM32(ebp + -32) = edx;
    edx = ecx + eax * 2;
    MEM32(ebp + -36) = edx;
    edx = ecx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -40) = edx;
    edx = eax + esi;
    MEM32(ebp + -44) = edx;
    edx = esi + eax * 2;
    MEM32(ebp + -48) = edx;
    edx = esi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -52) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0014EC11; /* jbe: below or equal (unsigned <=) */

loc_0014E55E: ;
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -60) = eax;
    goto loc_0014E570;

    /* nop */

loc_0014E570: ;
    mm7 = MMX_PXOR(mm7, mm7); /* pxor */
    eax = MEM32(ebp + -28);
    ebx = MEM32(ebp + -36);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebp + -4);

loc_0014E585: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B40)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B40)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B38)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B38)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi, mm0); /* movq */
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B48)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + edx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E585; /* jne: not equal / not zero */

loc_0014E634: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -40);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebp + -4);
    ebx = eax;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014E64C: ;
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B48)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + eax, mm0); /* movq */
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B38)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B38)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B40)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B40)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + ebx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E64C; /* jne: not equal / not zero */

loc_0014E6FC: ;
    eax = MEM32(ebp + -24);
    ebx = MEM32(ebp + -48);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -4);
    edx = ecx;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014E719: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B40)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B40)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B38)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B38)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + ecx, mm0); /* movq */
    mm0 = MMX_MEM(eax); /* movq */
    mm2 = MMX_MEM(ebx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B48)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + edx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E719; /* jne: not equal / not zero */

loc_0014E7C9: ;
    eax = MEM32(ebp + -4);
    ebx = eax;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -44);
    edx = MEM32(ebp + -52);
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0014E7EB: ;
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B48)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B48)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + eax, mm0); /* movq */
    mm0 = MMX_MEM(ecx); /* movq */
    mm2 = MMX_MEM(edx); /* movq */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLBW(mm0, mm7); /* punpcklbw */
    mm1 = MMX_PUNPCKHBW(mm1, mm7); /* punpckhbw */
    mm2 = MMX_PUNPCKLBW(mm2, mm7); /* punpcklbw */
    mm3 = MMX_PUNPCKHBW(mm3, mm7); /* punpckhbw */
    mm0 = MMX_PMULLW(mm0, MMX_MEM(0x2B0B38)); /* pmullw */
    mm1 = MMX_PMULLW(mm1, MMX_MEM(0x2B0B38)); /* pmullw */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(0x2B0B40)); /* pmullw */
    mm3 = MMX_PMULLW(mm3, MMX_MEM(0x2B0B40)); /* pmullw */
    mm0 = MMX_PADDUSW(mm0, mm2); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, mm3); /* paddusw */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x2B0B50)); /* paddusw */
    mm1 = MMX_PADDUSW(mm1, MMX_MEM(0x2B0B50)); /* paddusw */
    mm0 = MMX_PSRLW(mm0, 3u); /* psrlw */
    mm1 = MMX_PSRLW(mm1, 3u); /* psrlw */
    mm0 = MMX_PACKUSWB(mm0, mm1); /* packuswb */
    MMX_STORE(edi + ebx, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E7EB; /* jne: not equal / not zero */

loc_0014E89B: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(ebp + -28);
    edi = MEM32(ebp + -32);
    esi = MEM32(ebp + -36);
    edx = MEM32(ebp + -40);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ebp + -52);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -32) = edi;
    edi = MEM32(ebp + -24);
    MEM32(ebp + -36) = esi;
    esi = MEM32(ebp + -44);
    MEM32(ebp + -40) = edx;
    edx = MEM32(ebp + -48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -48) = edx;
    MEM32(ebp + -52) = ecx;
    edi = 0;
    ecx = 8;

loc_0014E8F4: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014E90D: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E90D; /* jne: not equal / not zero */

loc_0014E930: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014E8F4; /* jg: greater (signed >) */

loc_0014E979: ;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + -20);
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + -56) = 4;
    goto loc_0014E990;

    /* nop */

loc_0014E990: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

loc_0014E99A: ;
    edi = MEM32(ebp + -8);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -12);
    ebx = ecx;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E99A; /* jl: less (signed <) */

loc_0014EBC9: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -56);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + -56) = eax;
    if ((_fa != 0)) goto loc_0014E990; /* jne: not equal / not zero */

loc_0014EBFF: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) - 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E570; /* jne: not equal / not zero */

loc_0014EC08: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -28);

loc_0014EC11: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -60) = ebx;
    MEM32(ebp + -56) = 2;
    /* nop */

loc_0014EC20: ;
    edx = MEM32(ebp + -16);
    eax = ebx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014EC4B; /* jbe: below or equal (unsigned <=) */

loc_0014EC30: ;
    MEM32(ebp + 0x14) = edx;

loc_0014EC33: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + edx * 4) = LO8(ebx);
    ebx = MEM32(ebp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = ebx;
    if ((_fa != 0)) goto loc_0014EC33; /* jne: not equal / not zero */

loc_0014EC48: ;
    ebx = MEM32(ebp + -60);

loc_0014EC4B: ;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -56);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -60) = ebx;
    MEM32(ebp + -56) = eax;
    if ((_fa != 0)) goto loc_0014EC20; /* jne: not equal / not zero */

loc_0014EC6A: ;
    edi = 0;
    ecx = 8;

    g_seh_ebp = ebp; sub_0014EC74(); return; /* fallthrough 0x0014EC74 */

}

/**
 * sub_0014EC74
 * Original: 0x0014EC74 - 0x0014EF86 (786 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EC74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014EC74: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014EC8D: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014EC8D; /* jne: not equal / not zero */

loc_0014ECB0: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014EC74; /* jg: greater (signed >) */

loc_0014ECF9: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + -20);
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + -60) = 2;
    goto loc_0014ED10;

    /* nop */

loc_0014ED10: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

loc_0014ED1A: ;
    edi = MEM32(ebp + -8);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -12);
    ebx = ecx;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    eax = MMX_PEXTRW(mm7, 0u); /* pextrw */
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 1u); /* pextrw */
    MEM8(edi + 2) = LO8(eax);
    eax = MMX_PEXTRW(mm7, 2u); /* pextrw */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 4) = HI8(eax);
    eax = MMX_PEXTRW(mm7, 3u); /* pextrw */
    MEM8(edi + 5) = LO8(eax);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014ED1A; /* jl: less (signed <) */

loc_0014EF49: ;
    (void)0; /* emms - empty MMX state */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    edi = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + -60) = eax;
    if ((_fa != 0)) goto loc_0014ED10; /* jne: not equal / not zero */

loc_0014EF7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EF90
 * Original: 0x0014EF90 - 0x0014F357 (967 bytes, 284 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014EF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EF90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B0BA8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014EFA1u); RECOMP_ABI_CALL(0x0014D490u, sub_0014D490); /* call 0x0014D490 */

loc_0014EFA1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ecx + 4);
    MEM32(ebp + -8) = edx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax * 8 + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -36) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0014F352; /* jbe: below or equal (unsigned <=) */

loc_0014EFFF: ;
    eax = edx + -1;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(ebp + -40) = eax;
    PUSH32(esp, edi);
    goto loc_0014F010;

    /* nop */

loc_0014F010: ;
    edx = MEM32(ebp + -4);
    esi = edx;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ebp + -32);
    eax = MEM32(ebp + -8);
    ebx = MEM32(ebp + -12);

loc_0014F023: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = MMX_MEM(ebx); /* movq */
    MMX_STORE(edi, mm0); /* movq */
    ecx = edx;
    MMX_STORE(edi + ecx, mm0); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi + ecx, mm1); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi + ecx, mm1); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014F023; /* jne: not equal / not zero */

loc_0014F04A: ;
    edx = MEM32(ebp + -4);
    esi = edx;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ebp + -32);
    ecx = edx;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -20);

loc_0014F064: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = MMX_MEM(ebx); /* movq */
    MMX_STORE(edi, mm0); /* movq */
    ecx = edx;
    MMX_STORE(edi + ecx, mm0); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi + ecx, mm1); /* movq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi + ecx, mm1); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014F064; /* jne: not equal / not zero */

loc_0014F08B: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(ebp + -8);
    edi = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ebp + -20);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -20) = ecx;
    edi = 0;
    ecx = 8;

loc_0014F0C4: ;
    eax = MEM32(ebp + -32);
    ebx = MEM32(ebp + -36);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014F0DD: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, 8u); /* psllq */
    mm1 = MMX_PAVGB(mm1, mm2); /* pavgb */
    mm1 = MMX_PSRLQ(mm1, 8u); /* psrlq */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014F0DD; /* jne: not equal / not zero */

loc_0014F100: ;
    mm0 = MMX_MEM(eax); /* movq */
    mm1 = mm0; /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSRLQ(mm2, 8u); /* psrlq */
    mm2 = MMX_PUNPCKLBW(mm2, MMX_MEM(0x2B0B30)); /* punpcklbw */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm3 = mm2; /* movq */
    mm3 = MMX_PSRLQ(mm3, 32u); /* psrlq */
    mm3 = MMX_PSLLQ(mm3, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm3); /* por */
    mm1 = MMX_PAVGW(mm1, mm2); /* pavgw */
    mm1 = MMX_PACKUSWB(mm1, MMX_MEM(0x2B0B30)); /* packuswb */
    mm0 = MMX_PUNPCKLBW(mm0, mm1); /* punpcklbw */
    MMX_STORE(ebx, mm0); /* movq */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((!((_fas < 0) != (_fb != 0)) && _fa != 0)) goto loc_0014F0C4; /* jg: greater (signed >) */

loc_0014F149: ;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + -36);
    MEM32(ebp + 0x14) = eax;
    ebx = 4;

loc_0014F156: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ebp + 0x10);
    ecx = 0;

loc_0014F160: ;
    edi = MEM32(ebp + -24);
    mm0 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + 0x14);
    mm1 = MMX_MEM(edi + ecx); /* movq */
    eax = MEM32(ebp + -4);
    edi = edi + eax * 4;
    mm2 = MMX_MEM(edi + ecx); /* movq */
    edi = MEM32(ebp + -28);
    eax = MMX_PEXTRW(mm0, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 0u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 1u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 2u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMX_PEXTRW(mm0, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_MEM(esi + edx * 8); /* movq */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_MEM(esi + eax * 8); /* movq */
    eax = MMX_PEXTRW(mm1, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x800)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x800)); /* paddw */
    eax = MMX_PEXTRW(mm2, 3u); /* pextrw */
    SET_LO8(edx, LO8(eax));
    mm7 = MMX_PADDW(mm7, MMX_MEM(esi + edx * 8 + 0x1000)); /* paddw */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    mm6 = MMX_PADDW(mm6, MMX_MEM(esi + eax * 8 + 0x1000)); /* paddw */
    mm7 = MMX_PADDW(mm7, MMX_MEM(0x2B0B58)); /* paddw */
    mm6 = MMX_PADDW(mm6, MMX_MEM(0x2B0B58)); /* paddw */
    mm7 = MMX_PSRAW(mm7, 6u); /* psraw */
    mm6 = MMX_PSRAW(mm6, 6u); /* psraw */
    mm7 = MMX_PACKUSWB(mm7, mm6); /* packuswb */
    MMX_STORE(edi + ecx * 4, mm7); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014F160; /* jl: less (signed <) */

loc_0014F313: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -24);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -28);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx + ecx * 4;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + 0x14) = edx;
    if ((_fa != 0)) goto loc_0014F156; /* jne: not equal / not zero */

loc_0014F347: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014F010; /* jne: not equal / not zero */

loc_0014F350: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0014F352: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
