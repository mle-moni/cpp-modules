#include "Squad.hpp"

Squad::Squad(): count(0), elems(nullptr)
{
}

Squad::Squad(const Squad& obj): count(0), elems(nullptr)
{
	pushFromList(obj.elems);
}

Squad::~Squad()
{
	// delete all the marines allocated
	list	*ptr = elems;
	list	*tmp;
	while (ptr)
	{
		tmp = ptr->next;
		delete ptr->unit;
		delete ptr;
		ptr = tmp;
	}
}

Squad& Squad::operator=(const Squad& obj)
{
	list	*ptr = elems;
	list	*tmp;
	while (ptr)
	{
		tmp = ptr->next;
		delete ptr->unit;
		delete ptr;
		ptr = tmp;
	}
	count = 0;
	elems = nullptr;
	pushFromList(obj.elems);
	return (*this);
}

int				Squad::push(ISpaceMarine *marine)
{
	if (!marine) {
		std::cout << "Cannot use push() with a nullptr marine!\n";
		return (count);
	}

	list	*el = new list();
	el->next = nullptr;
	el->unit = marine;

	if (!elems) { // if the list is empty
		elems = el;
		return (++count);
	}
	list *last = elems;
	while (last->next)
	{
		if (last->unit == marine) {
			std::cout << "This marine is already in the squad!\n";
			delete el;
			return (count);
		}
		last = last->next;
	}
	last->next = el;
	return (++count);
}

int				Squad::getCount() const
{
	return (count);
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	int		i = 0;
	list	*wanted = elems;

	if (index < 0) {
		return (nullptr);
	}

	while (wanted && i < index)
	{
		i++;
		wanted = wanted->next;
	}
	if (wanted) {
		return (wanted->unit);
	}
	return (nullptr);
}

void		Squad::pushFromList(Squad::list *list)
{
	while (list)
	{
		push(list->unit->clone());
		list = list->next;
	}
}
