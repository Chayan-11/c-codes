Program to input n integers and print the numbers only if it is divisible by 3 using DMA

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,*p;
	printf("Enter how many entries you want to enter:- \n");
	scanf("%d",&n);
	p=(int*)malloc(m*n);
	if(p==NULL)
	{
		printf("Memory not allocated");
		return 0;
	}
	for(i=0; i<n; i++)
	{
		printf("Enter the Integers:- \n");
		scanf("%d",p+i);
		if(*(p+i)%3!=0)
		i--;
	}
	for(i=0;i<n;i++)
	printf("%d\n",*(p+i));
	free(p);
}
