#include "../include/StartMenu.h"
#include <iostream>
#include "../include/MenuControl.h"

StartMenu::StartMenu() : UI_Menu()
{
    menuName = menus::SM;
    tex.loadFromFile("startgame.jpg");
    spr.setTexture(tex);
    //font.loadFromFile("nightmare.TTF");
    titleText.setPosition(sf::Vector2f(630, 100));
    titleText.setString("Clash Of Basu");
    titleText.setFont(font);
    titleText.setCharacterSize(88);
    titleText.setColor(sf::Color::Yellow);
    OptionText1();
    OptionText2();
    OptionText3();
}

void StartMenu::display(sf::RenderWindow *window,menus& CurrentMenu)
{
    _window = window;
    //MouseClicked1();
    MouseClicked2(CurrentMenu);
    textButton1();
    textButton2();
    textButton3();
    window->draw(spr);
    window->draw(titleText);
    window->draw(optionText1);
    window->draw(optionText2);
    window->draw(optionText3);
}

void StartMenu::OptionText1()
{
    optionText1.setPosition(sf::Vector2f(860, 300));
    optionText1.setString("Start");
    //optionText1.setFont(font);
    optionText1.setCharacterSize(60);
    optionText1.setColor(sf::Color(  253, 254, 254 ));
}

void StartMenu::OptionText2()
{
    optionText2.setPosition(sf::Vector2f(825, 450));
    optionText2.setString("Options");
    //optionText2.setFont(font);
    optionText2.setCharacterSize(60);
    optionText2.setColor(sf::Color::White);
}

void StartMenu::OptionText3()
{
    optionText3.setPosition(sf::Vector2f(870, 600));
    optionText3.setString("Quit");
    //optionText3.setFont(font);
    optionText3.setCharacterSize(60);
    optionText3.setColor(sf::Color::White);
}

void StartMenu::textButton1()
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

void StartMenu::textButton2()
{
    if(optionText2.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText2.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText2.setColor(sf::Color::White);
    }
}

void StartMenu::textButton3()
{
    if(optionText3.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText3.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText3.setColor(sf::Color::White);
    }
}

/*void StartMenu::MouseClicked1()
{
    if(optionText3.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            _window->close();
        }
    }
}*/

void StartMenu::MouseClicked2(menus &CurrentMenu)
{
    if(optionText1.getGlobalBounds().contains(pos))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            // std::cout << "under construstion" << std::endl;
            CurrentMenu = menus::MM;
        }
    }
    if(optionText3.getGlobalBounds().contains(pos))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            _window->close();
        }
    }
}

