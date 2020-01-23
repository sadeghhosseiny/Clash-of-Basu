#ifndef MAINMENU_H
#define MAINMENU_H
#include "UI_Menu.h"

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
private:
    sf::Text MMtext;
};

#endif // MAINMENU_H
