//
// Created by david on 16/02/2024.
//

#include <iostream>
#include "Scene.h"
#include "Tile.h"
#include "../Utility/Vector2D.h"

Scene::Scene(const int boardSize)
{
    this->boardSize = boardSize;
    relicCount = 0;

    //TODO fix this. HOW DO YOU INITALIZE AN ARRAY??
    board = new Tile*[boardSize];
    for (int i = 0; i < boardSize; ++i) {
        board[i] = new Tile[boardSize];
    }
    GenerateBoard();
}


void Scene::Draw()
{
    //system("Color B");
    for (int y = 0; y < boardSize; ++y)
    {
        std::cout << "+---+---+---+---+---+" << std::endl << '|';
        for (int x = 0; x < boardSize; ++x)
        {
            board[y][x].DrawTile();
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    std::cout << "+---+---+---+---+---+" << std::endl;
}

bool Scene::IsPointInBounds(Vector2D point)
{
    return point.x >= 0 && point.y >= 0 && point.x < boardSize && point.y < boardSize;
}

Tile* Scene::GetTile(Vector2D point)
{
    return &board[point.y][point.x];
}

void Scene::GenerateBoard()
{
    for (int y = 0; y < boardSize; ++y)
    {
        for (int x = 0; x < boardSize; ++x)
        {
            Tile tile = Tile();
            if(tile.GetType() == RELIC_TILE)
                relicCount++;

            board[y][x] = tile;
        }
    }

    if(!relicCount)
    {
        int rdmX = rand()%5;
        int rdmY = rand()%5;

        board[rdmY][rdmX].SetType(RELIC_TILE);
        relicCount++;
    }
}
