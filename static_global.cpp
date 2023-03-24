#include<iostream>
#include<conio.h>

class Demo
{
public:
	int a;
	static int b;

	void gun()
	{
		a=10;
		std::cout<<a<<std::endl;
	}

	static void fun()
	{
		b++;
		std::cout<<b<<std::endl;
	}
};

int Demo :: b = 5;
int main()
{
	Demo d;
	d.fun();
	Demo :: fun();
	Demo :: fun();
	Demo :: fun();
	getch();
	return 0;


























}