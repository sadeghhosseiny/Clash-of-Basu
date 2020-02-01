#ifndef MRSGHOSTCARD_H
#define MRSGHOSTCARD_H

#include "HeroCards.h"

class MrsGhostCard : public HeroCards
{
public:
    MrsGhostCard();
    virtual ~MrsGhostCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr();

private:
};

#endif // MRSGHOSTCARD_H
