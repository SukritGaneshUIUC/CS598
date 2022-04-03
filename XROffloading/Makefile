CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets
 
main: main.o Server.o Client.o
    $(CC) $(CFLAGS) -o main main.o Server.o Client.o

main.o: main.cpp Server.h Client.h
    $(CC) $(CFLAGS) -c main.cpp
 
Server.o: Server.h

Client.o: Client.h