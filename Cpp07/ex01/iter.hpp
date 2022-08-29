#ifndef ITER_HPP
#define ITER_HPP
	#include <iostream>
	template<typename T> 
	void f(T arg)
	{
		std::cout << arg << std::endl;
	}
	template <typename T>
	void iter(T arr[], int length, void f(T))
	{
		int i = 0;
		for(int i = 0; i < length; i++)
			f(arr[i]);
	}
#endif