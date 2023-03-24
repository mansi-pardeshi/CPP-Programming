//Destructor example

#include<conio.h>
#include<iostream>
class demo
{
public:
	int a;
	int *p;

	demo(int a , int b )
	{
		this -> a = a;
		p = (int*)malloc(sizeof(int));
		(*(this -> p)) = b;
	}

	~demo()
	{
		std::cout<<"in destructor"<<std::endl;
		free(p);
	}

	void display()
	{
		std::cout<<a<<std::endl<<*(this->p);
	}
};

int main()
{
	demo d(10 , 20);
	d.display();

	getch();
	return 0;
}