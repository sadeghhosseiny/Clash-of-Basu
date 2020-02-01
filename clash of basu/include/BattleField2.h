#ifndef BATTLEFIELD2_H
#define BATTLEFIELD2_H

#include "SFML/Graphics.hpp"

class BattleField2
{
public:
    BattleField2();
    virtual ~BattleField2();
    void DrawField4(sf::RenderWindow*);
    sf::RectangleShape** square;
    unsigned short int& getrow();
    unsigned short int& getcol();

private:
    unsigned short int row;
    unsigned short int col;
    sf::Vector2f ve;
    sf::Sprite spr;
    sf::Texture tex;
};

#endif // BATTLEFIELD2_H
