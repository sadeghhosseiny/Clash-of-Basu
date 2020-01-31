#ifndef PLAYER_H
#define PLAYER_H

#include "Hero.h"
#include <vector>
/*#include "SFML/Graphics.hpp"
#include "GeneralDefines.h"
#include "UI_Menu.h"
#include "Field.h"
#include "AlphaManCard.h"
#include "GiantCrad.h"
#include "CommanderCard.h"
#include "DrMarryCard.h"
#include "KratosCard.h"
#include "LeonCard.h"
#include "MrsGhostCard.h"
#include "ProfessorCard.h"
#include "RobiCard.h"
#include "SniperCard.h"
*/
#include "AlphaMan.h"
#include "Commander.h"
#include "Giant.h"
#include "DrMarry.h"
#include "Kratos.h"
#include "Leon.h"
#include "MrsGhost.h"
#include "Professor.h"
#include "Robi.h"
#include "Sniper.h"

class Player
{
public:
    Player();
    virtual ~Player();
    std::vector<Hero*>& getvec();
    //void setvec(Hero*);
    AlphaMan aobj;
    Commander cobj;
    Giant gobj;
    DrMarry drmobj;
    Kratos kobj;
    Leon lobj;
    MrsGhost mrsgobj;
    Professor pobj;
    Robi robj;
    Sniper sobj;

private:
    std::vector<Hero*>HeroVector;

};

#endif // PLAYER_H
