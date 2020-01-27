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
    //hero_Cards = heroC::_None;
    //ChooseCards();
    //fieldObj.DrawField(window);
    //MMDisplay(sf::RenderWindow* wind);
    //Field obj();
    //obj().DrawField();
}

/*void MainMenu::MouseClicked1()
{

}*/

void MainMenu::MouseClicked2(sf::Vector2f pos, menus& CurrentMenu)
{
    if(optionText1.getGlobalBounds().contains(pos))
    {
            CurrentMenu = menus::SM;
    }
}

void MainMenu::display(sf::RenderWindow* window, menus &CurrentMenu)
{
    //wind = window;
    window->draw(spr);
    window->draw(optionText1);
    // window->draw(MMspr);
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
    fieldObj.ChooseCards(window, static_cast<sf::Vector2f>(sf::Mouse::getPosition()), hero_Cards);
    //std::cout << static_cast<int> (hero_Cards) << std::endl;
    //fieldObj.Draw_Icons(static_cast<sf::Vector2f>(sf::Mouse::getPosition()), window, hero_Cards);
    //fieldObj.SelectedSquare(window);
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

/*void MainMenu::ChooseCards()
{
    if (AMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
            sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::A;
    }
    else if (CCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::C;
    }
    else if (DRMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::Dr;
    }
    else if (GCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::G;
    }
    else if (KCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::K;
    }
    else if (LCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::L;
    }
    else if (MRSGCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::Mrs;
    }
    else if (PCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::P;
    }
    else if (RCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::R;
    }
    else if (SCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::S;
    }
    else
    {
        hero_Cards = heroC::_None;
    }
    for (int i = 0; i < fieldObj.getrow(); i++)
    {
        for (int j = 0; j < fieldObj.getcol(); j++)
        {
            if (fieldObj.square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
                sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                fieldObj.Draw_Icons(sf::RenderWindow* window, static_cast<sf::Vector2f>(sf::Mouse::getPosition()), hero_Cards);
            }
        }
    }
}*/

/*void MainMenu::Field()
{
    MMtex.loadFromFile("Green.png");
    MMspr.setTexture(MMtex);
    MMspr.setPosition(sf::Vector2f(100, 100));
}*/
