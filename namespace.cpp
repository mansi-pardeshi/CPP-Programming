//Namespace examples

#include<iostream>
#include<conio.h>

namespace A
{
	int a = 10;
	void fun()
	{
		std::cout<<"In namespace A fun"<<std::endl;
	}
}

namespace B
{
	int a = 20;
	int b = 30;
	void fun()
	{
		std::cout<<"In namespace B fun"<<std::endl;
	}

	namespace C
	{
		int a = 30;
		void fun()
		{
			std::cout<<"In namespace C fun"<<std::endl;
		}
	}
}

namespace Demo
{
	void fun();
}
void Demo::fun()
{
	std::cout<<"in demo namespace fun";
	int a = 10;
}

namespace cl
{
	class Demo
	{
	public:
		void fun()
		{
			std::cout<<"In Class Namespace fun function"<<std::cout;
		}
	};
}

int main()
{
	cl::Demo d;
	d.fun();

	/*int a = 1;
	{
		using A::a;
		std::cout<<a<<std::endl;
		using B::b;
		std::cout<<b<<std::endl;
	}
	std::cout<<a<<std::endl;*/


	//Demo::fun();


	//B::C::fun();
	//std::cout<<B::C::a<<std::endl;


	//A::fun();
	//B::fun();


	//using namespace A;
	//std::cout<<a;


	//std::cout<<A::a<<std::endl;
	//std::cout<<B::a<<std::endl;


	getch();
	return 0;
}