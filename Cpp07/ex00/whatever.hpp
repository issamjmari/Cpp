#ifndef WHATEVER_HPP
#define WHATEVER_HPP
	#include <iostream>
	template <typename T>
	T max(T first, T second)
	{
		if(first == second)
			return second;
		return (first > second) ? first : second;
	}
	template <typename T>
	T min(T first, T second)
	{
		if(first == second)
			return second;
		return (first < second) ? first : second;
	}
	template <typename T>
	void swap(T &first, T &second)
	{
		T tmp;
		tmp = first;
		first = second;
		second = tmp;
	}
#endif