# Excluded, headless checks of the actual acquisition and movie wrapper sources.
add_executable(sofdec_check EXCLUDE_FROM_ALL tools/sofdec_check.cpp
    src/fmv/sofdec.c src/fmv/sofdec_io.c)
target_include_directories(sofdec_check PRIVATE src src/filesystem)
target_link_libraries(sofdec_check PRIVATE xbox_kernel shell32 bcrypt)
add_executable(sofdec_io_check EXCLUDE_FROM_ALL tools/sofdec_io_check.c src/fmv/sofdec_io.c)
add_executable(fmv_path_check EXCLUDE_FROM_ALL tools/fmv_path_check.c src/fmv/fmv.c)
target_include_directories(sofdec_io_check PRIVATE src "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src/kernel"
    "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/src" "${DOA1U_XBOXRECOMP_RUNTIME_DIR}/include")
target_include_directories(fmv_path_check PRIVATE src)
target_link_libraries(fmv_path_check PRIVATE winmm)
if(MSVC)
    target_compile_options(sofdec_check PRIVATE /EHsc)
    target_compile_options(sofdec_io_check PRIVATE /W4 /WX)
    target_compile_options(fmv_path_check PRIVATE /W4 /WX)
endif()
