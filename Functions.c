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

Question:- Program to find the maximum and minimum between two numbers using functions

#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int main()
{
    int a,b,maximum,minimum;
    printf("Enter any two numbers:- ");
    scanf("%d %d",&a,&b);
    maximum=max(a,b);
    minimum=min(a,b);
    printf("Maximum = %d\n",maximum);
    printf("Minimum = %d",minimum);
    return 0;
}
int max(int a, int b){
return(a>b)? a : b;
}
int min(int a, int b){

return(a>b)? b : a;
}

Question:- Program to check whether an integer is even or odd using functions

#include <stdio.h>
int abc(int);
int main(){
int n;
printf("Enter the integer to be checked:- ");
scanf("%d",&n);
n=abc(n);
if(n==0)
    printf("Even Integer");
else
    printf("Odd Integer");

    return 0;
}
int abc(int p){
return p%2;
}

Question:- C Program to Check number is Prime or Armstrong number Using User-defined Function.
  
#include <math.h>
#include <stdio.h>

int Prime_Number(int num);
int Armstrong_Number(int num);

int main()
{
   int n, flag;
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   flag = Prime_Number(n);
   if (flag == 1)
      printf("%d is a prime number.\n", n);
   else
      printf("%d is not a prime number.\n", n);
   flag = Armstrong_Number(n);
   if (flag == 1)
      printf("%d is an Armstrong number.", n);
   else
      printf("%d is not an Armstrong number.", n);
   return 0;
}

int Prime_Number(int n) {
   int i, flag = 1, square_root;
   square_root = sqrt(n);
   for (i = 2; i <= square_root; ++i) {
      if (n % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}

int Armstrong_Number(int num) {
   int originalNum, remainder, n = 0, flag;
   double result = 0.0;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
      originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
      remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // condition for Armstrong number
   if (round(result) == num)
      flag = 1;
   else
      flag = 0;
   return flag;
}

#Program to find the sum of n natural numbers using call by value function with return

#include <stdio.h>
int abc(int);
int main()
{
    int n,a;
    printf("Enter any Integer:- \n");
    scanf("%d",&n);
    a=abc(n);
    printf("%d",a);
    return a;
}
int abc(int p)
{
    int i,s=0;
    for(i=1;i<=p;i++)
        s=s+i;
    return s;
}
     
#Program to find whether a number is perfect or not using functions of call by value return

#include <stdio.h>
int abc(int);
int main()
{
    int n,m;
    printf("Enter any Integer:- \n");
    scanf("%d",&n);
    m=abc(n);
    if(m==n)
        printf("It's a perfect number");
    else
        printf("It's not a perfect number");
    return 0;
}
int abc(int p)
{
    int i,s=0;
    for(i=1;i<p;i++)
        if(p%i==0)
        s=s+i;
    return s;
    }

#Program to input any number and check whether it's armstrong number or not using call by value return

#include <stdio.h>
int abc(int n,int m)
{
    int a,s=0;
    while(n>0)
    {
        a=m%10;
        s=s+pow(a,m);
        n=n/10;
    }
    return s;
}
int main()
{
    int n,a,i=0;
    printf("Enter any integer:- \n");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        i++;
        a/=10;
    }
    if(n==abc(n,i))
        printf("It's an Armstrong number");
    else
        printf("It's not an Armstrong number");
}

#Program to find the sum of 2 integers without using call by value return

#include <stdio.h>
   void abc (int,int);
   int main()
   {
       int a=10,b=20;
       abc(a,b);
       return 0;
   }
    void abc(int p, int a)
    {
        int r=p+a;
        printf("%d+%d=%d\n",p,a,r);
    }
