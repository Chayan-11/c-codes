#Program to print any statement for n times

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
