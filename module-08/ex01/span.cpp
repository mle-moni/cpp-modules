#include "span.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

span::span() : capacity(0), storage()
{
}

span::span(unsigned int p_capacity) : capacity(p_capacity), storage()
{
}

span::span(const span& obj) : capacity(obj.capacity), storage(obj.storage)
{
}

span::~span()
{
}

span& span::operator=(const span& obj)
{
	capacity = obj.capacity;
	storage = std::vector<int>(obj.storage);
	return (*this);
}

void	span::addNumber(int num)
{
	if (storage.size() < capacity) {
		storage.push_back(num);
	} else {
		throw (span::AlreadyFullException());
	}
}

void	span::print(void) const
{
	unsigned int len = storage.size();
	std::cout << "[";
	for (int i = 0; i < len; i++) {
		std::cout << storage[i];
		if (i + 1 < len) {
			std::cout << ", ";
		}
	}
	std::cout << "]\n";
}

const char *span::AlreadyFullException::what() const throw()
{
	return ("Container is already full");
}

const char *span::NoSpanToFindException::what() const throw()
{
	return ("There is no span to find (only 1 or 0 numbers stored)");
}

int		span::shortestSpan(void)
{
	int ret = -1;
	std::vector<int> copy(storage);

	if (storage.size() < 2) {
		throw (span::NoSpanToFindException());
	}
	std::sort(copy.begin(), copy.end());
	int len = copy.size();
	int last = copy[0];
	for (int i = 1, diff; i < len; i++) {
		diff = copy[i] - last;
		if (ret == -1 || ret > diff) {
			ret = diff;
		}
		last = copy[i];
	}
	return (ret);
}

int		span::longestSpan(void)
{
	std::vector<int> copy(storage);

	if (storage.size() < 2) {
		throw (span::NoSpanToFindException());
	}
	std::sort(copy.begin(), copy.end());
	int len = copy.size();
	return (copy[len - 1] - copy[0]);
}