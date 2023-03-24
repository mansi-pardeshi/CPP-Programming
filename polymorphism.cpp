//Polymorphism example 
//Function overloading
#include<conio.h>
#include<iostream>

class demo
{
public:
	int a;
	int b;

	void fun(int a , int b)
	{
		std::cout<<"In First Fun"<<std::endl;
		std::cout<<a<<std::endl<<b<<std::endl;
	}

	void fun(int a )
	{
		std::cout<<"In second Fun"<<std::endl;
		std::cout<<a;
	}
};

int main()
{
	demo d;
	d.fun(10,20);
	d.fun(30);

	getch();
	return 0;
}