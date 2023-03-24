#include<iostream>
#include<conio.h>

class Employee
{
private: 
	int salary;
public:
	void setSal(int salary)
	{
		this->salary = salary;
	}
	int getSal()
	{
		return this->salary;
	}
};

class Manager
{
public:
	Employee mansi;
	int salary;
	void fun()
	{
		mansi.setSal(30000);
		salary = mansi.getSal();
		std::cout<<"Salary : "<<salary;
	}
};

int main()
{
	Manager M;
	Employee E;
	M.fun();
	getch();
	return 0;
}