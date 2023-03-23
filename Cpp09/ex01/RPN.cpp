#include "RPN.hpp"

RPN::RPN(void)
{

}
RPN::RPN(const RPN &)
{

}
RPN::~RPN(void)
{

}
RPN &RPN::operator=(const RPN &)
{
	return *this;
}

int	RPN::calculateNums( std::string &nums )
{
	std::stringstream data(nums);
	std::string word;
	while(data >> word)
	{
		if(isOperand(word))
		{
			int stackSize = numStack.size();
			if(stackSize < 2)
			{
				std::cout << "Error : stack doesn't have enough numbers to be calculated";
				exit(1);
			}
			try
			{
				int first_num = numStack.top();
				numStack.pop();
				int second_num = numStack.top();
				numStack.pop();
				if(word == "+")
					numStack.push(second_num + first_num);
				if(word == "*")
					numStack.push(second_num * first_num);
				if(word == "-")
					numStack.push(second_num - first_num);
				if(word == "/")
					numStack.push(second_num / first_num);
			}
			catch(const std::exception& e)
			{
				std::cout << "Error : expression can't be calculated properly";
				exit(1);
			}
		}
		else
		{
			for(size_t i = 0; i < word.size(); i++)
			{
				if(!isdigit(word[i]))
				{
					std::cout << "Error : expression has invalid input\n";
					exit(1);
				}
			}
			try
			{
				numStack.push(std::stoi(word));
			}
			catch(const std::exception& e)
			{
				std::cout << "Error : wrong number input\n";
				exit(1);
			}
		}
	}
	return numStack.top();
}
bool RPN::isOperand(std::string &word)
{
	if(word == "*" || word == "+"
	|| word == "-" || word == "/")
		return 1;
	return 0;
}
