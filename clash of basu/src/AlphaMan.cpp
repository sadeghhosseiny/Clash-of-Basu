#include "../include/AlphaMan.h"

AlphaMan::AlphaMan()
{
    Health = 13;
    Damage = 2;
    //hn = "alphaman";
}

AlphaMan::~AlphaMan()
{
    //dtor
}

void AlphaMan::Strike()
{

}

AlphaMan* AlphaMan::getpointer()
{
    return alphaman;
}
