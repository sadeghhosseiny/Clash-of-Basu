#include "KratosCard.h"

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
    window->draw(spr);
}
