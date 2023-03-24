//Template standalone function example

#include<iostream>
#include<conio.h>

template<class T1 , class T2>
T2 add(T1 a , T2 b)
{
	return a+b;
}

int main()
{
	std::cout<<add<int , float>(10 , 10.20f);
	//std::cout<<add(10,20)<<std::endl;
	getch();
	return 0;
}