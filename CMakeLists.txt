cmake_minimum_required(VERSION 3.18)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")

option(UNIHAL_DEBUG_PRINT_TIME "Print formatted time from RTC on debug call." ON)

if(UNIHAL_DEBUG_PRINT_TIME)
  add_definitions(-DUNIHAL_DEBUG_PRINT_TIME)
endif()

add_library(unihal unihal.c)
target_include_directories(unihal PUBLIC include)

target_compile_options(unihal PRIVATE -Wall -Wpedantic -Wextra -Wconversion)
if(BUILD_TESTING)
    include(CTest)
else()
    target_compile_options(unihal PRIVATE -Werror)
endif()

add_subdirectory(drivers)
add_subdirectory(generic)
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