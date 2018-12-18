#ifndef STACK_H
#define STACK_H

/**
 * File: stack.h
 * Purpose: Definitions for the custom stack class for this project
 * Author: Atif Mahmud
 * 
 */

#include <vector>
#include "../types/types.h"

class CardStack
{   
    
    private:
        std::vector <cardType> cards; 

    public:

        // Constructor (dummy for now)
        CardStack();

        // Parameterized constructor
        CardStack(std::vector <cardType> myCards); 

        // Getter function 
        std::vector <cardType> getCards();
};

#endif
