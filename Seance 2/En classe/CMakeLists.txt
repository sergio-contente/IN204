project(TD2)
include_directories(${PROJECT_SOURCE_DIR})
cmake_minimum_required(VERSION 3.0)

add_executable(td2 bin/main.cpp bin/counter.cpp bin/mybidicounter.cpp)
