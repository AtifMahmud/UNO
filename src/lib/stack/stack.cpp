#include "stack.h"
#include "../types/types.h"
#include <vector>

// Default Constructor
CardStack::CardStack() : cards({}) { };

// Parametrized Constructor
CardStack::CardStack(std::vector<cardType> myCards): cards(myCards) { };

