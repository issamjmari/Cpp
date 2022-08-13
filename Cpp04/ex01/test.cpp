#include <string>
#include <iostream>
class Base {
    public:
        //void f1();      // not virtual
        virtual void f2()
		{
			std::cout << "BASSY\n";
		}	// virtual, not pure
        virtual void f3() = 0;  // pure virtual
    };
 
class d : public Base
{
	public:
	void f3()
	{
		std::cout << "OK\n";
	}
	void f2()
	{
		std::cout << "f2\n";
	}
} ;

int main()
{
	d b;
	b.f3();
	b.f2();
}
