//Signed & unsigned example

#include<conio.h>
#include<iostream>

class demo
{
public:

	void fun(unsigned a)
	{
		std::cout<<"In unsigned"<<std::endl;
		std::cout<<a<<std::endl;
	}

	void fun(signed a)
	{
		std::cout<<"In signed"<<std::endl;
		std::cout<<a<<std::endl;
	}
};

int main()
{
	demo d;
	d.fun(10);
	d.fun((unsigned) 20);

	getch();
	return 0;
}