/*Program to insert any number at any desired location of linear variable and delete any number at any desired location of linear variable
using call by reference and two different functions*/

#include<stdio.h>
#define max 1000
int n;
void in(int *);
void out(int *);
int main()
{
	int a[max],i;
	printf("Enter how many integers you want to print:- \n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter the Integers:- \n");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	printf("%d\t",a[i]);
	printf("\n \n");
	in(a);
	for(i=0; i<=n; i++)
	printf("\n \n");
	out(a);
	for(i=0; i<n-1; i++)
	printf("%d\t",a[i]);
	return 0;
}
void in(int *p)
{
	int loc, ele, i;
	printf("Input the location and Items:- \n");
	scanf("%d %d", &loc,&ele);
	if(loc>=n)
	return;
	for(i=n; i>=loc; i--)
	*(p+i)=*(p-i);
	*(p+loc-1)=ele;
}
void out(int *p)
{
	int loc,i;
	printf("Input the location:- \n");
	scanf("%d", &loc);
	if(loc>=n)
	return;
	for(i=loc; i<n; i++)
	*(p+loc-1)=*(p+loc);
}
