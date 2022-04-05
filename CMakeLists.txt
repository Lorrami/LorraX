cmake_minimum_required(VERSION 3.21)
project(LorraX)

set(CMAKE_CXX_STANDARD 14)

set (ENGINE_SOURCES
        2D
        Base
        )

add_executable(LorraX ${ENGINE_SOURCES} main.cpp)
