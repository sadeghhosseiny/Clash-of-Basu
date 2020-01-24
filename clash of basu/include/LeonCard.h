#ifndef LEONCARD_H
#define LEONCARD_H

#include "HeroCards.h"

class LeonCard : public HeroCards
{
    public:
        LeonCard();
        virtual ~LeonCard();
        virtual void DrawCard(sf::RenderWindow*);

    protected:

    private:
};

#endif // LEONCARD_H
