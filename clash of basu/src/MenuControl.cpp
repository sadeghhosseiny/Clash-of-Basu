#include "../include/MenuControl.h"

MenuControl::MenuControl()
{
   menuVec.push_back(&SMenu1);
}

void MenuControl::MouseClicked1()
{

}

void MenuControl::MouseClicked2()
{

}
void MenuControl::display(sf::RenderWindow* window)
{
    for (auto& menu : menuVec)
        if (menu->getName() == CurrentMenu)
        {
            menu->display(window);
            break;
        }

}
