#ifndef DRMARRYCARD_H
#define DRMARRYCARD_H

#include "HeroCards.h"

class DrMarryCard : public HeroCards
{
public:
    DrMarryCard();
    virtual ~DrMarryCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr(sf::Sprite spr);

protected:

private:
};

#endif // DRMARRYCARD_H
