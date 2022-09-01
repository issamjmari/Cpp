#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
	#include <stack>
	#include <list>
	template <typename T>
	class MutantStack : public std::stack<T>
	{
		public:
			typedef typename std::deque<T>::iterator iterator;
			iterator     begin()
			{
				return (this->c.begin());
			}
			iterator		end()
			{
				return (this->c.end());
			}
	} ;
#endif