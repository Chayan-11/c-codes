Number conversion from Binary to Decimal

#include<stdio.h>
#include<math.h>
int main()
{
	int f,p=0,i=0,a[100],j;
	long int n;
	printf("Enter the Binary number:- \n");
	scanf("%ld",&n);
	while(n>=1)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	p=p+(a[j]*pow(2,j));
	printf("The equivalent decimal number is:- %d",p);
}
