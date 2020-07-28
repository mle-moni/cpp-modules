#include <time.h>
#include "random.hpp"

#define DEBUG 1

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	unsigned char	*data = new unsigned char[20];
	std::string		str1 = random_str(8);
	std::string		str2 = random_str(8);
	int				integer = rand();

	if (DEBUG) {
		std::cout << "BEFORE SERIALIZATION:\n";
		std::cout << "str1 = " << str1 << "\n";
		std::cout << "str2 = " << str2 << "\n";
		std::cout << "num  = " << integer << "\n";
	}
	for (int i = 0; i < 8; i++) {
		data[i] = str1[i];
		data[i + 12] = str2[i];
	}
	for (int i = 0; i < 4; i++) {
		unsigned char data_chunk = integer % 256;
		integer /= 256;
		data[i + 8] = data_chunk;
	}
	return (reinterpret_cast<void*>(data));
}

Data	*deserialize(void *raw)
{
	unsigned char	*data = reinterpret_cast<unsigned char*>(raw);
	Data			*ret = new Data;
	char			str1[9] = {0};
	char			str2[9] = {0};
	int				integer = 0;

	for (int i = 0; i < 8; i++) {
		str1[i] = data[i];
		str2[i] = data[i + 12];
	}
	for (int i = 3; i >= 0; i--) {
		integer *= 256;
		integer += data[8 + i];
	}
	ret->s1 = std::string(str1);
	ret->s2 = std::string(str2);
	ret->n = integer;
	return (ret);
}

int		main(void)
{
	srand (time(NULL));
	void	*test = serialize();
	Data	*ret = deserialize(test);
	std::cout << "AFTER DESERIALIZATION:\n";
	std::cout << "str1 = " << ret->s1 << "\n";
	std::cout << "str2 = " << ret->s2 << "\n";
	std::cout << "num  = " << ret->n << "\n";
	delete [] reinterpret_cast<unsigned char*>(test);
	delete ret;
	return (0);
}
