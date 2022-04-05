#pragma once

#include "DefaultShape.hpp"

#include "../../Base/Math/Vector2f/Vector2f.hpp"
#include "../Colors/Color.hpp"

struct RectangleShape : public DefaultShape
{
public:
    explicit RectangleShape(Vector2f Position = {30.0f}, Color FillColor = Color::White, Vector2f Size = {30.0f}, Vector2f Origin = {0.0f}, float Rotation = 0) {
        this->Position = Position;
        this->FillColor = FillColor;
        this->Size = Size;
        this->Origin = Origin;
        this->Rotation = Rotation;
    }

    Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation;

    bool IsCrashed = false;
    void FindIntersection(DefaultShape *Object);
};
