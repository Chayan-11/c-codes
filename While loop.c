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
