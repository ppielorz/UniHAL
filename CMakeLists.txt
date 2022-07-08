cmake_minimum_required(VERSION 3.18)

project(UniHAL VERSION 1.0.0 DESCRIPTION "Universal HAL layer")
include(CTest)

include_directories(. utils gfx/monogfx drivers/display drivers/sensor)

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
add_test(NAME utils-stream-tests COMMAND utils-stream-tests)

set(DRIVERS_DISPLAY_TESTS ssd1306 ssd1675)
foreach(DRIVER IN LISTS DRIVERS_DISPLAY_TESTS)
	add_executable(drivers-display-${DRIVER}-tests drivers/display/tests/${DRIVER}_tests.cpp)
	target_link_libraries(drivers-display-${DRIVER}-tests unihal-drivers CppUTest CppUTestExt)
	add_test(NAME drivers-display-${DRIVER}-tests COMMAND drivers-display-${DRIVER}-tests)
endforeach()

