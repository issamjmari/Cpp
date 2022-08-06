#include "Contact.hpp"

int	check_if_not_digit(std::string phone_num)
{
	for(size_t i = 0; i < phone_num.length(); i++)
	{
		if (!isdigit(phone_num[i]))
			return 0;
	}
	return 1;
}
void Contact::fill_contact(int index)
{
	this->index = index;
	std::cout << "first name is : ";
	getline(std::cin, this->first_name);
	while (this->first_name.length() == 0)
	{
		std::cout << "empty first name not allowed, try again please\n";
		std::cout << "first name is : ";
		getline(std::cin, this->first_name);
	}
	std::cout << "last name is : ";
	getline(std::cin, this->last_name);
	while (this->last_name.length() == 0)
	{
		std::cout << "empty last name not allowed, try again please\n";
		std::cout << "last name is : ";
		getline(std::cin, this->last_name);
	}
	std::cout << "nickname is : ";
	getline(std::cin, this->nickname);
	while (this->nickname.length() == 0)
	{
		std::cout << "empty nickname not allowed, try again please\n";
		std::cout << "nickname is : ";
		getline(std::cin, this->nickname);
	}
	std::cout << "phone_number is : ";
	getline(std::cin, this->phone_number);
	while (this->phone_number.length() == 0 || !check_if_not_digit(this->phone_number))
	{
		std::cout << "empty phone number and characters not allowed, try again please\n";
		std::cout << "phone number is : ";
		getline(std::cin, this->phone_number);
	}
	std::cout << "darkest secret is : ";
	getline(std::cin, this->darkest_secret);
	while (this->darkest_secret.length() == 0)
	{
		std::cout << "empty darkest secret not allowed, try again please\n";
		std::cout << "darkest secrect is : ";
		getline(std::cin, this->darkest_secret);
	}
}
std::string	Contact::g_first_name()
{
	return (this->first_name);
}
std::string	Contact::g_last_name()
{
	return (this->last_name);
}
std::string	Contact::g_nickname()
{
	return (this->nickname);
}
std::string	Contact::g_phone()
{
	return (this->phone_number);
}
std::string	Contact::g_darkestsecret()
{
	return (this->darkest_secret);
}