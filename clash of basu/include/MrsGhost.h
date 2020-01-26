#ifndef MRSGHOST_H
#define MRSGHOST_H

#include "Hero.h"

class MrsGhost : public Hero
{
    public:
        MrsGhost();
        virtual ~MrsGhost();
        virtual void Strike();

    protected:

    private:
};

#endif // MRSGHOST_H
