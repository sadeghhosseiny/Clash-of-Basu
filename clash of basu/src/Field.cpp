#include "../include/Field.h"
#include <iostream>

using namespace sf;

Field::Field()
{
    row = 9;
    col = 9;
    ve.x = 82;
    ve.y = 82;
    //wind = window;

}

void Field::DrawField(sf::RenderWindow* window)
{
    square = new RectangleShape* [row];
    for (int i = 0; i < row; i++)
    {
        square[i] = new RectangleShape [col];
    }
    for (int k = 0; k < row; k++)
    {
        for (int m = 0; m < col; m++)
        {
            square[k][m].setSize(ve);
            square[k][m].setPosition(k * ve.x + 1185, ve.y * m + 50);
            square[k][m].setFillColor(sf::Color(184, 149, 141, 100));
            square[k][m].setOutlineColor(sf::Color::Black);
            square[k][m].setOutlineThickness(1.5f);
            //square[col][row] = square;
            window->draw(square[k][m]);
            //std::cout << "fuck you" << std::endl;
        }
    }
}

Field::~Field()
{
    for (int i = 0; i < row; i++)
    {
        delete[] square[i];
    }
    delete[] square;
}
