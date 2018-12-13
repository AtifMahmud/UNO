#include "helpers.h"
#include <vector>
#include <iostream>


template <typename T>
void printVectorElements(std::vector<T> myVector)
{
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << "\n" << myVector[i] << " ";
    }
}


void foo()
{
    std::cout << "FOO \n";
}
