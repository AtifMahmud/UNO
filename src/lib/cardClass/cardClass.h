#ifndef CARD_CLASS_H
#define CARD_CLASS_H

/**
 * File: cardClass.h
 * Purpose: Declarations of the class that describes a card
 * Author: Atif Mahmud
 * 
 */ 

#include <string>
#include <vector>

/**
 * Author: Atif Mahmud
 * 
 * @name: A string indicating the name of the class instance
 * 
 * @number: An integer specifying the number of the card if it is numbered
 *              - -1 if not numbered
 * 
 * @colour: A string specifying which colour suite the card belongs to 
 *              - "none" if specialType
 * 
 * @symbol: A string specifying what type of symbol card this is (symbol => not a numbered card)
 *              - "none" if not a symbol
 *
 *  
 */

class CardClass {

    private:
        std::string name;
        int number;
        std::string colour;
        std::string symbol;

    public:

        // Default constructor
        CardClass();

        // Parameterized constructor
        CardClass(std::string name, int number, std::string colour, std::string symbol);

        // Getter functions
        int getNumber();
        std::string getColour();
        std::string getSymbol();
        std::string getName();

        // Card checks
        bool isSymbol();
        bool isRed();
        bool isGreen();
        bool isBlue();
        bool isYellow();

        // Print methods to help inspect the class instance
        void printAttributes();
        void printName();

        // Gameplay method
        std::vector <CardClass> getPlayableCards(std::vector <CardClass> playerCards);

};

#endif 
