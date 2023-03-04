cmake_minimum_required(VERSION 3.22.1)

project(limp-transpiler)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(generator)
add_subdirectory(transformer)
add_subdirectory(parser)
