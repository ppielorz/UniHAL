cmake_minimum_required(VERSION 3.16)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")
include(CTest)

add_library(unihal unihal.c)
target_include_directories(unihal PUBLIC include)
target_compile_options(unihal PRIVATE -Wall -Wextra -Wpedantic -Werror)

add_subdirectory(utils)
add_subdirectory(drivers)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
    add_subdirectory(tests_tools)
endif()