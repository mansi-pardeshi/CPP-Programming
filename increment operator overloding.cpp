#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;
	 
	demo()
	{
	}
	demo (int a, int b)
	{
		this->a=a;
		this->b=b;
	}

	demo & operator ++ (int)
	{
	demo *p=(demo*)malloc(sizeof(demo));
	p->a = this->a;
	p->b = this->b;

	(this->a)++;
	(this->b)++;
	return *p;
	}

	demo & operator ++ ()
	{
		(this->a)++;
		(this->b)++;
		return * this;
	}
};

int main()
{
	demo d1(10,20);
	demo d2;
	demo d3(30,40);
	demo d4;

	std::cout<<"values of d1 before incrementing"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl;
	
    d2 = d1++;
	
	std::cout<<"values of d1 after post incrementing"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl;
	std::cout<<"values of d2 "<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl;

	std::cout<<"values of d3 before incrementing"<<std::endl;
	std::cout<<d3.a<<std::endl<<d3.b<<std::endl;
	d4=++d3;
	
	std::cout<<"values of d3 after pre incrementing"<<std::endl;
	std::cout<<d3.a<<std::endl<<d3.b<<std::endl;
	std::cout<<"values of d4 "<<std::endl;
	std::cout<<d4.a<<std::endl<<d4.b<<std::endl;

	getch();
	return 0;

}