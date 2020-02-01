#include "../include/MrsGhost.h"

MrsGhost::MrsGhost()
{
    //mrsghost = new MrsGhost();
    Health = 15;
    Power = 3;
}

MrsGhost::~MrsGhost()
{
    //dtor
}

void MrsGhost::Strike()
{

}

MrsGhost* MrsGhost::getpointer()
{
    return mrsghost;
}

void MrsGhost::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}
