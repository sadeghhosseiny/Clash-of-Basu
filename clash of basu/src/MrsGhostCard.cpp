#include "../include/MrsGhostCard.h"

MrsGhostCard::MrsGhostCard()
{
    tex.loadFromFile("MrsGhost Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 220);
    spr.setScale(sf::Vector2f(0.85, 0.85));
}

MrsGhostCard::~MrsGhostCard()
{
    //dtor
}

void MrsGhostCard::DrawCard(sf::RenderWindow *window)
{
    /*tex.loadFromFile("MrsGhost Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 220);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    */
    window->draw(spr);
}

sf::Sprite& MrsGhostCard::getspr()
{
    return spr;
}
