CC=gcc

CFLAGS=-Wall

all: bsearch

bsearch: main.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o bsearch
