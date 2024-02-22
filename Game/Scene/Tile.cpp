//
// Created by david on 16/02/2024.
//

#include "Tile.h"
#include <cstdlib>
#include <iostream>

double Tile::tilePropabilties[TILE_COUNT] = {.4f, .4f, .1f, .1f};
char const Tile::tileChar[TILE_COUNT] = {'e', 'd', 'f', 'r'};

Tile::Tile()
{
    Init(EMPTY_TILE);
}

Tile::Tile(const tileType type)
{
    Init(type);
}

Tile Tile::GetRandomTile()
{
    double randomValue = static_cast<double>(rand()) / RAND_MAX;

    for (int i = 0; i < TILE_COUNT; ++i)
    {
        if (randomValue <= tilePropabilties[i])
        {
            return {static_cast<tileType>(i)};
        }

        randomValue -= tilePropabilties[i];
    }

    return {EMPTY_TILE};
}

void Tile::Init(tileType type)
{
    this->type = type;
    bIsEnemyTile = false;
    bIsPlayerTile = false;
}

tileType Tile::GetType() const
{
    return type;
}

void Tile::SetType(tileType type)
{
    this->type = type;
}

void Tile::DrawTile()
{
    std::cout << (bIsPlayerTile ? "(" : bIsEnemyTile ? "{" : " ");
    std::cout << tileChar[type];
    std::cout << (bIsPlayerTile ? ")" : bIsEnemyTile ? "}" : " ");
}

void Tile::SetIsPlayerTile(bool bIsPlayerTile)
{
    this->bIsPlayerTile = bIsPlayerTile;
}

void Tile::SetIsEnemyTile(bool bIsEnemyTile)
{
    this->bIsEnemyTile = bIsEnemyTile;
}
