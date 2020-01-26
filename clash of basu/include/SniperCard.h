#ifndef SNIPERCARD_H
#define SNIPERCARD_H

#include "HeroCards.h"

class SniperCard : public HeroCards
{
public:
    SniperCard();
    virtual ~SniperCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr();

protected:

private:
};

#endif // SNIPERCARD_H
