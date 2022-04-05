#pragma once

#include "DefaultShape.hpp"

#include "../../Base/Math/Vector2f/Vector2f.hpp"
#include "../Colors/Color.hpp"

struct CircleShape : public DefaultShape
{
	explicit CircleShape(Vector2f Position = { 30.0f }, Color FillColor = Color::White, Vector2f Radius = { 30.0f }, Vector2f Origin = { 0.0f }, float Rotation = 0)
	{
		this->Position = Position;
		this->FillColor = FillColor;
		this->Radius = Radius;
		this->Origin = Origin;
		this->Rotation = Rotation;
	}
    Vector2f Position;
    Color FillColor;
    Vector2f Radius;
    Vector2f Origin;
    float Rotation;

    bool IsCrashed = false;
    void FindIntersection(DefaultShape *Object) override;
};
