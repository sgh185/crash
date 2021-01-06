NAME:=factorial
SRC:=$(wildcard *.c)
OBJS:=$(patsubst %.c,%.o,$(SRC))

CC:=gcc
OPT:=
CFLAGS:=-g 
LIBS:=-lm

all: clean $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OPT) $(CFLAGS) $(LIBS) $^ -o $@

%.o: %.c
	$(CC) $(OPT) $(CFLAGS) -c $< -o $@

clean:
	rm -rf ./*.o ./$(NAME) 

.PHONY: all clean
