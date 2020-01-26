#ifndef PROFESSORCARD_H
#define PROFESSORCARD_H

#include "HeroCards.h"

class ProfessorCard : public HeroCards
{
public:
    ProfessorCard();
    virtual ~ProfessorCard();
    virtual void DrawCard(sf::RenderWindow*);
    sf::Sprite& getspr();

protected:

private:
};

#endif // PROFESSORCARD_H
