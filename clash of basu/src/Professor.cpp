#include "../include/Professor.h"

Professor::Professor()
{
    Health = 11;
    Damage = 3;
}

Professor::~Professor()
{
    //dtor
}

void Professor::Strike()
{

}

Professor* Professor::getpointer()
{
    return professor;
}

void Professor::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}
