cmake_minimum_required(VERSION 3.18)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")
include(CTest)

add_library(unihal unihal.c)
target_include_directories(unihal PUBLIC include)

add_subdirectory(utils)
add_subdirectory(drivers)



#target_link_libraries(unihal unihal-drivers unihal-gfx unihal-utils)

#include_directories(. utils utils/tools gfx/monogfx drivers/display drivers/sensor)

#add_subdirectory(gfx)

#target_include_directories(unihal PUBLIC .)

#add_library(unihal-mocks platforms/unihal_mocks.cpp)