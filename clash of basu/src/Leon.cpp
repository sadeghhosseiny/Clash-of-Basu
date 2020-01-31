#include "../include/Leon.h"

Leon::Leon()
{
    //leon = new Leon();
    Health = 10;
    Damage = 3;
}

Leon::~Leon()
{
    //dtor
}

void Leon::Strike()
{

}

Leon* Leon::getpointer()
{
    return leon;
}

void Leon::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}
