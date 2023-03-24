//Virtual Base Class

#include<iostream>
#include<conio.h>

class power
{
public:
	power(int power)
	{
		std::cout<<"Power : "<<power<<std::endl;
	}
};

class scanner:virtual public power
{
public:
	scanner(int power , int scanner):power(power)
	{
		std::cout<<"Scanner : "<<scanner<<std::endl;
	}
};

class printer:virtual public power
{
public:
	printer(int power , int printer):power(power)
	{
		std::cout<<"Printer : "<<printer<<std::endl;
	}
};

class xerox:public scanner , public printer
{
public:
	xerox(int power , int scanner , int printer):power(power) , scanner(power , scanner) , printer(power , printer)
	{
	}
};

int main()
{
	xerox x(1 , 2 , 3);
	getch();
	return 0;
}