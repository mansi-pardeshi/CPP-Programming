#include<conio.h>
#include<iostream>

class Demo
{
public:
	int size;
	int *arr;
	Demo(int size)
	{
		this->size=size;
		this->arr=(int*)malloc((this->size)*(sizeof(int)));

	}

	int& operator[](int index)
	{
		if(index>=0 && index< this->size)
		{
			this->arr[index]=index;
			return this->arr[index];
		}
		else
		{
			std::cout<<"Invalid Index"<<std::endl;
		}
	}

};

int main()
{
	Demo d(5);
	int i;
	
	for(i=0;i<5;i++)
	{
		d[i]=i;
	}
	for(i=0;i<5;i++)
	{
		std::cout<<d[i]<<std::endl;
	}
	getch();
	return 0;
}

