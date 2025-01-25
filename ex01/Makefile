C++ = c++ -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp

NAME = program

OBJ = $(SRC:.cpp=.o)

ALL: $(NAME)

$(NAME): $(OBJ) Fixed.hpp
	$(C++) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)