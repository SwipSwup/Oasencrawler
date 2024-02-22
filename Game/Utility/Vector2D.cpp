//
// Created by david on 22/02/2024.
//

#include "Vector2D.h"

Vector2D::Vector2D()
{
    this->x = 0;
    this->y = 0;
}

Vector2D::Vector2D(int x, int y)
{
    this->x = x;
    this->y = y;
}

Vector2D Vector2D::operator+(Vector2D vec)
{
    return Vector2D(this->x + vec.x, this->y + vec.y);
}

void Vector2D::operator+=(Vector2D vec)
{
    this->x += vec.x;
    this->y += vec.y;
}
