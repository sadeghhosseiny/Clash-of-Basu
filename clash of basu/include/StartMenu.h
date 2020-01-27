#ifndef STARTMENU_H
#define STARTMENU_H
#include "UI_Menu.h"



class StartMenu : public UI_Menu
{
public:
    StartMenu();
    virtual void display(sf::RenderWindow *window, menus& CurrentMenu);
    //virtual void MouseClicked1();
    virtual void MouseClicked2(sf::Vector2f pos, menus& CurrentMenu);
    void OptionText1();
    void OptionText2();
    void OptionText3();
    virtual void textButton1();
    virtual void textButton2();
    virtual void textButton3();
private:
    sf::Text titleText;
};
#endif // STARTMENU_H
