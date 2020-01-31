#include "Giant.h"

Giant::Giant()
{
    giant = new Giant();
    Health = 20;
    Damage = 4;
}

Giant::~Giant()
{
    //dtor
}

void Giant::Strike()
{

}

Giant* Giant::getpointer()
{
    return giant;
}

void Giant::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}

