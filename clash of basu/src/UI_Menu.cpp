#include "../include/UI_Menu.h"

/*void UI_Menu::display(sf::RenderWindow* window)
{
    tex.loadFromFile("pmain.jpg");
    spr.setTexture(tex);
    window->draw(spr);
}
*/

UI_Menu::UI_Menu()
{
    p1ptr = new Player();
    p2ptr = new Player();
    //_window = new sf::RenderWindow();
    font.loadFromFile("nightmare.TTF");
    optionText1.setFont(font);
    optionText2.setFont(font);
    optionText3.setFont(font);
}



menus UI_Menu::getName()
{
    return menuName;
}
