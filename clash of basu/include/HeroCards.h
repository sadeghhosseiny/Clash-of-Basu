#ifndef HEROCARDS_H
#define HEROCARDS_H

#include "SFML/Graphics.hpp"

class HeroCards
{
    public:
        HeroCards();
        virtual void DrawCard(sf::RenderWindow*) = 0;
        //virtual ~HeroCards();
    protected:
        sf::Texture tex;
        sf::Sprite spr;
};

#endif // HEROCARDS_H
