//Program to interchange the odd and even elements of an array.

#include<stdio.h>
int main()
{
	int a[] = {1,2,3,4,5,6};
	int i,temp;
	for (i=0; i<=5; i=i+2)
	{
		temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}
	for (i=0; i<=5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
