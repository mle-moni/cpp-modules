#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <exception>

class CouldNotFindOccurence: public std::exception
{
	public:
	
		virtual const char *what() const throw();
};

template <typename T>
int		&easyfind(T container, int findThis)
{
	typename T::iterator iterator;
	iterator = std::find(container.begin(), container.end(), findThis);
	if (iterator == container.end()) { // std::find() failed
		throw CouldNotFindOccurence();
	}
	return (*iterator);
}

#endif