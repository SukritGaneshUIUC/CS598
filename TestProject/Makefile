CC = g++
CFLAGS = -Wall -g

# Targets
 
main: main.o
	$(CC) $(CFLAGS) -o test main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f test
