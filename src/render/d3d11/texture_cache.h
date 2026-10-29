#ifndef DOA1U_TEXTURE_CACHE_H
#define DOA1U_TEXTURE_CACHE_H

/* Guest asset reloads can reuse the same texture addresses. GPU-thread flush. */
void renderer_invalidate_textures(void);
long renderer_texture_generation(void);

#endif
