//
// Created by david on 18/02/2024.
//

#ifndef OASENCRAWLER_H
#define OASENCRAWLER_H

#define DEFAULT_BOARD_SIZE 5
#define DEFAULT_PLAYER_HEALTH 5
#include "Utility/Vector2D.h"

class Player;
class Scene;

class Oasencrawler {
public:
    Oasencrawler();
    void Run();

private:
    Scene* scene;
    Player* player;

    bool MovePlayer(Vector2D direction);
};



#endif //OASENCRAWLER_H
