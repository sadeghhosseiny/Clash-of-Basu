#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/MenuControl.h"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height)
                            , "Clash of Basu", sf::Style::Resize | sf::Style::Fullscreen);
    sf::Event event;
    sf::Texture tex;

    MenuControl Obj;

    sf::Sprite spr(tex);
    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    window.close();
                }
            }
        }
        window.clear();
        Obj.display(&window);
        window.display();
    }
}
