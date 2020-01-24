#ifndef ALPHAMANCARD_H
#define ALPHAMANCARD_H

#include "SFML/Graphics.hpp"
#include "HeroCards.h"

class AlphaManCard : public HeroCards
{
    public:
        virtual void DrawCard(sf::RenderWindow *);
        AlphaManCard();
    private:
        sf::Texture tex;
        sf::Sprite spr;
};

#endif // ALPHAMANCARD_H
