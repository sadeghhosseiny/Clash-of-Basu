#include "../include/LeonCard.h"

LeonCard::LeonCard()
{
    tex.loadFromFile("Leon Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 15);
    spr.setScale(sf::Vector2f(0.85, 0.85));
}

LeonCard::~LeonCard()
{
    //dtor+
}

void LeonCard::DrawCard(sf::RenderWindow* window)
{
    /*tex.loadFromFile("Leon Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 15);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    */
    window->draw(spr);
}

sf::Sprite& LeonCard::getspr()
{
    return spr;
}
