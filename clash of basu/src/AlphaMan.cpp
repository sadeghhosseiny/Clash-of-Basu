#include "../include/AlphaMan.h"

AlphaMan::AlphaMan()
{
    //alphaman = new AlphaMan();
    //heroName = heroC::A;
    Health = 13;
    Damage = 2;
    //heroname = "alphaman";
}

AlphaMan::~AlphaMan()
{
    //delete alphaman;
}

void AlphaMan::Strike()
{

}
 //this is for polymorphic behavior. i push this in to the vector of father so that is pointer
AlphaMan* AlphaMan::getpointer()
{
    return alphaman;
}

//save position for battle
void AlphaMan::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}

/*heroC AlphaMan::get_hero_name()
{
    return heroName;
}*/
