#ifndef ROBI_H
#define ROBI_H

#include "Hero.h"

class Robi : public Hero
{
public:
    Robi();
    virtual ~Robi();
    virtual void Strike();
    Robi* getpointer();

private:
    Robi* robi;
};

#endif // ROBI_H
