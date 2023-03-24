//STL - String array example;

#include<iostream>
#include<conio.h>
#include<array>
#include<string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::array<std::array<std::string , 3> , 3> arr;

	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}

	getch();
	return 0;
}