

#ifndef CPP04_WRONG_CAT_H
# define CPP04_WRONG_CAT_H

# include "WrongAnimal.h"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat	&operator=(const WrongCat &other);
	void		makeSound(void) const;
	~WrongCat();
};


#endif //CPP04_CAT_H
