#ifndef TYPES_H
#define TYPES_H

/**
 * File: types.h
 * Purpose: Definitions for some custom types for this project
 * Author: Atif Mahmud
 * 
 */


#include <string>
#include "../cardClass/cardClass.h"

/**
 * Type: stackNode
 * Purpose: A struct describing a node for a doubly-linked list which will be used to implement a card stack  
 * Author: Atif Mahmud
 * 
 * @card: The type of card this node represents
 * 
 * @next: A pointer to the next card in this list
 *              - "null" if it is the last card
 * 
 * @prev: A pointer to the previous card in this list
 *              - "null" if it is the first card
 * 
 */ 

typedef struct {
    CardClass card;  
    CardClass* next;
    CardClass* prev;
} stackNode;

#endif
