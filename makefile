CC = gcc

AutomataProject: define.cpp displayMenu.cpp header.h main.cpp promptUser.cpp translate.cpp
            $(CC) -o AutomataProject define.cpp displayMenu.cpp header.h main.cpp promptUser.cpp translate.cpp

clean:
       rm -f core *.o
