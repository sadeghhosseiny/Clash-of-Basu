#ifndef BATTLEMENU_H
#define BATTLEMENU_H

#include "UI_Menu.h"
//#include "Field.h"
//#include "Field2.h"
#include "MainMenu.h"
#include "Hero.h"

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
    sf::Texture tex1;
    sf::Texture tex2;
    sf::Texture tex3;
    sf::Texture tex4;
    sf::Texture tex5;
    sf::Texture tex6;
    sf::Texture tex7;
    sf::Texture tex8;
    sf::Texture tex9;
    sf::Texture tex10;
    //heroC hero_Cards;
    //MainMenu mmobj;
};

#endif // BATTLEMENU_H
