#include "BattleMenu.h"
#include <iostream>
#include <typeinfo>

using namespace std;

BattleMenu::BattleMenu() : UI_Menu()
{
    menuName = menus::BM;
    tex.loadFromFile("assassins.jpg");
    spr.setTexture(tex);
    tex1.loadFromFile("alpha_man icon.png");
    tex2.loadFromFile("commander icon.png");
    tex3.loadFromFile("dr_marry icon.png");
    //_p1 = &p1;
}

BattleMenu::~BattleMenu()
{
    //dtor
}

void BattleMenu::MouseClicked2(sf::Vector2f pos, menus& CurrentMenu)
{
    situation();
}
void BattleMenu::display(sf::RenderWindow* window, menus& CurrentMenu)
{
    window->draw(spr);
    fieldobj.DrawField(window);
    //situation(mmobj.getp_on_field(), static_cast<sf::Vector2f>(sf::Mouse::getPosition()));
}

void BattleMenu::textButton1()
{

}

void BattleMenu::textButton2()
{

}

void BattleMenu::textButton3()
{

}

void BattleMenu::situation()
{
    for (int i = 0; i < fieldobj.getrow(); i++)
    {
        for (int j = 0; j < fieldobj.getcol(); j++)
        {
            if (fieldobj.square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
            {
                if ((p1ptr->aobj.position_on_field.x == i) && (p1ptr->aobj.position_on_field.y == j))
                {
                    cout << p1ptr->aobj.position_on_field.x << endl << p1ptr->aobj.position_on_field.y << endl;
                    for (int k = 0; k < p1ptr->getvec().size(); k++)
                    {
                        //cout << typeid(p1ptr->getvec()).name() << endl;
                        if (p1ptr->getvec().at(k) == p1ptr->aobj.getpointer())
                        {
                            cout << "fuck two" << endl;
                            fieldobj.square[i][j].setTexture(&tex1);
                        }
                    }
                }
            }
        }
    }
}
