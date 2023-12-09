
#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		this->matirias[i] = NULL;
		i ++;
	}
	std::cout << GREEN << "Calling default constructor of MateriaSource" <<  RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
	std::cout << PURPLE << "Calling copy constructor of MateriaSource" <<  RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
	std::cout << BLUE << "Calling assignment operator overload of MateriaSource" <<  RESET << std::endl;
	if (this != &other)
	{
		int i = 0;
		while (i < 4)
		{
			*this->matirias[i] = *other.matirias[i];
			i ++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	add_back_node(&node, add_node(materia));
	int i = 0;
	while (i < 4)
	{
		if (!matirias[i])
		{
			matirias[i] = materia;
			return;
		}
		i ++;
	}
	std::cout << RED << "No space available to store data" << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	int i = 0;
	while (i < 4)
	{
		if (matirias[i] && matirias[i]->getType() == type)
			return (matirias[i]->clone());
		i ++;
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	std::cout << RED << "Calling destructor of MateriaSource" <<  RESET << std::endl;
}