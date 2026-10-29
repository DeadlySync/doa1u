/* Optional RenderDoc capture trigger for diagnostic builds. */
#include "common/diagnostics.h"

#ifdef RECOMP_WITH_RENDERDOC

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Vendored from RenderDoc. Lets us trigger a RenderDoc frame
 * capture PROGRAMMATICALLY at an exact frame (RECOMP_RDOC_CAPTURE_FRAME) when
 * the process is launched under renderdoccmd -- more reliable than the F12
 * hotkey, which RenderDoc reads from real key state 
 * (our only input channel is synthetic PostMessage). 
 * No effect unless renderdoc.dll is injected. */
#include "third_party/renderdoc_app.h"

/* Programmatic RenderDoc capture. Resolved lazily from the injected
 * renderdoc.dll; a no-op when the game is not running under RenderDoc. */
void rdoc_maybe_trigger(uint64_t frame)
{
    const char *cf = getenv("RECOMP_RDOC_CAPTURE_FRAME");
    if (!cf || !*cf) 
        return;

    static RENDERDOC_API_1_1_2 *rdoc = NULL;
    static int resolved = 0;

    if (!resolved) 
    {
        resolved = 1;
        HMODULE m = GetModuleHandleA("renderdoc.dll");
        if (m) 
        {
            pRENDERDOC_GetAPI getapi =
                (pRENDERDOC_GetAPI)GetProcAddress(m, "RENDERDOC_GetAPI");

            if (getapi)
                getapi(eRENDERDOC_API_Version_1_1_2, (void **)&rdoc);
        }

        if (getenv("RECOMP_KEY_TRACE") || getenv("RECOMP_GPU_DIAG"))
            fprintf(stderr, "[RDOC] renderdoc.dll %s, api %s\n",
                    m ? "injected" : "NOT injected", rdoc ? "ok" : "unavailable");
    }

    if (!rdoc) 
        return;

    /* TriggerCapture grabs the NEXT present; fire when we reach the frame. */
    uint64_t target = (uint64_t)_strtoui64(cf, NULL, 10);
    if (frame == target) 
    {
        rdoc->TriggerCapture();
        fprintf(stderr, "[RDOC] TriggerCapture at frame %llu\n", (unsigned long long)frame);
        fflush(stderr);
    }
}

#else /* !RECOMP_WITH_RENDERDOC */

void rdoc_maybe_trigger(uint64_t frame) { (void)frame; }

#endif /* RECOMP_WITH_RENDERDOC */
