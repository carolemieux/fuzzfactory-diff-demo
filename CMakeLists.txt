cmake_minimum_required(VERSION 3.10)

project(DiffDemo)
set(CMAKE_CXX_STANDARD 11)

add_executable(demo src/main.cpp src/func.cpp)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
