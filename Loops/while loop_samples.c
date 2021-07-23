#Program to print any statement n times

#include <stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any integer:- ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("It's Chayan here\n");
        i++;
    }
    return 0;
}

#Program to print first n natural numbers in ascending and descending order

#include <stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any integer:- \n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}

#Program to print all the two digits odd numbers from backwards

#include <stdio.h>
int main()
{
    int i=99;
    while(i>=11)
    {
        printf("%d\n",i);
        i-=2;
    }
    return 0;
}

#Program to input any number and print 20 numbers in descending order from that number itself

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter any integer:- \n");
    scanf("%d",&n);
    i=n;
    while(i>n-20)
    {
        printf("%d\n",i--);
    }
    return 0;
}

#Program to find the sum of first 'n' natural numbers with a series

#include <stdio.h>
int main()
{
    int n,s=0,i=1;
    printf("Enter n natural numbers:- \n");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        if(i<n)
            printf("%d+",i);
        else
            printf("%d=%d",i,s);
        i++;
    }

    return 0;
}

#Program to input any number and print the factorial of that number in series format

#include <stdio.h>
int main()
{
    int n;
    long int f=1;
    printf("Enter any integer:- \n");
    scanf("%d",&n);
    while(n>=1)
    {
        f=f*n;
        if(n>1)
            printf("%d*",n);
        else
            printf("%d=%d",n,f);
        n--;
    }
    return 0;
}

#Program to print the fibonacci numbers upto n terms

#include <stdio.h>
int main()
{
    int i=0,j=1,k,n;
    printf("Enter any integer:- \n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        k=i+j;
        i=j;
        j=k;
    }
    return 0;
}

#Program to enter the lower limit and upper limit and print the sum of all the odd factors in the range

#include <stdio.h>
int main()
{
   int lower_limit, upper_limit,s=0;
   printf("Enter the lower and upper limit:- \n");
   scanf("%d %d",&lower_limit,&upper_limit);
   if(lower_limit>=upper_limit)
    printf("Invalid Input");
   else
   {
       while(lower_limit<=upper_limit)
       {
           if(lower_limit%2==1)
            s=s+lower_limit;
           lower_limit++;
       }
       printf("%d",s);
   }
    return 0;
}

#Program to enter lower and upper limit and print the multiplication table of that number in that range

#include <stdio.h>
int main()
{
    int l,u,i,j;
    printf("Enter lower limit and upper limit:- \n");
    scanf("%d %d",&l,&u);
    if(l>=u)
    {
        printf("Invalid Input");
    }
    while(l<=u)
    {
        printf("Table of %d\n",l);
        i=1;
        while(i<=10)
        {
            j=l*i;
            printf("%d*%d=%d\n",l,i,j);
            i++;
        }
        l++;
    }
    return 0;
}

#Program to input intgers and print the square of that integer according to users choice

#include <stdio.h>
int main()
{
    int n,sq;
    char ch;
    printf("Do you want to print the square of the number Y/N");
    scanf("%c",ch);
    while(ch=='Y' || ch=='y')
    {
        printf("Enter any integer:- \n");
        scanf("%d",&n);
        sq=n*n;
        printf("The square of %d is %d\n",n,sq);
        printf("Do you want to print the square of the number Y/N");
        scanf("%c",&ch);
    }
    return 0;
}

#program to enter lower and upper limit and print all the prime numbers in that range
#include <stdio.h>
int main()
{
    int l,u,i,s;
    printf("Enter the lower and upper limit:- \n");
    scanf("%d %d",&l, &u);
    if(l>=u)
    {
        printf("Not a prime number");
    }
    while(l<=u)
    {
        i=1,s=0;
        while(i<=l/2)
        {
            if(l%i==0)
                s=s+i;
            i++;
        }
        if(s==1)
            printf("%d\n",l);
        l++;
    }
    return 0;
}

#Program to enter lower and upper limit and print the factors of each number and find the sum of the factors of each number

#include <stdio.h>
int main()
{
    int l,u,i=1,n,s=0;
    printf("Enter the lower and upper limit:- \n");
    scanf("%d %d",&l,&u);
    printf("Enter the number whose factor is to be found:- \n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
        i++;
    }
    s=s+i;
    printf("%d",s);
    return 0;
}

Program to find the sum of first and last digit of the inputed number

#include<stdio.h>
int main()
{
  int n,i,fd,ld,s=0;
  printf("Enter a number:");
  scanf("%d",&n);
  i=n;
  ld=n%10;

  while(i>0)
  {
    if(i/10==0)
    fd=i%10;
    i=i/10;
  }
  s=ld+fd;
  printf("Sum of first and last digit of the number is = %d",s);
}
