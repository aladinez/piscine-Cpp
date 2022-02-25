

NAME	= frag

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ		= main.o ClapTrap.o ScavTrap.o FragTrap.o

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
