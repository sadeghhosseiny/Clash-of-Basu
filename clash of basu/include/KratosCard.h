#ifndef KRATOSCARD_H
#define KRATOSCARD_H

#include "HeroCards.h"

class KratosCard : public HeroCards
{
    public:
        KratosCard();
        virtual ~KratosCard();
        virtual void DrawCard(sf::RenderWindow*);

    protected:

    private:
};

#endif // KRATOSCARD_H
