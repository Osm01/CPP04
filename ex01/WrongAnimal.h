
#ifndef CPP04_WRONG_Animal_H
# define CPP04_WRONG_Animal_H

# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal		&operator=(const WrongAnimal &other);
	std::string		getType(void) const;
	void			makeSound(void) const;
	~WrongAnimal();
};


#endif
