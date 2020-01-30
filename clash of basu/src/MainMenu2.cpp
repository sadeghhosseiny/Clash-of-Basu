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
    ChooseCards(static_cast<sf::Vector2f>(sf::Mouse::getPosition()), hero_Cards);
}

void MainMenu2::display(sf::RenderWindow* window, menus &CurrentMenu)
{
    window->draw(spr);
    window->draw(optionText1);
    textButton1();
    fieldObj2.DrawField2(window);
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

void MainMenu2::ChooseCards(sf::Vector2f, heroC hc)
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

    for (int i = 0; i < fieldObj2.getrow(); i++)
    {
        if (counter2 == 5)
        {
            break;
        }
        for (int j = 0; j < fieldObj2.getcol(); j++)
        {
            if (fieldObj2.square2[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())) &&
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
                    fieldObj2.square2[i][j].setTexture(&tex1);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(aobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex2);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(cobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex3);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(drmobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex4);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(gobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex5);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(kobj.getpointer());
                    counter2++;
                    k2++;
                    }
                    //cout << c << endl;
                    //break;
                }
                case heroC::L :
                {
                    if (l2 == 0)
                    {
                    fieldObj2.square2[i][j].setTexture(&tex6);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(lobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex7);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(mrsgobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex8);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(pobj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex9);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(robj.getpointer());
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
                    fieldObj2.square2[i][j].setTexture(&tex10);
                    fieldObj2.square2[i][j].setFillColor(sf::Color::White);
                    setp_on_field2(sf::Vector2i(i, j));
                    p2.getvec().push_back(sobj.getpointer());
                    counter2++;
                    s2++;
                    }
                    //cout << c << endl;
                    break;
                }
                default:
                {

                }
                }
            }
            //window->draw(fieldObj2.square2[i][j]);
        }
    }
}

void MainMenu2::setp_on_field2(sf::Vector2i position)
{
    //you can also use 'this->' instead of define position
    //it means : this->position_on_field2 = position_on_field2
    position_on_field2 = position;
}





