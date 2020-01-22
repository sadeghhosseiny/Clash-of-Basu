#ifndef STARTMENU_H
#define STARTMENU_H
#include "UI_Menu.h"



class StartMenu : public UI_Menu
{
public:
    StartMenu();
    virtual void display(sf::RenderWindow *window);
    virtual void MouseClicked1();
    virtual void MouseClicked2();
    void OptionText1();
    void OptionText2();
    void OptionText3();
    void textButton1();
    void textButton2();
    void textButton3();
private:
    sf::Font font;
    sf::Text titlText;
};
#endif // STARTMENU_H
