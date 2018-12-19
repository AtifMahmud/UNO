/**
 * File: uno.cpp
 * Purpose: Implementation of the functions that implement UNO gameplay
 * Author: Atif Mahmud
 * 
 */ 

#include "uno.h"
#include "../cardClass/cardClass.h"
#include <vector>
    
    /** INITIALIZING THECARD OBJECTS FOR THE DECK **/

// Red
CardClass redZero1 = CardClass(0, "red", "none");
CardClass redOne1 = CardClass(1, "red", "none");
CardClass redTwo1 = CardClass(2, "red", "none"); 
CardClass redThree1 = CardClass(3, "red", "none");
CardClass redFour1 = CardClass(4, "red", "none");
CardClass redFive1 = CardClass(5, "red", "none");
CardClass redSix1 = CardClass(6, "red", "none");
CardClass redSeven1 = CardClass(7, "red", "none");
CardClass redEight1 = CardClass(8, "red", "none");
CardClass redNine1 = CardClass(9, "red", "none");

CardClass redOne2 = CardClass(1, "red", "none");
CardClass redTwo2 = CardClass(2, "red", "none");
CardClass redThree2 = CardClass(3, "red", "none");
CardClass redFour2 = CardClass(4, "red", "none");
CardClass redFive2 = CardClass(5, "red", "none");
CardClass redSix2 = CardClass(6, "red", "none");
CardClass redSeven2 = CardClass(7, "red", "none");
CardClass redEight2 = CardClass(8, "red", "none");
CardClass redNine2 = CardClass(9, "red", "none");

// Green
CardClass greenZero1 = CardClass(0, "green", "none");
CardClass greenOne1 = CardClass(1, "green", "none");
CardClass greenTwo1 = CardClass(2, "green", "none");
CardClass greenThree1 = CardClass(3, "green", "none");
CardClass greenFour1 = CardClass(4, "green", "none");
CardClass greenFive1 = CardClass(5, "green", "none");
CardClass greenSix1 = CardClass(6, "green", "none");
CardClass greenSeven1 = CardClass(7, "green", "none");
CardClass greenEight1 = CardClass(8, "green", "none");
CardClass greenNine1 = CardClass(9, "green", "none");

CardClass greenOne2 = CardClass(1, "green", "none");
CardClass greenTwo2 = CardClass(2, "green", "none");
CardClass greenThree2 = CardClass(3, "green", "none");
CardClass greenFour2 = CardClass(4, "green", "none");
CardClass greenFive2 = CardClass(5, "green", "none");
CardClass greenSix2 = CardClass(6, "green", "none");
CardClass greenSeven2 = CardClass(7, "green", "none");
CardClass greenEight2 = CardClass(8, "green", "none");
CardClass greenNine2 = CardClass(9, "green", "none");

// Blue
CardClass blueZero1 = CardClass(0, "blue", "none");
CardClass blueOne1 = CardClass(1, "blue", "none");
CardClass blueTwo1 = CardClass(2, "blue", "none");
CardClass blueThree1 = CardClass(3, "blue", "none");
CardClass blueFour1 = CardClass(4, "blue", "none");
CardClass blueFive1 = CardClass(5, "blue", "none");
CardClass blueSix1 = CardClass(6, "blue", "none");
CardClass blueSeven1 = CardClass(7, "blue", "none");
CardClass blueEight1 = CardClass(8, "blue", "none");
CardClass blueNine1 = CardClass(9, "blue", "none");

CardClass blueOne2 = CardClass(1, "blue", "none");
CardClass blueTwo2 = CardClass(2, "blue", "none");
CardClass blueThree2 = CardClass(3, "blue", "none");
CardClass blueFour2 = CardClass(4, "blue", "none");
CardClass blueFive2 = CardClass(5, "blue", "none");
CardClass blueSix2 = CardClass(6, "blue", "none");
CardClass blueSeven2 = CardClass(7, "blue", "none");
CardClass blueEight2 = CardClass(8, "blue", "none");
CardClass blueNine2 = CardClass(9, "blue", "none");


// Yellow
CardClass yellowZero1 = CardClass(0, "yellow", "none");
CardClass yellowOne1 = CardClass(1, "yellow", "none");
CardClass yellowTwo1 = CardClass(2, "yellow", "none");
CardClass yellowThree1 = CardClass(3, "yellow", "none");
CardClass yellowFour1 = CardClass(4, "yellow", "none");
CardClass yellowFive1 = CardClass(5, "yellow", "none");
CardClass yellowSix1 = CardClass(6, "yellow", "none");
CardClass yellowSeven1 = CardClass(7, "yellow", "none");
CardClass yellowEight1 = CardClass(8, "yellow", "none");
CardClass yellowNine1 = CardClass(9, "yellow", "none");

CardClass yellowOne2 = CardClass(1, "yellow", "none");
CardClass yellowTwo2 = CardClass(2, "yellow", "none");
CardClass yellowThree2 = CardClass(3, "yellow", "none");
CardClass yellowFour2 = CardClass(4, "yellow", "none");
CardClass yellowFive2 = CardClass(5, "yellow", "none");
CardClass yellowSix2 = CardClass(6, "yellow", "none");
CardClass yellowSeven2 = CardClass(7, "yellow", "none");
CardClass yellowEight2 = CardClass(8, "yellow", "none");
CardClass yellowNine2 = CardClass(9, "yellow", "none");

// Symbol Types
CardClass reverse1 = CardClass(-1, "none", "reverse");
CardClass reverse2 = CardClass(-1, "none", "reverse");
CardClass reverse3 = CardClass(-1, "none", "reverse");
CardClass reverse4 = CardClass(-1, "none", "reverse");
CardClass reverse5 = CardClass(-1, "none", "reverse");
CardClass reverse6 = CardClass(-1, "none", "reverse");
CardClass reverse7 = CardClass(-1, "none", "reverse");
CardClass reverse8 = CardClass(-1, "none", "reverse");

CardClass skip1 = CardClass(-1, "none", "skip");
CardClass skip2 = CardClass(-1, "none", "skip");
CardClass skip3 = CardClass(-1, "none", "skip");
CardClass skip4 = CardClass(-1, "none", "skip");
CardClass skip5 = CardClass(-1, "none", "skip");
CardClass skip6 = CardClass(-1, "none", "skip");
CardClass skip7 = CardClass(-1, "none", "skip");
CardClass skip8 = CardClass(-1, "none", "skip");

CardClass drawTwo1 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo2 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo3 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo4 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo5 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo6 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo7 = CardClass(-1, "none", "drawTwo");
CardClass drawTwo8 = CardClass(-1, "none", "drawTwo");

CardClass wild1 = CardClass(-1, "none", "wild");
CardClass wild2 = CardClass(-1, "none", "wild");
CardClass wild3 = CardClass(-1, "none", "wild");
CardClass wild4 = CardClass(-1, "none", "wild");

CardClass drawFour1 = CardClass(-1, "none", "drawFour");
CardClass drawFour2 = CardClass(-1, "none", "drawFour");
CardClass drawFour3 = CardClass(-1, "none", "drawFour");
CardClass drawFour4 = CardClass(-1, "none", "drawFour");   

std::vector <CardClass> initUnoVector()
{
    std::vector <CardClass> cardVector = 
        {

            redZero1,
            redOne1,
            redOne2,
            redTwo1,
            redTwo2,
            redThree1,
            redThree2,
            redFour1,
            redFour2,
            redFive1,
            redFive2,
            redSix1,
            redSix2,
            redSeven1,
            redSeven2,
            redEight1,
            redEight2,
            redNine1,
            redNine2,

            greenZero1,
            greenOne1,
            greenOne2,
            greenTwo1,
            greenTwo2,
            greenThree1,
            greenThree2,
            greenFour1,
            greenFour2,
            greenFive1,
            greenFive2,
            greenSix1,
            greenSix2,
            greenSeven1,
            greenSeven2,
            greenEight1,
            greenEight2,
            greenNine1,
            greenNine2,

            blueZero1,
            blueOne1,
            blueOne2,
            blueTwo1,
            blueTwo2,
            blueThree1,
            blueThree2,
            blueFour1,
            blueFour2,
            blueFive1,
            blueFive2,
            blueSix1,
            blueSix2,
            blueSeven1,
            blueSeven2,
            blueNine1,
            blueNine2,

            yellowZero1,
            yellowOne1,
            yellowOne2,
            yellowTwo1,
            yellowTwo2,
            yellowThree1,
            yellowThree2,
            yellowFour1,
            yellowFour2,
            yellowFive1,
            yellowFive2,
            yellowSix1,
            yellowSix2,
            yellowSeven1,
            yellowSeven2,
            yellowEight1,
            yellowEight2,
            yellowNine1,
            yellowNine2,

            reverse1,
            reverse2,
            reverse3,
            reverse4,
            reverse5,
            reverse6,
            reverse7,
            reverse8,

            skip1,
            skip2,
            skip3,
            skip4,
            skip5,
            skip6,
            skip7,
            skip8,

            drawTwo1,
            drawTwo2,         
            drawTwo3,
            drawTwo4,
            drawTwo5,
            drawTwo6,
            drawTwo7,
            drawTwo8,

            wild1,
            wild2,
            wild3,
            wild4,

            drawFour1,
            drawFour2,
            drawFour3,
            drawFour4
        
        };
    
    return cardVector;

}
