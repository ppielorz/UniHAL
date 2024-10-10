target_sources(unihal PRIVATE stream.c crc16.c button_controller.c unihal_debug.c)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()