#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <exception>
#include <vector>

class span
{
private:
	std::vector<int>	storage;
	unsigned int		capacity;
	class AlreadyFullException: public std::exception
	{
		virtual const char * what() const throw();
	};
	class NoSpanToFindException: public std::exception
	{
		virtual const char * what() const throw();
	};
public:
	span();
	span(unsigned int p_capacity);
	span(const span& obj);
	~span();
	span& operator=(const span& obj);

	void	print(void) const;
	void	addNumber(int num);

	int		shortestSpan(void);
	int		longestSpan(void);
};

#endif