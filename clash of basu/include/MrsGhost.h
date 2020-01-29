#ifndef MRSGHOST_H
#define MRSGHOST_H

#include "Hero.h"

class MrsGhost : public Hero
{
public:
    MrsGhost();
    virtual ~MrsGhost();
    virtual void Strike();
    MrsGhost* getpointer();

private:
    MrsGhost* mrsghost;
};

#endif // MRSGHOST_H
