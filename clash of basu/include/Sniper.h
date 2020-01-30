#ifndef SNIPER_H
#define SNIPER_H

#include "Hero.h"

class Sniper : public Hero
{
public:
    Sniper();
    virtual ~Sniper();
    virtual void Strike();
    Sniper* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    Sniper* sniper;
};

#endif // SNIPER_H
