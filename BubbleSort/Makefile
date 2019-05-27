CC=gcc

CFLAGS=-Wall

all: bsort

bsort: main.o bsort.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o bsort
