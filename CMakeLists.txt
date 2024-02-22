cmake_minimum_required(VERSION 3.28)
project(Oasencrawler)

set(CMAKE_CXX_STANDARD 17)

add_executable(Oasencrawler main.cpp
        Game/Scene/Scene.cpp
        Game/Scene/Scene.h
        Game/Scene/Tile.cpp
        Game/Scene/Tile.h
        Game/Entities/Entity.cpp
        Game/Entities/Entity.h
        Game/Entities/Player.cpp
        Game/Entities/Player.h
        Game/Oasencrawler.cpp
        Game/Oasencrawler.h
        Game/Utility/Vector2D.cpp
        Game/Utility/Vector2D.h
)
