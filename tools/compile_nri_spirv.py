"""Compile production HLSL strings to embedded SPIR-V; DXC is build-only."""
import argparse
import ast
import json
from pathlib import Path
import re
import subprocess


def extract(source, name):
    match = re.search(r"\b" + name + r'\s*=\s*((?:\s*"(?:\\.|[^"\\])*")+)\s*;', source)
    if not match:
        raise RuntimeError(f"Cannot find shader {name}")
    return "".join(ast.literal_eval(x) for x in re.findall(r'"(?:\\.|[^"\\])*"', match[1]))


def main():
    parser = argparse.ArgumentParser(__doc__)
    parser.add_argument("--dxc", required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    args.output.parent.mkdir(parents=True, exist_ok=True)
    shaders = [
        ("src/render/common/guest_shaders.h", "HLSL_VS", "vs_5_0"),
        ("src/render/common/guest_shaders.h", "HLSL_PS_LANCZOS", "ps_5_0"),
        ("src/render/common/guest_shaders.h", "HLSL_PS_FLAT", "ps_5_0"),
        ("src/render/common/guest_shaders.h", "HLSL_SNN", "ps_5_0"),
        ("src/render/nri/nv2a_backend_nri.cpp", "present_vs", "vs_5_0"),
        ("src/render/nri/nv2a_backend_nri.cpp", "present_ps", "ps_5_0"),
        ("src/render/common/antialiasing.h", "HLSL_FXAA", "ps_5_0"),
        ("src/render/common/antialiasing.h", "HLSL_SSAA", "ps_5_0"),
    ]
    header = ["// Generated from production HLSL. Do not edit.", "#pragma once",
              "namespace doa1u::spirv {",
              "struct Entry { const char* source; const char* profile; const uint8_t* data; size_t size; };"]
    entries = []
    smaa = (root / "src/render/nri/smaa/SMAA.hlsl").read_text()
    smaa = smaa.replace("SamplerState LinearSampler { Filter = MIN_MAG_LINEAR_MIP_POINT; AddressU = Clamp; AddressV = Clamp; };", "SamplerState LinearSampler:register(s0);")
    smaa = smaa.replace("SamplerState PointSampler { Filter = MIN_MAG_MIP_POINT; AddressU = Clamp; AddressV = Clamp; };", "SamplerState PointSampler:register(s1);")
    wrapper = (root / "src/render/nri/smaa/wrappers.hlsl").read_text().replace('#include "SMAA.hlsl"', smaa)
    smaa_sources = [(f"HLSL_SMAA_{i}", f"#define SMAA_PASS {i}\n" + wrapper) for i in range(3)]
    for name, original in smaa_sources:
        header.append(f"inline const char* {name}_source = {json.dumps(original)};")
    shaders += [(None, name, "ps_5_0") for name, _ in smaa_sources]
    for file, name, profile in shaders:
        original = extract((root / file).read_text(encoding="utf-8"), name) if file else dict(smaa_sources)[name]
        text = original
        block = re.search(r"cbuffer\s+\w+\s*:\s*register\(b0\)\s*\{([^}]*)\};", text)
        if block:
            fields = block[1]
            text = text[:block.start()] + text[block.end():]
            for field in re.findall(r"\bfloat[1-4]?\s+(\w+)", fields):
                text = re.sub(r"\b" + field + r"\b", "root." + field, text)
            text = "struct RootConstants {" + fields + "};\n[[vk::push_constant]] ConstantBuffer<RootConstants> root;\n" + text

        source = args.output.parent / f"{name}.hlsl"
        binary = args.output.parent / f"{name}.spv"
        source.write_text(text, encoding="utf-8")
        subprocess.run([args.dxc, "-spirv", "-fspv-target-env=vulkan1.2", "-fvk-use-dx-layout",
                        "-fvk-s-shift", "1", "0", "-T", profile.replace("5_0", "6_0"),
                        "-E", "main", "-Fo", str(binary), str(source)], check=True)
        data = binary.read_bytes()
        header.append(f"alignas(4) inline const uint8_t {name}[] = {{{','.join(map(str, data))}}};")
        entries.append(f"{{{json.dumps(original)}, {json.dumps(profile)}, {name}, sizeof({name})}}")
        print(f"SPIR-V: {name} ({len(data)} bytes)")
    header.extend(["inline const Entry entries[] = {", ",\n".join(entries), "};", "}"])
    args.output.write_text("\n".join(header), encoding="utf-8")


if __name__ == "__main__":
    main()
