CC=gcc

CFLAGS=-Wall

all: stack

stack: main.o stack.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm *.o stack
