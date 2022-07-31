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
			void fill_contact(int index);
			std::string	g_first_name();
			std::string	g_last_name();
			std::string	g_nickname();
			std::string	g_phone();
			std::string g_darkestsecret();

	} ;
#endif