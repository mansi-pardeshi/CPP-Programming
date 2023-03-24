#include<iostream>
#include<conio.h>

class Demo
{
public:
	int a;
	int b;
	int *p;

	Demo (int a,int b,int c)
	{
		this->a = a;
		this->b = b;
		p = (int*)malloc(sizeof(int));
		(*(this->p)) = c;
	}
};

int main()
{
	Demo d1(10,20,30);
	Demo d2(d1);

	std::cout<<"Values of d1 object"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<*(d1.p)<<std::endl<<std::endl;

	std::cout<<"Values of d2 object"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d1.p)<<std::endl<<std::endl;

	std::cout<<"Copied Values after changes in object d1"<<std::endl<<std::endl;
	(d1.a)++;
	(d1.b)++;
	(*(d1.p))++;

	std::cout<<"Values of d1 object"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<*(d1.p)<<std::endl<<std::endl;

	std::cout<<"Values of d2 object"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d1.p)<<std::endl<<std::endl;

	getch();
	return 0;

}