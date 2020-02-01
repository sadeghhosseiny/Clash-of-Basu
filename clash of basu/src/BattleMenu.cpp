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
    tex4.loadFromFile("giant icon.png");
    tex5.loadFromFile("kratos icon.png");
    tex6.loadFromFile("leon icon.png");
    tex7.loadFromFile("mrs_ghost icon.png");
    tex8.loadFromFile("professor icon.png");
    tex9.loadFromFile("robi icon.png");
    tex10.loadFromFile("sniper icon.png");
    texc1.loadFromFile("AlphaMan Card.png");
    //_p1 = &p1;
}

BattleMenu::~BattleMenu()
{
    //dtor
}

void BattleMenu::MouseClicked2(sf::Vector2f pos, menus& CurrentMenu)
{
    situation(pos);
    situation2(pos);
    //b.DrawField(window);
}
void BattleMenu::display(sf::RenderWindow* window, menus& CurrentMenu)
{
    window->draw(spr);
    battlefieldobj.DrawField3(window);
    battlefieldobj2.DrawField4(window);
    //player1_cards(window);
    //situation();
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

/*int counter3 = 0;
int a3 = 0;
int c3 = 0;
int dr3 = 0;
int g3 = 0;
int k3 = 0;
int l3 = 0;
int mrs3 = 0;
int p3 = 0;
int r3 = 0;
int s3 = 0;
*/
void BattleMenu::situation(sf::Vector2f pos)
{
    for (int i = 0; i < battlefieldobj.getrow(); i++)
    {
        /*if (counter3 == 5)
        {
            break;
        }*/
        for (int j = 0; j < battlefieldobj.getcol(); j++)
        {
            /*if (counter3 == 5)
            {
                break;
            }*/
            if (battlefieldobj.square[i][j].getGlobalBounds().contains(pos))
            {
                for (int c = 0; c < p1ptr->getvec().size(); c++)
                {
                    /*if (counter3 == 5)
                    {
                        break;
                    }*/
                    if((p1ptr->aobj.position_on_field.x == i) && (p1ptr->aobj.position_on_field.y == j))
                    {
                        //if (a3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex1);
                        //cout << p1ptr->aobj.position_on_field.x << endl;
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //a3++;
                        //}
                        return;
                    }
                    else if((p1ptr->cobj.position_on_field.x == i) && (p1ptr->cobj.position_on_field.y == j))
                    {
                        //if (c3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex2);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //c3++;
                        //}
                        return;
                    }
                    else if((p1ptr->drmobj.position_on_field.x == i) && (p1ptr->drmobj.position_on_field.y == j))
                    {
                        //if (dr3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex3);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //dr3++;
                        //}
                        return;
                    }
                    else if((p1ptr->gobj.position_on_field.x == i) && (p1ptr->gobj.position_on_field.y == j))
                    {
                        //if (g3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex4);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3;
                        //g3++;
                        //}
                        return;
                    }
                    else if((p1ptr->kobj.position_on_field.x == i) && (p1ptr->kobj.position_on_field.y == j))
                    {
                        //if (k3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex5);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //k3++;
                        //}
                        return;
                    }
                    else if((p1ptr->lobj.position_on_field.x == i) && (p1ptr->lobj.position_on_field.y == j))
                    {
                        //if (l3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex6);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //l3++;
                        //}
                        return;
                    }
                    else if((p1ptr->mrsgobj.position_on_field.x == i) && (p1ptr->mrsgobj.position_on_field.y == j))
                    {
                        //if (mrs3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex7);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //mrs3++;
                        //}
                        return;
                    }
                    else if((p1ptr->pobj.position_on_field.x == i) && (p1ptr->pobj.position_on_field.y == j))
                    {
                        //if (p3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex8);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //p3++;
                        //}
                        return;
                    }
                    else if((p1ptr->robj.position_on_field.x == i) && (p1ptr->robj.position_on_field.y == j))
                    {
                        //if (r3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex9);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //r3++;
                        //}
                        return;
                    }
                    else if((p1ptr->sobj.position_on_field.x == i) && (p1ptr->sobj.position_on_field.y == j))
                    {
                        //if (s3 == 0)
                        //{
                        battlefieldobj.square[i][j].setTexture(&tex10);
                        //cout << p1ptr->getvec().size() << endl;
                        //counter3++;
                        //s3++;
                        //}
                        return;
                    }
                }
            }
        }
    }
}

void BattleMenu::situation2(sf::Vector2f pos)
{
    for (int i = 0; i < battlefieldobj2.getrow(); i++)
    {
        /*if (counter3 == 5)
        {
            break;
        }*/
        for (int j = 0; j < battlefieldobj2.getcol(); j++)
        {
            /*if (counter3 == 5)
            {
                break;
            }*/
            if (battlefieldobj2.square[i][j].getGlobalBounds().contains(pos))
            {
                //cout << i << endl << j <<endl;
                //cout << "yep" << endl;
                for (int c = 0; c < p2ptr->getvec().size(); c++)
                {
                    //cout << p2ptr->getvec().size() << endl;

                    /*if (counter3 == 5)
                    {
                        break;
                    }*/
                    if((p2ptr->aobj.position_on_field.x == i) && (p2ptr->aobj.position_on_field.y == j))
                    {
                        //if (a3 == 0)
                        //{
                        //cout << "lvjgguc" << endl;
                        battlefieldobj2.square[i][j].setTexture(&tex1);
                        //cout << p2ptr->aobj.position_on_field.x << endl<< p2ptr->aobj.position_on_field.y << endl;
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //a3++;
                        //}
                        return;
                    }
                    else if((p2ptr->cobj.position_on_field.x == i) && (p2ptr->cobj.position_on_field.y == j))
                    {
                        //if (c3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex2);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //c3++;
                        //}
                        return;
                    }
                    else if((p2ptr->drmobj.position_on_field.x == i) && (p2ptr->drmobj.position_on_field.y == j))
                    {
                        //if (dr3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex3);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //dr3++;
                        //}
                        return;
                    }
                    else if((p2ptr->gobj.position_on_field.x == i) && (p2ptr->gobj.position_on_field.y == j))
                    {
                        //if (g3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex4);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3;
                        //g3++;
                        //}
                        return;
                    }
                    else if((p2ptr->kobj.position_on_field.x == i) && (p2ptr->kobj.position_on_field.y == j))
                    {
                        //if (k3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex5);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //k3++;
                        //}
                        return;
                    }
                    else if((p2ptr->lobj.position_on_field.x == i) && (p2ptr->lobj.position_on_field.y == j))
                    {
                        //if (l3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex6);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //l3++;
                        //}
                        return;
                    }
                    else if((p2ptr->mrsgobj.position_on_field.x == i) && (p2ptr->mrsgobj.position_on_field.y == j))
                    {
                        //if (mrs3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex7);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //mrs3++;
                        //}
                        return;
                    }
                    else if((p2ptr->pobj.position_on_field.x == i) && (p2ptr->pobj.position_on_field.y == j))
                    {
                        //if (p3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex8);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //p3++;
                        //}
                        return;
                    }
                    else if((p2ptr->robj.position_on_field.x == i) && (p2ptr->robj.position_on_field.y == j))
                    {
                        //if (r3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex9);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //r3++;
                        //}
                        return;
                    }
                    else if((p2ptr->sobj.position_on_field.x == i) && (p2ptr->sobj.position_on_field.y == j))
                    {
                        //if (s3 == 0)
                        //{
                        battlefieldobj2.square[i][j].setTexture(&tex10);
                        //cout << p2ptr->getvec().size() << endl;
                        //counter3++;
                        //s3++;
                        //}
                        return;
                    }
                }
            }
        }
    }
}

void BattleMenu::player1_cards(sf::RenderWindow* window)
{
    for (int c = 0; c < p1ptr->getveccard().size(); c++)
    {
        //cout << "fsdfasdfasdf" << p1ptr->getveccard().size() << endl;
        //cout << "adfsdfsa" << endl;
        if (p1ptr->AMCobj.getpointer_card())
        {
            cout << "asg" << endl;
            sprc.setTexture(texc1);
            sprc.setPosition(1000, 1000);
            window->draw(sprc);
        }
    }
}
