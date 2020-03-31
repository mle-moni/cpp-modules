#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

void	printColumn(std::string index, std::string first_name, 
std::string last_name, std::string nickname);
void	printContact(Contact contacts[8], int index);

#endif