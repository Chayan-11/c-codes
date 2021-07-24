Program to input n integers and print them in forward and reverse direction using DMA

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p;
	printf("How many numbers? \n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return 0;
	}
	for(i=0; i<n; i++)
	{
		printf("Enter Integers:- \n");
		scanf("%d",p+i);
	}
	for(i=0; i<n; i++)
	printf("%d\n",*(p+i));
	for(i=n-1; i>=0; i--)
	printf("%d\n",*(p+i));
	free(p);
}
