/**
 * File: uno.cpp
 * Purpose: Implementation of the functions that implement UNO gameplay
 * Author: Atif Mahmud
 * 
 */ 


#include "uno.h"
#include "../cardClass/cardClass.h"
#include <vector>

std::vector <CardClass> initUnoVector()
{
    std::vector <CardClass> cardVector = 
        {

            redZero,
            redOne,
            redOne,
            redTwo,
            redTwo,
            redThree,
            redThree,
            redFour,
            redFour,
            redFive,
            redFive,
            redSix,
            redSix,
            redSeven,
            redSeven,
            redEight,
            redEight,
            redNine,
            redNine,

            greenZero,
            greenOne,
            greenOne,
            greenTwo,
            greenTwo,
            greenThree,
            greenThree,
            greenFour,
            greenFour,
            greenFive,
            greenFive,
            greenSix,
            greenSix,
            greenSeven,
            greenSeven,
            greenEight,
            greenEight,
            greenNine,
            greenNine,

            blueZero,
            blueOne,
            blueOne,
            blueTwo,
            blueTwo,
            blueThree,
            blueThree,
            blueFour,
            blueFour,
            blueFive,
            blueFive,
            blueSix,
            blueSix,
            blueSeven,
            blueSeven,
            blueNine,
            blueNine,

            yellowZero,
            yellowOne,
            blueEight,
            blueEight,
            yellowOne,
            yellowTwo,
            yellowTwo,
            yellowThree,
            yellowThree,
            yellowFour,
            yellowFour,
            yellowFive,
            yellowFive,
            yellowSix,
            yellowSix,
            yellowSeven,
            yellowSeven,
            yellowEight,
            yellowEight,
            yellowNine,
            yellowNine,

            reverse,
            reverse,
            reverse,
            reverse,
            reverse,
            reverse,
            reverse,
            reverse,

            skip,
            skip,
            skip,
            skip,
            skip,
            skip,
            skip,
            skip,

            drawTwo,
            drawTwo,         
            drawTwo,
            drawTwo,
            drawTwo,
            drawTwo,
            drawTwo,
            drawTwo,

            wild,
            wild,
            wild,
            wild,

            drawFour,
            drawFour,
            drawFour,
            drawFour,
            drawFour,
            drawFour,
            drawFour,
            drawFour
        
        };
    
    return cardVector;

}
