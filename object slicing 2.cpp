//object slicing

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

class D:public A ,public B , public C
{
public:
	double d;
};

int main()
{
	D objd;
	std::cout<<&objd<<std::endl;

	 A* pa = &objd;
	 std::cout<<pa<<std::endl;

	 B* pb = &objd;
	 std::cout<<pb<<std::endl;

	 C* pc = &objd;
	 std::cout<<pc<<std::endl;

	 std::cout<<pa->a<<std::endl;
	 std::cout<<pb->b<<std::endl;
	 std::cout<<pc->c<<std::endl;

	 D* pd = &objd;
	 std::cout<<pd->a<<std::endl;
	 std::cout<<pd->b<<std::endl;
	 std::cout<<pd->c<<std::endl;
	 std::cout<<pd->d<<std::endl;

	 getch();
	 return 0;
}
