#ifndef GIANT_H
#define GIANT_H

#include "Hero.h"

class Giant : public Hero
{
public:
    Giant();
    virtual ~Giant();
    virtual void Strike();
    Giant* getpointer();

private:
    Giant* giant;
};

#endif // GIANT_H
