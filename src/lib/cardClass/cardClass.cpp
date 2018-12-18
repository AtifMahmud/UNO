/**
 * File: cardClass.cpp
 * Purpose: Implementation of the cardClass
 * Author: Atif Mahmud
 * 
 */ 

#include "cardClass.h"
#include <string>
#include <iostream>

CardClass::CardClass(): number(), colour(), specialType() {};

CardClass::CardClass(int number, std::string colour, std::string specialType):
    number(number),
    colour(colour),
    specialType(specialType){};

int CardClass::getNumber()
{
    return this->number;
}

std::string CardClass::getColour()
{
    return this->colour;
}

std::string CardClass::getSpecialType()
{
    return this->specialType;
}

bool CardClass::isSpecialType()
{
    return (this->specialType != "none");
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
    std::cout << this->number << " " << this->colour << " " << this->specialType;
}