#include "BattleMenu.h"
#include <iostream>

using namespace std;

BattleMenu::BattleMenu() : UI_Menu()
{
    menuName = menus::BM;
    tex.loadFromFile("assassins.jpg");
    spr.setTexture(tex);
    texbm1.loadFromFile("alpha_man icon.png");
    //_p1 = &p1;
}

BattleMenu::~BattleMenu()
{
    //dtor
}

void BattleMenu::MouseClicked2(sf::Vector2f pos, menus& CurrentMenu)
{
    situation(pos);
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

void BattleMenu::situation(sf::Vector2f pos)
{
    //cout << aobj.position_on_field.x << endl;
    for (int i = 0; i < fieldobj.getrow(); i++)
    {
        for (int j = 0; j < fieldobj.getcol(); j++)
        {
            if (fieldobj.square[i][j].getGlobalBounds().contains(pos))
            {
                if ((p1ptr->aobj.position_on_field.x == i) && (p1ptr->aobj.position_on_field.y == j) )
                {
                    //cout << mmobj.getp_on_field().x << endl;
                    //cout << i<<  j << endl;
                    fieldobj.square[i][j].setTexture(&texbm1);
                    return;
                }
            }
        }
    }
}
