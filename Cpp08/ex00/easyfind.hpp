#ifndef EASYFIND_HPP
#define EASYFIND_HPP
	#include <algorithm>
	#include <iterator>
	#include <exception>
	#include <vector>
	#include <array>
	#include <iostream>
	#include <string>
	template <typename T>
	int easyfind(T const& container, int a)
	{
		try
		{
			typename T::const_iterator pos;
			pos = std::find( container.begin(), container.end(), a);
			if(pos != container.end())
				return (pos - container.begin());
			else
				throw std::runtime_error("number not found in the container\n");;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
			return (-1);
		}
		return 0;
	}
#endif