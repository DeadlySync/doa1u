/* Missing training-menu switch entry at guest VA 0x0003E404.
 * Verified against Doa1.xbe: this is an interior switch target, not a new
 * cdecl function. Inherit EBX/SEH and tail through the original menu epilogue.
 * The generated lift contains this body as unreachable code in 3E3D7.
 * Keep this project-owned recovery independent of generated-file regeneration.
 */
#include "recomp/gen/recomp_types.h"
#include "recomp/gen/recomp_funcs.h"

void training_stage_change(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    goto loc_0003E404;

loc_0003E3FD: ;
    PUSH32(g_esp, 0x0003E402u); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E402: ;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

loc_0003E404: ;
    g_eax = (uint32_t)(int32_t)SMEM16(0x335AE0);
    g_ecx = MEM32(g_eax * 4 + 0x30F9B0);
    g_ecx = (uint32_t)((int32_t)g_ecx * (int32_t)0x2C);
    g_eax = MEM32(g_ecx + 0x6E9A98);
    _fa = (uint32_t)(LO8(g_eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(g_eax), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E426; /* je: equal / zero */

loc_0003E41F: ;
    MEM8(0x336A0D) = MEM8(0x336A0D) ^ 1;
    _fa = (uint32_t)(MEM8(0x336A0D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0003E426: ;
    _fa = (uint32_t)(HI8(g_eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(g_eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E433; /* jne: not equal / not zero */

loc_0003E42B: ;
    _fa = (uint32_t)(LO8(g_eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(g_eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E39F(); return; } /* je: equal / zero */

loc_0003E433: ;
    SET_LO8(g_edx, MEM8(0x336A0D));
    _fa = (uint32_t)(LO8(g_edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x336A0C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(g_edx), MEM8(0x336A0C) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E3FD; /* jne: not equal / not zero */

loc_0003E441: ;
    MEM8(0x307604) = 8;
    MEM32(0x33227C) = g_ebx;
    PUSH32(g_esp, 0x0003E453u); RECOMP_ABI_CALL(0x00030450u, sub_00030450); /* call 0x00030450 */

loc_0003E453: ;
    MEM8(0x316FF4) = LO8(g_ebx);
    PUSH32(g_esp, 0x0003E45Eu); RECOMP_ABI_CALL(0x00054190u, sub_00054190); /* call 0x00054190 */

loc_0003E45E: ;
    PUSH32(g_esp, 0x0003E463u); RECOMP_ABI_CALL(0x00053530u, sub_00053530); /* call 0x00053530 */

loc_0003E463: ;
    SET_LO8(g_eax, MEM8(0x336A0C));
    SET_LO8(g_eax, LO8(g_eax) ^ 1);
    _fa = (uint32_t)(LO8(g_eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x336A0C) = LO8(g_eax);
    SET_LO8(g_eax, LO8(g_eax) << 1);
    _fa = (uint32_t)(LO8(g_eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(0x30554D) = LO8(g_eax);
    PUSH32(g_esp, 0x0003E47Bu); RECOMP_ABI_CALL(0x0003DDE0u, sub_0003DDE0); /* call 0x0003DDE0 */

loc_0003E47B: ;
    _fa = (uint32_t)(MEM8(0x336A0C)) & 0xFFu; _fb = (uint32_t)(LO8(g_ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x336A0C), LO8(g_ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0003E49C(); return; } /* je: equal / zero */

loc_0003E483: ;
    PUSH32(g_esp, 0x0003E488u); RECOMP_ABI_CALL(0x0001A7E0u, sub_0001A7E0); /* call 0x0001A7E0 */

loc_0003E488: ;
    MEM32(0x315AD0) = 0;
    PUSH32(g_esp, 0x0003E497u); RECOMP_ABI_CALL(0x00044C40u, sub_00044C40); /* call 0x00044C40 */

loc_0003E497: ;
    g_seh_ebp = ebp; sub_0003E39F(); return; /* tail jmp 0x0003E39F */

}
