#ifndef FIELD_H
#define FIELD_H

#include "SFML/Graphics.hpp"

class Field
{
public:
    Field();
    ~Field();
    void DrawField(sf::RenderWindow*);
    void SelectedSquare(sf::RenderWindow*);
    //sf::RenderWindow *wind;
private:
    unsigned short int row;
    unsigned short int col;
    sf::RectangleShape** square;
    sf::Vector2f ve;
    sf::Sprite psr;
    sf::Texture tex;
    //sf::Texture tex;
    //sf::Sprite **spr;
};

#endif // FIELD_H
