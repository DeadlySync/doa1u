"""CPU regression of production NRI cache; no GPU/game launch. Requires cl.exe."""
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
source = (root / "src/render/nri/nv2a_backend_nri.cpp").read_text(encoding="utf-8")
code = source[source.index("\tTexture *get_texture("):source.index("\tLRESULT CALLBACK wndproc(")]
build = root / "build/nri_texture_check"
build.mkdir(exist_ok=True)
header = r'''
#include <array>
#include <vector>
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
struct Nv2aTexture { unsigned offset,width,height,pitch,color; };
struct Texture { unsigned mips=1; std::vector<uint32_t> pixels; };
// refreshed is retained in this harness so it also reproduces the old bug.
struct CachedTexture { Nv2aTexture guest={}; Texture image; uint64_t refreshed=0; std::vector<uint8_t> p8; };
constexpr unsigned TextureCount=4;
std::array<CachedTexture,TextureCount> textures;
std::vector<uint32_t> decoded;
long generation=0,cached_generation=0;
unsigned cached_count=0,next_texture=0,uploads=0;
uint64_t frame_number=0;
std::array<uint8_t,4> indices={0,0,0,0};
std::array<uint32_t,256> palette={};
bool available=true;
namespace nri { enum class Format { BGRA8_UNORM }; enum class TextureUsageBits { SHADER_RESOURCE }; enum class TextureView { TEXTURE }; }
long renderer_texture_generation() { return generation; }
void retire(Texture &t) { t=Texture{}; }
unsigned mip_count(unsigned,unsigned) { return 2; }
void make_texture(Texture&,unsigned,unsigned,nri::Format,nri::TextureUsageBits,nri::TextureView,unsigned) {}
int nv2a_backend_p8_source(const Nv2aTexture*,const uint8_t **i,const uint8_t **p) {
    if(!available) return 0; *i=indices.data(); *p=(const uint8_t*)palette.data(); return 1;
}
int nv2a_backend_decode_texture(const Nv2aTexture*,uint32_t *out) {
    if(!available) return 0;
    for(unsigned i=0;i<4;i++) out[i]=palette[indices[i]];
    return 1;
}
void upload_mips(Texture &t,unsigned,unsigned) { t.pixels=decoded; ++uploads; }
void require(bool ok,const char *message) { if(!ok) { std::printf("FAIL: %s\n",message); std::exit(1); } }
'''
tests = r'''
int main() {
    Nv2aTexture guest={123,2,2,0,0x0b};
    palette[0]=0xffff0000;
    require(get_texture(&guest)->pixels[0]==0xffff0000,"initial opaque palette");
    get_texture(&guest); require(uploads==1,"unchanged data should not upload");
    palette[0]=0x00000000;
    require(get_texture(&guest)->pixels[0]==0,"same-frame transparent palette");
    palette[0]=0xff00ff00;
    require(get_texture(&guest)->pixels[0]==0xff00ff00,"same-frame opaque palette");
    palette[1]=0xff0000ff; indices[0]=1;
    require(get_texture(&guest)->pixels[0]==0xff0000ff,"same-frame mutable indices");
    ++frame_number; get_texture(&guest);
    require(uploads==4,"unchanged next frame should not upload");
    available=false;
    require(!get_texture(&guest),"unavailable palette must not return stale image");
    available=true;
    require(get_texture(&guest)->pixels[0]==0xff0000ff,"palette recovery");
    ++generation; get_texture(&guest);
    require(uploads==5 && cached_count==1,"asset generation invalidation");
    std::puts("PASS texture cache: same-frame alpha/color/index changes, unchanged reuse, missing palette, generation reset");
}
'''
cpp = build / "check.cpp"
exe = build / "check.exe"
cpp.write_text(header + code + tests, encoding="utf-8")
subprocess.run(["cl.exe", "/nologo", "/EHsc", "/std:c++17", str(cpp),
                "/Fe" + str(exe), "/Fo" + str(build / "check.obj")], check=True, cwd=build)
subprocess.run([str(exe)], check=True)
