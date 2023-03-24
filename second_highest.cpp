/* Que.2 Find second highest element in array
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<conio.h>
#include<iostream>
int main()
{
	int a[20],i,n,temp,j;
	std::cout<<"Enter how many numbers you want to insert"<<std::endl;
	std::cin>>n;
	std::cout<<"Enter array elements"<<std::endl;
	for(i=0 ; i<n ;i++)
	{
		std::cin>>a[i];
	}

	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i]>a[j])
			{
				temp =a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	/*std::cout<<"Sorted array is"<<std::endl;
	for(i=0 ; i<n ; i++)
	{
		std::cout<<" "<<a[i];
	}*/

	std::cout<<"Second highest is"<<a[n-2];

	getch();
	return 0;
}