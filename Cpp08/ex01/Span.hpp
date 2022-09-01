#ifndef SPAN_HPP
#define SPAN_HPP
	#include <vector>
	#include <iostream>
	#include <algorithm>
	class Span
	{
		private:
			std::vector<int> v;
			unsigned int N;
		public:
			Span(void);
			Span(const Span &);
			~Span(void);
			Span &operator=(const Span &);
			int &operator[](unsigned int num);
			Span(unsigned int);
			void addNumber(int);
			int shortestSpan();
			int longestSpan();
			void addNumbers(int *first, int *last);
	} ;
#endif