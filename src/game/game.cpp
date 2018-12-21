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
#include "../lib/player/player.h"
#include "../lib/cards/cards.h"
#include "game.h"
#include <cstdlib>

#define MIN_PLAYERS 3
#define MAX_PLAYERS 7
#define STARTING_CARDS_PER_PLAYER 7

bool gameEnd = false;
int numPlayers;


int main () 
{
    showWelcomeMessage();
    getNumPlayers();    
    setUpAndPlay();
}



void getNumPlayers()
{
    do {
        std::cout << "Please enter the number of players. Must be between " << MIN_PLAYERS << " and " << MAX_PLAYERS << ": ";
        std::cin >> numPlayers;

        if (numPlayers < MIN_PLAYERS || numPlayers > MAX_PLAYERS) {
            std::cout << "Sorry, invalid number of players\n";
        } 

    } while (numPlayers < MIN_PLAYERS || numPlayers > MAX_PLAYERS);
}

void showWelcomeMessage()
{
    std::cout << "           ###############################\n";
    std::cout << "           ##                           ##\n";
    std::cout << "           ##         UNO BY ATIF       ##\n";
    std::cout << "           ##            2018           ##\n";
    std::cout << "           ##                           ##\n";
    std::cout << "           ###############################\n";
    std::cout << "Welcome to UNO implemented by Atif Mahmud in C++\n\n";
}

void setUpAndPlay()
{
     std::cout << "Setting up for game for " << numPlayers << " players. You are player 1\n\n";
    std::vector <CardClass> unoCards = initUnoVector();
    playGame(unoCards, numPlayers);
}

void playGame(std::vector <CardClass> myCards, int numPlayers)
{   
    std::vector <Player> players;
    srand(time(NULL));

    // Shuffle
    for (int i = 0; i < rand() % 20000; i++){
        shuffle <CardClass> (myCards);
    }
    
    // Add players to the player list
    for (int i = 0; i < numPlayers; i++) {
        players.push_back(Player(i));
    }

    // Deal 7 cards each
    for (int i = 0; i < STARTING_CARDS_PER_PLAYER; i++) {
        for (int j = 0; j < players.size(); j++)
        {   
            CardClass card = myCards.back();
            myCards.pop_back();
            players[j].addToCards(card);
        }
    }   

    for (int i = 0; i < players.size(); i++){
        std::cout << "Hello player " << i << ". ";
        std::cout << "Your cards are as follows: \n\n";
        players[i].printAllCards();
        std::cout << "\n\n";
    }
    
}   