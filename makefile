CFLAGS = -O
CC = g++

FinalProject: main.o define.o translate.o promptUser.o displayMenu.o
	$(CC) $(CFLAGS) -o FinalProject main.o define.o translate.o promptUser.o displayMenu.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

define.o: define.cpp
	$(CC) $(CFLAGS) -c define.cpp

translate.o: translate.cpp
	$(CC) $(CFLAGS) -c translate.cpp

promptUser.o: promptUser.cpp
	$(CC) $(CFLAGS) -c promptUser.cpp

displayMenu.o: displayMenu.cpp
	$(CC) $(CFLAGS) -c displayMenu.cpp

clean:
	rm -f core *.o
