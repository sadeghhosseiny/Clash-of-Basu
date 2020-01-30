#ifndef BATTLEMENU_H
#define BATTLEMENU_H

#include "UI_Menu.h"
#include "GeneralDefines.h"
//#include "Field.h"
//#include "Field2.h"
#include "MainMenu.h"
#include "Player.h"

class BattleMenu : public UI_Menu
{
public:
    BattleMenu();
    virtual ~BattleMenu();
    virtual void display(sf::RenderWindow*, menus&);
    virtual void MouseClicked2(sf::Vector2f, menus&);
    virtual void textButton1();
    virtual void textButton2()override;
    virtual void textButton3()override;
    void situation(sf::Vector2f);

private:
    sf::Texture texbm1;
    MainMenu mmobj;
};

#endif // BATTLEMENU_H
