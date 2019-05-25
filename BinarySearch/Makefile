CC=gcc

CFLAGS=-Wall

all: bsearch

bsearch: main.o bsearch.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o bsearch
