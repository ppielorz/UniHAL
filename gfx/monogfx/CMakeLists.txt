target_sources(unihal PRIVATE monogfx.c)
add_subdirectory(fonts)
add_subdirectory(tools)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()