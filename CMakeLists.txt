cmake_minimum_required(VERSION 3.30.2)

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
    src/Character.h
    src/Pacman.cpp
    src/Pacman.h
    src/Ghost.cpp
    src/Ghost.h
    src/GhostAI.cpp
    src/GhostAI.h

)

