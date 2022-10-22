2Assignment:
CC=g++ -std=c++11 -g
EXE_FILE=2Assignment

all: $(EXE_FILE)

$(EXE_FILE): 2Assignment.o HAssignment.h 2FAssignment.cpp
	$(CC) 2Assignment.o 2FAssignment.cpp -o $(EXE_FILE)

multdiv.o: HAssignment.h 2Assignment.cpp
	$(CC) -c 2Assignment.cpp

clean:
	rm -f *.o $(EXE_FILE)