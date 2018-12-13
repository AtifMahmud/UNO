/**
 * Functions to assist card management for the game
 * 
 */ 
#ifndef CARDS_H
#define CARDS_H

#include "../types/types.h"
#include "../stack/stack.h"
#include <vector>

// Shuffles a deck of cards
template <typename T>
void shuffle (std::vector <T> &myCards);

// Initialize a standard deck of UNO cards
CardStack initDeck(int size, std::vector <cardType> &myCards);

#endif








