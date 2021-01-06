NAME:=factorial
SRC:=./src
INC:=./include

SRCS:=$(wildcard $(SRC)/*.c)
OBJS:=$(patsubst $(SRC)/%.c,%.o,$(SRCS))

CC:=gcc
OPT:=
CFLAGS:=-g -I$(INC) # Expands to '-g -I./include'
LIBS:=-lm

all: $(NAME)

%.o: $(SRC)/%.c
	$(CC) $(OPT) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(LIBS) $^ -o $@

clean:
	rm -rf ./*.o ./$(NAME)

.PHONY: all clean
