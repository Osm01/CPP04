# include "AMateria.h"
# include "IMateriaSource.h"
# include "ICharacter.h"
# include "MateriaSource.h"
# include "Character.h"
#include <iomanip>

s_node	*node = NULL;
int main()
{
	{
		AMateria	*materia;
		Character	character;
		IMateriaSource	*materiaSource = new MateriaSource();
		materiaSource->learnMateria(new Ice());
		materiaSource->learnMateria(new Cure());
		materia = materiaSource->createMateria("cure");
		character.equip(materia);
		materia = materiaSource->createMateria("ice");
		character.equip(materia);
		materia = materiaSource->createMateria("NADA");
		character.equip(materia);
		character.unequip(0);
		character.unequip(1);
		Character	other = character;
		other.unequip(0);
		delete materiaSource;
	}
//	{
//		IMateriaSource* src = new MateriaSource();
//		src->learnMateria(new Ice());
//		src->learnMateria(new Cure());
//		ICharacter* me = new Character("me");
//		AMateria* tmp;
//		tmp = src->createMateria("ice");
//		me->equip(tmp);
//		tmp = src->createMateria("cure");
//		me->equip(tmp);
//		tmp = src->createMateria("ice");
//		me->equip(tmp);
//		tmp = src->createMateria("cure");
//		me->equip(tmp);
//		tmp = src->createMateria("ice");
//		me->equip(tmp);
//		tmp = src->createMateria("cure");
//		me->equip(tmp);
//		tmp = src->createMateria("NOTHING");
//		me->equip(tmp);
////		me->unequip(0);
////		me->unequip(1);
////		me->unequip(2);
////		me->unequip(3);
////		me->unequip(0);
////		me->unequip(1);
////		me->unequip(2);
////		me->unequip(3);
//		ICharacter* bob = new Character("bob");
//		std::cout << std::setw(40) << std::setfill('=') << "=" << std::endl;
//		me->use(0, *bob);
//		me->use(1, *bob);
//		std::cout << std::setw(40) << std::setfill('=') << "=" << std::endl;
//		delete bob;
//		delete me;
//		delete src;
//		return 0;
//	}
	return 0;
}