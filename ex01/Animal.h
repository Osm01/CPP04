
#ifndef CPP04_ANIMAL_H
# define CPP04_ANIMAL_H

# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal				&operator=(const Animal &other);
	std::string			getType(void) const;
	virtual void		makeSound(void) const;
	virtual				~Animal();
};


#endif //CPP04_ANIMAL_H
