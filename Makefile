# Makefile for UNO C++ project

# target: dependencies
# 	action

typeTest: helpers.o cards.o types.o stack.o cardClass.o
	g++ helpers.o cards.o stack.o types.o cardClass.o -o typeTest

helpers.o: src/lib/helpers/helpers.cpp
	g++ -c src/lib/helpers/helpers.cpp
 
cards.o: src/lib/cards/cards.cpp  
	g++ -c src/lib/cards/cards.cpp 

types.o: src/tests/types.cpp
	g++ -c src/tests/types.cpp

stack.o: src/lib/stack/stack.cpp
	g++ -c src/lib/stack/stack.cpp 

cardClass.o: src/lib/cardClass/cardClass.o
	g++ -c src/lib/cardClass/cardClass.cpp

clean:
	rm -f *.o 