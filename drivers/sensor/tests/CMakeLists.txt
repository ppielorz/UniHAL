FILE(GLOB DRIVERS_SENSOR_TESTS *_tests.cpp)
foreach(DRIVER_TEST IN LISTS DRIVERS_SENSOR_TESTS)
    get_filename_component(DRIVER ${DRIVER_TEST} NAME_WE)
    set(TEST_NAME drivers_sensor_${DRIVER})
    add_executable(${TEST_NAME} ${DRIVER_TEST})
    target_link_libraries(${TEST_NAME} unihal unihal_tests_tools CppUTest CppUTestExt)
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
endforeach()