cmake_minimum_required(VERSION 3.22.1)

project(limp-transpiler)

add_subdirectory(generator)
add_subdirectory(transformer)
add_subdirectory(parser)

add_executable(transpiler ${CMAKE_SOURCE_DIR}/src/transpiler.cpp)