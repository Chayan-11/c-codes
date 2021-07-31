// Demonstrate pointer to pointer 

#include<stdio.h>
int main()
{
	int n=10;
	int *p=&n;
	int **q=&p;
	int ***r=&q;
	printf("%u \n %u \n  %u  \n %u  \n %u  \n %u  \n %u \n  %u  \n %u \n  %u \n %u \n %u \n  %u \n %u\n",&n,n,&p,p,*p,&q,q,*q,**q,&r,r,*r,**r,***r);
}
