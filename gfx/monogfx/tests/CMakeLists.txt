set(TEST_NAME monogfx_tests)
add_executable(${TEST_NAME} monogfx_tests.cpp)
target_link_libraries(${TEST_NAME} unihal unihal_tests_tools CppUTest CppUTestExt)
add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})