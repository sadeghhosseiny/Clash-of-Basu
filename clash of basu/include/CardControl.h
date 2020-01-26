#ifndef CARDCONTROL_H
#define CARDCONTROL_H

#include <vector>

class CardControl
{
public:
    CardControl();
    ~CardControl();
    void
protected:

private:
    heroC SelectedCard;
    std::vector<Player1*>P1Vec;
    std::vector<Player2*>P2Vec;
};

#endif // CARDCONTROL_H
