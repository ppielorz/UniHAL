add_library(unihal_tests_tools cpputest_comparators.cpp cpputest_copiers.cpp cpputest_mocks.cpp)
target_include_directories(unihal_tests_tools 
    PUBLIC .
    PRIVATE ../include
)