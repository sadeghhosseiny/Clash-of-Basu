#ifndef COMMANDERCARD_H
#define COMMANDERCARD_H

#include "HeroCards.h"

class CommanderCard : public HeroCards
{
public:
    CommanderCard();
    virtual ~CommanderCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr();

protected:

private:
};

#endif // COMMANDERCARD_H
