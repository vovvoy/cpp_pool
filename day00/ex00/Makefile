NAME = megaphone

CC = g++

CFLAGS =  -Wall -Wextra -Werror


SRC = main

FIL = $(addsuffix .cpp, $(addprefix ./, $(SRC)))

OBJ = $(FIL:.cpp=.o)

BIN = $(addsuffix .o, $(SRC))


.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME)  $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all