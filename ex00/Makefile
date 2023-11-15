NAME = Animal

CXX = c++ -std=c++98
CXXFLAG = -Wall -Wextra -Werror

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CXX) $(CXXFLAG) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re