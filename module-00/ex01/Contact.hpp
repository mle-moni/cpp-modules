#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

# define FIELDS_NUMBER 11

class Contact
{
	private:
		std::string	fields[FIELDS_NUMBER];
		std::string	fields_name[FIELDS_NUMBER];
	public:
		Contact();
		void		setFieldWithIndex(int field_index, std::string value);
		std::string	getFieldNameByIndex(int field_index);
		std::string	getFieldValueByIndex(int field_index);
};

#endif