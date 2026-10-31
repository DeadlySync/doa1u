"""Verify generated MSVC Debug/Release settings after CMake configure.

Usage: python tools/check_build_configs.py build
Does not build or launch the game.
"""
from pathlib import Path
import re
import sys
import xml.etree.ElementTree as ET

root = Path(sys.argv[1] if len(sys.argv) > 1 else "build")
ns = {"m": "http://schemas.microsoft.com/developer/msbuild/2003"}
checked = 0
errors = []
for project in root.rglob("*.vcxproj"):
    tree = ET.parse(project)
    if not any(item.get("Include", "").endswith("CMakeLists.txt")
               for item in tree.findall(".//m:CustomBuild", ns)):
        continue
    configs = {}
    for group in tree.findall("m:ItemDefinitionGroup", ns):
        match = re.search(r"=='(Debug|Release)\|x64'", group.get("Condition", ""))
        if match:
            configs[match[1]] = {
                tool.tag.rsplit("}", 1)[-1] + "/" + item.tag.rsplit("}", 1)[-1]: (item.text or "").strip()
                for tool in group for item in tool
            }
    if configs.keys() != {"Debug", "Release"} or "ClCompile/Optimization" not in configs["Debug"]:
        continue
    checked += 1
    for config, expected in {
        "Debug": {"Optimization": "Disabled", "InlineFunctionExpansion": "Disabled",
                  "RuntimeLibrary": "MultiThreadedDebugDLL", "OmitFramePointers": "false",
                  "DebugInformationFormat": "ProgramDatabase"},
        "Release": {"Optimization": "MaxSpeed", "InlineFunctionExpansion": "AnySuitable",
                    "RuntimeLibrary": "MultiThreadedDLL"},
    }.items():
        for key, value in expected.items():
            actual = configs[config].get("ClCompile/" + key)
            if actual != value:
                errors.append(f"{project.relative_to(root)} {config} {key}: {actual!r}, expected {value!r}")
    debug_defs = configs["Debug"].get("ClCompile/PreprocessorDefinitions", "").split(";")
    if "NDEBUG" in debug_defs or "_DEBUG" not in debug_defs:
        errors.append(f"{project}: incorrect Debug assertions/CRT macros")
    if "/Ob3" in configs["Release"].get("ClCompile/AdditionalOptions", ""):
        errors.append(f"{project}: unwanted aggressive Release inlining")
    if configs["Release"].get("ClCompile/DebugInformationFormat", ""):
        errors.append(f"{project}: Release compiler symbols must be disabled")
    if configs["Release"].get("Link/GenerateDebugInformation", "") not in {"", "false"}:
        errors.append(f"{project}: Release linker PDB must be disabled")
    if project.name == "doa1u_recomp.vcxproj":
        for key in ("Link/OptimizeReferences", "Link/EnableCOMDATFolding", "Link/RandomizedBaseAddress"):
            if configs["Debug"].get(key) != "false":
                errors.append(f"Debug game must disable {key}")
        if configs["Debug"].get("Link/GenerateDebugInformation") not in {"true", "DebugFull"}:
            errors.append("Debug game must generate full linker symbols")
if not checked:
    errors.append("No generated x64 compiler configurations found")
if errors:
    raise SystemExit("\n".join(errors))
print(f"PASS: unoptimized Debug and /O2 /Ob2 Release verified in {checked} generated projects")
