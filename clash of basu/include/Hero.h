#ifndef HERO_H
#define HERO_H

class Hero
{
public:
    Hero();
    virtual void Strike() = 0;
protected:
    unsigned short int Health;
    unsigned short int Damage;

};

#endif // Hero
