#include "../include/Robi.h"

Robi::Robi()
{
    //robi = new Robi();
    Health = 12;
    Power = 2;
}

Robi::~Robi()
{
    //dtor
}

void Robi::Strike()
{

}

Robi* Robi::getpointer()
{
    return robi;
}

void Robi::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}

