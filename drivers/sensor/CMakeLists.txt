target_sources(unihal PRIVATE bh1721.c bme280.c mlx90614.c)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()