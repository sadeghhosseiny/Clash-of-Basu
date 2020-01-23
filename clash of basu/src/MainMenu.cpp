#include "../include/MainMenu.h"

MainMenu::MainMenu() : UI_Menu()
{
    menuName = menus::MM;
    tex.loadFromFile("sword.jpg");
    spr.setTexture(tex);
    OptionText1();
    textButton1();
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
    MouseClicked2(CurrentMenu);
    textButton1();
    window->draw(spr);
    window->draw(optionText1);
}

void MainMenu::OptionText1()
{
    optionText1.setPosition(sf::Vector2f(1700, 100));
    optionText1.setString("Back");
    optionText1.setCharacterSize(60);
    optionText1.setColor(sf::Color::Black);
}

void MainMenu::textButton1()
{
    if(optionText1.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText1.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText1.setColor(sf::Color::Black);
    }
}

void MainMenu::textButton2()
{

}

void MainMenu::textButton3()
{

}
