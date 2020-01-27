#ifndef MAINMENU_H
#define MAINMENU_H

#include "UI_Menu.h"
#include "GeneralDefines.h"
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
    //void ChooseCards();
    //void MMDisplay(sf::RenderWindow*);
    //void Field();
private:
    //sf::Texture MMtex;
    //sf::Sprite MMspr;
    //sf::RenderWindow* wind;
    AlphaManCard AMCobj;
    Field fieldObj;
    GiantCrad GCobj;
    CommanderCard CCobj;
    DrMarryCard DRMCobj;
    KratosCard KCobj;
    LeonCard LCobj;
    MrsGhostCard MRSGCobj;
    ProfessorCard PCobj;
    RobiCard RCobj;
    SniperCard SCobj;
    heroC hero_Cards; //object from enum for drawing pictures in Field
};

#endif // MAINMENU_H
