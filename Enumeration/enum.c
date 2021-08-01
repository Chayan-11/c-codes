//Program to demonstrate enum 

#include<stdio.h>
enum boolean {false, true};
int main()
{
	enum boolean bool=true;
	int n;
	printf("Enter the integers:- \n");
	scanf("%d",&n);
	if(n%2==0)
	bool = false;
	if(bool)
	printf("Odd number");
	else
	printf("Even number");
}
