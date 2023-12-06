
#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << GREEN << "Calling default constructor of WrongCat" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << PURPLE << "Calling copy constructor of WrongCat" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << YELLOW << "Calling copy assignment operator of Animal" << RESET << std::endl;
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << CYAN << "Meow sound" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Calling destructor of WrongCat" << RESET << std::endl;
}