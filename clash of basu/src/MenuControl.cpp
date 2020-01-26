#include "../include/MenuControl.h"

MenuControl::MenuControl()
{
   menuVec.push_back(&SMenu1);
   menuVec.push_back(&Mmenu);
   //w = window;
}

void MenuControl::display(sf::RenderWindow* window)
{
    for (auto& menu : menuVec)
        if (menu->getName() == CurrentMenu)
        {
            menu->display(window, CurrentMenu);
            break;
        }
}
