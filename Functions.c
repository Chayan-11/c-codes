Question:- Simple program to show structure of function

#include <stdio.h>

    int sum (int a, int b);
    int main (void)
    {
        int total;
        printf("\n Function : a simple structure of function\n");
        total = sum (5, 6);
        printf ("The total is :  %d\n", total);
        return 0;
    }

    int sum (int a, int b)
    {
     int s;
     s=a+b;
     return s;
    }

Question:- Program to find the cube of any number using functions

#include <stdio.h>
double cube (double n);
int main()
{
   int n;
   double c;
   printf("Enter any number:-");
   scanf("%d",&n);
   c=cube(n);
   printf("Cube of %d is %.2f",n,c);
   return 0;
}
double cube(double n){
return(n*n*n);
}
