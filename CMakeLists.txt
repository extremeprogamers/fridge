cmake_minimum_required(VERSION 3.14)
project(fridge1)

set(CMAKE_CXX_STANDARD 11)
set(PROJ .)
add_subdirectory(${PROJ}/googletest)
add_subdirectory(src)

#include googletest/include dir
include_directories(${PROJ}/googletest/include)

#include the googlemock/include dir
include_directories(${PROJ}/googlemock/include)

add_executable(fridge1 src/main.cpp)

#Link with GoogleTest
target_link_libraries(fridge gtest gtest_main)

#Link with GoogleMock
target_link_libraries(fridge gmock gmock_main)

enable_testing()
add_subdirectory(test)