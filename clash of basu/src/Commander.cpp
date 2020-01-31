#include "../include/Commander.h"

Commander::Commander()
{
    //commander = new Commander();
    Health = 7;
    Damage = 3;
    heroname = "commander";
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

