#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
    private :
        Contact Contacts[8];
    public :
        void set_new_contact(int index);
        std::string	get_first_name(int index);
        std::string	get_last_name(int index);
        std::string	get_nickname(int index);
        std::string	get_phone(int index);
        std::string	get_darkestsecret(int index);
} ;

#endif