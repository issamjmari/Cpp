#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP
	#include <map>
	#include <fstream>
	#include <string>
	#include <iostream>
	#include <sstream>
	class BitcoinExchange
	{
		public:
			BitcoinExchange(void);
			BitcoinExchange(const BitcoinExchange &);
			~BitcoinExchange(void);
			BitcoinExchange &operator=(const BitcoinExchange &);
			void fillExchangeRates( void );
			void getDateAndVal ( char * );
			bool 					isAllDigitDate( std::string & );
			std::ifstream			   exchangeRatesFile;
			std::ifstream			   inputDatesFile;
			int 					   fileLength;
			std::map<std::string, double, std::greater<std::string> > exchangeRates;
			std::string				   date;
			double					   value;
			bool					   parsingError;
	};
#endif