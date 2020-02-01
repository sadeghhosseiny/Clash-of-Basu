#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include "SFML/Graphics.hpp"

class BattleField
{
public:
    BattleField();
    virtual ~BattleField();
    void DrawField3(sf::RenderWindow*);
    //void SelectedSquare(sf::RenderWindow*);
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

#endif // BATTLEFIELD_H
