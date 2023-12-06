//
// Created by ouidriss on 11/14/23.
//

#ifndef CPP04_CAT_H
# define CPP04_CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &other);
	Cat		&operator=(const Cat &other);
	void	makeSound(void) const;
	~Cat();
};


#endif //CPP04_CAT_H
