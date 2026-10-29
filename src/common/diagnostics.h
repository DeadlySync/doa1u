/* Optional instrumentation interface. Release adapters preserve guest behavior. */
#ifndef DOA1U_DIAGNOSTICS_H
#define DOA1U_DIAGNOSTICS_H

#include <stdint.h>

void recomp_dl_trace(void);
void recomp_dl_esp(int site);
void recomp_char_draw_probe(void);
void recomp_dl_badptr(uint32_t entry_base, uint32_t bad_record_ptr);
void recomp_dl_cursor_check(uint32_t cursor, uint32_t end);

void rdoc_maybe_trigger(uint64_t frame);

#endif /* DOA1U_DIAGNOSTICS_H */
