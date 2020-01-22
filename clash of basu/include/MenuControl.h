#ifndef MENUCONTROL_H
#define MENUCONTROL_H

#include "UI_Menu.h"
#include "StartMenu.h"
#include <vector>


class MenuControl : public UI_Menu
{
public:
    MenuControl();
    void display(sf::RenderWindow* window);
    virtual void MouseClicked1()override;
    virtual void MouseClicked2()override;
private:
    menus CurrentMenu = menus::SM;
    std::vector <UI_Menu*> menuVec;
    StartMenu SMenu1;

};

#endif // MENUCONTROL_H
