#include <string>
#include <iostream>
int main()
{
	int x;
	std::cin >> x;
	switch(x)
	{
		case 1:
       		 printf("Choice is A\n");
   		case 2:
       		 printf("Choice is B\n");
  		case 3:
     		 printf("Choice is C\n");
		default:
		{
			std::cout << "INVALID";
		}
		x++;
	} 
}