#ifndef UNO_H
#define UNO_H

/**
 * File: uno.h
 * Purpose: Declarations of the functions to implement the UNO gameplay
 * Author: Atif Mahmud
 * 
 */ 

#include "../cardClass/cardClass.h"
#include <vector>

std::vector <CardClass> initUnoVector();


    /** INITIALIZING THECARD OBJECTS FOR THE DECK **/

// Red
CardClass redZero = CardClass(0, "red", "none");
CardClass redOne = CardClass(1, "red", "none");
CardClass redTwo = CardClass(2, "red", "none");
CardClass redThree = CardClass(3, "red", "none");
CardClass redFour = CardClass(4, "red", "none");
CardClass redFive = CardClass(5, "red", "none");
CardClass redSix = CardClass(6, "red", "none");
CardClass redSeven = CardClass(7, "red", "none");
CardClass redEight = CardClass(8, "red", "none");
CardClass redNine = CardClass(9, "red", "none");

// Green
CardClass greenZero = CardClass(0, "green", "none");
CardClass greenOne = CardClass(1, "green", "none");
CardClass greenTwo = CardClass(2, "green", "none");
CardClass greenThree = CardClass(3, "green", "none");
CardClass greenFour = CardClass(4, "green", "none");
CardClass greenFive = CardClass(5, "green", "none");
CardClass greenSix = CardClass(6, "green", "none");
CardClass greenSeven = CardClass(7, "green", "none");
CardClass greenEight = CardClass(8, "green", "none");
CardClass greenNine = CardClass(9, "green", "none");

// Blue
CardClass blueZero = CardClass(0, "blue", "none");
CardClass blueOne = CardClass(1, "blue", "none");
CardClass blueTwo = CardClass(2, "blue", "none");
CardClass blueThree = CardClass(3, "blue", "none");
CardClass blueFour = CardClass(4, "blue", "none");
CardClass blueFive = CardClass(5, "blue", "none");
CardClass blueSix = CardClass(6, "blue", "none");
CardClass blueSeven = CardClass(7, "blue", "none");
CardClass blueEight = CardClass(8, "blue", "none");
CardClass blueNine = CardClass(9, "blue", "none");

// Yellow
CardClass yellowZero = CardClass(0, "yellow", "none");
CardClass yellowOne = CardClass(1, "yellow", "none");
CardClass yellowTwo = CardClass(2, "yellow", "none");
CardClass yellowThree = CardClass(3, "yellow", "none");
CardClass yellowFour = CardClass(4, "yellow", "none");
CardClass yellowFive = CardClass(5, "yellow", "none");
CardClass yellowSix = CardClass(6, "yellow", "none");
CardClass yellowSeven = CardClass(7, "yellow", "none");
CardClass yellowEight = CardClass(8, "yellow", "none");
CardClass yellowNine = CardClass(9, "yellow", "none");

// Symbol Types
CardClass reverse = CardClass(-1, "none", "reverse");
CardClass skip = CardClass(-1, "none", "skip");
CardClass drawTwo = CardClass(-1, "none", "drawTwo");
CardClass wild = CardClass(-1, "none", "wild");
CardClass drawFour = CardClass(-1, "none", "drawFour");



#endif
