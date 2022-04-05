#pragma once

#include "DefaultShape.hpp"

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct CircleShape : public DefaultShape
{
	explicit CircleShape(Vector2f Position = { 30.0f }, Color FillColor = Color::White, Vector2f Size = { 30.0f }, Vector2f Origin = { 0.0f }, float Rotation = 0)
	{
		this->Position = Position;
		this->FillColor = FillColor;
		this->Size = Size;
		this->Origin = Origin;
		this->Rotation = Rotation;
	}
};
