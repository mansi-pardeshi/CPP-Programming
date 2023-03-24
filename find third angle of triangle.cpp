#include<iostream>
int main()
{
	float a1 , a2 ,a3;

	std::cout<<"Enter two angles of triangle";
	std::cin>>a1>>a2;

	a3 = 180-(a1+a2);
	std::cout<<"Third angle of a traingle : "<<a3;

	return 0;
}
