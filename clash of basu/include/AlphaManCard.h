#ifndef ALPHAMANCARD_H
#define ALPHAMANCARD_H

#include "SFML/Graphics.hpp"
#include "HeroCards.h"

class AlphaManCard : public HeroCards
{
public:
    virtual void DrawCard(sf::RenderWindow *);
    AlphaManCard();
    sf::Sprite& getspr();

private:
};

#endif // ALPHAMANCARD_H
