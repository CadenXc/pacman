cmake_minimum_required(VERSION 3.20.2)

project(
    pacman
    LANGUAGES CXX
    VERSION 0.1.0
    )

add_executable(
    ${PROJECT_NAME}
    main.cpp
    src/Game.cpp
    src/Game.h
    src/Character.cpp
    src/Character.h
    src/Ghost.cpp
    src/Ghost.h
    src/Canvas.cpp
    src/Canvas.h
)

