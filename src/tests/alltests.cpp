#include "../lib/cards/cards.h"
#include "../lib/cards/cards_impl.h"
#include "../lib/helpers/helpers.h"
#include "../lib/helpers/helpers_impl.h"
#include "../lib/cardClass/cardClass.h"
#include "../lib/stack/stack.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void printVectorElementsTest();
void fooTest();
void cardClassTest();
void stackTest();
void shuffleTest();

int main () 
{   
    std::cout << "Running Type Tests\n\n\n";

    printVectorElementsTest();
    fooTest();
    cardClassTest();
    stackTest();
    shuffleTest();

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

void stackTest()
{
    std::cout << "Running stackTest\n\n";
    CardClass redZeroCard = CardClass(0, "red", "none");
    CardClass greenOneCard = CardClass(1, "green", "none");
    CardClass blueEightCard = CardClass(8, "blue", "none");
    CardClass reverseCard = CardClass(-1, "none", "reverse");
    std::vector <CardClass> cards = {redZeroCard, greenOneCard, blueEightCard, reverseCard};
    CardStack stack = CardStack(cards);
    std::cout << "The vector has these cards\n";

    for (int i = 0; i < cards.size(); i++){
        cards[i].printAttributes();
        std::cout << "\n";
    }

    std::cout << "Size is "; 
    std::cout << stack.getSize() << "\n";
    std::cout << "One pop: ";
    (stack.pop()).printAttributes();
    std::cout << "\n";
    std::cout << "Size is now ";
    std::cout << stack.getSize();
}

void shuffleTest() 
{
    std::cout << "\n\nRunning shuffle test\n\n";
    std::vector <int> test = {1,2,3,4,5};
    printVectorElements(test);
    std::cout << "Shuffling...\n";
    std::random_shuffle(test.begin(), test.end());
    std::cout << "After shuffling\n";
    printVectorElements(test);
    std::cout <<"\n\n";
}