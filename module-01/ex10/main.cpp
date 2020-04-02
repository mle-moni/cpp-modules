#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>

static void	printError(char *file_name, char *exec_name)
{
	std::cout << exec_name << ": " << file_name << ": " << std::strerror(errno) << "\n";
}

static void	printFileContent(char *path, int& ret_val, char *exec_name)
{
	std::string	content = "";
	char		c;
	std::ifstream	file(path);

	if (!file) {
		ret_val = 1;
		printError(path, exec_name);
		return ;
	}
	while (file.get(c)) {
		content.push_back(c);
	}
	std::cout << content;
}

int			main(int ac, char **av)
{
	char		c;
	int			i = 1;
	int			ret_val = 0;

	if (ac == 1) {
		while (std::cin.get(c))
		{
			std::cout << c;
		}
		return (0);
	}
	while (i < ac)
	{
		printFileContent(av[i], ret_val, av[0]);
		i++;
	}
	return (ret_val);
}
