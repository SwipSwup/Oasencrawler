//
// Created by david on 16/02/2024.
//

#ifndef GAMEBOARD_H
#define GAMEBOARD_H

struct Vector2D;
class Tile;

class Scene
{
public:
    Scene(int boardSize);

    void Draw();

    bool IsPointInBounds(Vector2D point);

    Tile* GetTile(Vector2D point);

private:
    int boardSize;
    Tile** board;

    void GenerateBoard();

    int relicCount;
};


#endif //GAMEBOARD_H
