//
// Created by david on 16/02/2024.
//

#include "Tile.h"
#include <cstdlib>
#include <iostream>

double Tile::tilePropabilties[TILE_COUNT] = {.4f, .4f, .1f, .1f};
char const Tile::tileChar[TILE_COUNT] = {'e', 'd', 'f', 'r'};
char* Tile::tileColorCode[TILE_COUNT] = {"Color 07", "Color 04", "Color 03", "Color 9"};

Tile::Tile()
{
    this->type = EMPTY_TILE;
}

Tile::Tile(const tileType type)
{
    this->type = type;
}

Tile Tile::getRandomTile()
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

tileType Tile::getType() const
{
    return type;
}

void Tile::setType(tileType type)
{
    this->type = type;
}

void Tile::drawTile()
{
    //TODO implement colors
    //system(tileColorCode[type]);
    std::cout << " " << tileChar[type] << " ";
}
