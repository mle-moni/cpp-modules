#include "Contact.hpp"

Contact::Contact()
{
	for (int i = 0; i < FIELDS_NUMBER; i++) {
		fields[i]	= "undefined";
	}
	fields_name[0]	= "first_name";
	fields_name[1]	= "last_name";
	fields_name[2]	= "nickname";
	fields_name[3]	= "login";
	fields_name[4]	= "postal_address";
	fields_name[5]	= "mail_address";
	fields_name[6]	= "phone_number";
	fields_name[7]	= "birthday_date";
	fields_name[8]	= "favorite_meal";
	fields_name[9]	= "underwear_color";
	fields_name[10]	= "darkest_secret";
}

void		Contact::setFieldWithIndex(int field_index, std::string value)
{
	fields[field_index] = value;
}

std::string	Contact::getFieldNameByIndex(int field_index)
{
	return (fields_name[field_index]);
}

std::string	Contact::getFieldValueByIndex(int field_index)
{
	return (fields[field_index]);
}
