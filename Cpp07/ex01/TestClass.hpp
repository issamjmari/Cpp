#ifndef TEST_CLASS_HPP
#define TEST_CLASS_HPP
	#include <iostream>
	class TestClass
	{
		private:
			int var;
		public:
			TestClass(void);
			TestClass(int arg);
			TestClass(const TestClass &);
			TestClass &operator=(const TestClass &);
			int get_var(void) const;
	} ;
	std::ostream& operator<<(std::ostream &os, const TestClass &ref);
#endif