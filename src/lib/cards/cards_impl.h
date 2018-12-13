#include "cards.h"
#include "../helpers/helpers.h"
#include "../helpers/helpers_impl.h"
#include <vector>
#include <cstdlib>

template <typename T>
void shuffle(std::vector <T> &myCards)
{   
    int pos1 = 1;
    int pos2 = 2;

    for (int i = 0; i < myCards.size(); i++) {
        int randomPos = rand() % myCards.size();
        pos1 = i;
        pos2 = randomPos;
        std::swap <int> (myCards[pos1], myCards[pos2]);
    }
}