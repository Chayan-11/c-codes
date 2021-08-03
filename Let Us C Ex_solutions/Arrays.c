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
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*Enter 25 numbers from the keyboard into an array. The number to be searched is to be entered by the user.
Program to find if the number to be searched is either present in the array or not and if found then dispaly the number of times it appeared in the array.*/
	
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[25],a,i,count=0;
	for (i=0; i<25; i++)
	{
	printf("Enter number :- \n");
	scanf("%d", &arr[i]);
	}
	printf("\n\nEnter the number you want to search :- ");
	scanf("%d", &a);
	for (i=0; i<25; i++)
	{
	if (arr[i] == a)
	count++;
	}
	if (count)
	printf("\n\n%d is present in the data %d times.", a,count);
	else
	printf("\n\n%d is not present in the data.", a);
	_getch();
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*Program to input 25 elements in array and find out how many of them are positive, negative, odd and even numbers out of them*/
	
#include<stdio.h>
int main()
{
	int n[25],i,negative=0,positive=0,odd=0,even=0;
	printf("Enter the 25 elements in the array:- \n");
	for(i=0; i<=24; i++)
	scanf("%d",&n[i]);
	for(i=0; i<=24; i++)
	{
		n[i]<0 ? negative++ : (positive++);
		n[i]%2 ? odd++ : (even++);
	}
	printf("Negative elements are:- %d\n",negative);
	printf("Positive elements are:- %d\n",positive);
	printf("Even elements are:- %d\n",even);
	printf("odd elements are:- %d\n",odd);
	return 0;
}
