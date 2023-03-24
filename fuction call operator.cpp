#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;

	demo & operator()(int a,int b)
	{
		std::cout<<a<<std::endl<<b<<std::endl;
		return * this;
	}
};

int main()
{
	demo d;

	d(10,20);

	getch();
	return 0;
}