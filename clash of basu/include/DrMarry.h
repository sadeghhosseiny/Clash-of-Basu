#ifndef DRMARRY_H
#define DRMARRY_H

#include "Hero.h"

class DrMarry : public Hero
{
public:
    DrMarry();
    virtual ~DrMarry();
    virtual void Strike();
    DrMarry* getpointer();

private:
    DrMarry *drmarry;
};

#endif // DRMARRY_H
