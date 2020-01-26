#ifndef FIELD_H
#define FIELD_H

#include "SFML/Graphics.hpp"
#include "GeneralDefines.h"

class Field
{
public:
    Field();
    ~Field();
    void DrawField(sf::RenderWindow*);
    void SelectedSquare(sf::RenderWindow*);
    sf::RectangleShape** square;
    unsigned short int& getrow();
    unsigned short int& getcol();
    //sf::RectangleShape& getsquare();
    //sf::Mouse& getpos();
    void Draw_Icons(sf::Vector2f, heroC&);
    //sf::RenderWindow *wind;
private:
    unsigned short int row;
    unsigned short int col;
    //sf::Mouse::getPosition();
    sf::Vector2f ve;
    sf::Sprite spr;
    sf::Texture tex;
    //sf::Sprite **spr;
};

#endif // FIELD_H
