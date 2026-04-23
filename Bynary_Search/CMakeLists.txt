cmake_minimum_required(VERSION 3.20)
project(Binary_Search)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(googletest
GIT_REPOSITORY https://github.com/google/googletest.git
GIT_TAG v1.17.0
)
FetchContent_MakeAvailable(googletest)

add_library(binary STATIC ./src/binary.cpp)
target_include_directories(binary PUBLIC ./include)

add_executable(run ./src/main.cpp)
target_link_libraries(run PRIVATE binary)

add_executable(run_test ./src/test.cpp)
target_link_libraries(run_test PRIVATE binary GTest::gtest_main)

enable_testing()
add_test(NAME Binary_Test COMMAND run_test)


