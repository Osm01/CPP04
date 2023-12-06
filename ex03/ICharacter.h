
#ifndef CPP04_ICHARACTER_H
# define CPP04_ICHARACTER_H

# include <iostream>
# include "AMateria.h"

class AMateria;

class ICharacter
{
public:
	virtual	~ICharacter() {}
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};

#endif //CPP04_ICHARACTER_H
