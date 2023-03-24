#include<iostream>
#include<conio.h>

class Demo
{
	int a;
	int b;
public:
	Demo(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	friend std::ostream & operator<<(std::ostream & out,const Demo & other);
};

std::ostream & operator<<(std::ostream & out,const Demo & other)
{
	out<<other.a;
	out<<std::endl;
	out<<other.b;
	return out;
}



int main()
{
	Demo d(10,20);
	std::cout<<d;
	
	getch();
	return 0;
}