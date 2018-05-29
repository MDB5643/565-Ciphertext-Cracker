brute: main.o
	g++ -g main.o -o brute

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Clean:
	rm *.o brute
