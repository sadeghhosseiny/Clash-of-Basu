#include "../include/AlphaManCard.h"
#include <iostream>

AlphaManCard::AlphaManCard()
{


}

void AlphaManCard::DrawCard(sf::RenderWindow *window)
{
    tex.loadFromFile("AlphaMan Card.png");
    spr.setTexture(tex);
    spr.setPosition(20,15);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    //sf::Color OC = spr.getColor();
    /*if (spr.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
       spr.setColor(sf::Color(215, 189, 226 ));
    }
    /*else
    {
        spr.setColor(sf::Color);
    }
    */
    window->draw(spr);
}

sf::Sprite& AlphaManCard::getspr()
{
    return spr;
}

