//Virtual destructor

#include<iostream>
#include<conio.h>

class parent 
{
public:
	int *p , a;

	parent()
	{
		p = (int*)malloc(sizeof(a));
	}

	virtual ~parent()
	{
		std::cout<<"In parent destructor"<<std::endl;
	}
};

class child : public parent
{
public:
	int *q , b;

	child()
	{
		q = (int*)malloc(sizeof(a));
	}

	~child()
	{
		std::cout<<"In child destructor"<<std::endl;
	}
};

int main()
{
	parent *p = new child();
	delete p;

	getch();
	return 0;
}