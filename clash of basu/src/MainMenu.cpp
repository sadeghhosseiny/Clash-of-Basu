#include "../include/MainMenu.h"
#include "SFML/Graphics.hpp"
#include <iostream>

MainMenu::MainMenu() : UI_Menu()
{
    menuName = menus::MM;
    tex.loadFromFile("spartan.jpg");
    spr.setTexture(tex);
    OptionText1();
    textButton1();
    //fieldObj.DrawField(window);
    //MMDisplay(sf::RenderWindow* wind);
    //Field obj();
    //obj().DrawField();
}

void MainMenu::MouseClicked1()
{

}

void MainMenu::MouseClicked2(menus& CurrentMenus)
{
    if(optionText1.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            CurrentMenus = menus::SM;
        }
    }
}

void MainMenu::display(sf::RenderWindow* window, menus &CurrentMenu)
{
    //wind = window;
    window->draw(spr);
    window->draw(optionText1);
   // window->draw(MMspr);
    MouseClicked2(CurrentMenu);
    textButton1();
    fieldObj.DrawField(window);
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
    fieldObj.SelectedSquare(window);
}

/*void MainMenu::MMDisplay(sf::RenderWindow* wind)
{
    fieldObj.DrawField(wind);
}*/

void MainMenu::OptionText1()
{
    optionText1.setPosition(sf::Vector2f(1700, 980));
    optionText1.setString("Back");
    optionText1.setCharacterSize(60);
    optionText1.setColor(sf::Color::White);
    if (optionText1.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        std::cout << "fu" << std::endl;
    }
}

void MainMenu::textButton1()
{
    if(optionText1.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText1.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText1.setColor(sf::Color::White);
    }
}

void MainMenu::textButton2()
{

}

void MainMenu::textButton3()
{

}

/*void MainMenu::Field()
{
    MMtex.loadFromFile("Green.png");
    MMspr.setTexture(MMtex);
    MMspr.setPosition(sf::Vector2f(100, 100));
}*/
