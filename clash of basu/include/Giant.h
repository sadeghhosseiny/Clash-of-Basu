#ifndef GIANT_H
#define GIANT_H

#include "Hero.h"

class Giant : public Hero
{
public:
    Giant();
    virtual ~Giant();
    virtual void Strike();
    Giant* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;

private:
    Giant* giant;
};

#endif // GIANT_H
