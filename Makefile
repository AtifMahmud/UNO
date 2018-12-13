# Makefile for UNO C++ project

# target: dependencies
# 	action

typeTest: helpers.o cards.o types.o stack.o
	g++ helpers.o cards.o stack.o types.o -o typeTest

helpers.o: src/lib/helpers/helpers.cpp
	g++ -c src/lib/helpers/helpers.cpp
 
types.o: src/lib/types/types.h
	g++ -c src/lib/types/types.h

cards.o: src/lib/cards/cards.cpp stack.o  
	g++ -c src/lib/cards/cards.cpp 

stack.o: src/lib/stack/stack.cpp
	g++ -c src/lib/stack/stack.cpp 
