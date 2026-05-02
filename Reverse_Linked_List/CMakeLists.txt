cmake_minimum_required(VERSION 3.20)
project(Reverse_List)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(googletest
GIT_REPOSITORY https://github.com/google/googletest.git
GIT_TAG v1.17.0
)
FetchContent_MakeAvailable(googletest)

add_library(relist STATIC ./src/relist.cpp)
target_include_directories(relist PUBLIC ./include)

add_executable(run_main ./src/main.cpp)
target_link_libraries(run_main PRIVATE relist)

add_executable(run_test ./src/test.cpp)
target_link_libraries(run_test PRIVATE relist GTest::gtest_main)

enable_testing()
add_test(NAME Reverse_List COMMAND run_test)