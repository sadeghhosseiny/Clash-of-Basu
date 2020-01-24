#ifndef GIANTCRAD_H
#define GIANTCRAD_H

#include "HeroCards.h"

class GiantCrad : public HeroCards
{
    public:
        GiantCrad();
        virtual void DrawCard(sf::RenderWindow*);
        virtual ~GiantCrad();
    private:
};

#endif // GIANTCRAD_H
