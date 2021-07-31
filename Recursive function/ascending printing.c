//Program to print the first n natural numbers in ascending order using recursive function

#include<stdio.h>
int i=1;
int out(int n)
{
	if(n==i)
	{
	printf("%d",n);
	return 0;
    }
printf("%d\n",i);
i++;
out(n);
return 0;
}

int main()
{
	int n;
	printf("Enter the integers:- \n");
	scanf("%d",&n);
	out(n);
	return 0;
}
