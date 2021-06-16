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
