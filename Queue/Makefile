CC=gcc

CFLAGS=-Wall

all: queue

queue: main.o queue.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o queue
