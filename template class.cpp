//Template class

#include<iostream>
#include<conio.h>

template<class T1 , class T2>
class demo
{
public:
	T1 a;
	T2 b;

	demo(T1 a , T2 b)
	{
		this->a = a; 
		this->b = b;
	}
};

int main()
{
	demo <int,float>d(10 , 2.5f);

	std::cout<<d.a<<std::endl<<d.b;

	getch();
	return 0;
}