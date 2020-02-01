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
    AlphaManCard* getpointer_card();

private:
    AlphaManCard* alphaman_card;
};

#endif // ALPHAMANCARD_H
