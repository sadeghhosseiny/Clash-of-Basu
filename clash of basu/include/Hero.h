#ifndef HERO_H
#define HERO_H
#include <string>

class Hero
{
public:
    Hero();
    virtual void Strike() = 0;
    //std::string hn;

protected:
    unsigned short int Health;
    unsigned short int Damage;
};

#endif // Hero
