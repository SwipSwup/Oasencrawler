//
// Created by david on 17/02/2024.
//

#include "Player.h"

#include <iostream>
#include <process.h>
#include "../Utility/Colors.h"

Player::Player(int health)
{
    this->health = health;
    relics = 0;
}

void Player::DrawHud()
{
    std::cout << "Health: [" << BRED;
    for (int i = 0; i < health; ++i)
    {
        std::cout << "#";
    }
    std::cout << CRESET << "]";

    std::cout << "  Relics: " << relics << std::endl;
}
