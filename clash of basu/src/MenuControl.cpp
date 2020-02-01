#include "../include/MenuControl.h"

MenuControl::MenuControl()
{
    menuVec.push_back(&SMenu1);
    menuVec.push_back(&Mmenu);
    menuVec.push_back(&Mmenu2);
    menuVec.push_back(&Bmenu);
    //w = window;
}


void MenuControl::MouseClicked(sf::Vector2f pos)
{
    for (auto& menu : menuVec)
        if (menu->getName() == CurrentMenu)
        {
            menu->MouseClicked2(pos, CurrentMenu);
            break;
        }
    Bmenu.p1ptr = &Mmenu.p1;
    Bmenu.p2ptr = &Mmenu2.p2;
}

void MenuControl::display(sf::RenderWindow* window)
{
    for (auto& menu : menuVec)
        if (menu->getName() == CurrentMenu)
        {
            menu->display(window, CurrentMenu);
            //menu->MouseClicked(sf::Vector2f pos, CurrentMenu);
            break;
        }
}

/*menus& MenuControl::geten()
{
    return CurrentMenu;
}*/
