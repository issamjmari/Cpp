#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-\
double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, \
I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.\
 I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	std::string str_table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error,} ;
	for(int i = 0; i < 4; i++)
	{
		if(level == str_table[i])
		{
			switch (i)
			{
				case 0:
					std::cout << "[ DEBUG ]\n";
					(this->*ptr[0]) ();
					std::cout << "\n";
				case 1:
					std::cout << "[ INFO ]\n";
					(this->*ptr[1]) ();
					std::cout << "\n";
				case 2:
					std::cout << "[ WARNING ]\n";
					(this->*ptr[2]) ();
					std::cout << "\n";
				case 3:
					std::cout << "[ ERROR ]\n";
					(this->*ptr[3]) ();
					std::cout << "\n";
				case 4:
					return ;
				i++;
			}
		}
		else if (i == 3)
		{
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			return ;
		}
	}
}