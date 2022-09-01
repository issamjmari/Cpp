#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
	#include <stack>
	#include <list>
	#include <iostream>
	template <typename T>
	class MutantStack : public std::stack<T>
	{
		public:
			typedef typename std::deque<T>::iterator iterator;
			MutantStack(const MutantStack &ref)
			{
				this->c = ref.c;
			}
			MutantStack(void)
			{
			}
			~MutantStack(void)
			{
			}
			MutantStack &operator=(const MutantStack &ref)
			{
				this->c = ref.c;
				return (*this);
			}
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