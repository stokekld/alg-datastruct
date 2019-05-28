CC=gcc

CFLAGS=-Wall

all: msort

msort: main.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o msort
