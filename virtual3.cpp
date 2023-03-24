//function pointer and virtual
#include<iostream>
#include<conio.h>

class parent
{
public:
	int a , b;

	virtual void fun()
	{
		std::cout<<"In parent virtual fun "<<std::endl;
	}

	virtual void gun()
	{
		std::cout<<"In parent virtual gun "<<std::endl;
	}

	void run()
	{
		std::cout<<"In non virtual parent run "<<std::endl;
	}
};

class child:public parent
{
	void fun()
	{
		std::cout<<"In child virtual fun "<<std::endl;
	}
};

int main()
{
	child c;

	int* p = reinterpret_cast<int*>(&c);
	int* q = reinterpret_cast<int*>(*p);

	void (*fp)();
	fp = (void(*)())*q;

	fp();

	void (*fp1)();
	fp1 = (void(*)())*(q+1);

	fp1();

	getch();
	return 0;
}