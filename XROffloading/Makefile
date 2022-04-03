CC = g++
CFLAGS = -Wall -g
# LDFLAGS= -L/usr/local/Cellar/ -lzeromq

# Targets

main: main.o Server.o Client.o
	$(CC) $(CFLAGS) $(LDFLAGS) main.o Server.o Client.o -o main

main.o: main.cpp Server.h Client.h
	$(CC) $(CFLAGS) $(LDFLAGS) -c main.cpp

Server.o: server.h

Client.o: client.h

# Clean

clean:
	rm -f main