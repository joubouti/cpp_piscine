NAME=megaphoone

SRC=megaphone.cpp
FLAGS=-Wall -Werror -Wextra
CPP_VER=-std=c++98
all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(CPP_VER) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean
re: fclean all