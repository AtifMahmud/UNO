#ifndef CARDS_H
#define CARDS_H

/**
 * File: cards.h
 * Purpose: Declarations of functions to assist card management for the game
 * Author: Atif Mahmud
 * 
 */ 

#include "../types/types.h"
#include "../stack/stack.h"
#include <vector>

/**
 * Function: shuffle 
 * Purpose: Shuffles the contents of a vector
 * Author: Atif Mahmud
 * 
 * @param myVect: The vector to shuffle
 * 
 */
 
template <typename T>
void shuffle (std::vector <T> &myVect);

/**
 * Function: initDeck
 * Purpose: Initializes a "deck" of cards using a stack
 * Author: Atif Mahmud
 * 
 * @param size: The size of the deck of cards
 * @param myCards: A vector containing the cardTypes to include
 * @returns: An instance of the CardStack class
 * 
 */

CardStack initDeck(int size, std::vector <cardType> &myCards);

#endif
