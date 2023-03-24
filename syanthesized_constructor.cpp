#include<iostream>
#include<conio.h>

class Demo
{
public:
	int a;
	int b;
	Demo(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

};

int main()
{
	Demo d1(10,20);
	Demo d2(d1);
	
	std::cout<<"Values of d1 object"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<std::endl;

	std::cout<<"Values of d2 object (After copying)"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<std::endl;

	getch();
	return 0;
}