

NAME	= abstract

SRC		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJ		= main.o Animal.o Cat.o Dog.o WrongCat.o WrongAnimal.o Brain.o

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
