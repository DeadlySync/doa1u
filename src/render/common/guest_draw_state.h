#ifndef DOA1U_GUEST_DRAW_STATE_H
#define DOA1U_GUEST_DRAW_STATE_H

#include "nv2a_backend.h"

/* A depth-write mask does not enable a disabled depth test. Classification by
 * a vertex's reciprocal W cannot override explicit guest render state. */
static inline unsigned guest_depth_mode(const Nv2aRenderState *state)
{
    if (!state || !state->depth_test_enable)
        return 0;
    return state->depth_write ? 2 : 1;
}

#endif
