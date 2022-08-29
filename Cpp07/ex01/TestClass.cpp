#include "TestClass.hpp"

TestClass::TestClass(void) : var(0)
{

}
TestClass::TestClass(int arg) : var(arg)
{
}

std::ostream& operator<<(std::ostream &os, const TestClass &ref)
{
	std::cout << ref.get_var();
	return os;
}

TestClass::TestClass(const TestClass &ref) : var(ref.var)
{

}
TestClass	&TestClass::operator=(const TestClass &ref)
{
	this->var = ref.var;
	return (*this);
}
int TestClass::get_var(void) const
{
	return (this->var);
}