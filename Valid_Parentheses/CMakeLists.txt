cmake_minimum_required(VERSION 3.20)
project(Valid_Parentheses)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include(FetchContent)
FetchContent_Declare(googletest 
GIT_REPOSITORY https://github.com/google/googletest.git
GIT_TAG        v1.14.0
)
FetchContent_MakeAvailable(googletest)

add_library(valid STATIC ./src/valid.cpp)
target_include_directories(valid PUBLIC ./include)
add_executable(valid_run ./src/main.cpp)
target_link_libraries(valid_run PRIVATE valid)

add_executable(valid_test ./src/test.cpp)
target_link_libraries(valid_test PRIVATE valid GTest::gtest_main)
enable_testing()
add_test(NAME ValidTests COMMAND valid_test)