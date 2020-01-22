#ifndef UI_MENU_H
#define UI_MENU_H
#include "SFML/Graphics.hpp"


enum class menus{SM};

class UI_Menu
{
public:
    //UI_Menu();
    virtual void display(sf::RenderWindow* window) = 0;
    virtual void MouseClicked1() = 0;
    virtual void MouseClicked2() = 0;
    menus getName();
protected:
    sf::Text optionText1;
    sf::Text optionText2;
    sf::Text optionText3;
    sf::Texture tex;
    sf::Sprite spr;
    sf::RenderWindow* _window;
    menus menuName;
};
#endif // UI_MENU_H
