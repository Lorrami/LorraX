#include <iostream>

#include "2D/Shapes/RectangleShape.hpp"

int main() {
    auto rect = new RectangleShape();
    rect->FillColor = Color::Red;
    rect->Origin = 2;

    std::cout << rect->Size.x << std::endl;
    return 0;
}
