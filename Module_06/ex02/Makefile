

NAME	= dynamic

SRC		= main.cpp Base.cpp

OBJ		= main.o Base.o

COMP	= c++ -std=c++98 -Wextra -Werror -Wall

all : $(NAME)

$(NAME) : $(SRC)
		$(COMP) -c $(SRC)
		$(COMP) $(OBJ) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: all
