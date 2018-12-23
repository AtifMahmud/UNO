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

    while (!gameEnd) {
        for (int i = 0; i < players.size(); i++) {
            playTurn(players[i]);
        }
    }
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

void playTurn(Player player) 
{   
    int cardToPlay;
    std::vector <CardClass> playableCards = discardPile.peek().getPlayableCards(player.getCards());
    std::cout << "Player " << player.getIdNum() + 1 << " it's your turn!\n";
    std::cout << "Your cards are\n";
    player.printAllCards();
    std::cout  << "\n";
    std::cout << "Top card is " << discardPile.peek().getName() << "\n";
    std::cout << "Your playable cards are (use -1 to pass): \n";

    for (int i = 0; i < playableCards.size(); i++) {
        std::cout << i + 1 << ".";
        playableCards[i].printName();
        std::cout << "\n";
    } 
    
    do {
        std::cout << "Enter number of card you want to play:";
        std::cin >> cardToPlay;
        std::cout << "\n";

        if (cardToPlay < -1 || cardToPlay > playableCards.size()) {
            std::cout << "Invalid option\n";
        }
    } while (cardToPlay < -1 || cardToPlay > playableCards.size());

    if (cardToPlay != -1) {
        CardClass newCard = playableCards[cardToPlay - 1];
        std::cout << "\nPlaying " << newCard.getName() << "...";
        std::cout << "\n\n";
        player.removeElement(newCard);
        discardPile.push(newCard);
    }

}