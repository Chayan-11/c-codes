Program to input n and m integers each in two different allocated memory and check the elements whether they are same or not.
  
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,*p,*q;
	printf("Enter how many entries you want to enter:- \n");
	scanf("%d %d",&n,&m);
	if(n!=m)
	{
		printf("Memory not allocated");
		return 0;
	}
	p=(int*)malloc(n*q);
	q=(int*)malloc(n*q);
	for(i=0; i<n; i++)
	{
		printf("Enter integers:- \n");
		scanf("%d %d",p+i,q+i);
		if(*(p+i)=*(q+i))
		break;
	}
	if(i!=n)
	printf("Not Same");
	else
	printf("Same");
	free(p);
}  
