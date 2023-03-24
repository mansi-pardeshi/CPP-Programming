#include<conio.h>
#include<iostream>

class Demo
{
public :
	Demo& fun()
	{
		std::cout<<"this is fun"<<std::endl;
		return *this;
	}
	Demo& gun()
	{
		std::cout<<"this is gun"<<std::endl;
		return *this;
	}
	void run()
	{
		std::cout<<"this is run"<<std::endl;
	}
};

int main()
{
	Demo d1;
	d1.fun().gun().run();
	getch();
	return 0;
}