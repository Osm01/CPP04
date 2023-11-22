

#include "Dog.h"

Dog::Dog() : Animal("Dog") , brain(new Brain())
{
	std::cout << GREEN << "Calling default constructor of Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) , brain(new Brain(*other.brain))
{
	std::cout << PURPLE << "Calling copy constructor of Dog" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << YELLOW << "Calling copy assignment operator of Dog" << RESET << std::endl;
	if (this != &other)
	{
		*this->brain = *other.brain;
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
	delete brain;
	std::cout << RED << "Calling destructor of Dog" << RESET << std::endl;
}