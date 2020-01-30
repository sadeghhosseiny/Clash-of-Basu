#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Hero.h"

class Professor : public Hero
{
public:
    Professor();
    virtual ~Professor();
    virtual void Strike();
    Professor* getpointer();
    void setp_on_field(sf::Vector2i);
    sf::Vector2i position_on_field;


private:
    Professor* professor;
};

#endif // PROFESSOR_H
