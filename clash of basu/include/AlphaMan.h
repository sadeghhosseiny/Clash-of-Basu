#ifndef ALPHAMAN_H
#define ALPHAMAN_H

#include "Hero.h"

class AlphaMan : public Hero
{
public:
    AlphaMan();
    virtual ~AlphaMan();
    virtual void Strike();
    AlphaMan* getpointer();

protected:

private:
    AlphaMan* alphaman;
};

#endif // ALPHAMAN_H
