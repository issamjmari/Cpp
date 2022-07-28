#ifndef CONTACT_HPP
#define CONTACT_HPP
	#include <string>
	#include <iostream>
	#include <iostream>
	class Contact
	{
		private:
			int					index;
        	std::string			first_name;
        	std::string			last_name;
        	std::string			nickname;
        	std::string			phone_number;
        	std::string			darkest_secret;
    	public:
			void fill_contact(int index)
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
					std::cout << "first name is : ";
					getline(std::cin, this->last_name);
				}
				std::cout << "nickname is : ";
				getline(std::cin, this->nickname);
				while (this->nickname.length() == 0)
				{
					std::cout << "empty nickname not allowed, try again please\n";
					std::cout << "first name is : ";
					getline(std::cin, this->nickname);
				}
				std::cout << "phone_number is : ";
				getline(std::cin, this->phone_number);
				while (this->phone_number.length() == 0)
				{
					std::cout << "empty phone number not allowed, try again please\n";
					std::cout << "first name is : ";
					getline(std::cin, this->phone_number);
				}
				std::cout << "darkest secret is : ";
				getline(std::cin, this->darkest_secret);
				while (this->darkest_secret.length() == 0)
				{
					std::cout << "empty darkest secret not allowed, try again please\n";
					std::cout << "first name is : ";
					getline(std::cin, this->darkest_secret);
				}
			}
			std::string	g_first_name()
			{
				return (this->first_name);
			}
			std::string	g_last_name()
			{
				return (this->last_name);
			}
			std::string	g_nickname()
			{
				return (this->nickname);
			}
			std::string	g_phone()
			{
				return (this->phone_number);
			}
			std::string	g_darkestsecret()
			{
				return (this->darkest_secret);
			}
	} ;
#endif