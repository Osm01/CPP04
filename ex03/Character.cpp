

#include "Character.h"

Character::Character() : name("Character")
{
	int i = 0;
	while (i < 4)
	{
		this->slots[i] = NULL;
		i ++;
	}
	std::cout << GREEN << "Calling default constructor of Character" <<  RESET << std::endl;
}

Character::Character(const std::string &name) : name(name)
{
	int i = 0;
	while (i < 4)
	{
		this->slots[i] = NULL;
		i ++;
	}
	std::cout << YELLOW << "Calling parameter constructor of Character" <<  RESET << std::endl;
}

Character::Character(const Character &other)
{
	std::cout << PURPLE << "Calling copy constructor of Character" <<  RESET << std::endl;
	*this = other;
}

Character &Character::operator=(const Character &other){
	std::cout << BLUE << "Calling assignment operator overload of Character" <<  RESET << std::endl;
	if (this != &other)
	{
		int i = 0;
		while (i < 4)
		{
			if (this->slots[i])
				add_back_node(&node, add_node(this->slots[i]));
			this->slots[i] = NULL;
			i ++;
		}
		i = 0;
		while (i < 4)
		{
			if (other.slots[i])
			{
				this->slots[i] = other.slots[i]->clone();
				add_back_node(&node, add_node(this->slots[i]));
			}
			i ++;
		}
		this->name = other.name;
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		std::cout << RED <<"<< NULL Pointer not accepted >>" <<  RESET << std::endl;
	int i = 0;
	while (i < 4)
	{
		if (!slots[i])
		{
			add_back_node(&node, add_node(m));
			slots[i] = m;
			return;
		}
		i ++;
	}
	add_back_node(&node, add_node(m));
	std::cout << RED << "No space available to store data" << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (idx <= 3 && idx >= 0)
	{
		if (slots[idx])
		{
			add_back_node(&node, add_node(slots[idx]));
			slots[idx] = NULL;
			std::cout << GREEN << "Unequiped succesfully" << RESET << std::endl;
		}
		else
			std::cout << RED << "This index it's already empty to unequiped "<< RESET << std::endl;
	}
	else
		std::cout <<  RED << "Index out of range" << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx <= 3 && idx >= 0)
	{
		if (slots[idx])
			slots[idx]->use(target);
		else
			std::cout << RED << "This index it's already empty to use" << RESET << std::endl;
	}
	else
		std::cout << RED << "index out of range" << RESET << std::endl;
}

Character::~Character()
{
	std::cout << RED << "Calling destructor of Character" <<  RESET << std::endl;
}