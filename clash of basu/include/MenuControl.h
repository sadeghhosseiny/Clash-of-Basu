#ifndef MENUCONTROL_H
#define MENUCONTROL_H

#include "UI_Menu.h"
#include "StartMenu.h"
#include "MainMenu.h"
#include "Field.h"
#include <vector>


class MenuControl
{
public:
    MenuControl();
    void display(sf::RenderWindow* window);
private:
    menus CurrentMenu = menus::SM;
    //CurrentMenu = menus::MM;
    std::vector <UI_Menu*> menuVec;
    StartMenu SMenu1;
    MainMenu Mmenu;
    //sf::RenderWindow* w;

};

#endif // MENUCONTROL_H
