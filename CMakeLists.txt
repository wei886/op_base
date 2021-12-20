cmake_minimum_required(VERSION 3.21)
project(opengl_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include/GL/freeglut include/GL/glew)

link_directories(lib/x64)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/x64)

add_executable(opengl_1 main.cpp)

target_link_libraries(opengl_1 libopengl32.a  libfreeglut.a glew32.lib)
