CC=gcc

CFLAGS=-Wall

all: qsort

qsort: main.o qsort.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o qsort
