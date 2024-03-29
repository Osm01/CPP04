

#include "Dog.h"

Dog::Dog() : Animal("Dog")
{
	std::cout << GREEN << "Calling default constructor of Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << PURPLE << "Calling copy constructor of Dog" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << YELLOW << "Calling copy assignment operator of Animal" << RESET << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << CYAN << "Woof sound" << RESET << std::endl;
}


Dog::~Dog()
{
	std::cout << RED << "Calling destructor of Dog" << RESET << std::endl;
}