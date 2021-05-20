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

add_executable(${PROJECT_NAME} ${project_sources})
target_link_libraries(${PROJECT_NAME} -lsfml-graphics -lsfml-window -lsfml-system)
