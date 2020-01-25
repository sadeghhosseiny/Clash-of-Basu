#include "KratosCard.h"
#include <iostream>

KratosCard::KratosCard()
{
    //ctor
}

KratosCard::~KratosCard()
{
    //dtor
}

void KratosCard::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("Kratos Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 630);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    if (spr.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        std::cout << "fuck" << std::endl;
    }
    window->draw(spr);
}
