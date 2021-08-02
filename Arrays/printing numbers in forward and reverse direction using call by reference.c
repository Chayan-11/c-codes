//Program to input 10 integers in 1D array using function call by refernce and print the numbers in forward and reverse direction

#include<stdio.h>
void abc(int*);
void main()
{
	int n[10], i;
	for(i=0; i<10; i++)
	{
	   printf("Enter the Integers:- \n");
	   scanf("%d",&n[i]);
	}
	abc(n);
	return 0;
}
void abc(int *p)
{
	int i;
	for(i=0; i<10; i++)
	printf("%d\n",*(p+i));
	for(i=9; i>=0; i--)
	printf("\t%d\n",*(p+i));
}
