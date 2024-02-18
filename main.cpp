#include <iostream>

#include "Game/GameBoard.h"
#include "Game/Tile.h"

char getUserInput(const char* msg)
{
    char out;
    std::cout << msg << std::endl;

    std::cin >> out;
    return out;
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    GameBoard board{5};
    board.printBoard();

    while(1)
    {
        getUserInput("next move:");

    }

    return 0;
}

