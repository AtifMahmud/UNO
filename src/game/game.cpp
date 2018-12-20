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
    std::cout << "Welcome to UNO implemented by Atif Mahmud in C++\n\n";
    getNumPlayers();    
    std::cout << "Setting up for game for " << numPlayers << " players. You are player 1\n\n";
    std::vector <CardClass> unoCards = initUnoVector();
    playGame(unoCards, numPlayers);

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
    std::vector <Player> players;
    srand(time(NULL));

    for (int i = 0; i < rand() % 20000; i++){
        shuffle <CardClass> (myCards);
    }
    
    for (int i = 0; i < numPlayers; i++) {
        players.push_back(Player(i));
    }

    for (int i = 0; i < STARTING_CARDS_PER_PLAYER; i++) {
        for (int j = 0; j < players.size(); j++)
        {   
            CardClass card = myCards.back();
            myCards.pop_back();
            players[j].addToCards(card);
        }
    }   

    std::vector <CardClass> cards = players[0].getCards();
    for (int i = 0; i < cards.size(); i++) {
        cards[i].printAttributes();
        std::cout << "\n";
    }
}   