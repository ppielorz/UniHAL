target_sources(unihal PRIVATE ssd1306.c ssd1675.c)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()