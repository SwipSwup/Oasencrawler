//
// Created by david on 17/02/2024.
//

#include "Entity.h"

Entity::Entity()
{
    position = Vector2D();
}

void Entity::Move(Vector2D direction)
{

}

Vector2D Entity::GetPosition() const
{
    return position;
}
