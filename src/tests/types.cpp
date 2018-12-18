#include "../lib/types/types.h"
#include "../lib/cards/cards.h"
#include "../lib/cards/cards_impl.h"
#include "../lib/helpers/helpers.h"
#include "../lib/helpers/helpers_impl.h"
#include "../lib/cardClass/cardClass.h"

#include <iostream>
#include <string>
#include <vector>

void printVectorElementsTest();
void fooTest();
void cardClassTest();

int main () 
{   
    std::cout << "Running Type Tests\n\n\n";
    printVectorElementsTest();
    fooTest();
    cardClassTest();
    std::cout <<"\n\n\n";
    return 0;
} 

void printVectorElementsTest()
{   
    std::cout <<"\n\nPrint Vector Element Test";
    std::vector <int> myVect;

    for (int i = 0; i < 10; i++){
        myVect.push_back(i);
    }

    printVectorElements <int> (myVect);
    std::cout << "\n\n";

    std::cout << "When shuffled, it is...";
    shuffle <int> (myVect);
    printVectorElements <int> (myVect);

    std::cout << "\n\nWhen shuffled again, it is...";
    shuffle <int> (myVect);
    printVectorElements <int> (myVect);
}

void fooTest()
{   
    std::cout << "\n\nFoo Test\n";
    foo();
}

void cardClassTest()
{   
    std::cout << "Running cardClassTest\n\n";
    CardClass redZeroCard = CardClass(0, "red", "none");
    int number = redZeroCard.getNumber();
    std::string colour = redZeroCard.getColour();
    std::string specialType = redZeroCard.getSymbol();
    std::cout <<"\n\n" <<"For redZero " << number << " " << colour << " " << specialType;
    std::cout << "\n\n\n";
}
