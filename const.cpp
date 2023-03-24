#include<iostream>
#include<conio.h>
int main()
{
	const int a = 10;
	int *p = const_cast <int *>(&a);
	(*p)++;
	std::cout<<a<<std::endl<<*p<<std::endl;
	getch();
	return 0;

}