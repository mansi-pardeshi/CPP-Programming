//Pure Virtual Function

#include<iostream>
#include<conio.h>

class company
{
public:
	char car_name[20];
	float ser_cost;

	company(const char* car_name , float ser_cost)
	{
		strcpy(this->car_name , car_name);
		this->ser_cost = ser_cost;
	}
	
	virtual void display()
	{
		std::cout<<"Car Name : "<<car_name<<std::endl;
		std::cout<<"Servicing Cost : "<<ser_cost<<std::endl;
	}
	virtual float servicing_cost() = 0;
};

class showroom1:public company
{
public:
	showroom1(const char* car_name , float ser_cost):company(car_name , ser_cost)
	{

	}

	float servicing_cost()
	{
		return ser_cost+500;
	}

	void display()
	{
		company::display();
		std::cout<<"Servicing Cost of First Showroom : "<<servicing_cost();
	}
};

class showroom2:public company
{
public:

	showroom2(const char* car_name , float ser_cost):company(car_name , ser_cost)
	{

	}

	float servicing_cost()
	{
		return ser_cost+300;
	}

	void display()
	{
		//company::display();
		std::cout<<"Servicing Cost at Second Showroom : "<<servicing_cost();
	}
};

int main()
{
	company* c[2];
	int i ;

	c[0] = new showroom1("TATA" , 1000);
	c[1] = new showroom2("TATA" , 1000);

	for(i=0 ; i<2 ; i++)
	{
		c[i]->display();
		std::cout<<std::endl;
	}

	getch();
	return 0;
}