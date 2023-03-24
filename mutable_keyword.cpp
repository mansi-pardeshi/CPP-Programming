//Example of mutable keyword

#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	mutable int b;

	demo(int a , int b)
	{
		this->a = a;
		this->b = b;
	}
	void fun() const
	{
		b++;
		std::cout<<"a = "<<a<<std::endl<<"b = "<<b<<std::endl;
	}
};
int main()
{
	demo d(10,20);
	d.fun();

	/*const demo d2(30,40);
	std::cout<<"in modification object 2"<<std::endl;
	d2.fun();*/

	getch();
	return 0;
}