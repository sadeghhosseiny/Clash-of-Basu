#ifndef LEON_H
#define LEON_H

#include "Hero.h"

class Leon : public Hero
{
public:
    Leon();
    virtual ~Leon();
    virtual void Strike();
    Leon* getpointer();

private:
    Leon* leon;
};

#endif // LEON_H
