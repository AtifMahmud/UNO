/**
 * File: game.cpp
 * Purpose: Implementation of the gameplay for the game
 * Author: Atif Mahmud
 * 
 */ 

#include <string>
#include <vector>
#include <iostream>
#include "../lib/uno/uno.h"
#include "../lib/cardClass/cardClass.h"
#include "../lib/stack/stack.h"
#include "game.h"

#define MIN_PLAYERS 3
#define MAX_PLAYERS 7

bool gameEnd = false;
int numPlayers;


int main () 
{
    std::cout << "Welcome to UNO implemented by Atif Mahmud in C++\n\n";
    getNumPlayers();    
    std::cout << "Setting up for game for " << numPlayers << " players. You are player 1\n\n";
    std::vector <CardClass> unoCards = initUnoVector();
    

}



void getNumPlayers()
{
    do {
        std::cout << "Please enter the number of players. Must be between " << MIN_PLAYERS << " and " << MAX_PLAYERS << "\n";
        std::cin >> numPlayers;

        if (numPlayers < MIN_PLAYERS || numPlayers > MAX_PLAYERS) {
            std::cout << "Sorry, invalid number of players\n";
        } 

    } while (numPlayers < MIN_PLAYERS || numPlayers > MAX_PLAYERS);
}



void playGame(std::vector <CardClass> myCards, int numPlayers)
{

}