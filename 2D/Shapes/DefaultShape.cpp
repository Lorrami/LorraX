#include "DefaultShape.hpp"

DefaultShape::DefaultShape()
{
    Position = {30.0f};
    Size = {30.0f};
    Rotation = 0;
    Origin = {0.0f};
    FillColor = Color::White;
}
void DefaultShape::FindIntersection(DefaultShape *Object)
{
    if (this->Position.x + this->Origin.x > Object->Position.x - Object->Origin.x
        && this->Position.y + this->Origin.y > Object->Position.y - Object->Origin.y

        && this->Position.x - this->Origin.x < Object->Position.x + Object->Origin.x
        && this->Position.y - this->Origin.y < Object->Position.y + Object->Origin.y)
    {
        this->IsCrashed = true;
    }
}
