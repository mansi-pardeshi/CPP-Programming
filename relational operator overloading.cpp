#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;

	demo(int a, int b)
	{
		this -> a = a;
		this -> b = b; 
	}

	bool operator<(const demo& other)
	{
		return((this -> a)<(other.b) && (this -> b)<(other.b));
	}
};

int main()
{
	demo d1(10,20);
	demo d2(30,40);

	if(d1<d2)
	{
		std::cout<<"D1 object have minimum value"<<std::endl;
	}
	else
	{
		std::cout<<"D2 object have minimum value"<<std::endl;
	}

	getch();
	return 0;
}