#ifndef MAINMENU2_H
#define MAINMENU2_H

#include "UI_Menu.h"
#include "GeneralDefines.h"
#include "Field.h"
#include "Field2.h"
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
#include "Player.h"

class MainMenu2 : public UI_Menu
{
public:
    MainMenu2();
    virtual ~MainMenu2();
    virtual void display(sf::RenderWindow* window, menus& CurrentMenu);
    virtual void MouseClicked2(sf::Vector2f pos, menus& CurrentMenu);
    virtual void textButton1();
    virtual void textButton2()override;
    virtual void textButton3()override;
    void OptionText1();
    void ChooseCards(sf::RenderWindow*, sf::Vector2f, heroC);

protected:

private:
    sf::Texture tex1;
    sf::Texture tex2;
    sf::Texture tex3;
    sf::Texture tex4;
    sf::Texture tex5;
    sf::Texture tex6;
    sf::Texture tex7;
    sf::Texture tex8;
    sf::Texture tex9;
    sf::Texture tex10;
    AlphaManCard AMCobj;
    Field2 fieldObj2;
    GiantCrad GCobj;
    CommanderCard CCobj;
    DrMarryCard DRMCobj;
    KratosCard KCobj;
    LeonCard LCobj;
    MrsGhostCard MRSGCobj;
    ProfessorCard PCobj;
    RobiCard RCobj;
    SniperCard SCobj;
    heroC hero_Cards;
};

#endif // MAINMENU2_H
