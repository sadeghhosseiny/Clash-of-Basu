#ifndef HERO_H
#define HERO_H

class Hero
{
public:
    virtual void Strike () = 0;
protected:
    unsigned short int Health;

};

#endif // Hero
