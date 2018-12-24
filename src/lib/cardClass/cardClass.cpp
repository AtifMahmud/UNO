/**
 * File: cardClass.cpp
 * Purpose: Implementation of the cardClass
 * Author: Atif Mahmud
 * 
 */ 

#include "cardClass.h"
#include <string>
#include <iostream>

CardClass::CardClass(): number(), colour(), symbol() {};

CardClass::CardClass(std::string name, int number, std::string colour, std::string symbol):
    name(name),
    number(number),
    colour(colour),
    symbol(symbol){};

int CardClass::getNumber()
{
    return this->number;
}

std::string CardClass::getColour()
{
    return this->colour;
}

std::string CardClass::getSymbol()
{
    return this->symbol;
}

std::string CardClass::getName()
{
    return this->name;
}

bool CardClass::isSymbol()
{
    return (this->symbol != "none");
}

bool CardClass::isRed()
{
    return (this->colour == "red");
}

bool CardClass::isGreen()
{
    return (this->colour == "green");
}

bool CardClass::isBlue()
{
    return (this->colour == "blue");
}

bool CardClass::isYellow()
{
    return (this->colour == "yellow");
}

void CardClass::printAttributes()
{
    std::cout << this->number << " " << this->colour << " " << this->symbol << " ";
}

void CardClass::printName()
{
    std::cout << this->name << " ";
}

std::vector <CardClass> CardClass::getPlayableCards(std::vector <CardClass> playerCards)
{
    std::vector <CardClass> playableCards;
    for (int i = 0; i < playerCards.size(); i++) {

        if (playerCards[i].getColour() == this->getColour() ||
            playerCards[i].getNumber() == this->getNumber() ||
            playerCards[i].isSymbol()){
                playableCards.push_back(playerCards[i]);
            }
    }

    return playableCards;
}

