#ifndef MAINMENU_H
#define MAINMENU_H
#include "UI_Menu.h"
#include "../include/Field.h"

class MainMenu : public UI_Menu
{
public:
    MainMenu();
    virtual void display(sf::RenderWindow* window, menus& CurrentMenu);
    virtual void MouseClicked1()override;
    virtual void MouseClicked2(menus& CurrentMenu);
    virtual void textButton1();
    virtual void textButton2()override;
    virtual void textButton3()override;
    void OptionText1();
    //void Field();
private:
    //sf::Texture MMtex;
    //sf::Sprite MMspr;

    Field fieldObj;
};

#endif // MAINMENU_H
