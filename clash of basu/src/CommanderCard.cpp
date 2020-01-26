#include "CommanderCard.h"

CommanderCard::CommanderCard()
{
    //ctor
}

CommanderCard::~CommanderCard()
{
    //dtor
}

void CommanderCard::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("Commander Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 220);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    window->draw(spr);
}

sf::Sprite& CommanderCard::getspr()
{
    return spr;
}
