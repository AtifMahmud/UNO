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
std::vector <CardClass> unoCards;
CardStack discardPile;
std::vector <Player> players;

int main () 
{   
    showWelcomeMessage();
    getNumPlayers();    
    setUpGame();
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

void setUpGame()
{  
    std::cout << "Setting up for game for " << numPlayers << " players...\n\n";
    unoCards = initUnoVector();
    unoCards = initUnoVector();
    shuffleCards();
    enrolPlayers();
    dealCards();
    displayCards();
    initDiscardPile();
    
}


void shuffleCards()
{
    srand(time(NULL));
    for (int i = 0; i < rand() % 20000; i++){
        shuffle <CardClass> (unoCards);
    }
}

void enrolPlayers()
{
    for (int i = 0; i < numPlayers; i++) {
        players.push_back(Player(i));
    }
}

void dealCards()
{
    for (int i = 0; i < STARTING_CARDS_PER_PLAYER; i++) {
        for (int j = 0; j < players.size(); j++)
        {   
            CardClass card = unoCards.back();
            unoCards.pop_back();
            players[j].addToCards(card);
        }
    } 
}

void displayCards()
{
    for (int i = 0; i < players.size(); i++) {
        std::cout << "Player " << i + 1 << ": Your cards are as follows\n";
        players[i].printAllCards();
        std::cout << "\n\n";
    }
}

void initDiscardPile() {

    CardClass topCard;

    do {
        topCard= {unoCards.back()};
        shuffle(unoCards);
    } while (topCard.isSymbol() == true);

    unoCards.pop_back();
    std::vector <CardClass> discardVector = {topCard};
    discardPile = CardStack(discardVector);

    std::cout << "The top card is ";
    discardPile.peek().printName();
    std::cout << "\n\n";

}