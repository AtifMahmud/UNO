/**
 * Implementation of the card functions defined in cards.h 
 *
 */ 

#include "cards.h"
#include "../stack/stack.h"
#include "../helpers/helpers.h"
#include "../helpers/helpers_impl.h"
#include <vector>
#include <cstdlib>

CardStack initDeck(int size, std::vector<cardType> &myCards)
{
    shuffle(myCards);
    CardStack unoStack;
    return unoStack; 
}
