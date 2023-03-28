#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP
	#include <map>
	#include <fstream>
	#include <string>
	#include <iostream>
	#include <sstream>
	class BitcoinExchange
	{
		private:
			std::ifstream			   exchangeRatesFile;
			std::ifstream			   inputDatesFile;
			std::map<std::string, double, std::greater<std::string> > exchangeRates;
			std::string				   date;
			float					   value;
			bool					   parsingError;
			bool 					isAllDigitDate( std::string & );
		public:
			BitcoinExchange(void);
			BitcoinExchange(const BitcoinExchange &);
			~BitcoinExchange(void);
			BitcoinExchange &operator=(const BitcoinExchange &);
			void fillExchangeRates( void );
			void getDateAndVal ( char * );
	};
#endif