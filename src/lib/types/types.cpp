#include "types.h"
#include <string>

typedef struct {
    std::string colour; 
    std::string specialType;
    int cardNum;
} cardType; 


typedef struct {
    cardType card;  
    cardType* next;
    cardType* prev;
} stackNode;


