#include <iostream>
#include <fstream>
#include <string>

std::string getFileContent(char *path)
{
	std::string	content = "";
	char		c;
	std::ifstream	file(path);

	if (!file) {
		std::cout << "Could not open file\n";
		exit(2);
	}

	while (!file.eof())
	{
		if (file.get(c)) {
			content.push_back(c);
		}
	}
	return (content);
}

void	replaceContent(std::string& file_content, char *find_c, char *replace_c)
{
	std::string	find(find_c);
	std::string	replace(replace_c);
	file_content += "";
	int			len = find.length();
	size_t		pos = 0;

	while (pos < file_content.length())
	{
		pos = file_content.find(find, pos);
		if (pos == std::string::npos) {
			return ;
		}
		file_content.replace(pos, len, replace);
		pos += len;
	}
}

void	writeFile(std::string content, char *name)
{
	std::string		final_name(name);

	final_name += ".replace";
	std::ofstream	output(final_name);

	output << content;
}

int		main(int ac, char **av)
{
	std::string	file_content;

	if (ac != 4) {
		std::cout << "Bad arguments\n";
		return (1);
	}
	if (!av[2][0] || !av[3][0]) {
		std::cout << "Bad arguments\n";
		return (1);
	}
	file_content = getFileContent(av[1]);
	replaceContent(file_content, av[2], av[3]);
	writeFile(file_content, av[1]);
	return (0);
}
