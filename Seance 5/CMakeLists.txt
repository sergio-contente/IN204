project(TD5)
include_directories(${PROJECT_SOURCE_DIR})
cmake_minimum_required(VERSION 3.0)

add_executable(td5 bin/main.cpp bin/complex.cpp)
