#ifndef DRMARRY_H
#define DRMARRY_H

#include "Hero.h"

class DrMarry : public Hero
{
public:
    DrMarry();
    virtual ~DrMarry();
    virtual void Strike();
    DrMarry* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    DrMarry *drmarry;
};

#endif // DRMARRY_H
