#ifndef PmergeMe_HPP
#define PmergeMe_HPP
	#include <utility>
	#include <vector>
	#include <fstream>
	#include <string>
	#include <iostream>
	#include <algorithm>
	#include <sstream>
	#include <time.h>
	class PmergeMe
	{
		public:
			PmergeMe(void);
			PmergeMe(const PmergeMe &);
			~PmergeMe(void);
			PmergeMe &operator=(const PmergeMe &);
			clock_t       			algoBeg;
			clock_t       			algoEnd;
			int					    vecSize;
			std::vector<std::pair<int, int> >     pairValues;
			std::vector<int>        Output;
			std::vector<int>        insertedValues;
			static bool					sortBySecond( std::pair<int, int> &, std::pair<int, int> & );
			bool				    isOdd;
			int						leftOddNum;
			void				    pairingVector(  int , char ** );
			void				    insertSmallerValsToOutput( void );
			void					printAlgoTime( void );
	};
#endif