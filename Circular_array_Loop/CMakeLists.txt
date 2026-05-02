cmake_minimum_required(VERSION 3.20)
project(Circular_Array_Loop)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
gtest
GIT_REPOSITORY https://github.com/google/googletest.git
GIT_TAG v1.17.0
)
FetchContent_Makeavailable(gtest)

FetchContent_Declare(
gbenchmark
GIT_REPOSITORY https://github.com/google/benchmark.git
GIT_TAG v1.9.5
)
FetchContent_Makeavailable(gbenchmark)


add_library(circual_loop STATIC ./src/circual_loop.cpp)
target_include_directories(circual_loop PUBLIC ./include/)

add_executable(run_main ./src/main.cpp)
target_link_libraries(run_main PRIVATE circual_loop)

add_executable(run_benchmark ./benchmark/benchmark.cpp)
target_link_libraries(run_benchmark PRIVATE circual_loop benchmark::benchmark)

add_executable(run_test ./test/testing.cpp)
target_link_libraries(run_test PRIVATE circual_loop GTest::gtest_main)

enable_testing()
add_test(NAME circual_array_loop COMMAND run_test)
