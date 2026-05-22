cmake_minimum_required(VERSION 3.20)
project(3Sum)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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

add_library(3Sum_lib STATIC ./src/sum.cpp)
target_include_directories(3Sum_lib PUBLIC ./include)

add_executable(main ./src/main.cpp)
target_link_libraries(main PRIVATE 3Sum_lib)

add_executable(test_main ./test/test.cpp)
target_link_libraries(test_main PRIVATE 3Sum_lib GTest::gtest_main)

add_executable(main_benchmark ./benchmark/bench.cpp)
target_link_libraries(main_benchmark PRIVATE 3Sum_lib benchmark::benchmark)

enable_testing()
add_test(NAME 3Sum_Test COMMAND test)