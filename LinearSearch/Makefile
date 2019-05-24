CC=gcc

CFLAGS=-Wall

all: lsearch

lsearch: main.o lsearch.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o lsearch
