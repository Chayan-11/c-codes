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
