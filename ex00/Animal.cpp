
#include "Animal.h"

Animal::Animal() : type("Animal")
{
	std::cout << GREEN << "Calling default constructor of Animal" << RESET << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << BLUE <<  "Calling parameter constructor of Animal" << RESET << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << PURPLE << "Calling copy constructor of Animal" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << YELLOW << "Calling copy assignment operator of Animal" << RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << CYAN << "Animal sound" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Calling destructor of Animal" << RESET << std::endl;
}