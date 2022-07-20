add_library(unihal-utils stream.c crc16.c)
target_include_directories(unihal-utils PUBLIC .)

add_library(unihal-utils-tools tools/cpputest_comparators.cpp
                               tools/cpputest_copiers.cpp)
target_include_directories(unihal-utils-tools PUBLIC tools)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_executable(utils-stream-tests tests/stream_tests.cpp)
    target_link_libraries(utils-stream-tests unihal-utils CppUTest CppUTestExt)
    add_test(NAME utils-stream-tests COMMAND utils-stream-tests)
endif()