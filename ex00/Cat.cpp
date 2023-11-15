
#include "Cat.h"

Cat::Cat() : Animal("Cat")
{
	std::cout << GREEN << "Calling default constructor of Cat" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << PURPLE << "Calling copy constructor of Cat" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << YELLOW << "Calling copy assignment operator of Animal" << RESET << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

void Cat::makeSound(void)
{
	std::cout << CYAN << "Meow sound" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << "Calling destructor of Cat" << RESET << std::endl;
}