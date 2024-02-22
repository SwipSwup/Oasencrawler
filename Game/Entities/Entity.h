//
// Created by david on 17/02/2024.
//

#ifndef PAWN_H
#define PAWN_H
#include "../Utility/Vector2D.h"

class Entity {
public:
    Entity();

    void Move(Vector2D direction);

    Vector2D GetPosition() const;

protected:
    Vector2D position;
};

#endif //PAWN_H
