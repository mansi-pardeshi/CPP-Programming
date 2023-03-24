#include<conio.h>
#include<iostream>

class Employee
{
private:
	char name[20];
	int age;
	int id;
protected:
	float sal;
public:
	Employee(const char* name = "" , int age = 0 , int id = 0 , float sal = 0.0f)
	{
		strcpy(this -> name , name);
		this -> age = age;
		this -> id = id;
		this -> sal = sal;
	}

	char* get_name()
	{
		return this -> name;
	}

	int get_age()
	{
		return this -> age;
	}

	int get_id()
	{
		return this -> id;
	}

	float get_sal()
	{
		return this -> sal;
	}

	virtual float calc_income()
	{
		return this -> sal;
	}

	virtual void display()
	{
		std::cout<<"Name : "<<name<<std::endl;
		std::cout<<"Age : "<<age<<std::endl;
		std::cout<<"ID : "<<id<<std::endl;
		std::cout<<"Salary : "<<sal<<std::endl;
	}
};

class Manager:public Employee
{
private:
	float bonus;
public:
	Manager(const char* name = "" , int age = 0 , int id = 0 , float sal = 0.0f , float bonus = 0.0f):Employee(name , age , id , sal)
	{
		this -> bonus = bonus;
	}

	float get_bonus()
	{
		return this -> bonus;
	}

	float calc_income()
	{
		Employee::calc_income();
		return this -> sal + this -> bonus;
	}

	void display()
	{
		Employee::display();
		std::cout<<"Bonus : "<<bonus<<std::endl;
	}
};

class Salesman:public Employee
{
private:
	float insentive;
public:
	Salesman(const char* name = "" , int age = 0 , int id = 0 , float sal = 0.0f , float insentive = 0.0f):Employee(name , age , id , sal)
	{
		this -> insentive = insentive;
	}

	float get_insentive()
	{
		return this -> insentive;
	}

	float calc_income()
	{
		Employee::calc_income();
		return this -> sal + this -> insentive;
	}

	void display()
	{
		Employee::display();
		std::cout<<"Insentive : "<<insentive<<std::endl;

	}
};

float total_sal(Employee *emp[] , int n)
{
	int i ;
	float total = 0.0f;
	for(i = 0 ; i < n ; i++)
	{
		total = total + emp[i]->get_sal();
	}
	return total;
}

float total_income(Employee *emp[] , int n)
{
	int i ;
	float total = 0.0f;
	for(i = 0 ; i < n ; i++)
	{
		total = total + emp[i]->calc_income();
	}
	return total;
}

int main()
{
	Employee* emp[5];
	int i;
	float totalsal , totalincome;

	emp[0] = new Employee("Shreya" , 20 , 100 , 15000.00);
	emp[1] = new Manager("Mansi" , 19 , 101 , 25000.00 , 20000);
	emp[2] = new Salesman("Vaishnavi" , 20 , 102 , 10000.00 , 10000);
	emp[3] = new Employee("Harshada" , 19 , 103 , 20000.00);
	emp[4] = new Manager("Priya" , 20 , 104 , 30000.00 , 25000);

	for(i = 0 ; i < 5 ; i++)
	{
		emp[i]->display();
		std::cout<<std::endl;
	}

	totalsal = total_sal(emp , 5);
	std::cout<<"Total Salary : "<<totalsal<<std::endl;

	totalincome = total_income(emp , 5);
	std::cout<<"Total Income : "<<totalincome<<std::endl;

	getch();
	return 0;
}


