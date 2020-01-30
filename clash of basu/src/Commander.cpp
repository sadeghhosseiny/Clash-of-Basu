#include "../include/Commander.h"

Commander::Commander()
{
    Health = 7;
    Damage = 3;
}

Commander::~Commander()
{
    //dtor
}

void Commander::Strike()
{

}

Commander* Commander::getpointer()
{
    return commander;
}

void Commander::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}

