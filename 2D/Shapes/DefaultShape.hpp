#pragma once

#include "../../Base/Math/Vector2f/Vector2f.hpp"
#include "../Colors/Color.hpp"

struct DefaultShape
{
    Vector2f Position {};
    Color FillColor {};
    Vector2f Size {};
    Vector2f Origin {};
    float Rotation {};

    virtual void FindIntersection(DefaultShape *Object) = 0;
};
