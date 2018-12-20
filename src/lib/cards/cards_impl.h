#ifndef CARDS_IMPL_H
#define CARDS_IMPL_H

#include "cards.h"
#include "../helpers/helpers.h"
#include "../helpers/helpers_impl.h"
#include <vector>
#include <algorithm>

template <typename T>
void shuffle(std::vector <T> &myVect)
{   
  std::random_shuffle(myVect.begin(), myVect.end());
}

#endif
