#include "../lib/types/types.h"
#include "../lib/helpers/helpers.h"
#include "../lib/helpers/helpers_impl.h"

#include <iostream>
#include <string>
#include <vector>

void testCardTest();
void printVectorElementsTest();
void fooTest();

int main () 
{   
    std::cout << "Running Type Tests\n\n\n";
    testCardTest();
    printVectorElementsTest();
    fooTest();
    std::cout <<"\n\n\n";
    return 0;
} 


void testCardTest()
{
    cardType testCard;
    testCard.colour = "red";
    testCard.specialType = "none";
    testCard.cardNum = 2;
    std::cout << "\n\nTest Card Test\n" ;
    std::cout << "Test card " << testCard.colour << " " << testCard.specialType << " " << testCard.cardNum << " \n\n";
}

void printVectorElementsTest()
{   
    std::cout <<"\n\nPrint Vector Element Test";
    std::vector <int> myVect;
    myVect.push_back(20);
    myVect.push_back(25);
    myVect.push_back(200);
    printVectorElements <int> (myVect);
    std::cout << "\n\n";
}

void fooTest()
{   
    std::cout << "\n\nFoo Test\n";
    foo();
}
