/**
 * Implementation of the card functions defined in cards.h 
 *
 */ 

#include "cards.h"
#include "cards_impl.h"
#include "../stack/stack.h"
#include "../helpers/helpers.h"
#include "../helpers/helpers_impl.h"
#include "../cardClass/cardClass.h"
#include <vector>
#include <cstdlib>


/* This is a useless comment */
CardStack initDeck(int size, std::vector<CardClass> &myCards)
{
    shuffle <CardClass> (myCards);
    CardStack unoStack;
    return unoStack; 
}
