#include <iostream>

#include "2D/Shapes/RectangleShape.hpp"

int main() {
    RectangleShape* rect = new RectangleShape();
    rect->FillColor = Color::Red;
    rect->Size = {30.0f, 30.0f};
    rect->Origin = 2;

    std::cout << rect->Size.x << std::endl;
    return 0;
}
