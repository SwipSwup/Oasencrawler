//
// Created by david on 22/02/2024.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H

struct Vector2D {
public:
    Vector2D();
    Vector2D(int x, int y);

    int x, y;

    Vector2D operator+(Vector2D vec);
    void operator+=(Vector2D vec);
};

#endif //VECTOR2D_H
