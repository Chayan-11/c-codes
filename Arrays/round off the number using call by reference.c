//Program to input any float number and round off the number using call by reference function

#include<stdio.h>
void abc(int*, float*);
void main()
{
	int s;
	float n;
	   printf("Enter float number:- \n");
	   scanf("%f",&n);
	abc(&s, &n);
	printf("%d",s);
	return 0;
}
void abc(int *p, float*q)
{
*p=*q;
if(*q-*p>=.5)
*p++;
}
