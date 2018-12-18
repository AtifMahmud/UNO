#include "types.h"
#include "../cardClass/cardClass.h"
#include <string>


typedef struct {
    CardClass card;  
    CardClass* next;
    CardClass* prev;
} stackNode;


