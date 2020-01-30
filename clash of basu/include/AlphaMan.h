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
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;

private:
    AlphaMan* alphaman;
};

#endif // ALPHAMAN_H
