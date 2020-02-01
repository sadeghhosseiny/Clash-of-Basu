#include "../include/Professor.h"

Professor::Professor()
{
    //professor = new Professor();
    Health = 11;
    Power = 3;
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
