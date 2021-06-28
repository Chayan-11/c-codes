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
