Program to input n integers and find the smallest one using DMA

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p,s;
	printf("Enter the Integers:- \n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	for(i=0; i<n; ++i)
	{
		printf("Enter the numbers:- \n");
		scanf("%d",p+i);
		s=*p;
		for(i=1; i<n; i++)
		if(*(p+i)<s)
		s=*(p+i);
		printf("%d",s);
	}
	free(p);
}
