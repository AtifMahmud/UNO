#include "stack.h"
#include "../cardClass/cardClass.h"
#include <vector>

// Default Constructor
CardStack::CardStack() : data({}) { };

// Parametrized Constructor
CardStack::CardStack(std::vector<CardClass> myCards): data(myCards) { };

// Getter function
std::vector <CardClass> CardStack::getCards()
{
    return this->data;
}

// Pop function
CardClass CardStack::pop()
{
    CardClass card = (this->data.back());
    (this->data).pop_back();
    return card;
}

// Push function
CardClass CardStack::push(CardClass card)
{
    (this->data).push_back(card);
}

// Get size
int CardStack::getSize()
{
    return (this->data.size());
}

CardClass CardStack::peek()
{
    return (this->data).back();
}