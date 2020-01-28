#include "MainMenu2.h"

MainMenu2::MainMenu2() : UI_Menu()
{
    menuName = menus::MM2;
    tex.loadFromFile("spartan.jpg");
    tex1.loadFromFile("alpha_man icon.png");
    tex2.loadFromFile("commander icon.png");
    tex3.loadFromFile("dr_marry icon.png");
    tex4.loadFromFile("giant icon.png");
    tex5.loadFromFile("kratos icon.png");
    tex6.loadFromFile("leon icon.png");
    tex7.loadFromFile("mrs_ghost icon.png");
    tex8.loadFromFile("professor icon.png");
    tex9.loadFromFile("robi icon.png");
    tex10.loadFromFile("sniper icon.png");
    hero_Cards = heroC::_None;
    spr.setTexture(tex);
    OptionText1();
}

MainMenu2::~MainMenu2()
{
    //dtor
}

void MainMenu2::MouseClicked2(sf::Vector2f pos, menus& CurrentMenu)
{
    if (optionText1.getGlobalBounds().contains(pos))
    {
        CurrentMenu = menus::MM;
    }
}

void MainMenu2::display(sf::RenderWindow* window, menus &CurrentMenu)
{
    window->draw(spr);
    window->draw(optionText1);
    textButton1();
    AMCobj.DrawCard(window);
    GCobj.DrawCard(window);
    CCobj.DrawCard(window);
    DRMCobj.DrawCard(window);
    KCobj.DrawCard(window);
    LCobj.DrawCard(window);
    MRSGCobj.DrawCard(window);
    PCobj.DrawCard(window);
    RCobj.DrawCard(window);
    SCobj.DrawCard(window);
}

void MainMenu2::OptionText1()
{
    optionText1.setPosition(sf::Vector2f(1700, 980));
    optionText1.setString("Back");
    optionText1.setCharacterSize(60);
    optionText1.setColor(sf::Color::White);


}
void MainMenu2::textButton1()
{
    if (optionText1.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText1.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText1.setColor(sf::Color::White);
    }
}

void MainMenu2::textButton2()
{

}

void MainMenu2::textButton3()
{

}




