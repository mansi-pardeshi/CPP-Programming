//Standard template Libraray - array
//!D Array

#include<iostream>
#include<conio.h>
#include<array>

using std::cout;
using std::endl;

int main()
{
	std::array<int , 5> arr;
	
	for(int i= 0 ; i<5 ; i++)
	{
		arr[i] = i+1;
	}

	for(int i=0 ; i<5 ; i++)
	{
		cout<<arr[i]<<endl;
	}

	cout<<"at function\n";
	cout<<arr.at(3)<<endl;

	cout<<"front function\n";
	cout<<arr.front()<<endl;

	cout<<"back function\n";
	cout<<arr.back()<<endl;

	getch();
	return 0;
}