
#ifndef CPP04_BRAIN_H
#define CPP04_BRAIN_H

# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	Brain				&operator=(const Brain &other);
	const	std::string	*get_ideas(void ) const;
	void				set_ideas(int index, std::string new_data);
	~Brain();
};


#endif //CPP04_BRAIN_H
