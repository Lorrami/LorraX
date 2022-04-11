cmake_minimum_required(VERSION 3.21)
project(LorraX)

set(CMAKE_CXX_STANDARD 14)

set (ENGINE_SOURCES
        2D/Colors/Color.cpp
        2D/Shapes/DefaultShape.cpp
        2D/Shapes/CircleShape.cpp
        2D/Shapes/RectangleShape.cpp
        2D/Shapes/LineShape.cpp
        Base/Math/Vector2f/Vector2f.cpp
        Base/Tools/Clock/Clock.cpp
        Base/Containers/HashMap/HashMap.cpp
        Base/Containers/LinkedList/LinkedList.cpp
        Base/Containers/Vector/Vector.cpp
        Base/Tools/DLog/ConsoleStringWriter.cpp
        Base/Tools/DLog/FileStringWriter.cpp
        2D/RenderWindow/RenderWindow.cpp)

add_subdirectory(2D/sources/glfw)

add_executable(LorraX ${ENGINE_SOURCES} main.cpp)

target_link_libraries(LorraX PUBLIC glfw opengl32)
