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
