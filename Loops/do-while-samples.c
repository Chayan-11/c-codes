do-while:-
	
In case of do-while loop it will execute the statements atleast once, afterwards it will check the condition and if it satisfy, 
it will continue the loop otherwise it will terminate the loop.  
Hence, also called as exit controlled loop.
  
  Syntax:- 
    initial value;
    do
    {
      statememnt 1;
      statement 2;
      statement 3;
      update expression;
    }
      while(condition);


Program to print any name n times using do-while loop

#include<stdio.h>
int main()
{
	int i=1,n;
	
	  printf("Enter any integer:- \n");
	  scanf("%d",&n);
	  do
	  {
	  	printf("Chayan\n");
	  	i++;
		  }	
		  while(i<=n);
}

Program to print the multiplication table of any input number 

#include<stdio.h>
int main()
{
	int i=1,n;
	
	  printf("Enter any integer:- \n");
	  scanf("%d",&n);
	  do
	  {
	  	printf("%d*%d=%d\n",n,i,n*i);
	  	i++;
		  }	
		  while(i<=n);
}

Program to find the sum of first 'n' natural numbers

#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	
	  printf("Enter any integer:- \n");
	  scanf("%d",&n);
	  do
	  {
	  	s=s+i;
	  	i++;
		  }	
		  while(i<=n);
		  printf("The sum of n natural number is:- %d",s);
}

Program to input any number and check whether it is a perfect number or not using do while loop

#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	
	  printf("Enter any integer:- \n");
	  scanf("%d",&n);
	  do
	  {
	  	if(n%i==0)
	  	s=s+i;
	  	i++;
	  }
	  while(i<=n/2);
	  if(s==n)
	  printf("Yes it's a perfect number"); 
	  else
	  printf("No it's not a perfect number");
}

Program to input any number and print the digits in reverse order individually

#include<stdio.h>
int main()
{
	int n,a;
	
	  printf("Enter any number:- \n");
	  scanf("%d",&n);
	  do
	  {
	  	a=n%10;
	  	printf("%d",a);
	  	n=(int)n/10;
	  }
	  while(n>0);
}

Program to input any number and count the number of digits present

#include<stdio.h>
int main()
{
	int n,a=0;
	
	  printf("Enter any number:- \n");
	  scanf("%d",&n);
	  do
	  {
	  	a++;
	  	n=n/10;
	  }
	  while(n>0);
	  printf("%d",a);
}

Program to enter any number and check whether it is palindrome or not

#include<stdio.h>
int main()
{
	int n,b,r,s=0;
	printf("Enter any number:- \n");
	scanf("%d",&n);
	b=n;
	do
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	while(b>0);
	if(b==s)
	printf("It's a palindrome number");
	else
	printf("It's not a palindrome number");
}

Program to input any integer and check whether it is Armstrong number or not

#include<stdio.h>
#include<math.h>
int main()
{
	int n,b,a,j=0,s=0;
	printf("Enter any Integer:- \n");
	scanf("%d",&n);
	b=n;
	do
	{
		j++;
		b/=10;
	}
	while(b>0);
	b=n;
	do
	{
		a=b%10;
		s=s+pow(a,j);
		b/=10;
	}
	while(b>0);
	if(n==s)
	printf("It's a Armstrong number");
	else
	printf("It's not a Armstrong number");
}

Program to display the following pattern using do-while loop:- 
	
55555
333
1

#include<stdio.h>
int main()
{
	int i=5,j;
	do
        {
	   j=1;
	do
	{
	     printf("%d",i);
	     j++;
	}
	while(j<=i);
	printf("\n");
	i-=2;
        }
while(i>=1);
}

Program to enter any number upto n and print it in ascending order

include <stdio.h>
int main()
{
int i,n;
printf("Enter the number:- \n");
scanf("%d",&n); 
i=0;
do      
{
    printf("the numbers are %d \n",i);
    i=i+1;
} 
  while(i<=n);
}

Program to input any number upto n and print it in descending order 

#include<stdio.h> 
int main()
{
  int i=1,n;
  printf("Enter the number:- \n");
  scanf("%d",&n);
  i=n;
  do
  {
     printf("%d\t",i);
     i--;
  }
     while(i>=1);
}

