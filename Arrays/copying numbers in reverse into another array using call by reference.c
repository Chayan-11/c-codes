//Program to input 10 integers and copy the numbers in reverse order into another array using call by reference function

#include<stdio.h>
void abc(int*, int*);
void main()
{
	int n[10], m[10], i;
	for(i=0; i<10; i++)
	{
	   printf("Enter the Integers:- \n");
	   scanf("%d",&n[i]);
	}
	abc(n,m);
	for(i=0; i<10; i++)
	printf("%d %d\n",n[i],m[i]);
}

void abc(int*p, int*q)
{
	int i;
	for(i=0; i<10; i++)
	{
		*(q+9-i) = *(p+i);
	}
}
