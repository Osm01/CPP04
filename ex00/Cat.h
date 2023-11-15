//
// Created by ouidriss on 11/14/23.
//

#ifndef CPP04_CAT_H
# define CPP04_CAT_H

# include "Animal.h"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &other);
	Cat		&operator=(const Cat &other);
	void	makeSound(void);
	~Cat();
};


#endif //CPP04_CAT_H
