#include "../include/Kratos.h"

Kratos::Kratos()
{
    //kratos = new Kratos();
    Health = 15;
    Damage = 3;
}

Kratos::~Kratos()
{
    //dtor
}

void Kratos::Strike()
{

}

Kratos* Kratos::getpointer()
{
    return kratos;
}

void Kratos::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}

