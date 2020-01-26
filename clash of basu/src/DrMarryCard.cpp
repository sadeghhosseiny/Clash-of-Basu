#include "DrMarryCard.h"

DrMarryCard::DrMarryCard()
{
    //ctor
}

DrMarryCard::~DrMarryCard()
{
    //dtor
}

void DrMarryCard::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("DrMarry Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 430);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    window->draw(spr);
}

sf::Sprite& DrMarryCard::getspr(sf::Sprite spr)
{
    return spr;
}
