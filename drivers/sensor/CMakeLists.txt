target_sources(unihal PRIVATE bh1721.c bme280.c mlx90614.c)

#add_library(unihal-drivers  display/ssd1306.c
#                            display/ssd1675.c
#                            sensor/bh1721.c
#                            sensor/bme280.c
#                            sensor/mlx90614.c
#            )

#target_include_directories(unihal-drivers PUBLIC display sensor)

#if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
#	set(DRIVERS_DISPLAY_TESTS ssd1306 ssd1675)
#	foreach(DRIVER IN LISTS DRIVERS_DISPLAY_TESTS)
#		add_executable(drivers-display-${DRIVER}-tests display/tests/${DRIVER}_tests.cpp)
#		target_link_libraries(drivers-display-${DRIVER}-tests unihal-drivers CppUTest CppUTestExt)
#		add_test(NAME drivers-display-${DRIVER}-tests COMMAND drivers-display-${DRIVER}-tests)
#	endforeach()

#	set(DRIVERS_SENSOR_TESTS bh1721 bme280 mlx90614)
#	foreach(DRIVER IN LISTS DRIVERS_SENSOR_TESTS)
#		add_executable(drivers-sensor-${DRIVER}-tests sensor/tests/${DRIVER}_tests.cpp)
#		target_link_libraries(drivers-sensor-${DRIVER}-tests unihal-drivers unihal-utils unihal-utils-tools unihal-mocks CppUTest CppUTestExt)
#		add_test(NAME drivers-sensor-${DRIVER}-tests COMMAND drivers-sensor-${DRIVER}-tests)
#	endforeach()
#endif()