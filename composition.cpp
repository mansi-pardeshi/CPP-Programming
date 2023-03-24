#include<conio.h>
#include<iostream>

class demo
{
public :
	int a;

	demo(int a)
	{
		this->a=a;
	}
	void in(int a)
	{
	  a = a;
	}

	demo display()
	{
		return a;
	}

};

class demo2
{
public:
	demo d();

	void print()
	{
		d.display();
	}
};

int main()
{
	getch();
	return 0;
}