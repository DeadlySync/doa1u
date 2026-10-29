# DXC is required only at build time, never on an end-user machine.
find_package(Python3 REQUIRED COMPONENTS Interpreter)
find_program(DOA1U_DXC NAMES dxc HINTS "$ENV{VULKAN_SDK}/Bin" REQUIRED
    DOC "DXC with SPIR-V support (Microsoft release/Vulkan SDK)")
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/third_party/imgui/imgui.h" imgui_header)
string(REGEX MATCH "#define IMGUI_VERSION_NUM +([0-9]+)" unused "${imgui_header}")
if(CMAKE_MATCH_1 LESS 19290)
    message(FATAL_ERROR "NRI ImGui requires 1.92.9+; install the pinned v1.92.9b dependency")
endif()
file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/generated")
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/generated/spirv_probe.hlsl"
    "float4 main(float4 p:POSITION):SV_Position{return p;}")
execute_process(COMMAND "${DOA1U_DXC}" -spirv -T vs_6_0 -E main
    "${CMAKE_CURRENT_BINARY_DIR}/generated/spirv_probe.hlsl"
    -Fo "${CMAKE_CURRENT_BINARY_DIR}/generated/spirv_probe.spv"
    RESULT_VARIABLE spirv_result OUTPUT_QUIET ERROR_VARIABLE spirv_error)
if(NOT spirv_result EQUAL 0)
    message(FATAL_ERROR "DXC lacks usable SPIR-V support. Set DOA1U_DXC to the Microsoft release or Vulkan SDK dxc.exe.\n${spirv_error}")
endif()
set(DOA1U_SPIRV_HEADER "${CMAKE_CURRENT_BINARY_DIR}/generated/nri_spirv.h")
add_custom_command(OUTPUT "${DOA1U_SPIRV_HEADER}"
    COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/tools/compile_nri_spirv.py"
        --dxc "${DOA1U_DXC}" --output "${DOA1U_SPIRV_HEADER}"
    DEPENDS "${DOA1U_DXC}" tools/compile_nri_spirv.py src/render/common/guest_shaders.h
        src/render/common/antialiasing.h src/render/nri/nv2a_backend_nri.cpp
    VERBATIM COMMENT "Compile production NRI shaders to embedded SPIR-V")
add_custom_target(doa1u_spirv DEPENDS "${DOA1U_SPIRV_HEADER}")
