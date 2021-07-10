Program to input any number and check which of them is greater

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	printf("Enter two numbers :- \n");
	scanf("%d %d",&a,&b);
	if (a>b)
		printf("%d is greater than %d",a,b);
	else
		printf("%d is greater than %d",b,a);
	}
