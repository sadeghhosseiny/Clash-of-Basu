#include "MainMenu.h"
#include <iostream>

using namespace std;

MainMenu::MainMenu() : UI_Menu()
{
    menuName = menus::MM;
    tex.loadFromFile("spartan.jpg");
    spr.setTexture(tex);
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
    OptionText1();
    textButton1();
    OptionText2();
    textButton2();
    hero_Cards = heroC::_None;
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
    if (optionText2.getGlobalBounds().contains(pos))
    {
        CurrentMenu = menus::MM2;
    }

    ChooseCards(pos, hero_Cards);
}

void MainMenu::display(sf::RenderWindow* window, menus &CurrentMenu)
{
    //wind = window;
    window->draw(spr);
    window->draw(optionText1);
    window->draw(optionText2);
    // window->draw(MMspr);
    textButton2();
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
    //p1.ChooseCards(window, static_cast<sf::Vector2f>(sf::Mouse::getPosition()), hero_Cards);
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

void MainMenu::OptionText2()
{
    optionText2.setPosition(sf::Vector2f(1700, 900));
    optionText2.setString("Ok");
    optionText2.setCharacterSize(60);
    optionText3.setColor(sf::Color::White);
}

void MainMenu::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}

/*sf::Vector2i MainMenu::getp()
{
    return position_on_field;
}*/

void MainMenu::textButton2()
{
    if (optionText2.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText2.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText2.setColor(sf::Color::White);
    }
}

void MainMenu::textButton3()
{

}

void MainMenu::ChooseCards(sf::Vector2f pos, heroC hc)
{
    if (AMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(pos)))
    {
        //if (nt.type == sf::Event::EventType::MouseButtonReleased)
        hero_Cards = heroC::A;
        cout << static_cast<int>(hero_Cards) << endl;
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
                    setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(alobj.getpointer());
                    /*for (auto& h : p1.getvec())
                    {
                        if ())
                        {
                            p1.getvec().erase(h);
                        }
                    }*/
                    cout << p1.getvec().size() << endl;
                    //cout << getp().x << endl;
                    break;
                }
                case heroC::C :
                {
                    //tex2.loadFromFile("commander icon.png");
                    fieldObj.square[i][j].setTexture(&tex2);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::Dr :
                {
                    fieldObj.square[i][j].setTexture(&tex3);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::G :
                {
                    fieldObj.square[i][j].setTexture(&tex4);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::K :
                {
                    fieldObj.square[i][j].setTexture(&tex5);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::L :
                {
                    fieldObj.square[i][j].setTexture(&tex6);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::Mrs :
                {
                    fieldObj.square[i][j].setTexture(&tex7);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::P :
                {
                    fieldObj.square[i][j].setTexture(&tex8);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::R :
                {
                    fieldObj.square[i][j].setTexture(&tex9);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                case heroC::S :
                {
                    fieldObj.square[i][j].setTexture(&tex10);
                    fieldObj.square[i][j].setFillColor(sf::Color::White);
                    setp_on_field(sf::Vector2i(i, j));
                    break;
                }
                default:
                {

                }
                }
            }
           //+ window->draw(fieldObj.square[i][j]);
        }
    }
}


/*void MainMenu::nx(sf::Vector2f pos, menus& CurrentMenu)
{
    if(optionText2.getGlobalBounds().contains(pos))
    {
        cout << "gafdag" << endl;
        _window->draw(spr);
    }
}*/









