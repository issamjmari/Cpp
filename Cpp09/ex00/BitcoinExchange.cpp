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
			return 0;
	}
	return 1;
}

bool	valueIsNotValid(std::string &value)
{
	bool onlyPoint = false;
	if(!isdigit(value[0]))
		return 1;
	for(size_t i = 0; i < value.length(); i++)
	{
		if(value[i] == '.' && !onlyPoint)
		{
			onlyPoint = true;
			continue;
		}
		if(!isdigit(value[i]))
			return 1;
		if(i == value.length() - 1 && !isdigit(value[i]))
			return 1;
	}
	return 0;
}

void BitcoinExchange::getDateAndVal ( char *input )
{
	this->inputDatesFile.open(input);
	if(!this->inputDatesFile.is_open())
	{
		std::cout << "Error: could not open file.\n";
		exit(1);
	}
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
				if(!isAllDigitDate(strYear) || strYear.length() != 4)
				{
					parsingError = true;
					std::cout << "Error: bad input  => " << buffer << std::endl;
					continue;
				}
				int year = std::atoi(strYear.c_str());
				if(year > 2023)
				{
					parsingError = true;
					std::cout << "Error: bad input  => " << buffer << std::endl;
					continue;
				}
			}
			catch (std::exception &e)
			{
				parsingError = true;
				std::cout << "Error: bad input => " << buffer << std::endl;
				continue;
			}
		}
		else
		{
			parsingError = true;
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue;
		}
		size_t secondDash = word.find('-', firstDash + 1);
		if(secondDash)
		{
			std::string strMonth = word.substr(firstDash + 1, secondDash - firstDash - 1);
			if(!isAllDigitDate(strMonth) || strMonth.length() != 2)
			{
				parsingError = true;
				std::cout << "Error: bad input  => " << buffer << std::endl;
				continue;
			}
			try
			{
				int month = std::atoi(strMonth.c_str());
				if(month > 12)
				{
					parsingError = true;
					std::cout << "Error: bad input => " << buffer << std::endl;
					continue;
				}
			}
			catch (std::exception &e)
			{
				parsingError = true;
				std::cout << "Error: bad input => " << buffer << std::endl;
				continue;
			}
		}
		else
		{
			parsingError = true;
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue;
		}
		std::string strDay = word.substr(secondDash + 1);
		if(!isAllDigitDate(strDay) || strDay.length() != 2)
		{
			parsingError = true;
			std::cout << "Error: bad input  => " << buffer << std::endl;
			continue;
		}
		try
		{
			int day = std::atoi(strDay.c_str());
			if(day > 31)
			{
				parsingError = true;
				std::cout << "Error: bad input => " << buffer << std::endl;
				continue;
			}
		}
		catch (std::exception &e)
		{
			parsingError = true;
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue;
		}
		this->date = word;
		data >> word;
		if(word != "|")
		{
			parsingError = true;
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue;
		}
		try
		{
			data >> word;
			if(valueIsNotValid(word))
			{
				std::cout << "value is not valid\n";
				continue;
			}
			this->value = std::atof(word.c_str());
			if(this->value > 1000)
			{
				parsingError = true;
				std::cout << "Error: too large number\n";
				continue;
			}
			if(this->value < 0)
			{
				parsingError = true;
				std::cout << "Error: not a positive value\n";
				continue;
			}
			std::map<std::string, double, std::greater<std::string> >::iterator 
				mapIt = this->exchangeRates.lower_bound(this->date);
			std::cout << this->date << " => ";
			std::cout << this->value << " = ";
			if(mapIt != this->exchangeRates.end())
				std::cout << (this->value * mapIt->second) << std::endl;
			else
				std::cout << "0" << std::endl;
		}
		catch(std::exception &e)
		{
			parsingError = true;
			std::cout << "Error: value is nor float nor integer\n";
			continue;
		}
		if(!data.eof() && parsingError == false)
			std::cout << "Error: bad input => " << buffer << std::endl;
	}
}