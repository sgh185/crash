NAME:=myprog
SRC:=./src
INC:=./include

SRCS:=$(wildcard $(SRC)/*.c)
OBJS:=$(patsubst $(SRC)/%.c,%.o,$(SRCS))

CC:=gcc
CFLAGS:=-c -I$(INC) # Expands to '-c -I./include'
LIBS:=-lm

$(NAME): $(OBJS)
	$(CC) $(LIBS) $^ -o $@

%.o: $(SRC)/%.c
	$(CC) $(OPT) $(CFLAGS) $< -o $@

clean:
	rm -rf ./*.o ./$(NAME)

.PHONY: all clean
