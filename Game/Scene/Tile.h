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

    static Tile GetRandomTile();

private:
    static double tilePropabilties[TILE_COUNT];
    static const char tileChar[TILE_COUNT];
    tileType type;

    void Init(tileType type);

public:
    tileType GetType() const;

    void SetType(tileType type);
    void DrawTile();

    void SetIsPlayerTile(bool bIsPlayerTile);
    void SetIsEnemyTile(bool bIsEnemyTile);

private:
    bool bIsPlayerTile;
    bool bIsEnemyTile;
};

#endif //TILE_H
