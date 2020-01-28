#ifndef FIELD_H
#define FIELD_H

#include "SFML/Graphics.hpp"
#include "GeneralDefines.h"

#include "UI_Menu.h"
#include "GeneralDefines.h"
#include "Field.h"
#include "AlphaManCard.h"
#include "GiantCrad.h"
#include "CommanderCard.h"
#include "DrMarryCard.h"
#include "KratosCard.h"
#include "LeonCard.h"
#include "MrsGhostCard.h"
#include "ProfessorCard.h"
#include "RobiCard.h"
#include "SniperCard.h"

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
    //void Draw_Icons(sf::Vector2f, sf::RenderWindow*, heroC);
    void ChooseCards(sf::RenderWindow*, sf::Vector2f, heroC);

private:
    unsigned short int row;
    unsigned short int col;
    sf::Vector2f ve;
    sf::Sprite spr;
    sf::Texture tex;
    sf::Texture tex1;
    AlphaManCard AMCobj;
    GiantCrad GCobj;
    CommanderCard CCobj;
    DrMarryCard DRMCobj;
    KratosCard KCobj;
    LeonCard LCobj;
    MrsGhostCard MRSGCobj;
    ProfessorCard PCobj;
    RobiCard RCobj;
    SniperCard SCobj;
    heroC hero_Cards;
};

#endif // FIELD_H
