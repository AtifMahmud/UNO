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

void Player::removeElement(CardClass card)
{
    for (int i = 0; i < this->cards.size(); i++) {
        if (cards[i].getName() == card.getName()){
            (this->cards).erase(cards.begin() + i + 1);
            break;
        }
    }
}

void Player::printAllCards()
{
    for (int i = 0; i < this->cards.size(); i++){
        this->cards[i].printName();
        std::cout <<"\n";
    }
}

