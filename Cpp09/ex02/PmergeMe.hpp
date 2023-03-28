#ifndef PmergeMe_HPP
#define PmergeMe_HPP
#include <utility>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <sys/time.h>

class PmergeMe
{
	private:
		std::vector<std::pair<int, int> >     VecpairValues;
		std::vector<int>        VecOutput;
		std::vector<int>        VecinsertedValues;

		std::deque<std::pair<int, int> >     DeqpairValues;
		std::deque<int>        DeqOutput;
		std::deque<int>        DeqinsertedValues;
		int					   biggest;
		bool				   is_sorted;
		void				    insertSmallerVecValsToOutput( void );
		void				    insertSmallerDeqValsToOutput( void );
		void					printVecAlgoTime( void );
		void					printDeqAlgoTime( void );
		bool 					isAllDigit( std::string &str );
		void					errorCause( const char *s);
		bool 					isVecsorted(std::vector<int>& vec);
		bool 					isDeqsorted(std::deque<int> &deq);
		struct timeval start_time1;
		struct timeval end_time1;
		struct timeval start_time2;
		struct timeval end_time2;
		float					VecexecuteTime;
		int					    vecSize;			
		static bool					sortByFirst( std::pair<int, int> &, std::pair<int, int> & );
		bool				    isOdd;
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &);
		~PmergeMe(void);
		PmergeMe &operator=(const PmergeMe &);
		void				    pairingVector(  int , char ** );
		void				    pairingDeque(  int , char ** );
};
#endif