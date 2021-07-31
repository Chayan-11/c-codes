//Program to create a recursive function and find the sum of first n natual numbers

#include<stdio.h>
int sum(int);
int main()
{
	int a,b;
	printf("Enter the natural number:- \n");
	scanf("%d",&a);
	b=sum(a);
	printf("%d",b);
	return 0;
}
int sum(int n)
{
	int s;
	if(n==1)
	return n;
	else
	s=n+sum(n-1);
	return s;
}
