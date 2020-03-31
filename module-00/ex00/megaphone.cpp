#include <iostream>

void	strtoupcase(std::string& str)
{
	int		i(0);
	int		len(str.length());

	while (i < len)
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i(1);

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		std::string arg = av[i];
		strtoupcase(arg);
		if (ac == i + 1) {
			arg.push_back('\n');
		}
		std::cout << arg;
		i++;
	}
	return (0);
}
