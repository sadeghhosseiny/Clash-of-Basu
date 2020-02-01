#include "MainMenu2.h"
#include <iostream>

using namespace std;

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
    p2.hero_Cards = heroC::_None;
    spr.setTexture(tex);
    OptionText1();
    OptionText2();
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

    ChooseCards(pos, p2.hero_Cards);

    if (optionText2.getGlobalBounds().contains(pos))
    {
        CurrentMenu = menus::BM;
    }
    /*if (optionText2.getGlobalBounds().contains(pos))
    {
        CurrentMenu = menus::MM;
        mmobj.HiddenCards(mmobj.getp_on_field());
    }*/
}

void MainMenu2::display(sf::RenderWindow* window, menus &CurrentMenu)
{
    //_window = window;
    window->draw(spr);
    window->draw(optionText1);
    window->draw(optionText2);
    textButton1();
    textButton2();
    fieldobj2.DrawField2(window);
    p2.AMCobj.DrawCard(window);
    p2.GCobj.DrawCard(window);
    p2.CCobj.DrawCard(window);
    p2.DRMCobj.DrawCard(window);
    p2.KCobj.DrawCard(window);
    p2.LCobj.DrawCard(window);
    p2.MRSGCobj.DrawCard(window);
    p2.PCobj.DrawCard(window);
    p2.RCobj.DrawCard(window);
    p2.SCobj.DrawCard(window);
}

void MainMenu2::OptionText1()
{
    optionText1.setPosition(sf::Vector2f(1700, 980));
    optionText1.setString("Back");
    optionText1.setCharacterSize(60);
    optionText1.setColor(sf::Color::White);
}

void MainMenu2::OptionText2()
{
    optionText2.setPosition(sf::Vector2f(1600, 900));
    optionText2.setString("Lets Battle");
    optionText2.setCharacterSize(60);
    optionText2.setColor(sf::Color::White);
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
    if (optionText2.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
    {
        optionText2.setColor(sf::Color::Magenta);
    }
    else
    {
        optionText2.setColor(sf::Color::White);
    }
}

void MainMenu2::textButton3()
{

}

int counter2 = 0;
int a2 = 0;
int c2 = 0;
int dr2 = 0;
int g2 = 0;
int k2 = 0;
int l2 = 0;
int mrs2 = 0;
int pp = 0; //i have p2 object from Player class so i should declare this as pp
int r2 = 0;
int s2 = 0;

void MainMenu2::ChooseCards(sf::Vector2f, heroC& hc)
{
    if (p2.AMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
            sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::A;
        //cout << static_cast<int>(hero_Cards) << endl;
    }
    else if (p2.CCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::C;
        //cout << static_cast<int>(hero_Cards) << endl;
    }
    else if (p2.DRMCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::Dr;
    }
    else if (p2.GCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::G;
    }
    else if (p2.KCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::K;
    }
    else if (p2.LCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::L;
    }
    else if (p2.MRSGCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::Mrs;
    }
    else if (p2.PCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::P;
    }
    else if (p2.RCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::R;
    }
    else if (p2.SCobj.getspr().getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
             sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        p2.hero_Cards = heroC::S;
    }

    for (int i = 0; i < fieldobj2.getrow(); i++)
    {
        if (counter2 == 5)
        {
            break;
        }
        for (int j = 0; j < fieldobj2.getcol(); j++)
        {
            if (fieldobj2.square2[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
                    sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                if (counter2 == 5)
                {
                    break;
                }
                //cout << static_cast<int>(hero_Cards) << endl;
                switch (hc)
                {
                case heroC::A :
                {
                    if (a2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex1);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.aobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.aobj.getpointer());
                    p2.getveccard().push_back(heroC::A);
                    cout << p2.getvec().size() << endl;
                    cout << p2.aobj.position_on_field.x << endl;
                    counter2++;
                    a2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::C :
                {
                    if(c2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex2);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.cobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.cobj.getpointer());
                    p2.getveccard().push_back(heroC::C);
                    cout << p2.getvec().size() << endl;
                    counter2++;
                    c2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::Dr :
                {
                    if (dr2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex3);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.drmobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.drmobj.getpointer());
                    p2.getveccard().push_back(heroC::Dr);
                    cout << p2.getvec().size() << endl;
                    counter2++;
                    dr2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::G :
                {
                    if (g2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex4);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.gobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.gobj.getpointer());
                    p2.getveccard().push_back(heroC::G);
                    cout << p2.getvec().size() << endl;
                    counter2++;
                    g2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::K :
                {
                    if (k2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex5);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.kobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.kobj.getpointer());
                    p2.getveccard().push_back(heroC::K);
                    counter2++;
                    k2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::L :
                {
                    if (l2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex6);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.lobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.lobj.getpointer());
                    p2.getveccard().push_back(heroC::L);
                    counter2++;
                    l2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::Mrs :
                {
                    if (mrs2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex7);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.mrsgobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.mrsgobj.getpointer());
                    p2.getveccard().push_back(heroC::Mrs);
                    counter2++;
                    mrs2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::P :
                {
                    /*
                    i should declare this pp because i have 'p2' object from Player class in this '.h' and
                    if i don't do this i face to the compilation error
                    */
                    if (pp == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex8);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.pobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.pobj.getpointer());
                    p2.getveccard().push_back(heroC::P);
                    counter2++;
                    pp++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::R :
                {
                    if (r2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex9);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.robj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.robj.getpointer());
                    p2.getveccard().push_back(heroC::R);
                    counter2++;
                    r2++;
                    }
                    //cout << c << endl;
                    break;
                }
                case heroC::S :
                {
                    if (s2 == 0)
                    {
                    fieldobj2.square2[i][j].setTexture(&tex10);
                    fieldobj2.square2[i][j].setFillColor(sf::Color::White);
                    p2.sobj.setp_on_field(sf::Vector2i(i, j));
                    p2.getvec().push_back(p2.sobj.getpointer());
                    p2.getveccard().push_back(heroC::S);
                    counter2++;
                    s2++;
                    }
                    //cout << c << endl;
                    break;
                }
                default:
                {
                    break;
                }
                }
            }
            //window->draw(fieldObj2.square2[i][j]);
        }
    }
}

/*void MainMenu2::setp_on_field2(sf::Vector2i position)
{
    //you can also use 'this->' instead of define position
    //it means : this->position_on_field2 = position_on_field2
    position_on_field2 = position;
}*/

/*void MainMenu2::HiddenCards(sf::Vector2f pos, sf::Vector2i p_on_f)
{
    for (int i = 0; i < fieldObj2.row; i++)
    {
        for (int j = 0; j < fieldObj2.col; j++)
        {

        }
    }
}*/




