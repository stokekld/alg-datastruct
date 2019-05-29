CC=gcc

CFLAGS=-Wall

all: llist

llist: main.o llist.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o llist
