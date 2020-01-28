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
    ChooseCards(window, static_cast<sf::Vector2f>(sf::Mouse::getPosition()), hero_Cards);
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
void MainMenu2::ChooseCards(sf::RenderWindow* window, sf::Vector2f, heroC hc)
{
    if (AMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
            sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::A;
        //cout << static_cast<int>(hero_Cards) << endl;
    }
    else if (CCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::C;
        //cout << static_cast<int>(hero_Cards) << endl;
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

    for (int i = 0; i < fieldObj.getrow(); i++)
    {
        for (int j = 0; j < fieldObj.getcol(); j++)
        {
            if (fieldObj.square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
                    sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                //cout << static_cast<int>(hero_Cards) << endl;
                switch (hc)
                {
                case heroC::A :
                {
                    fieldObj.square[i][j].setTexture(&tex1);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::C :
                {
                    //tex2.loadFromFile("commander icon.png");
                    fieldObj.square[i][j].setTexture(&tex2);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::Dr :
                {
                    fieldObj.square[i][j].setTexture(&tex3);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::G :
                {
                    fieldObj.square[i][j].setTexture(&tex4);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::K :
                {
                    fieldObj.square[i][j].setTexture(&tex5);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::L :
                {
                    fieldObj.square[i][j].setTexture(&tex6);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::Mrs :
                {
                    fieldObj.square[i][j].setTexture(&tex7);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::P :
                {
                    fieldObj.square[i][j].setTexture(&tex8);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::R :
                {
                    fieldObj.square[i][j].setTexture(&tex9);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                case heroC::S :
                {
                    fieldObj.square[i][j].setTexture(&tex10);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    break;
                }
                default:
                {

                }
                }
            }
            window->draw(fieldObj.square[i][j]);
        }
    }
}





