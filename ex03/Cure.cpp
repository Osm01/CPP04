
#include "Cure.h"

Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN << "Calling default constructor of Cure" <<  RESET << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << PURPLE << "Calling copy constructor of Cure" <<  RESET << std::endl;
}

Cure &Cure::operator=(const Cure &other){
	std::cout << BLUE << "Calling assignment operator overload of Cure" <<  RESET << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "heals " << RED << target.getName() << RESET << " wounds" << std::endl;
}

Cure::~Cure()
{
	std::cout << RED << "Calling destructor of Cure" <<  RESET << std::endl;
}