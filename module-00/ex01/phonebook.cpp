#include "phonebook.hpp"

static void			fill_contact(Contact contacts[8], int& total)
{
	std::string	field_value;

	std::cin.ignore();
	for (int index = 0; index < FIELDS_NUMBER; index++) {
		std::cout << "Please fill the field: " << contacts[total].getFieldNameByIndex(index) << std::endl;
		field_value = "";
		std::getline(std::cin, field_value);
		while (index < 2 && field_value == "")
		{
			std::cout << "The field: " << contacts[total].getFieldNameByIndex(index) << " is mandatory\n";
			std::getline(std::cin, field_value);
		}
		if (field_value == "") {
			field_value = "undefined";
		}
		contacts[total].setFieldWithIndex(index, field_value);
	}
	std::cout << "New contact added: " << contacts[total].getFieldValueByIndex(0) << std::endl;
	total++;
}

static void			search(Contact contacts[8])
{
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	int				i;
	char			index;

	printColumn("index", "first name", "last name", "nickname");

	for (i = 0; i < 8; i++) {
		first_name	= contacts[i].getFieldValueByIndex(0);
		last_name	= contacts[i].getFieldValueByIndex(1);
		nickname	= contacts[i].getFieldValueByIndex(2);
		if (first_name == "undefined") {
			break ;
		}
		printColumn(std::to_string(i), first_name, last_name, nickname);
	}
	if (i == 0) {
		return ;
	}
	std::cout << "Give user index to see his informations\n";
	std::cin >> index;
	printContact(contacts, index - '0');
	std::cin.ignore();
}

static bool 		exec_cmd(const std::string& command, Contact contacts[8], int& total)
{
	if (command == "ADD") {
		if (total == 8) {
			std::cout << "Your contact list is already full :c\n";
			return (false);
		}
		fill_contact(contacts, total);
		return (false);
	} else if (command == "SEARCH") {
		search(contacts);
	} else if (command == "EXIT") {
		return (true);
	}
	return (false);
}

int main(void)
{
	bool		stop = false;
	std::string	command;
	Contact contacts[8];
	int		total = 0;

	while (!stop)
	{
		std::cin >> command;
		stop = exec_cmd(command, contacts, total);
	}
	
	return (0);
}
