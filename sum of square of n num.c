/*C Program for sum of square of n numbers*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i , n , sum=0 ,sqr;
	printf("Enter value of n : \n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i ++)
	{
		sqr = i*i;
		sum = sum + sqr;
	}
	printf("Sum of square of first %d natural numbers is %d",n,sum);

	getch();
}