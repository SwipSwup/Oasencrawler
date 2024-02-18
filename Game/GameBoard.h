//
// Created by david on 16/02/2024.
//

#ifndef GAMEBOARD_H
#define GAMEBOARD_H

class Tile;

class GameBoard
{
public:
    GameBoard(int boardSize);

    void printBoard();

private:
    int boardSize;
    Tile** board;

    void GenerateBoard();

    int relicCount;
};


#endif //GAMEBOARD_H
