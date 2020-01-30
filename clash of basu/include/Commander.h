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
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    Commander *commander;
};

#endif // COMMANDER_H
