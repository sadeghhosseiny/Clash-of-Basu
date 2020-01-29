#ifndef COMMANDER_H
#define COMMANDER_H

#include "Hero.h"

class Commander : public Hero
{
public:
    Commander();
    virtual ~Commander();
    virtual void Strike();

protected:

private:
    Commander *commander;
};

#endif // COMMANDER_H
