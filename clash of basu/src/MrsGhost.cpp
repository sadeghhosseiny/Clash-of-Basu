#include "../include/MrsGhost.h"

MrsGhost::MrsGhost()
{
    Health = 15;
    Damage = 3;
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
