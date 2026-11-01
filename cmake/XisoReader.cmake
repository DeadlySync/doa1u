# Storage core and offline regression. The Xbox adapter integration links this
# target; image routing and bootstrap remain separate checkpoints.
add_library(doa1u_xiso_reader STATIC EXCLUDE_FROM_ALL
    "${CMAKE_CURRENT_LIST_DIR}/../src/filesystem/xiso_reader.cpp")
target_include_directories(doa1u_xiso_reader PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/../src/filesystem")
target_compile_features(doa1u_xiso_reader PUBLIC cxx_std_17)

add_executable(xiso_reader_check EXCLUDE_FROM_ALL
    "${CMAKE_CURRENT_LIST_DIR}/../tools/xiso_reader_check.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/../tools/xiso_reader_c_check.c")
target_link_libraries(xiso_reader_check PRIVATE doa1u_xiso_reader)
if(MSVC)
    target_compile_options(doa1u_xiso_reader PRIVATE /W4 /WX /EHsc)
    target_compile_options(xiso_reader_check PRIVATE /W4 /WX /utf-8)
endif()
