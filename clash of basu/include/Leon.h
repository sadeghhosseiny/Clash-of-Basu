#ifndef LEON_H
#define LEON_H

#include "Hero.h"

class Leon : public Hero
{
public:
    Leon();
    virtual ~Leon();
    virtual void Strike();
    Leon* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    Leon* leon;
};

#endif // LEON_H
