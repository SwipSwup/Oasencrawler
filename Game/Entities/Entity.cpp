//
// Created by david on 17/02/2024.
//

#include "Entity.h"

#include <iostream>

Entity::Entity()
{
    position = Vector2D();
}

void Entity::Move(Vector2D direction)
{
    position += direction;
}

Vector2D Entity::GetPosition() const
{
    return position;
}
