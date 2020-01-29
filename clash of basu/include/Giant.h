#ifndef GIANT_H
#define GIANT_H

#include "Hero.h"

class Giant : public Hero
{
public:
    Giant();
    virtual ~Giant();
    virtual void Strike();

protected:

private:
    unsigned short int Health;
    unsigned short int Damage;

};

#endif // GIANT_H
