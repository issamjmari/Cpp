#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
    private :
        Contact Contacts[8];
    public :
        void set_new_contact(int index)
        {
            Contacts[index].fill_contact(index);
        }
        std::string	get_first_name(int index)
        {
        	return (Contacts[index].g_first_name());
        }
        std::string	get_last_name(int index)
        {
        	return (Contacts[index].g_last_name());
        }
        std::string	get_nickname(int index)
        {
        	return (Contacts[index].g_nickname());
        }
        std::string	get_phone(int index)
        {
            return (Contacts[index].g_phone());
        }
        std::string	get_darkestsecret(int index)
        {
        	return (Contacts[index].g_darkestsecret());
        }
} ;

#endif