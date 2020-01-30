#ifndef KRATOS_H
#define KRATOS_H

#include "Hero.h"

class Kratos : public Hero
{
public:
    Kratos();
    virtual ~Kratos();
    virtual void Strike();
    Kratos* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    Kratos* kratos;
};

#endif // KRATOS_H
