# Makefile for UNO C++ project

# target: dependencies
# 	action

typeTest: helpers.o types.o cards.o stack.o
	g++ helpers.o types.o cards.o stack.o -o typeTest

helpers.o: src/lib/helpers/helpers.cpp
	g++ -c src/lib/helpers/helpers.cpp
 
types.o: src/tests/types.cpp
	g++ -c src/tests/types.cpp

cards.o: src/lib/cards/cards.cpp stack.o  
	g++ -c src/lib/cards/cards.cpp 

stack.o: src/lib/stack/stack.cpp
	g++ -c src/lib/stack/stack.cpp 