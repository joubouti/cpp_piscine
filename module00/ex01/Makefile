NAME=caps

SRC=caps.cpp Contact.class.cpp

OBJ=caps.o Contact.class.o
all:$(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror $(SRC) -c
	clang++ $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all