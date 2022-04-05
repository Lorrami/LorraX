#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct DefaultShape
{
    Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation;

    bool IsCrashed = false;
    void FindIntersection(DefaultShape *Object);

    DefaultShape();
};
