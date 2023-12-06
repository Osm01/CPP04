
#include "Brain.h"

Brain::Brain()
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i++] = "";
	}
	std::cout << GREEN << "Calling default constructor of Brain" << RESET << std::endl;
}

Brain::Brain(const Brain &other)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i ++;
	}
	std::cout << PURPLE << "Calling copy constructor of Brain" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &other){
	std::cout << YELLOW << "Calling copy assignment operator of Brain" << RESET << std::endl;
	if (this != &other)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i ++;
		}
	}
	return (*this);
}

const std::string *Brain::get_ideas() const
{
	return (this->ideas);
}

void Brain::set_ideas(int index, std::string new_data)
{
	if (index >= 100 || index < 0)
	{
		std::cout <<  RED <<"Cannot set that index bc " << ((index >= 100) ? "index bigger" : "index less that 0") << \
		" that out of range" << RESET << std::endl;
	}
	else
		this->ideas[index] = new_data;
}

Brain::~Brain()
{
	std::cout << RED << "Calling destructor of Brain" << RESET << std::endl;
}