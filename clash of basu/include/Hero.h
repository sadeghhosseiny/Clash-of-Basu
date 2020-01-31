#ifndef HERO_H
#define HERO_H
#include "SFML/Graphics.hpp"

class Hero
{
public:
    Hero();
    virtual void Strike() = 0;
    //std::string hn;
    std::string heroname;
    unsigned short int Health;

protected:
    unsigned short int Damage;
};

#endif // Hero
