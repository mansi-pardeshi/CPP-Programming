#include<iostream>
#include<conio.h>

class Demo
{
public:
	int a;
	int b;
	int *p;
	 
	Demo()
	{
	}

	Demo(int a,int b,int c)
	{
		this->a = a;
		this->b = b;
		p = (int*)malloc(sizeof(int));
		(*(this->p)) = c;
	}

	void operator=(const Demo & other)
	{
		this->a = other.a;
		this->b = other.b;
		this->p = (int*)malloc(sizeof(int));
		*(this->p) = *(other.p);
	}
};

int main()
{
	Demo d1(10,20,30);
	Demo d2;
	d2 = d1;

	std::cout<<"values of object d1"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<*(d1.p)<<std::endl<<std::endl;

	std::cout<<"values of object d2"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d2.p)<<std::endl<<std::endl;

	getch();
	return 0;
}