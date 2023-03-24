//Template member function

#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;

	template<class T1 , class T2>
	T2 add(T1 a , T2 b)
	{
		return a+b;
	}
};

int main()
{
	demo d;

	std::cout<<d.add<int , float>(10,20.5);
	getch();
	return 0;
}