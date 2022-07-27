#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>


void    Print_contact_data(Contact contact)
{
    std::cout << "first name is : ";
    std::cout << contact.get_first_name(contact) << std::endl;
    std::cout << "last name is : ";
    std::cout << contact.get_last_name(contact) << std::endl;
    std::cout << "nickname is : ";
    std::cout << contact.get_nickname(contact) << std::endl;
    std::cout << "phone_number is : ";
    std::cout << contact.get_phone(contact) << std::endl;
    std::cout << "darkest secret is : ";
    std::cout << contact.get_darkestsecret(contact) << std::endl;
}
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
    int         contact_info;
    Contact		cont;
	PhoneBook	phonebook;
    while (1)
    {
        std::cout << "PhoneBook : ";
        getline(std::cin, input);
        if (input == "ADD")
		    cont.fill_contact(phonebook.Contacts[i++]);
        else if (input == "SEARCH")
        {
            Data_printing(phonebook.Contacts);
            std::cout << "Please enter the index of the contact you need : ";
            std::cin >> contact_info;
            if (contact_info >= 0 && contact_info <= 7)
                Print_contact_data(phonebook.Contacts[contact_info]);
            else
                std::cout << "Index entered was not correct, please search again with a correct one\n";
        }
        else if (input == "EXIT")
            exit(1);
        else
            continue;
        if (i == 7)
            i = 0;
    }
}