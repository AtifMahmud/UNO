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
    CardClass topCard;
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

    // Display cards: need to put in game loop
    for (int i = 0; i < players.size(); i++){
        std::cout << "Hello player " << i << ". ";
        std::cout << "Your cards are as follows: \n\n";
        players[i].printAllCards();
        std::cout << "\n\n";
    }

    // Initialize discard pile
    do {
        topCard= {myCards.back()};
        shuffle(myCards);
    } while (topCard.isSymbol() == true);

    std::vector <CardClass> discardVector = {topCard};
    CardStack discardPile = CardStack(discardVector);

    // Game Loop
    std::cout << "The top card is ";
    discardPile.peek().printName();
    std::cout << "\n\n";

    std::vector <CardClass> player1 = topCard.getPlayableCards(players[0].getCards());
    std::vector <CardClass> player2 = topCard.getPlayableCards(players[1].getCards());
    std::vector <CardClass> player3 = topCard.getPlayableCards(players[2].getCards());

    std::cout << "For player1, the playable cards are ";
    for (int i = 0; i < player1.size(); i++) {
        player1[i].printName();
        std::cout << "\n";
    }

    std::cout << "\n\n";
    
    std::cout << "For player2, the playable cards are ";
    for (int i = 0; i < player2.size(); i++) {
        player2[i].printName();
        std::cout << "\n";
    }

    std::cout << "\n\n";

    std::cout << "For player3, the playable cards are ";
    for (int i = 0; i < player3.size(); i++) {
        player3[i].printName();
        std::cout << "\n";
    }
}   