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

Question:- Program to calculate the diameter, circumference and area of a circle using functions

#include <stdio.h>
#include <math.h>
double dia(double r);
double circum(double r);
double area(double r);

int main()
{
   float r,d,c,a;
   printf("Enter radius of the circle:- ");
   scanf("%f",&r);
   d=dia(r);
   c=circum(r);
   a=area(r);
   printf("Diameter of the circle = %.2f\n",d);
   printf("Circumference of the circle = %.2f\n",c);
   printf("Area of the circle = %.2f\n",a);
   return 0;
}
double dia(double r){
return(2*r);
}
double circum(double r){
return(2*M_PI*r);
}
double area(double r){
return(M_PI*r*r);
}

