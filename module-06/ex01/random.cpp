#include "random.hpp"

static char	random_alphanumeric_char(void)
{
	int		numeric = rand();
	int		pos = rand() % (26 + 26);

	if (numeric % 2) {
		return ('0' + (numeric % 10));
	}
	if (pos < 26) {
		return ('A' + pos);
	} else {
		return ('a' + (pos - 26));
	}
}

std::string	random_str(int length)
{
	std::string ret;

	for (int i = 0; i < length; i++) {
		ret += random_alphanumeric_char();
	}
	return (ret);
}