#include "../include/DrMarry.h"

DrMarry::DrMarry()
{
    Health = 8;
    Damage = 2;
}

DrMarry::~DrMarry()
{
    //dtor
}

void DrMarry::Strike()
{

}

DrMarry* DrMarry::getpointer()
{
    return drmarry;
}

void DrMarry::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}
