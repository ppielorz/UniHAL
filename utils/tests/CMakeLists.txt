FILE(GLOB UTILS_TESTS *_tests.cpp)
foreach(UTIL_TEST IN LISTS UTILS_TESTS)
    get_filename_component(UTIL ${UTIL_TEST} NAME_WE)
    set(TEST_NAME utils_${UTIL})
    add_executable(${TEST_NAME} ${UTIL_TEST})
    target_link_libraries(${TEST_NAME} unihal unihal_tests_tools CppUTest CppUTestExt)
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
endforeach()