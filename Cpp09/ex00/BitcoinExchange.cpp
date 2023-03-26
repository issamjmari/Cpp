#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : parsingError(0)
{

}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &)
{

}
BitcoinExchange::~BitcoinExchange(void)
{

}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &)
{
	return *this;
}
void BitcoinExchange::fillExchangeRates( void )
{
	this->exchangeRatesFile.open("data.csv");
	if(!this->exchangeRatesFile.is_open())
	{
		std::cout << "Error: could not open file\n";
	}
	std::string buffer;
	while(std::getline(this->exchangeRatesFile, buffer))
	{
		size_t foundComma = buffer.find(',');
		if(foundComma)
		{
			std::string date = buffer.substr(0, foundComma);
			std::string exchangeRate = buffer.substr(foundComma + 1);
			this->exchangeRates[date] = std::atof(exchangeRate.c_str());
		}
	}
}

bool 	BitcoinExchange::isAllDigitDate( std::string &str )
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if(!isdigit(str[i]))
		{
			std::cout << "str[i] " << str[i] << std::endl;
			return 0;
		}
	}
	return 1;
}
void BitcoinExchange::getDateAndVal ( char *input )
{
	this->inputDatesFile.open(input);
	std::string buffer;
	while(std::getline(this->inputDatesFile, buffer))
	{
		std::stringstream data(buffer);
		std::string word;
		data >> word;
		size_t firstDash = word.find('-');
		if(firstDash)
		{
			std::string strYear = word.substr(0, firstDash);
			try
			{
				if(!isAllDigitDate(strYear))
				{
					parsingError = true;
					std::cout << "Error: bad year as input  => " << buffer << std::endl;
					break;
				}
				int year = std::atoi(strYear.c_str());
				if(year > 2023)
				{
					parsingError = true;
					std::cout << "Error: bad year as input  => " << buffer << std::endl;
					break;
				}
			}
			catch (std::exception &e)
			{
				parsingError = true;
				std::cout << "Error: bad year input => " << buffer << std::endl;
				break;
			}
		}
		else
		{
			parsingError = true;
			std::cout << "Error: bad year input => " << buffer << std::endl;
			break;
		}
		size_t secondDash = word.find('-', firstDash + 1);
		if(secondDash)
		{
			std::string strMonth = word.substr(firstDash + 1, secondDash - firstDash - 1);
			if(!isAllDigitDate(strMonth))
			{
				parsingError = true;
				std::cout << "Error: bad month as input  => " << buffer << std::endl;
				break;
			}
			try
			{
				int month = std::atoi(strMonth.c_str());
				if(month > 12)
				{
					parsingError = true;
					std::cout << "Error: bad month input => " << buffer << std::endl;
					break;
				}
			}
			catch (std::exception &e)
			{
				parsingError = true;
				std::cout << "Error: bad month input => " << buffer << std::endl;
				break;
			}
		}
		else
		{
			parsingError = true;
			std::cout << "Error: bad month input => " << buffer << std::endl;
			break;
		}
		std::string strDay = word.substr(secondDash + 1);
		if(!isAllDigitDate(strDay))
		{
			parsingError = true;
			std::cout << "Error: bad day as input  => " << buffer << std::endl;
			break;
		}
		try
		{
			int day = std::atoi(strDay.c_str());
			if(day > 31)
			{
				parsingError = true;
				std::cout << "Error: bad day input => " << buffer << std::endl;
				break;
			}
		}
		catch (std::exception &e)
		{
			parsingError = true;
			std::cout << "Error: bad day input => " << buffer << std::endl;
			break;
		}
		this->date = word;
		data >> word;
		if(word != "|")
		{
			parsingError = true;
			std::cout << "Error: bad input => " << buffer << std::endl;
			break;
		}
		try
		{
			data >> this->value;
			if(this->value > 1000)
			{
				parsingError = true;
				std::cout << "Error: too large number\n";
				break;
			}
			if(this->value < 0)
			{
				parsingError = true;
				std::cout << "Error: not a positive number\n";
				break;
			}
			std::map<std::string, double, std::greater<std::string> >::iterator 
				mapIt = this->exchangeRates.lower_bound(this->date);
			std::cout << this->date << " => ";
			std::cout << this->value << " = ";
			std::cout << (this->value * mapIt->second) << std::endl;
		}
		catch(std::exception &e)
		{
			parsingError = true;
			std::cout << "Error: value is nor float nor integer\n";
			break;
		}
		data >> word;
		std::cout << "word " << word << std::endl;
		exit(1);
		if(word.length() != 0 && parsingError == false)
			std::cout << "Error: bad input => " << buffer << std::endl;
	}
}