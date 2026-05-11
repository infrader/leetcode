cmake_minimum_required(VERSION 3.20)
project(sort_colors)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.17.0
)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.9.5
)
FetchContent_MakeAvailable(googlebenchmark)

add_library(sort_cl STATIC ./src/sort_color.cpp)
target_include_directories(sort_cl PUBLIC ./include)

add_executable(main ./src/main.cpp)
target_link_libraries(main PRIVATE sort_cl)

add_executable(test_sort ./test/test.cpp)
target_link_libraries(test_sort PRIVATE sort_cl GTest::gtest_main)

add_executable(bench ./src/main.cpp)
target_link_libraries(bench PRIVATE sort_cl benchmark::benchmark)

enable_testing(test_sort)
add_test(NAME sorts COMMAND test_sort)