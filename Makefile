# Makefile for UNO C++ project

# target: dependencies
# 	action

typeTest: helpers.o types.o
	g++ helpers.o types.o -o typeTest

helpers.o: src/lib/helpers/helpers.cpp
	g++ -c src/lib/helpers/helpers.cpp
 
types.o: src/tests/types.cpp
	g++ -c src/tests/types.cpp
