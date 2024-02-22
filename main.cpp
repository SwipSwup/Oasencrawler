#include <iostream>

#include "Game/Oasencrawler.h"
#include "Game/Scene/Scene.h"
#include "Game/Scene/Tile.h"

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

    Oasencrawler oasencrawler = Oasencrawler();
    oasencrawler.Run();

    return 0;
}
