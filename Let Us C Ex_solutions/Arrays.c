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

//Program to copy the contents of one array into another in reverse order.
	
#include <stdio.h>
void printArray(int arr[],int len)
{
	int i;
	for (i=0; i<len; i++)
	{
	printf("%d ", arr[i]);
	}
}

int main()
{
	int original_arr[] = {1, 2, 3, 4, 5};
	int len = sizeof(original_arr)/sizeof(original_arr[0]);
	int copied_arr[len], i, j;
	for (i=0; i<len; i++)
	copied_arr[i] = original_arr[len-i-1];
	printf("\nOriginal array:- ");
	printArray(original_arr, len);
	printf("\nResultant array:- ");
	printArray(copied_arr, len);
	return 0;
}

// OR

#include<stdio.h>
int main()
{
	int a[10], b[10], i, j;
	printf("\nEnter 10 Elements :- ");
	for (i=0; i<10; i++)
	{
	scanf("%d", &a[i]);
	}
	for (i=0, j=9; i<10; i++, j--)
	{
	b[i] = a[j];
	}
	printf("\nArray after Copying in Reverse Order :- ");
	for (i=0; i<10; i++)
	{
	printf("%d ", b[i]);
	}
	return 0;
}
