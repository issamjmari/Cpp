#ifndef RPN_HPP
#define RPN_HPP
	#include <stack>
	#include <fstream>
	#include <string>
	#include <iostream>
	#include <sstream>
	class RPN
	{
		private:
			int operands;
			int numbers;
			std::stack<int> numStack;
		public:
			RPN(void);
			RPN(const RPN &);
			~RPN(void);
			RPN &operator=(const RPN &);
			int calculateNums( std::string & );
			bool isValidInput( std::string & );
			bool isOperand(std::string &word);
	};
#endif