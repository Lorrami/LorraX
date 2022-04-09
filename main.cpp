#include <iostream>

#include "2D/Shapes/RectangleShape.hpp"
#include "Base/Containers/LinkedList/LinkedList.h"

class Player : public RectangleShape{
public:
    explicit Player(Vector2f position) {
        this->Position = position;
        this->FillColor = Color::Red;
        this->Origin = 2;
    }
    ~Player() = delete;
};

int main() {
    auto players_list = new LinkedList<Player*>();

    players_list->Add(new Player(60.0f));
    players_list->Add(new Player(80.0f));
    players_list->Add(new Player(100.0f));

    for (auto it : *players_list) {
        std::cout << it->Position.x << " " << it->Position.y << std::endl;
    }

    return 0;
}