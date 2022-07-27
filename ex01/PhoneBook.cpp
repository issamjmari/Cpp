#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>


void    Data_printing(Contact contact[])
{
    int i = 0;
    std::cout << std::setw(10) << "-----------";
    std::cout << std::setw(10) << "-----------";
    std::cout << std::setw(10) << "-----------";
    std::cout << std::setw(10) << "------------\n";
    std::cout << "|";
    std::cout << std::setw(10) << std::right << "index";
    std::cout << "|";
    std::cout << std::setw(10) << std::right << "first name";
    std::cout << "|";
    std::cout << std::setw(10) << std::right << "last name";
    std::cout << "|";
    std::cout << std::setw(10) << std::right << "nickname";
    std::cout << "|\n";
    std::cout << std::setw(10) << "-----------";
    std::cout << std::setw(10) << "-----------";
    std::cout << std::setw(10) << "-----------";
    std::cout << std::setw(10) << "------------\n";
    while (contact[i].get_first_name(contact[i]).length() > 0)
    {
        std::cout << std::setw(1) << std::left << "|";
        std::cout << std::setw(10) << std::right << i;
        std::cout << std::setw(1) << std::left << "|";
        std::cout << std::setw(10) << std::right << contact[i].get_first_name(contact[i]).substr(0, 9);
        std::cout << std::setw(1) << std::left << "|";
        std::cout << std::setw(10) << std::right << contact[i].get_last_name(contact[i]).substr(0, 9);
        std::cout << std::setw(1) << std::left << "|";
        std::cout << std::setw(10) << std::right << contact[i].get_nickname(contact[i]).substr(0, 9);
        std::cout << std::setw(1) << std::left << "|\n";
        std::cout << std::setw(10) << "-----------";
        std::cout << std::setw(10) << "-----------";
        std::cout << std::setw(10) << "-----------";
        std::cout << std::setw(10) << "------------\n";
        i++;
    }
}
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
		    cont.fill_contact(phonebook.Contacts[i++]);
        else if (input.compare("SEARCH") == 0)
            Data_printing(phonebook.Contacts);
        else if (input.compare("EXIT") == 0)
            exit(1);
        else
            continue;
        if (i == 7)
            i = 0;
    }
}