bin/prog1: prog1.o ./lib/second.a
	g++ -o bin/prog1 prog1.o ./lib/second.a
	
prog1.o: prog1.cc ./include/prog1.h
	g++ -c -I ./include prog1.cc
	
lib/second.a: second.o
	ar rcv ./lib/second.a second.o

second.o: second.cc ./include/prog1.h
	g++ -c -I ./include second.cc
	

