#include "RectangleShape.hpp"

void RectangleShape::FindIntersection(DefaultShape *Object) {
    if (this->Position.x + this->Origin.x > Object->Position.x - Object->Origin.x
        && this->Position.y + this->Origin.y > Object->Position.y - Object->Origin.y

        && this->Position.x - this->Origin.x < Object->Position.x + Object->Origin.x
        && this->Position.y - this->Origin.y < Object->Position.y + Object->Origin.y)
    {
        this->IsCrashed = true;
    }
}
