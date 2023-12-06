
#ifndef CPP04_CHARACTER_H
#define CPP04_CHARACTER_H

# include "ICharacter.h"
# include "AMateria.h"

class AMateria;

class Character : public ICharacter{
private:
	AMateria	*slots[4];
	std::string	name;
public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	Character			&operator=(const Character &other);
	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	~Character();
};


#endif //CPP04_CHARACTER_H
