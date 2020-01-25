#ifndef SNIPERCARD_H
#define SNIPERCARD_H

#include "HeroCards.h"

class SniperCard : public HeroCards
{
public:
    SniperCard();
    virtual ~SniperCard();
    virtual void DrawCard(sf::RenderWindow*);

protected:

private:
};

#endif // SNIPERCARD_H
