//
// Created by david on 16/02/2024.
//

#include "GameBoard.h"
#include <iostream>
#include "Tile.h"

GameBoard::GameBoard(const int boardSize)
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


void GameBoard::printBoard()
{
    //system("Color B");
    for (int y = 0; y < boardSize; ++y)
    {
        std::cout << "+---+---+---+---+---+" << std::endl << '|';
        for (int x = 0; x < boardSize; ++x)
        {
            board[y][x].drawTile();
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    std::cout << "+---+---+---+---+---+" << std::endl;
}

void GameBoard::GenerateBoard()
{
    for (int y = 0; y < boardSize; ++y)
    {
        for (int x = 0; x < boardSize; ++x)
        {
            Tile tile = Tile::getRandomTile();
            if(tile.getType() == RELIC_TILE)
                relicCount++;

            board[y][x] = tile;
        }
    }

    if(!relicCount)
    {
        int rdmX = rand()%5;
        int rdmY = rand()%5;

        board[rdmY][rdmX].setType(RELIC_TILE);
        relicCount++;
    }
}
