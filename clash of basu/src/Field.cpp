#include "../include/Field.h"
#include <iostream>

using namespace sf;

Field::Field()
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

void Field::DrawField(sf::RenderWindow* window)
{
    /*square = new RectangleShape* [row];

    for (int i = 0; i < row; i++)
    {
        square[i] = new RectangleShape [col];
    }*/
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

/*void Field::DrawField(sf::RenderWindow* window)
{
    //int row = 9;
    //int col = 9;

    spr = new Sprite* [row];
    for (int i = 0; i < row; i++)
    {
        spr[i] = new Sprite[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tex.loadFromFile("Green.png");
            spr[i][j].setTexture(tex);
            spr[i][j].setScale(sf::Vector2f(ve.x, ve.y));
            spr[i][j].setPosition(i * ve.x + 1185, j * ve.y + 50);
            window->draw(spr[i][j]);

        }
    }
}*/

/*void Field::SelectedSquare(sf::RenderWindow* window)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (square[i][j].getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition())))
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    square[i][j].setFillColor(sf::Color::Yellow);
        }
    }
}*/

Field::~Field()
{
    for (int i = 0; i < row; i++)
    {
        delete[] square[i];
    }
    delete[] square;
}

