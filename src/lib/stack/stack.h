#ifndef STACK_H
#define STACK_H

/**
 * File: stack.h
 * Purpose: Definitions for the custom stack class for this project
 * Author: Atif Mahmud
 * 
 */

#include <vector>
#include "../cardClass/cardClass.h"

class CardStack
{   
    
    private:
        std::vector <CardClass> data; 

    public:

        // Constructor (dummy for now)
        CardStack();

        // Parameterized constructor
        CardStack(std::vector <CardClass> myCards); 

        // Getter function 
        std::vector <CardClass> getCards();

        // Pop function (removes the top element)
        CardClass pop();

        // Push function
        CardClass push(CardClass card);

        // Get size
        int getSize();
};

#endif
