cmake_minimum_required(VERSION 3.9)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")

include_directories(. utils gfx/monogfx)

add_library(unihal unihal.c)

add_library(unihal-utils utils/stream.c utils/crc16.c)

add_library(unihal-monogfx  gfx/monogfx/monogfx.c
                            gfx/monogfx/fonts/freesans_12pt7.c
                            gfx/monogfx/fonts/freesans_24pt7.c
                            gfx/monogfx/fonts/freesans_18pt7.c
                            gfx/monogfx/fonts/freesans_9pt7.c
            )

add_library(unihal-drivers  drivers/display/ssd1306.c
                            drivers/display/ssd1675.c
                            drivers/sensor/bh1721.c
                            drivers/sensor/bme280.c
                            drivers/sensor/mlx90614.c
            )

add_executable(utils-stream-tests utils/tests/stream_tests.cpp)
target_link_libraries(utils-stream-tests unihal-utils CppUTest CppUTestExt)
add_test(NAME utils-stream-tests
         COMMAND utils-stream-tests)