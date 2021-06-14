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
