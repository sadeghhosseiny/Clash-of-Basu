#include "BattleField.h"

using namespace std;
using namespace sf;

BattleField::BattleField()
{
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

BattleField::~BattleField()
{
    for (int i = 0; i < row; i++)
    {
        delete[] square[i];
    }
    delete[] square;
}

void BattleField::DrawField3(sf::RenderWindow* window)
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

unsigned short int& BattleField::getrow()
{
    return row;
}

unsigned short int& BattleField::getcol()
{
    return col;
}
