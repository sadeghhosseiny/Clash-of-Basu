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
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    MrsGhost* mrsghost;
};

#endif // MRSGHOST_H
