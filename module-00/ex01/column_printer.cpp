#include "phonebook.hpp"



static std::string	fColumn(std::string& value)
{
	int			length = value.length();
	int			spaces_number = 10 - length;
	std::string	spaces = "";

	if (length <= 10) {
		spaces.append(spaces_number, ' ');
		value.insert(0, spaces);
		return (value);
	}
	value.erase(9, -1);
	value.push_back('.');
	return (value);
}

void	printColumn(std::string index, std::string first_name, 
std::string last_name, std::string nickname)
{
	std::cout << fColumn(index) << "|" << fColumn(first_name) << "|";
	std::cout << fColumn(last_name) << "|" << fColumn(nickname) << "\n";
}

void	printContact(Contact contacts[8], int index)
{
	std::string field;
	std::string field_name;

	if (index < 0 || index > 7) {
		std::cout << "Error: bad index\n";
		return ;
	}
	for (int i = 0; i < FIELDS_NUMBER; i++) {
		field = contacts[index].getFieldValueByIndex(i);
		if (field == "undefined") {
			if (i == 0) {
				std::cout << "Error: bad index\n";
				return ;
			}
			continue ;
		}
		field_name = contacts[index].getFieldNameByIndex(i);
		while (field_name.length() < 20)
		{
			field_name.push_back(' ');
		}
		std::cout << field_name << ": " << field << "\n";
	}
}
