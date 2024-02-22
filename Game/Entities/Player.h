//
// Created by david on 17/02/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"


class Player : public Entity
{
public:
    Player(int health);

    void DrawHud();

private:
    int health;
    int relics;
};


#endif //PLAYER_H
