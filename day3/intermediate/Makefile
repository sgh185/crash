CC:=gcc
CFLAGS=-c
LIBS=-lm

myprog: lib.o test.o
	$(CC) $(LIBS) $^ -o $@

lib.o: lib.c
	$(CC) $(CFLAGS) $< -o $@

test.o: test.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o myprog

.PHONY: clean
