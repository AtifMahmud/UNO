/**
 * Implementation of the card functions defined in cards.h 
 *
 */ 

#include "cards.h"
#include "../stack/stack.h"
#include "../helpers/helpers.h"
#include <vector>
#include <cstdlib>

CardStack initDeck(int size, std::vector<cardType> &myCards)
{
    shuffle(myCards);
    CardStack* unoStack = new CardStack();
    return *unoStack; 
}

void shuffle(std::vector <cardType> &myCards)
{   
    int randomPos = rand() % myCards.size;
    for (int i = 0; i < myCards.size; i++) {
        swap(myCards[i], myCards[randomPos]);
    }


}