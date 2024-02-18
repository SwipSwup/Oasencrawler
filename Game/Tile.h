//
// Created by david on 16/02/2024.
//

#ifndef TILE_H
#define TILE_H
#include <string>

enum tileType
{
    EMPTY_TILE,
    DANGER_TILE,
    FOUNTAIN_TILE,
    RELIC_TILE,
    TILE_COUNT
};

class Tile
{
public:
    Tile();
    Tile(tileType type);

    static Tile getRandomTile();

    tileType getType() const;


    void setType(tileType type);


    void drawTile();
    //static char getTileChar(Tile tile);
    //Index as the tileType value
private:
    static double tilePropabilties[TILE_COUNT];
    static const char tileChar[TILE_COUNT];
    static char* tileColorCode[TILE_COUNT];
    tileType type;
};

#endif //TILE_H
