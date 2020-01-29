#include "../include/Robi.h"

Robi::Robi()
{
    Health = 12;
    Damage = 2;
}

Robi::~Robi()
{
    //dtor
}

void Robi::Strike()
{

}

Robi* Robi::getpointer()
{
    return robi;
}
