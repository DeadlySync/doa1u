/* Generated code still calls these symbols; release preserves only guest work. */
#include "common/diagnostics.h"

extern void sub_00166367_gen(void);
extern void sub_0016AD00_gen(void);
extern void sub_00171600_gen(void);

void d3d_vertexcopy_probe(void) { sub_00166367_gen(); }
void matrix_emit_probe(void) { sub_0016AD00_gen(); }
void transform_flush_probe(void) { sub_00171600_gen(); }
void sub_00166367(void) { d3d_vertexcopy_probe(); }
void sub_0016AD00(void) { matrix_emit_probe(); }
void sub_00171600(void) { transform_flush_probe(); }

void rdoc_maybe_trigger(uint64_t frame) { (void)frame; }
void recomp_char_draw_probe(void) {}
void recomp_dl_badptr(uint32_t entry_base, uint32_t bad_record_ptr)
{
    (void)entry_base;
    (void)bad_record_ptr;
}
void recomp_dl_trace(void) {}
void recomp_dl_esp(int site) { (void)site; }
void recomp_dl_cursor_check(uint32_t cursor, uint32_t end)
{
    (void)cursor;
    (void)end;
}
