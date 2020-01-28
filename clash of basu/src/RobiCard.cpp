#include "../include/RobiCard.h"

RobiCard::RobiCard()
{
    tex.loadFromFile("Robi Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 630);
    spr.setScale(sf::Vector2f(0.85, 0.85));
}

RobiCard::~RobiCard()
{
    //dtor
}

void RobiCard::DrawCard(sf::RenderWindow* window)
{
   /* tex.loadFromFile("Robi Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 630);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    */
    window->draw(spr);
}

sf::Sprite& RobiCard::getspr()
{
    return spr;
}
