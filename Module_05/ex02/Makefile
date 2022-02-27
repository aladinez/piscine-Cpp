

NAME	= form

SRC		= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ		= main.o Bureaucrat.o Form.o PresidentialPardonForm.o\
			RobotomyRequestForm.o ShrubberyCreationForm.o

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
