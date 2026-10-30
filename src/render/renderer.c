/* Port-owned backend selection and cross-thread texture invalidation. */
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nv2a_backend.h"
#include "render/d3d11/texture_cache.h"

extern const Nv2aBackend *nv2a_d3d11_backend(void);
extern const Nv2aBackend *nv2a_nri_backend(void);
static volatile LONG texture_generation;

void renderer_invalidate_textures(void)
{
    InterlockedIncrement(&texture_generation);
}

long renderer_texture_generation(void)
{
    return InterlockedCompareExchange(&texture_generation, 0, 0);
}

void renderer_register(void)
{
    const char *choice = getenv("RECOMP_RENDERER");
    int legacy = choice && (!_stricmp(choice, "legacy-d3d11") || !_stricmp(choice, "d3d11"));
	
    if (choice && !legacy && _stricmp(choice, "nri"))
        fprintf(stderr, "[GPU] Unknown RECOMP_RENDERER=%s; using NRI\n", choice);
	
    nv2a_backend_register(legacy ? nv2a_d3d11_backend() : nv2a_nri_backend());
    fprintf(stderr, "[GPU] %s backend registered\n", legacy ? "Legacy direct D3D11" : "NRI (API selected at initialization)");
}
