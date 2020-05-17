cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 14)

project(CMake)

add_executable(cmake main.cpp vect_add_one.cpp increment_and_sum.cpp)