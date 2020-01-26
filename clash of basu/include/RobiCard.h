#ifndef ROBICARD_H
#define ROBICARD_H

#include "HeroCards.h"

class RobiCard : public HeroCards
{
public:
    RobiCard();
    virtual ~RobiCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr(sf::Sprite spr);

protected:

private:
};

#endif // ROBICARD_H
