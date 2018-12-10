#include "../lib/types/types.h"
#include <iostream>
#include <string>

int main () 
{

    cardType testCard;

    testCard.colour = "red";
    testCard.specialType = "none";
    testCard.cardNum = 2;

    std::cout << "Test card " << testCard.colour << " " << testCard.specialType << " " << testCard.cardNum << " \n";

} 