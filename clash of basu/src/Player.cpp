#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    /*tex1.loadFromFile("alpha_man icon.png");
    tex2.loadFromFile("commander icon.png");
    tex3.loadFromFile("dr_marry icon.png");
    tex4.loadFromFile("giant icon.png");
    tex5.loadFromFile("kratos icon.png");
    tex6.loadFromFile("leon icon.png");
    tex7.loadFromFile("mrs_ghost icon.png");
    tex8.loadFromFile("professor icon.png");
    tex9.loadFromFile("robi icon.png");
    tex10.loadFromFile("sniper icon.png");
    hero_Cards = heroC::_None;*/
}
Player::~Player()
{
    //dtor
}

/*void Player::ChooseCards(sf::RenderWindow* window, sf::Vector2f, heroC hc)
{
    if (AMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
            sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::A;
        cout << static_cast<int>(hero_Cards) << endl;
    }
    else if (CCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::C;
        cout << static_cast<int>(hero_Cards) << endl;
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
    cout << static_cast<int>(hero_Cards) << endl;

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
                    cout << static_cast<int>(hc) << endl;
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
*/
