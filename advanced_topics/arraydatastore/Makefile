# author: Shelby Hendrickx

CC = gcc
CFLAGS = -g -Wall -I.

arraydatastore: main.o arraydatastore.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c arraydatastore.h
	$(CC) $(CFLAGS) -c main.c

arraydatastore.o: arraydatastore.c arraydatastore.h
	$(CC) $(CFLAGS) -c arraydatastore.c

clean: 
	$(RM) main.o arraydatastore.o arraydatastore
