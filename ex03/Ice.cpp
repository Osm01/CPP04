
#include "Ice.h"

Ice::Ice() : AMateria("ice")
{
	std::cout << GREEN << "Calling default constructor of Ice" <<  RESET << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout << PURPLE << "Calling copy constructor of Ice" <<  RESET << std::endl;
}

Ice &Ice::operator=(const Ice &other){
	std::cout << BLUE << "Calling assignment operator overload of Ice" <<  RESET << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << BLUE << target.getName() << RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << RED << "Calling destructor of Ice" <<  RESET << std::endl;
}
