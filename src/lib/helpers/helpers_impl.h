#ifndef HEADERS_IMPL_H
#define HEADERS_IMPL_H

#include <iostream>

template <typename T>
void printVectorElements(std::vector<T> myVector)
{
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << "\n" << myVector[i] << " ";
    }
}

#endif
