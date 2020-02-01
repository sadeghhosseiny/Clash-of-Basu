#include "../include/Sniper.h"

Sniper::Sniper()
{
    //sniper = new Sniper();
    Health = 9;
    Power = 4;
}

Sniper::~Sniper()
{
    //dtor
}

void Sniper::Strike()
{

}

Sniper* Sniper::getpointer()
{
    return sniper;
}

void Sniper::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}
