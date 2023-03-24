/* Que.3 Check string is pallindrome or not
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<iostream>
#include<conio.h>
int main()
{
	char str1[50] , str2[50];
	int i,j,s=0,cnt=0;
	std::cout<<"enter a string : "<<std::endl;
	std::cin>> str1;
	std::cout << "string is : " << str1;

	for(i=0 ; str1[i]!='\0' ; i++)
	{
		cnt++;
	}
	//std::cout<<"number is :"<<cnt;
	
	for(i=0 ; str1[i]!='\0' ; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';

	j = 0;
	for(i=cnt-1 ; i>=0 ; i--)
	{
		if(str2[j]==str1[i])
		{
			s++;
		}
		j++;
	}
	if(s==j)
	{
		std::cout<<"Given string is pallindrome"<<std::endl;
	}
	else
	{
		std::cout<<"Given string is not pallindrome"<<std::endl;
	}
	getch();
	return 0;
}