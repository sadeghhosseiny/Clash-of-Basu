#include "Field2.h"

using namespace sf;

Field2::Field2()
{
    row = 9;
    col = 9;
    ve.x = 82;
    ve.y = 82;
    square2 = new RectangleShape* [row];
    for (int i = 0; i < row; i++)
    {
        square2[i] = new RectangleShape[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            square2[i][j].setSize(ve);
            square2[i][j].setPosition(i * ve.x + 1185, ve.y * j + 50);
            square2[i][j].setFillColor(sf::Color(184, 149, 141, 100));
            square2[i][j].setOutlineColor(sf::Color::Black);
            square2[i][j].setOutlineThickness(1.5f);
        }
    }
}

Field2::~Field2()
{
    //dtor
}

void Field2::DrawField2(sf::RenderWindow* window)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            window->draw(square2[i][j]);
        }
    }
}

unsigned short int& Field2::getrow()
{
    return row;
}

unsigned short int& Field2::getcol()
{
    return col;
}

