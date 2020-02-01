#include "../include/AlphaManCard.h"
#include <iostream>

AlphaManCard::AlphaManCard()
{
    //alphaman_card = new AlphaManCard();
    tex.loadFromFile("AlphaMan Card.png");
    spr.setTexture(tex);
    spr.setPosition(20,15);
    spr.setScale(sf::Vector2f(0.85, 0.85));
}

void AlphaManCard::DrawCard(sf::RenderWindow *window)
{
    window->draw(spr);
}

sf::Sprite& AlphaManCard::getspr()
{
    return spr;
}

