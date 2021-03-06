#include <iostream>
#include <memory>

#include "2D/Shapes/RectangleShape.hpp"
#include "2D/RenderWindow/RenderWindow.h"
#include "Base/Containers/LinkedList/LinkedList.h"
#include "Base/Tools/DLog/StringWriterFactory.h"

struct Player : public RectangleShape{
    explicit Player(Vector2f position) {
        this->Position = position;
        this->FillColor = Color::Red;
        this->Origin = 2;
    }
    ~Player() = delete;
};

int main() {
    auto players_list = new LinkedList<Player*>();

    auto *window = new RenderWindow(600, 600, "Hello world");

    players_list->Add(new Player(60.0f));
    players_list->Add(new Player(80.0f));
    players_list->Add(new Player(100.0f));

    std::unique_ptr<IStringWriter> writer = StringWriterFactory::CreatWriter(OutputType::Console);

    writer->StringWriter("Writing the info(you're LorraX user, love you)\n");

    for (auto it : *players_list) {
        std::cout << it->Position.x << " " << it->Position.y << std::endl;
    }

    while(window->isOpen()) {
        window->display();
        window->clear();
        window->dispatchEvents();
    }

    return 777;
}