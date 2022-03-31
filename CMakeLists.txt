cmake_minimum_required(VERSION 3.5)

project(Shapes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(project_sources
    Shape.h

    Triangle.h
    Triangle.cpp

    Circle.h
    Circle.cpp


    Quadrilateral.h
    Quadrilateral.cpp

    Square.h
    Square.cpp

    Rectangle.h
    Rectangle.cpp
    main.cpp
)

#link_directories("C:\\Users\\Sergei\\source\\repos\\Sergei40\\Shapes\\SFML\\lib")
link_directories("C:\\Users\\Sergei\\Downloads\\SFML-2.5.1\\bin")

add_executable(${PROJECT_NAME} ${project_sources})
include_directories("C:\\Users\\Sergei\\Downloads\\SFML-2.5.1\\include")
target_link_libraries(${PROJECT_NAME} sfml-graphics-d-2 sfml-window-d-2 sfml-system-d-2 openal32)
