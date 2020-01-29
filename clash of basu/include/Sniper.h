#ifndef SNIPER_H
#define SNIPER_H

#include "Hero.h"

class Sniper : public Hero
{
public:
    Sniper();
    virtual ~Sniper();
    virtual void Strike();
    Sniper* getpointer();

private:
    Sniper* sniper;
};

#endif // SNIPER_H
