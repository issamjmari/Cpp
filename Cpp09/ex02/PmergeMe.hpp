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
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &);
		~PmergeMe(void);
		PmergeMe &operator=(const PmergeMe &);
		struct timeval start_time1;
		struct timeval end_time1;
		struct timeval start_time2;
		struct timeval end_time2;
		float					VecexecuteTime;
		float					DeqexecuteTime;
		int					    vecSize;			
		static bool					sortBySecond( std::pair<int, int> &, std::pair<int, int> & );
		bool				    isOdd;
		int						leftOddNum;
		void				    pairingVector(  int , char ** );
		void				    insertSmallerVecValsToOutput( void );
		void				    pairingDeque(  int , char ** );
		void				    insertSmallerDeqValsToOutput( void );
		void					printVecAlgoTime( void );
		void					printDeqAlgoTime( void );
};
#endif