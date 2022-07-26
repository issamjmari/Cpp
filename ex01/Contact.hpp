#ifndef CONTACT_HPP
#define CONTACT_HPP
	#include <string>
	#include <iostream>
	#include <iostream>
	class Contact
	{
		private:
        	std::string			first_name;
        	std::string			last_name;
        	std::string			nickname;
        	std::string			phone_number;
        	std::string			darkest_secret;
    	public:
			void fill_contact(Contact &contact)
			{
				std::cout << "first name is : ";
				getline(std::cin, contact.first_name);
				std::cout << "last name is : ";
				getline(std::cin, contact.last_name);
				std::cout << "nickname is : ";
				getline(std::cin, contact.nickname);
				std::cout << "phone_number is : ";
				getline(std::cin, contact.phone_number);
				std::cout << "darkest secret is : ";
				getline(std::cin, contact.darkest_secret);
			}
			std::string	get_first_name(Contact contact)
			{
				return (contact.first_name);
			}
			std::string	get_last_name(Contact contact)
			{
				return (contact.last_name);
			}
			std::string	get_nickname(Contact contact)
			{
				return (contact.nickname);
			}
			std::string	get_phone(Contact contact)
			{
				return (contact.phone_number);
			}
			std::string	get_darkestsecret(Contact contact)
			{
				return (contact.darkest_secret);
			}
	} ;
#endif