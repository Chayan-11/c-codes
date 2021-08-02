//Program to interchange the contents of two different 1D arrayusing function call by reference

#include<stdio.h>
void abc(int*, int*);
void main()
{
	int n[10], m[10], i;
	for(i=0; i<10; i++)
	{
	   printf("Enter the Integers:- \n");
	   scanf("%d %d",&n[i], &m[i]);
	}
	for(i=0; i<10; i++)
	printf("%d %d\n",n[i],m[i]);
	abc(n,m);
	for(i=0; i<10; i++)
	printf("%d %d\n",n[i], m[i]);
}

void abc(int*p, int*q)
{
	int i;
	for(i=0; i<10; i++)
	{
		*(p+i) = *(p+i) + *(q+i);
		*(q+i) = *(p+i) - *(q+i);
		*(p+i) = *(p+i) - *(q+i);
	}
}
