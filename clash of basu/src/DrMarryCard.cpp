#include "../include/DrMarryCard.h"

DrMarryCard::DrMarryCard()
{
    tex.loadFromFile("DrMarry Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 430);
    spr.setScale(sf::Vector2f(0.85, 0.85));
}

DrMarryCard::~DrMarryCard()
{
    //dtor
}

void DrMarryCard::DrawCard(sf::RenderWindow* window)
{
    /*tex.loadFromFile("DrMarry Card.png");
    spr.setTexture(tex);
    spr.setPosition(20, 430);
    spr.setScale(sf::Vector2f(0.85, 0.85));
    */
    window->draw(spr);

}

sf::Sprite& DrMarryCard::getspr( )
{
    return spr;
}
