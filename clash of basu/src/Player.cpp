#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{

}
Player::~Player()
{
    //dtor
}

vector<Hero*>& Player::getvec()
{
    return HeroVector;
}

void Player::setvec(Hero* heros)
{
    HeroVector.push_back(heros);
}
