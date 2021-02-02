NAME=whatever
SRC= main.cpp
all: $(NAME)

CC=clang++
FLAGS=-Wall -Wextra -Werror
CPP_VER=-std=c++98

$(NAME):
	$(CC) $(FLAGS) $(CPP_VER) $(SRC) -o $(NAME) 

clean:
	rm -rf $(NAME)
fclean: clean
re: fclean all
