#ifndef MENUCONTROL_H
#define MENUCONTROL_H

#include "UI_Menu.h"
#include "StartMenu.h"
#include "MainMenu.h"
#include "MainMenu2.h"
#include "BattleMenu.h"
#include <vector>


class MenuControl
{
public:
    MenuControl();
    void display(sf::RenderWindow* window);
    void MouseClicked(sf::Vector2f pos);
   // menus& geten();

private:
    menus CurrentMenu = menus::SM;
    //CurrentMenu = menus::MM;
    std::vector <UI_Menu*> menuVec;
    StartMenu SMenu1;
    MainMenu Mmenu;
    MainMenu2 Mmenu2;
    BattleMenu Bmenu;
    //sf::Vector2f pos;
    //sf::RenderWindow* w;

};

#endif // MENUCONTROL_H
