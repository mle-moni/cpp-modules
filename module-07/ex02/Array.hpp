#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

template <typename T>
class Array
{
private:
	T				*raw_array;
	unsigned int	length;
public:
	Array() : raw_array(new T[0]), length(0)
	{
	}
	Array(unsigned int len) : raw_array(new T[len]), length(len)
	{
		for (unsigned int i = 0; i < length; i++) {
			raw_array[i] = T();
		}
	}
	Array(const Array& obj) : raw_array(new T[obj.length]), length(obj.length)
	{
		for (unsigned int i = 0; i < length; i++) {
			raw_array[i] = obj.raw_array[i];
		}
	}
	~Array()
	{
		delete [] raw_array;
	}
	Array& operator=(const Array& obj)
	{
		delete [] raw_array;
		raw_array = new T[obj.length];
		length = obj.length;
		for (unsigned int i = 0; i < length; i++) {
			raw_array[i] = obj.raw_array[i];
		}
		return (*this);
	}
	unsigned int	size(void) const
	{
		return (length);
	}
	T& operator[](const unsigned int position);
};

template <typename T>
T&	Array<T>::operator[](const unsigned int position)
{
	if (position >= length) {
		throw std::out_of_range("Index provided is out of array limits\n");
	}
	return (raw_array[position]);
}

#endif