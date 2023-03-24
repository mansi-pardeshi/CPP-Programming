//Upcast example

#include<conio.h>
#include<iostream>

class demo
{
public:

	void fun(int a)
	{
		std::cout<<" In Int fun"<<std::endl;
		std::cout<<a<<std::endl;
	}

	void fun(float a)
	{
		std::cout<<"In float fun"<<std::endl;
		std::cout<<a<<std::endl;
	}
};

int main()
{
	demo d;
	d.fun('A');

	getch();
	return 0;
}