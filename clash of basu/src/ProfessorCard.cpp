#include "ProfessorCard.h"

ProfessorCard::ProfessorCard()
{
    //ctor
}

ProfessorCard::~ProfessorCard()
{
    //dtor
}

void ProfessorCard::DrawCard(sf::RenderWindow* window)
{
    tex.loadFromFile("Professor Card.png");
    spr.setTexture(tex);
    spr.setPosition(200, 430);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    window->draw(spr);
}

sf::Sprite& ProfessorCard::getspr()
{
    return spr;
}
