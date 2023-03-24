#include<iostream>
#include<conio.h>

class emp
{
public:
	int id;
	std::string name;
	double salary;

	emp(int id , std::string name , double salary)
	{
		this->id = id;
		this->name = name;
		this->salary = salary;
	}
};

class man:public emp
{
public:
	double bonus;

	man(int id ,std::string name , double salary , double bonus):emp(id , name , salary)
	{
		this->bonus = bonus;
	}
};


int main()
{
	man m(123,"mansi" , 1000 ,20000);

	
	std::cout<<m.id<<std::endl<<m.name<<std::endl<<m.salary<<std::endl<<m.bonus<<std::endl;

	getch();
	return 0;
}