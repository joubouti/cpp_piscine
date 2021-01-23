NAME=phonebook

SRC=phonebook.cpp Contact.cpp

all:$(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all