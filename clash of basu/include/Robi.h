#ifndef ROBI_H
#define ROBI_H

#include "Hero.h"

class Robi : public Hero
{
public:
    Robi();
    virtual ~Robi();
    virtual void Strike();
    Robi* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    Robi* robi;
};

#endif // ROBI_H
