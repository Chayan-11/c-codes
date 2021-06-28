In case of do-while loop it will execute the statements atleast once, afterwards it will check the condition and if it satisfy, it will continue the loop otherwise it will terminate the loop.  
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
