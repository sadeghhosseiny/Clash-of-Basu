#include "GiantCrad.h"

GiantCrad::GiantCrad()
{
    //ctor
}

GiantCrad::~GiantCrad()
{
    //dtor
}

void GiantCrad::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("Giant Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 840);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    window->draw(spr);
}

sf::Sprite& GiantCrad::getspr(sf::Sprite spr)
{
    return spr;
}
