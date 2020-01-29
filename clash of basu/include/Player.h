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
class Player
{
public:
    Player();
    virtual ~Player();
    std::vector<Hero*>& getvec();

protected:

private:
    std::vector<Hero*>HeroVector;

};

#endif // PLAYER_H
