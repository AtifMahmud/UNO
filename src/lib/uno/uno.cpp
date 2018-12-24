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
CardClass redZero1 = CardClass("redZero", 0, "red", "none");
CardClass redOne1 = CardClass("redOne", 1, "red", "none");
CardClass redTwo1 = CardClass("redTwo", 2, "red", "none"); 
CardClass redThree1 = CardClass("redThree", 3, "red", "none");
CardClass redFour1 = CardClass("redFour", 4, "red", "none");
CardClass redFive1 = CardClass("redFive", 5, "red", "none");
CardClass redSix1 = CardClass("redSix", 6, "red", "none");
CardClass redSeven1 = CardClass("redSeven", 7, "red", "none");
CardClass redEight1 = CardClass("redEight", 8, "red", "none");
CardClass redNine1 = CardClass("redNine", 9, "red", "none");

CardClass redOne2 = CardClass("redOne", 1, "red", "none");
CardClass redTwo2 = CardClass("redTwo", 2, "red", "none");
CardClass redThree2 = CardClass("redThree", 3, "red", "none");
CardClass redFour2 = CardClass("redFour", 4, "red", "none");
CardClass redFive2 = CardClass("redFive", 5, "red", "none");
CardClass redSix2 = CardClass("redSix", 6, "red", "none");
CardClass redSeven2 = CardClass("redSeven", 7, "red", "none");
CardClass redEight2 = CardClass("redEight", 8, "red", "none");
CardClass redNine2 = CardClass("redNine", 9, "red", "none");

// Green
CardClass greenZero1 = CardClass("greenZero", 0, "green", "none");
CardClass greenOne1 = CardClass("greenOne", 1, "green", "none");
CardClass greenTwo1 = CardClass("greenTwo", 2, "green", "none");
CardClass greenThree1 = CardClass("greenThree", 3, "green", "none");
CardClass greenFour1 = CardClass("greenFour", 4, "green", "none");
CardClass greenFive1 = CardClass("greenFive", 5, "green", "none");
CardClass greenSix1 = CardClass("greenSix", 6, "green", "none");
CardClass greenSeven1 = CardClass("greenSeven", 7, "green", "none");
CardClass greenEight1 = CardClass("greenEight", 8, "green", "none");
CardClass greenNine1 = CardClass("greenNine", 9, "green", "none");

CardClass greenOne2 = CardClass("greenOne", 1, "green", "none");
CardClass greenTwo2 = CardClass("greenTwo", 2, "green", "none");
CardClass greenThree2 = CardClass("greenThree", 3, "green", "none");
CardClass greenFour2 = CardClass("greenFour", 4, "green", "none");
CardClass greenFive2 = CardClass("greenFive", 5, "green", "none");
CardClass greenSix2 = CardClass("greenSix", 6, "green", "none");
CardClass greenSeven2 = CardClass("greenSeven", 7, "green", "none");
CardClass greenEight2 = CardClass("greenEight", 8, "green", "none");
CardClass greenNine2 = CardClass("greenNine", 9, "green", "none");

// Blue
CardClass blueZero1 = CardClass("blueZero", 0, "blue", "none");
CardClass blueOne1 = CardClass("blueOne", 1, "blue", "none");
CardClass blueTwo1 = CardClass("blueTwo", 2, "blue", "none");
CardClass blueThree1 = CardClass("blueThree", 3, "blue", "none");
CardClass blueFour1 = CardClass("blueFour", 4, "blue", "none");
CardClass blueFive1 = CardClass("blueFive", 5, "blue", "none");
CardClass blueSix1 = CardClass("blueSix", 6, "blue", "none");
CardClass blueSeven1 = CardClass("blueSeven", 7, "blue", "none");
CardClass blueEight1 = CardClass("blueEight", 8, "blue", "none");
CardClass blueNine1 = CardClass("blueNine", 9, "blue", "none");

CardClass blueOne2 = CardClass("blueOne", 1, "blue", "none");
CardClass blueTwo2 = CardClass("blueTwo", 2, "blue", "none");
CardClass blueThree2 = CardClass("blueThree", 3, "blue", "none");
CardClass blueFour2 = CardClass("blueFour", 4, "blue", "none");
CardClass blueFive2 = CardClass("blueFive", 5, "blue", "none");
CardClass blueSix2 = CardClass("blueSix", 6, "blue", "none");
CardClass blueSeven2 = CardClass("blueSeven", 7, "blue", "none");
CardClass blueEight2 = CardClass("blueEight", 8, "blue", "none");
CardClass blueNine2 = CardClass("blueNine", 9, "blue", "none");


// Yellow
CardClass yellowZero1 = CardClass("yellowZero", 0, "yellow", "none");
CardClass yellowOne1 = CardClass("yellowOne", 1, "yellow", "none");
CardClass yellowTwo1 = CardClass("yellowTwo", 2, "yellow", "none");
CardClass yellowThree1 = CardClass("yellowThree", 3, "yellow", "none");
CardClass yellowFour1 = CardClass("yellowFour", 4, "yellow", "none");
CardClass yellowFive1 = CardClass("yellowFive", 5, "yellow", "none");
CardClass yellowSix1 = CardClass("yellowSix", 6, "yellow", "none");
CardClass yellowSeven1 = CardClass("yellowSeven", 7, "yellow", "none");
CardClass yellowEight1 = CardClass("yellowEight", 8, "yellow", "none");
CardClass yellowNine1 = CardClass("yellowNine", 9, "yellow", "none");

CardClass yellowOne2 = CardClass("yellowOne", 1, "yellow", "none");
CardClass yellowTwo2 = CardClass("yellowTwo", 2, "yellow", "none");
CardClass yellowThree2 = CardClass("yellowThree", 3, "yellow", "none");
CardClass yellowFour2 = CardClass("yellowFour", 4, "yellow", "none");
CardClass yellowFive2 = CardClass("yellowFive", 5, "yellow", "none");
CardClass yellowSix2 = CardClass("yellowSix", 6, "yellow", "none");
CardClass yellowSeven2 = CardClass("yellowSeven", 7, "yellow", "none");
CardClass yellowEight2 = CardClass("yellowEight", 8, "yellow", "none");
CardClass yellowNine2 = CardClass("yellowNine", 9, "yellow", "none");

// Symbol Types
CardClass reverse1 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse2 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse3 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse4 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse5 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse6 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse7 = CardClass("reverse", -1, "none", "reverse");
CardClass reverse8 = CardClass("reverse", -1, "none", "reverse");

CardClass skip1 = CardClass("skip", -1, "none", "skip");
CardClass skip2 = CardClass("skip", -1, "none", "skip");
CardClass skip3 = CardClass("skip", -1, "none", "skip");
CardClass skip4 = CardClass("skip", -1, "none", "skip");
CardClass skip5 = CardClass("skip", -1, "none", "skip");
CardClass skip6 = CardClass("skip", -1, "none", "skip");
CardClass skip7 = CardClass("skip", -1, "none", "skip");
CardClass skip8 = CardClass("skip", -1, "none", "skip");

CardClass drawTwo1 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo2 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo3 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo4 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo5 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo6 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo7 = CardClass("drawTwo", -1, "none", "drawTwo");
CardClass drawTwo8 = CardClass("drawTwo", -1, "none", "drawTwo");

CardClass wild1 = CardClass("wild", -1, "none", "wild");
CardClass wild2 = CardClass("wild", -1, "none", "wild");
CardClass wild3 = CardClass("wild", -1, "none", "wild");
CardClass wild4 = CardClass("wild", -1, "none", "wild");

CardClass drawFour1 = CardClass("drawFour", -1, "none", "drawFour");
CardClass drawFour2 = CardClass("drawFour", -1, "none", "drawFour");
CardClass drawFour3 = CardClass("drawFour", -1, "none", "drawFour");
CardClass drawFour4 = CardClass("drawFour", -1, "none", "drawFour");   

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
            blueEight1,
            blueEight2,
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
