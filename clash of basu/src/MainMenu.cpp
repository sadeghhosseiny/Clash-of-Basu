#include "MainMenu.h"
#include <iostream>
#include <typeinfo>

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
    fieldobj.DrawField(window);
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
    //HiddenCards(position_on_field);
    //p1.ChooseCards(window, static_cast<sf::Vector2f>(sf::Mouse::getPosition()), hero_Cards);
}

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
    optionText2.setPosition(sf::Vector2f(1600, 900));
    optionText2.setString("Next Player");
    optionText2.setCharacterSize(60);
    optionText3.setColor(sf::Color::White);
}

/*void MainMenu::setp_on_field(sf::Vector2i position)
{
    position_on_field = position;
}*/

/*sf::Vector2i& MainMenu::getp_on_field()
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

int counter = 0;
int a = 0;
int c = 0;
int dr = 0;
int g = 0;
int  k = 0;
int l = 0;
int mrs = 0;
int p = 0;
int r = 0;
int s = 0;

void MainMenu::ChooseCards(sf::Vector2f pos, heroC hc)
{
    if (AMCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::A;
        //cout << static_cast<int>(hero_Cards) << endl;
    }
    else if (CCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::C;
        //cout << static_cast<int>(hero_Cards) << endl;
    }
    else if (DRMCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::Dr;
    }
    else if (GCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::G;
    }
    else if (KCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::K;
    }
    else if (LCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::L;
    }
    else if (MRSGCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::Mrs;
    }
    else if (PCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::P;
    }
    else if (RCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::R;
    }
    else if (SCobj.getspr().getGlobalBounds().contains(pos))
    {
        hero_Cards = heroC::S;
    }

    for (int i = 0; i < fieldobj.getrow(); i++)
    {
        if (counter == 5)
        {
            break;
        }
        for (int j = 0; j < fieldobj.getcol(); j++)
        {
            if (fieldobj.square[i][j].getGlobalBounds().contains(pos))
            {
                if (counter == 5)
                {
                    break;
                }
                //cout << static_cast<int>(hero_Cards) << endl;
                switch (hc)
                {
                case heroC::A :
                {
                    if (a == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex1);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.aobj.setp_on_field(sf::Vector2i(i, j));
                    p1.setvec(p1.aobj.getpointer());
                    cout << p1.getvec().size() << endl;
                    cout << typeid(p1.getvec()).name() << endl;
                    //cout << (aobj.position_on_field.x) << endl << (aobj.position_on_field.y) << endl;
                    //cout << getp_on_field().x << endl << getp_on_field().y << endl;
                    //cout << p1.getvec().size() << endl;
                    counter++;
                    a++;
                    }
                    break;
                }
                case heroC::C :
                {
                    if (c == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex2);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.cobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.cobj.getpointer());
                    //cout << (cobj.position_on_field.x) << endl << (cobj.position_on_field.y) << endl;
                    counter++;
                    c++;
                    }
                    break;
                }
                case heroC::Dr :
                {
                    if (dr == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex3);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.drmobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.drmobj.getpointer());
                    counter++;
                    dr++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::G :
                {
                    if (g == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex4);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.gobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.gobj.getpointer());
                    counter++;
                    g++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::K :
                {
                    if (k == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex5);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.kobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.kobj.getpointer());
                    counter++;
                    k++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::L :
                {
                    if (l == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex6);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.lobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.lobj.getpointer());
                    counter++;
                    l++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::Mrs :
                {
                    if (mrs == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex7);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.mrsgobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.mrsgobj.getpointer());
                    counter++;
                    mrs++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::P :
                {
                    if (p == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex8);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.pobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.pobj.getpointer());
                    counter++;
                    p++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::R :
                {
                    if (r == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex9);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.robj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.robj.getpointer());
                    counter++;
                    r++;
                    }
                    break;
                    //cout << c << endl;
                }
                case heroC::S :
                {
                    if (s == 0)
                    {
                    fieldobj.square[i][j].setTexture(&tex10);
                    fieldobj.square[i][j].setFillColor(sf::Color::White);
                    p1.sobj.setp_on_field(sf::Vector2i(i, j));
                    p1.getvec().push_back(p1.sobj.getpointer());
                    counter++;
                    s++;
                    }
                    //cout << c << endl;
                    break;
                }
                default:
                {

                }
                }
                //cout << position_on_field.x << endl;
            }
           //window->draw(fieldObj.square[i][j]);
        }
    }
}

/*void MainMenu::HiddenCards(sf::Vector2i position_on_field)
{
    for (int i = 0; i < fieldObj.getrow(); i++)
    {
        for (int j = 0; j < fieldObj.getcol(); j++)
        {
            //cout << setp_on_field() << endl;
            //cout << "ertbwrtgb" << endl;
            //cout << (position_on_field.x) << '\n' << (position_on_field.y) << endl;
            if ((position_on_field.x == i) && (position_on_field.y == j))
            {
                fieldObj.square[i][j].setFillColor(sf::Color::Yellow);
            }
        }
    }
}*/


/*void MainMenu::nx(sf::Vector2f pos, menus& CurrentMenu)
{
    if(optionText2.getGlobalBounds().contains(pos))
    {
        cout << "gafdag" << endl;
        _window->draw(spr);
    }
}*/









