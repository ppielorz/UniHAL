cmake_minimum_required(VERSION 3.18)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")
include(CTest)

add_library(unihal unihal.c)
target_include_directories(unihal PUBLIC include)
target_compile_options(unihal PRIVATE -Wall -Wextra -Wpedantic -Werror)

add_subdirectory(drivers)
add_subdirectory(monogfx)
add_subdirectory(utils)
add_subdirectory(platforms)
add_subdirectory(tests_tools)

if(ENABLE_COVERAGE)
    target_link_libraries(unihal PRIVATE gcov)
    target_compile_options(unihal PRIVATE -fprofile-arcs -ftest-coverage)
    add_custom_target(unihal_coverage
        COMMAND lcov --quiet --capture --directory ${CMAKE_BINARY_DIR} --output-file ${CMAKE_BINARY_DIR}/coverage.info
        COMMAND genhtml --quiet ${CMAKE_BINARY_DIR}/coverage.info --output-directory coverage
        COMMAND zip coverage.zip -qr coverage
        COMMAND lcov --quiet --list ${CMAKE_BINARY_DIR}/coverage.info 
    )
endif()