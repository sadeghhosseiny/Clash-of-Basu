#ifndef FIELD_H
#define FIELD_H

#include "SFML/Graphics.hpp"

class Field
{
public:
    Field();
    ~Field();
    void DrawField(sf::RenderWindow*);
    //sf::RenderWindow *wind;
private:
    unsigned short int row;
    unsigned short int col;
    sf::RectangleShape** square;
    sf::Vector2f ve;
};

#endif // FIELD_H
