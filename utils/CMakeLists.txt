add_library(unihal-utils stream.c crc16.c)

add_library(unihal-utils-tools tools/cpputest_comparators.cpp
                               tools/cpputest_copiers.cpp)
target_include_directories(unihal-utils-tools PUBLIC tools)

add_executable(utils-stream-tests tests/stream_tests.cpp)
target_link_libraries(utils-stream-tests unihal-utils CppUTest CppUTestExt)
add_test(NAME utils-stream-tests COMMAND utils-stream-tests)
