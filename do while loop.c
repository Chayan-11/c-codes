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
