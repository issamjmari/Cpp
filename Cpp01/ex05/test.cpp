#include <string>
#include <iostream>

class test
{
	public:
		void home()
		{
			std::cout << "What do you say\n";
		}
		void forward()
		{
			std::cout << "FORWARD and more words\n";
		}
		void up()
		{
			std::cout << "UP to date , yes !\n";
		}
	typedef void (test::*Action)(void);
	enum Directions {HOME, FORWARD, UP};
	void move(Directions);
	private:
		static Action Table[];
} ;

test::Action test::Str_tables[] = {

}
test::Action test::Table[] = {
	&test::home,
	&test::forward,
	&test::up,
} ;
void test::move(Directions index)
{
	return (this->*Table[index]) ();
}
int main()
{
	test t;
	t.move(test::DOWN);
	t.move(test::OP);
}