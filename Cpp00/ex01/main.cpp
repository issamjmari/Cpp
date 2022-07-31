#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>


int Print_contact_data(int index, PhoneBook phonebook)
{
    if (phonebook.get_first_name(index).length() == 0 || index > 7)
        return 0;
    std::cout << "first name is : ";
    std::cout << phonebook.get_first_name(index) << std::endl;
    std::cout << "last name is : ";
    std::cout << phonebook.get_last_name(index) << std::endl;
    std::cout << "nickname is : ";
    std::cout << phonebook.get_nickname(index) << std::endl;
    std::cout << "phone_number is : ";
    std::cout << phonebook.get_phone(index) << std::endl;
    std::cout << "darkest secret is : ";
    std::cout << phonebook.get_darkestsecret(index) << std::endl;
    return 1;
}
void    Data_printing(PhoneBook phonebook)
{
    int i = 0;
    std::string first_n;
    std::string last_n;
    std::string nickname;
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
    first_n = phonebook.get_first_name(i);
    last_n = phonebook.get_last_name(i);
    nickname = phonebook.get_nickname(i);
    while (first_n.length() > 0 && i < 8)
    {
        std::cout << std::setw(1) << std::left << "|";
        std::cout << std::setw(10) << std::right << i;
        std::cout << std::setw(1) << std::left << "|";
        if (first_n.length() > 10)
            std::cout << std::setw(10) << std::right << first_n.substr(0, 9) + ".";
        else if (first_n.length() == 10)
            std::cout << std::setw(10) << std::right << first_n.substr(0, 10);
        else
            std::cout << std::setw(10) << std::right << first_n.substr(0, 9);
        std::cout << std::setw(1) << std::left << "|";
        if (last_n.length() > 10)
            std::cout << std::setw(10) << std::right << last_n.substr(0, 9) + ".";
        else if (last_n.length() == 10)
            std::cout << std::setw(10) << std::right << last_n.substr(0, 10);
        else
            std::cout << std::setw(10) << std::right << last_n.substr(0, 9);
        std::cout << std::setw(1) << std::left << "|";
        if (nickname.length() > 10)
            std::cout << std::setw(10) << std::right << nickname.substr(0, 9) + ".";
        else if (nickname.length() == 10)
            std::cout << std::setw(10) << std::right << nickname.substr(0, 10);
        else
            std::cout << std::setw(10) << std::right << nickname.substr(0, 9);
        std::cout << std::setw(1) << std::left << "|\n";
        std::cout << std::setw(10) << "-----------";
        std::cout << std::setw(10) << "-----------";
        std::cout << std::setw(10) << "-----------";
        std::cout << std::setw(10) << "------------\n";
        i++;
        first_n = phonebook.get_first_name(i);
        last_n = phonebook.get_last_name(i);
        nickname = phonebook.get_nickname(i);
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
        getline(std::cin, input);
        if (input == "ADD")
            phonebook.set_new_contact(i++);
        else if (input == "SEARCH")
        {
            Data_printing(phonebook);
            std::cout << "Please enter the index of the contact you need : ";
            std::cin >> contact_info;
            if (Print_contact_data(contact_info, phonebook) == 1);
            else
                std::cout << "Index entered was not correct, please search again with a correct one\n";
        }
        else if (input == "EXIT")
            exit(1);
        else
            continue;
        if (i == 8)
            i = 0;
    }
}