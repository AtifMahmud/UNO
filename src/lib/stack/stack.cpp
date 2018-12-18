#include "stack.h"
#include "../types/types.h"
#include "../cardClass/cardClass.h"
#include <vector>

// Default Constructor
CardStack::CardStack() : cards({}) { };

// Parametrized Constructor
CardStack::CardStack(std::vector<CardClass> myCards): cards(myCards) { };
