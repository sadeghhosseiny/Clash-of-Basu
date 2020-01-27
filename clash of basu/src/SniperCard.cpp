#include "../include/SniperCard.h"

SniperCard::SniperCard()
{
    //ctor
}

SniperCard::~SniperCard()
{
    //dtor
}

void SniperCard::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("Sniper Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 840);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    window->draw(spr);
}

sf::Sprite& SniperCard::getspr()
{
    return spr;
}
