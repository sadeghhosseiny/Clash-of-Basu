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

protected:
    unsigned short int Health;
    unsigned short int Damage;
};

#endif // Hero
