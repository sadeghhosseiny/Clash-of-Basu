#ifndef KRATOSCARD_H
#define KRATOSCARD_H

#include "HeroCards.h"

class KratosCard : public HeroCards
{
public:
    KratosCard();
    virtual ~KratosCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr();

protected:

private:
};

#endif // KRATOSCARD_H
