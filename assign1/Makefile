#Makefile
CC = g++
CFLAGS = -Wall -g 
exe_file = MathTest

$(exe_file): main.o math.o mathTest.o
	$(CC) $(CFLAGS) main.o math.o mathTest.o -o $(exe_file)
	
main.o: main.cpp
	$(CC) -c main.cpp
	
math.o: math.cpp
	$(CC) -c math.cpp
	
mathTest.o: mathTest.cpp
	$(CC) -c mathTest.cpp
	
clean:
	rm -rf *a.out* $(exe_file)
