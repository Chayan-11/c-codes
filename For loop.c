#Program to input any number and print the multiplication table of the number upto 10 mutiples.

#include <stdio.h>
int main()
{
    int n,i,m;
    printf("Enter any number whose multiplication is to be printed:- ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d * %d = %d\n",n,i,m);
    }
    return 0;
}

#Program to input any number and find the factorial of the number using for loop.

#include <stdio.h>
int main()
{
   int n,f=1,i;
   printf("Enter any number:- ");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
      f=f*i;
      printf("The factorial of %d is = %d",n,f);
   }
    return 0;
}

#program to calculate the following problem:-
(1/2^2) + (2/3^2) + (3/4^2) +...........+ (n/(n+1)^2)
    
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    float s=0;
    printf("Enter any integer:- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i/pow(i+1,2);
        printf("%f\n",s);
    }

    return 0;
}

#Program to input any number and print the factors of that number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter any number:- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%i==0)
        printf("%d\n",i);
    return 0;
}

#program to enter any number and print the odd factors of that number except 1 and 3.

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter any number:- ");
    scanf("%d",&n);
    for (i=5;i<=n;i+=2)
    {
        if(n%i==0)
            printf("Odd factors of %d are: %d\n",n,i);
    }
    return 0;
}

#Program to enter the value of x and y and calculate X^Y without library functions.

#include <stdio.h>
int main()
{
   int x,y,s=1,i;
   printf("Enter values of x and y:- ");
   scanf("%d %d",&x,&y);
   for(i=1;i<=4;i++)
    s=s*x;
   printf("%d",s);
    return 0;
}

Program to display for loop without initialization

#include<stdio.h>
int main()
{
	int i=1;
	for(;i<10;i++)
	printf("%d\n",i);
}

Output:- 
   1
   2
   3
   4
   5
   6
   7
   8
   9 
    
Program to display for loop without initialization and without update expression

#include<stdio.h>
int main()
{
	int i=1;
	for(;i<10;)
	{
	printf("%d\n",i);
	i++;
    }
}

Output:- 
    1
    2
    3
    4
    5
    6
    7
    8
    9
