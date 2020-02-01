#ifndef FIELD2_H
#define FIELD2_H

#include "SFML/Graphics.hpp"

class Field2
{
public:
    Field2();
    virtual ~Field2();
    void DrawField2(sf::RenderWindow*);
    unsigned short int& getrow();
    unsigned short int& getcol();
    sf::RectangleShape **square2;

private:
    unsigned short int row;
    unsigned short int col;
    sf::Vector2f ve;
    sf::Texture tex;
    sf::Sprite spr;
};

#endif // FIELD2_H
