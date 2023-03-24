#ifndef PmergeMe_HPP
#define PmergeMe_HPP
	#include <utility>
	#include <vector>
	#include <fstream>
	#include <string>
	#include <iostream>
	#include <algorithm>
	#include <sstream>
	class PmergeMe
	{
		public:
			PmergeMe(void);
			PmergeMe(const PmergeMe &);
			~PmergeMe(void);
			PmergeMe &operator=(const PmergeMe &);
			std::vector<std::pair<int, int> >     pairValues;
			std::vector<int>        Output;
			std::vector<int>        insertedValues;
			bool				    isOdd;
			int						leftOddNum;
	};
#endif