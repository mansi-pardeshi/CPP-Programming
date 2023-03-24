#include<conio.h>
#include<iostream>

class Demo
{
public:
	int a,b;

	Demo(int a, int b)
	{
		this->a=a;
		this->b=b;
	}

	Demo& operator+(const Demo& other)
	{
		Demo *temp = (Demo*)malloc(sizeof(Demo));
		temp->a = other.a + this->a;
		temp->b = other.b + this->b;

		return *temp;
	}
};

int main()
{
	Demo d1(10,20);
	Demo d2(5,10);
	Demo d3 = d1+d2;

	std::cout<<"addition is" << d3.a<< "\t" <<+d3.b<<std::endl;
	
	getch();
	return 0;
}