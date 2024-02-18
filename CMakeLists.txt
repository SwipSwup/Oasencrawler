cmake_minimum_required(VERSION 3.28)
project(Oasencrawler)

set(CMAKE_CXX_STANDARD 17)

add_executable(Oasencrawler main.cpp
        Game/GameBoard.cpp
        Game/GameBoard.h
        Game/Tile.cpp
        Game/Tile.h
        Game/Pawn.cpp
        Game/Pawn.h
        Game/Player.cpp
        Game/Player.h
        Game/Oasencrawler.cpp
        Game/Oasencrawler.h
)
