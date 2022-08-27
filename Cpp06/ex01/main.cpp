#include "Data.hpp"
#include <iostream>
uintptr_t serialize(Data* ptr)
{
	uintptr_t changed = reinterpret_cast<uintptr_t> (ptr);
	return (changed);
}

Data* deserialize(uintptr_t raw)
{
	Data *back = reinterpret_cast<Data *> (raw);
	return (back);
}

int main()
{
	Data *a = new Data;
	uintptr_t b = serialize(a); 
	Data *f = deserialize(b);
	std::cout << "Original a is : " << a << std::endl;
	std::cout << "deserialized b is : " << f << std::endl;
	delete a;
}