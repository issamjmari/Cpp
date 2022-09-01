#ifndef ARRAY_HPP
#define ARRAY_HPP
	#include <iostream>
	#include <exception>
	template <typename T> 
	class Array
	{
		private:
			T *arr;
			unsigned int s;
		public:
			Array(void)
			{
				arr = 0;
			}
			~Array(void)
			{
				if(arr)
					delete [] arr;
			}
			Array(unsigned int n) : s(n)
			{
				arr = new T[n]();
			}
			Array(const Array &ref)
			{
				this->s = ref.s;
				arr = new T[s];
				for(unsigned int i = 0; i < s; i++)
					this->arr[i] = ref.arr[i];
			}
			Array &operator=(const Array &ref)
			{
				this->s = ref.s;
				if(arr != NULL)
					delete [] arr;
				arr = new T[s];
				for(unsigned int i = 0; i < s; i++)
					this->arr[i] = ref.arr[i];
				return (*this);
			}
			T &operator[](unsigned int i) 
			{
				if(i >= s)
					throw std::out_of_range("Out of range");
				return arr[i];
        	}
			unsigned int size(void) const
			{
				return (s);
			}
	} ;
#endif