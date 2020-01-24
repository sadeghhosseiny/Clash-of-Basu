#include "GiantCrad.h"

GiantCrad::GiantCrad()
{
    //ctor
}

void GiantCrad::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("Giant Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 840);
    spr.setScale(sf::Vector2f(0.9, 0.9));
    window->draw(spr);
}

GiantCrad::~GiantCrad()
{
    //dtor
}
