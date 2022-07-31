#include "PhoneBook.hpp"

void	PhoneBook::set_new_contact(int index)
{
    Contacts[index].fill_contact(index);
}
std::string	PhoneBook::get_first_name(int index)
{
	return (Contacts[index].g_first_name());
}
std::string	PhoneBook::get_last_name(int index)
{
	return (Contacts[index].g_last_name());
}
std::string	PhoneBook::get_nickname(int index)
{
	return (Contacts[index].g_nickname());
}
std::string	PhoneBook::get_phone(int index)
{
    return (Contacts[index].g_phone());
}
std::string	PhoneBook::get_darkestsecret(int index)
{
	return (Contacts[index].g_darkestsecret());
}