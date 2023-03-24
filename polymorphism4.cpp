//Default parameter example

#include<iostream>
#include<conio.h>

class demo
{
public:

	void getinfo(int name , int adh=0 , int pan=0)
	{
		std::cout<<"name ="<<name<<std::endl;
		std::cout<<"aadhar ="<<adh<<std::endl;
		std::cout<<"Pan card ="<<pan<<std::endl;
	}
};

int main()
{
	demo d;
	d.getinfo(123 , 10);

	getch();
	return 0;
}