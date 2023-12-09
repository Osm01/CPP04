
NAME = main

CXX = c++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(NAME)
fclean : clean

re : fclean all

.PHONY : all fclean clean re
