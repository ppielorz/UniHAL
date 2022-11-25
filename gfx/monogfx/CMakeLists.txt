target_sources(unihal PRIVATE monogfx.c)
add_subdirectory(fonts)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()