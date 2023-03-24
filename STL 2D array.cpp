//STL - 2D Array example

#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

int main()
{
	array<array<int , 3> , 3> arr;

	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ;j++)
		{
			arr[i][j] = i+1;
		}
	}

	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}

	getch();
	return 0;
}