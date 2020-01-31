#include "../include/Field.h"
#include <iostream>

using namespace sf;
using namespace std;

Field::Field()
{
    //tex1.loadFromFile("alpha_man icon.png");
    //tex.loadFromFile("commander icon.png");
    //hero_Cards = heroC::_None;
    row = 9;
    col = 9;
    ve.x = 82;
    ve.y = 82;
    square = new RectangleShape* [row];
    for (int i = 0; i < row; i++)
    {
        square[i] = new RectangleShape [col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            square[i][j].setSize(ve);
            square[i][j].setPosition(i * ve.x + 1185, ve.y * j + 50);
            square[i][j].setFillColor(sf::Color(184, 149, 141, 100));
            square[i][j].setOutlineColor(sf::Color::Black);
            square[i][j].setOutlineThickness(1.5f);
            /*if(square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
            {
                std::cout << "klajbg" << std::endl;
            }*/
        }
    }
    //ve.x = 0.4;
    //ve.y = 0.4;
    //wind = window;

}

/*void Field::Draw_Icons(sf::Vector2f, sf::RenderWindow* window, heroC hc)
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

    hc = heroC::A;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
                    sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                std::cout << "haerdbf";
                std::cout << static_cast<int>(hc);
                switch (hc)
                {
                case heroC::A :
                {
                    //tex.loadFromFile("alpha_man icon.png");
                    square[i][j].setTexture(&tex);
                    std::cout << static_cast<int>(hc);
                    break;
                }
                case heroC::S :
                {
                    tex.loadFromFile("commander icon.png");
                    spr.setTexture(tex);
                    std::cout << static_cast<int>(hc);
                    break;
                }
                }
            }
        }
    }
    window->draw(spr);

}*/

void Field::DrawField(sf::RenderWindow* window)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //square[i][j].setSize(ve);
            //square[i][j].setPosition(i * ve.x + 1185, ve.y * j + 50);
            //square[i][j].setFillColor(sf::Color(184, 149, 141, 100));
            //square[i][j].setOutlineColor(sf::Color::Black);
            //square[i][j].setOutlineThickness(1.5f);
            //square[col][row] = square;
            //std::cout << "fuck you" << std::endl;
            window->draw(square[i][j]);
        }
    }
}

/*void Field::ChooseCards(sf::RenderWindow* window, sf::Vector2f, heroC hc)
{
    if (AMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
            sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::A;
        cout << static_cast<int>(hero_Cards) << endl;
        AMCobj.getspr().setColor(sf::Color::Red);
        window->draw(AMCobj.getspr());
    }
    else if (CCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::C;
        CCobj.getspr().setColor(sf::Color::Yellow);
        cout << static_cast<int>(hero_Cards) << endl;
        window->draw(CCobj.getspr());
    }
    else if (DRMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        hero_Cards = heroC::Dr;
        //cout << static_cast<int>(hero_Cards) << endl;
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
        cout << static_cast<int>(hero_Cards) << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
                    sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                //square[i][j].setFillColor(sf::Color::Red);
                switch (hc)
                {
                case heroC::A :
                {
                    cout << "awgeaweg" << endl;
                    std::cout << static_cast<int>(hc);
                    //tex1.loadFromFile("alpha_man icon.png");
                    square[i][j].setTexture(&tex1);
                    break;
                }
                case heroC::C :
                {
                    //tex.loadFromFile("commander icon.png");
                    square[i][j].setTexture(&tex);
                    break;
                }
                }
            }
    window->draw(square[i][j]);
        }
    }
}
*/
unsigned short int& Field::getrow()
{
    return row;
}

unsigned short int& Field::getcol()
{
    return col;
}

/*sf::RectangleShape& Field::getsquare()
{
    return square[i][j];
}*/

/*sf::Mouse& Field::getpos()
{
    float pos = static_cast<sf::Vector2f>(sf::Mouse::getPosition());
    return pos;
}*/

Field::~Field()
{
    for (int i = 0; i < row; i++)
    {
        delete[] square[i];
    }
    delete[] square;
}

