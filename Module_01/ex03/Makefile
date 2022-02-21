
NAME	= violence

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ		= main.o Weapon.o HumanA.o HumanB.o

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
