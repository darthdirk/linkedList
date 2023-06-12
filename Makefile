
CC=gcc
CFLAGS=-Wall -g
all:linkedlist

linkedlist: linkedlist.c
	$(CC) $(CFLAGS) -o linkedlist linkedlist.c

clean:
	rm linkedlist


