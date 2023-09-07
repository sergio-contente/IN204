project(HelloWorld)
include_directories(${PROJECT_SOURCE_DIR})
cmake_minimum_required(VERSION 3.0)

add_executable(hello_world bin/main.cpp bin/counter.cpp)
