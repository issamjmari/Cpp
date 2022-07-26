#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    int         i = 0;
    std::string input;
    Contact		cont;
	PhoneBook	phonebook;
    while (1)
    {
        getline(std::cin, input);
        if (input.compare("ADD") == 0)
			cont.fill_contact(phonebook.Contacts[i]);
        else if (input.compare("SEARCH") == 0)
        {

        }
        else if (input.compare("EXIT") == 0)
            exit(1);
        else
            continue;
        i++;
    }
}