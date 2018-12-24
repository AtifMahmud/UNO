# Makefile for UNO C++ project

# target: dependencies
# 	action

all: game.exe alltests.exe

game.exe: helpers.o cards.o game.o stack.o cardClass.o uno.o player.o
	g++ helpers.o cards.o stack.o game.o cardClass.o uno.o player.o -o game.exe

alltests.exe: helpers.o cards.o alltests.o stack.o cardClass.o
	g++ helpers.o cards.o stack.o alltests.o cardClass.o -o alltests.exe

game.o: src/game/game.cpp
	g++ -c src/game/game.cpp

helpers.o: src/lib/helpers/helpers.cpp
	g++ -c src/lib/helpers/helpers.cpp
 
cards.o: src/lib/cards/cards.cpp  
	g++ -c src/lib/cards/cards.cpp 

alltests.o: src/tests/alltests.cpp
	g++ -c src/tests/alltests.cpp

stack.o: src/lib/stack/stack.cpp
	g++ -c src/lib/stack/stack.cpp 

cardClass.o: src/lib/cardClass/cardClass.cpp
	g++ -c src/lib/cardClass/cardClass.cpp

uno.o: src/lib/uno/uno.cpp
	g++ -c src/lib/uno/uno.cpp

player.o: src/lib/player/player.cpp
	g++ -c src/lib/player/player.cpp

clean:
	rm -f *.o 
	rm -f *.exe
