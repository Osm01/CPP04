
#include "AMateria.h"


AMateria::AMateria() : type("AMateria")
{
	std::cout << GREEN << "Calling default constructor of AMateria" <<  RESET << std::endl;
}

AMateria::AMateria(const std::string &type) : type(type)
{
	std::cout << YELLOW << "Calling parameter constructor of AMateria" <<  RESET << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
	std::cout << PURPLE << "Calling copy constructor of AMateria" <<  RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other){
	std::cout << BLUE << "Calling assignment operator overload of AMateria" <<  RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "USE " << CYAN << target.getName() << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << RED << "Calling destructor of AMateria" <<  RESET << std::endl;
}

s_node	*add_node(void *data)
{
	s_node *new_node = new s_node();
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

s_node	*last_node(s_node *head)
{
	while (head)
	{
		if ((head)->next == NULL)
			return (head);
		(head) = (head)->next;
	}
	return (NULL);
}

void	add_back_node(s_node **head, s_node *new_node)
{
	s_node	*tmp;

	if (!new_node)
		return;
	if (head && *head)
	{
		tmp = last_node(*head);
		tmp->next = new_node;
	}
	else
		*head = new_node;
}