#ifndef CARDS_IMPL_H
#define CARDS_IMPL_H

#include "cards.h"
#include "../helpers/helpers.h"
#include "../helpers/helpers_impl.h"
#include <vector>
#include <cstdlib>

template <typename T>
void shuffle(std::vector <T> &myVect)
{   
    int pos1 = 1;
    int pos2 = 2;

    for (int i = 0; i < myVect.size(); i++) {
        int randomPos = rand() % myVect.size();
        pos1 = i;
        pos2 = randomPos;
        std::swap <T> (myVect[pos1], myVect[pos2]);
    }
}

#endif
