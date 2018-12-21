#include "player.h"
#include <vector>
#include <iostream>
#include "../cardClass/cardClass.h"

Player::Player(): idNum(0) {};

Player::Player(int idNum): idNum(idNum) {};

Player::Player(int idNum, std::vector <CardClass> cards): 
    idNum(idNum),
    cards(cards) {};

int Player::getIdNum()
{
    return this->idNum;
}

std::vector <CardClass> Player::getCards()
{
    return this->cards;
}

void Player::addToCards(CardClass card)
{
    (this->cards).push_back(card);
}

void Player::removeElement(int index)
{
    (this->cards).erase(cards.begin() + index);
}

void Player::printAllCards()
{
    std::vector<CardClass> cards = this->getCards();
    
    for (int i = 0; i < cards.size(); i++){
        cards[i].printName();
        std::cout <<"\n";
    }
}
