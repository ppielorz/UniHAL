cmake_minimum_required(VERSION 3.18)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")
include(CTest)

include_directories(. utils utils/tools gfx/monogfx drivers/display drivers/sensor)

add_subdirectory(drivers)
add_subdirectory(gfx)
add_subdirectory(utils)

add_library(unihal unihal.c)
target_link_libraries(unihal unihal-drivers unihal-gfx unihal-utils)

add_library(unihal-mocks implementations/unihal_mocks.cpp)