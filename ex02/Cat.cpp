
#include "Cat.h"

Cat::Cat() : Animal("Cat") , brain(new Brain())
{
	std::cout << GREEN << "Calling default constructor of Cat" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) , brain(new Brain(*other.brain))
{
	std::cout << PURPLE << "Calling copy constructor of Cat" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << YELLOW << "Calling copy assignment operator of Animal" << RESET << std::endl;
	if (this != &other)
	{
		if (this->brain)
			delete brain;
		this->brain = new Brain(*other.brain);
		Animal::operator=(other);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << CYAN << "Meow sound" << RESET << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << RED << "Calling destructor of Cat" << RESET << std::endl;
}