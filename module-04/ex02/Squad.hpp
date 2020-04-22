#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"
#include <iostream>

class Squad: public ISquad
{
private:
	struct list
	{
		ISpaceMarine	*unit;
		list			*next; // no need for typedef in cpp
	};
	int		count;
	list	*elems;
	void	pushFromList(list *list);
public:
	Squad();
	Squad(const Squad& obj);
	~Squad();
	Squad& operator=(const Squad& obj);

	int				getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int				push(ISpaceMarine*);
};

#endif