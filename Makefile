# Makefile for UNO C++ project

# target: dependencies
# 	action

alltests: helpers.o cards.o alltests.o stack.o cardClass.o
	g++ helpers.o cards.o stack.o alltests.o cardClass.o -o alltests

helpers.o: src/lib/helpers/helpers.cpp
	g++ -c src/lib/helpers/helpers.cpp
 
cards.o: src/lib/cards/cards.cpp  
	g++ -c src/lib/cards/cards.cpp 

alltests.o: src/tests/alltests.cpp
	g++ -c src/tests/alltests.cpp

stack.o: src/lib/stack/stack.cpp
	g++ -c src/lib/stack/stack.cpp 

cardClass.o: src/lib/cardClass/cardClass.o
	g++ -c src/lib/cardClass/cardClass.cpp

clean:
	rm -f *.o 