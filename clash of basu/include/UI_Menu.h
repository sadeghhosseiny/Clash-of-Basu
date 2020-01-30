#ifndef UI_MENU_H
#define UI_MENU_H
#include "SFML/Graphics.hpp"
#include "Field.h"
#include "Field2.h"
#include "GeneralDefines.h"
#include "Player.h"

//enum class menus{SM = 0, MM};

class UI_Menu
{
public:
    UI_Menu();
    virtual void display(sf::RenderWindow* window, menus& CurrnetMenu) = 0;
    //virtual void MouseClicked1() = 0;
    virtual void MouseClicked2(sf::Vector2f pos, menus& CurrentMenu) = 0;
    virtual void textButton1() = 0;
    virtual void textButton2() = 0;
    virtual void textButton3() = 0;
    menus getName();
    Player* p1ptr;
    Player* p2ptr;
    Player p1;
    Player p2;
    Field fieldobj;
    Field2 fieldobj2;
protected:
    sf::Text optionText1;
    sf::Text optionText2;
    sf::Text optionText3;
    sf::Texture tex;
    sf::Sprite spr;
    sf::Font font;
    sf::RenderWindow* _window;
    menus menuName;
};
#endif // UI_MENU_H
