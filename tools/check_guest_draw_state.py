"""CPU check of actual shader alpha predicate and shared guest depth policy."""
from pathlib import Path
import ast
import re
import subprocess

root = Path(__file__).resolve().parents[1]
shared = (root / "src/render/common/guest_shaders.h").read_text(encoding="utf-8")
predicates = []
for name in ["HLSL_PS_TEX", "HLSL_PS_FLAT"]:
    match = re.search(r"\b"+name+r'\s*=\s*((?:\s*"(?:\\.|[^"\\])*")+)\s*;', shared)
    shader = "".join(ast.literal_eval(x) for x in re.findall(r'"(?:\\.|[^"\\])*"', match[1]))
    predicates.append(re.search(r"bool alpha_pass\([^}]+\}", shader)[0])
    assert "if (aref >= 0.0 && !alpha_pass(c.a,aref,afunc)) discard;" in shader
assert predicates[0] == predicates[1], "textured/flat alpha semantics diverged"
build = root / "build/guest_draw_state_check"
build.mkdir(exist_ok=True)
header = r'''
#include <cstdio>
#include <cstdlib>
#include "render/common/guest_draw_state.h"
void require(bool ok,const char *message) { if(!ok) { std::puts(message); std::exit(1); } }
'''
tests = r'''
int main() {
    require(guest_depth_mode(nullptr)==0,"null state has no depth");
    Nv2aRenderState rs={};
    for(unsigned enabled=0;enabled<2;enabled++)
    for(unsigned write=0;write<2;write++) {
        rs.depth_test_enable=enabled; rs.depth_write=write;
        require(guest_depth_mode(&rs)==(enabled?(write?2u:1u):0u),"explicit depth enable/write policy");
    }
    unsigned comparisons=0;
    for(unsigned ai=0;ai<256;ai++)
    for(unsigned ri=0;ri<256;ri++) {
        float a=ai/255.0f,r=ri/255.0f;
        bool expected[]={false,ai<ri,ai==ri,ai<=ri,ai>ri,ai!=ri,ai>=ri,true};
        for(unsigned op=0;op<8;op++) {
            require(alpha_pass(a,r,(float)(0x200+op))==expected[op],"shader alpha compare mismatch");
            comparisons++;
        }
    }
    require(!alpha_pass(0,1.0f/255,0x204),"transparent cutout must not write depth");
    require(!alpha_pass(1.0f/255,1.0f/255,0x204),"GREATER is not GREATER_EQUAL");
    require(alpha_pass(1,1.0f/255,0x204),"opaque fighter pixels survive");
    std::printf("PASS guest draw state: depth enable/write combinations, %u alpha comparisons, transparent/threshold/opaque cutouts\n",comparisons);
}
'''
cpp = build / "check.cpp"
exe = build / "check.exe"
cpp.write_text(header + predicates[0] + tests, encoding="utf-8")
subprocess.run(["cl.exe", "/nologo", "/O2", "/EHsc", "/std:c++17", "/I"+str(root / "src"),
                "/I"+str(root / "src/xboxrecomp/src/kernel"), str(cpp),
                "/Fe"+str(exe), "/Fo"+str(build / "check.obj")], check=True, cwd=build)
subprocess.run([str(exe)], check=True)
