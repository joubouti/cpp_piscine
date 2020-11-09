NAME=replace

SRC=replace.cpp

OBJ=replace.o
all:$(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror $(SRC) -c
	clang++ $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all