#ifndef MAINMENU_H
#define MAINMENU_H

#include "UI_Menu.h"
#include "GeneralDefines.h"
//#include "Field.h"
/*#include "AlphaManCard.h"
#include "GiantCrad.h"
#include "CommanderCard.h"
#include "DrMarryCard.h"
#include "KratosCard.h"
#include "LeonCard.h"
#include "MrsGhostCard.h"
#include "ProfessorCard.h"
#include "RobiCard.h"
#include "SniperCard.h"
#include "Player.h"*/
/*#include "AlphaMan.h"
#include "Commander.h"
#include "Giant.h"
#include "DrMarry.h"
#include "Kratos.h"
#include "Leon.h"
#include "MrsGhost.h"
#include "Professor.h"
#include "Robi.h"
#include "Sniper.h"
*/
class MainMenu : public UI_Menu
{
public:
    MainMenu();
    virtual void display(sf::RenderWindow* window, menus& CurrentMenu);
    //virtual void MouseClicked1()override;
    virtual void MouseClicked2(sf::Vector2f pos, menus& CurrentMenu);
    virtual void textButton1();
    virtual void textButton2()override;
    virtual void textButton3()override;
    void OptionText1();
    void OptionText2();
    void ChooseCards(sf::Vector2f, heroC&);
    //void setp_on_field(sf::Vector2i);
    //void HiddenCards(sf::Vector2i);
    //sf::Vector2i& getp_on_field();
    //void display2(sf::RenderWindow*, heroC);
    //void nx(sf::Vector2f, menus&);
    //void MMDisplay(sf::RenderWindow*);
    //void Field();
private:
    //sf::Vector2i position_on_field;
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
    /*AlphaMan aobj;
    Giant gobj;
    Commander cobj;
    DrMarry drmobj;
    Kratos kobj;
    Leon lobj;
    MrsGhost mrsgobj;
    Professor pobj;
    Robi robj;
    Sniper sobj;*/
    //sf::RenderWindow* wind;
    //Field fieldObj;
    /*AlphaManCard AMCobj;
    GiantCrad GCobj;
    CommanderCard CCobj;
    DrMarryCard DRMCobj;
    KratosCard KCobj;
    LeonCard LCobj;
    MrsGhostCard MRSGCobj;
    ProfessorCard PCobj;
    RobiCard RCobj;
    SniperCard SCobj;*/
    //heroC hero_Cards; //object from enum for drawing pictures in Field
};

#endif // MAINMENU_H
