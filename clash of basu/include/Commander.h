#ifndef COMMANDER_H
#define COMMANDER_H

#include "Hero.h"

class Commander : public Hero
{
public:
    Commander();
    virtual ~Commander();
    virtual void Strike();
    Commander* getpointer();

private:
    Commander *commander;
};

#endif // COMMANDER_H
