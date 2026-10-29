/* Fighter model rendering shadows. Guest entry points retain their VA symbols.
 * Original instructions: tools/reference/investigations/fighters_render/material_backedges.txt.
 * A material-list tag is positive for strip groups, negative for a subsequent
 * material, and zero for end-of-list. Preserve that signed/tag distinction.
 */
#include "common/guest_runtime.h"

extern void sub_00065000_gen(void);
extern void sub_000650C0(void);
extern void sub_00065288(void);

/* FUN_00065000: ECX points to a model header followed by material/strip records. */
void fighter_model_render(void)
{
    sub_00065000_gen();
}
void sub_00065000(void) { fighter_model_render(); }

/* 00065280: cmp esi,ebp; 00065282: jne 000650C0. ESI holds the next material-record tag and the renderer's EBP is zero. */
void fighter_material_list_continue(void)
{
    const uint32_t next_material_tag = g_esi;
    const uint32_t list_end_tag = g_seh_ebp;
	
    if (next_material_tag != list_end_tag) 
		sub_000650C0();
    else 
		sub_00065288();
}
void sub_00065282(void) { fighter_material_list_continue(); }
