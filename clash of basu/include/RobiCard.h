#ifndef ROBICARD_H
#define ROBICARD_H

#include "HeroCards.h"

class RobiCard : public HeroCards
{
public:
    RobiCard();
    virtual ~RobiCard();
    virtual void DrawCard(sf::RenderWindow*);

protected:

private:
};

#endif // ROBICARD_H
