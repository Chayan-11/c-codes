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

Number conversion from Decimal to Binary

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,a[100],j;
	printf("Enter the Decimal number:- \n");
	scanf("%d",&n);
	while(n>=1)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[j]);
}

Number conversion from Octal to Decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int f,p=0,i=0,a[100],j,n;
	printf("Enter the octal number:- \n");
	scanf("%d",&n);
	while(n>=1)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	p=p+(a[j]*pow(8,j));
	printf("The equivalent decimal number is:- %d",p);
}

