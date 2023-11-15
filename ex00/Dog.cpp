//
// Created by ouidriss on 11/14/23.
//

#include "Dog.h"

Dog::Dog() : Animal("Dog")
{
	std::cout << GREEN << "Calling default constructor of Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << PURPLE << "Calling copy constructor of Dog" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << CYAN << "Woof sound" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "Calling destructor of Dog" << RESET << std::endl;
}