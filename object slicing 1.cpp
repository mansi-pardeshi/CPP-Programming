#include<iostream>
#include<conio.h>

class A
{
public:
	double a;
};

class B
{
public:
	double b;
};

class C
{
public:
	double c;
};

class D:public A , public B , public C
{
public:
	double d;
};

int main()
{
	D objd;

	std::cout<<"size of objd"<<std::endl;
	std::cout<<sizeof(objd)<<std::endl;
	
	B* pb = &objd;
	D* pd = static_cast<D*>(pb);

	std::cout<<pd<<std::endl;

	getch();
	return 0;
}