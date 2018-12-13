#ifndef TYPES_H
#define TYPES_H

#include <string>

/**
 * A data type defining a standard UNO card
 *
 * @colour: A string specifying which colour suite the card belongs to 
 *              - "none" if specialType
 * 
 * @specialType: A string specifying what type of special card this is (special => not a numbered card)
 *              - "none" if not a specialType
 *
 * @cardNum: An integer specifying the number of the card if it is numbered
 *              - -1 if not numbered
 *  
 */
typedef struct {
    std::string colour; 
    std::string specialType;
    int cardNum;
} cardType; 


/**
 * A struct describing a node for a doubly-linked list which will be used to implement a card stack  
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
    cardType card;  
    cardType* next;
    cardType* prev;
} stackNode;

#endif