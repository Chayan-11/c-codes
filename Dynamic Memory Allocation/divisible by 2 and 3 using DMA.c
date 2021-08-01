//Program to input n integers but all the numbers should be divisible by 2 and 3 using DMA

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p;
	printf("How many integers you want to print:- \n");
	scanf("%d",&n);
	p=(int*) malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory not allocated");
		return 0;
	}
	for(i=0; i<n; i++)
	{
		printf("Enter the Integers:- \n");
		scanf("%d",p+i);
		if(*(p+i)%2==0 && *(p+i)%3==0)
		i++;
	}
	for(i=0; i<n; i++)
	printf("%d\n",*(p+i));
	free(p);
}
