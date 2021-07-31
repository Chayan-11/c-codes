//Program to print first n natural numbers in descending order using recursion

#include<stdio.h>
int descending(int n)
{
	if(n==1)
	{
		printf("%d",n);
		return 0;
	}
	printf("%d\n",n);
	descending(n-1);
	return 0;
}
int main()
{
int n;
printf("Enter Integers:- \n");
scanf("%d",&n);
descending(n);
}
