
#ifndef CPP04_AMATERIA_H
# define CPP04_AMATERIA_H

# include "ICharacter.h"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class ICharacter;
class AMateria;

typedef struct t_node
{
	AMateria	*data;
	struct t_node	*next;
}	s_node;

extern s_node *node;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &other);
	AMateria			&operator=(const AMateria &other);
	std::string const	&getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
	virtual				~AMateria();
};

s_node	*add_node(AMateria *data);
s_node	*last_node(s_node *head);
void	add_back_node(s_node **head, s_node *node);

#endif //CPP04_AMATERIA_H
