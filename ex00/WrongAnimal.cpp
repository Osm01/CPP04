
#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << GREEN << "Calling default constructor of WrongAnimal" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << BLUE <<  "Calling parameter constructor of WrongAnimal" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << PURPLE << "Calling copy constructor of WrongAnimal" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << YELLOW << "Calling copy assignment operator of WrongAnimal" << RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << CYAN << "WrongAnimal sound" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Calling destructor of WrongAnimal" << RESET << std::endl;
}