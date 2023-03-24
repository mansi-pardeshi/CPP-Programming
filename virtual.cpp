//Virtual in c++ example.

#include<conio.h>
#include<iostream>

class person
{
private:
	int age;
	char name[20];

public:
	person(const char* name = "" , int age = 0)
	{
		strcpy(this -> name , name);
		this -> age = age;
	}

	int get_age()//getter mathod
	{
		return age;
		//return this -> age;
	}

	char* get_name()//getter method
	{
		return name;
		//return this -> name;
	}

	virtual void display()
	{
		std::cout<<"Name : "<<this->name<<std::endl;
		std::cout<<"Age : "<<this->age<<std::endl;
	}
};

class employe:public person
{
private:
	int id;
	float salary;
public:
	employe(const char* name = "" , int age = 0 , int id = 0 , float salary = 0.0):person(name , age)
	{
		this -> id = id;
		this -> salary = salary;
	}

	int get_id()
	{
		return id;
		//return this -> id;
	}

	double get_salary()
	{
		return salary;
		//return this -> salary;
	}

	void display()
	{
		person::display();
		std::cout<<"ID : "<<this->id<<std::endl;
		std::cout<<"Salary : "<<this->salary<<std::endl;
	}
};

int main()
{
	employe e1("Mansi" , 19 ,121 , 500000.00);
	person *p1;
	p1 = &e1;

	p1->display();
	
	getch();
	return 0;
}