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

#Program to print the multiplication table of any number using function call by value return

#include <stdio.h>
void mult(int p)
{
   for(int i=1;i<=10;i++)
    printf("%d*%d=%d\n",p,i,p*i);
}
   int main()
   {
    int n;
    printf("Enter any Integer:- \n");
    scanf("%d",&n);
    mult(n);
    return 0;
}

#Program to calculate the factorial of any input number with series using function call by value without return

#include <stdio.h>
void abc(int);
int main()
{
 int n;
 printf("Enter any Integer:- \n");
 scanf("%d",&n);
 abc(n);
 return 0;
}
void abc(int n)
{
    int i,f=1;
    for(i=n;i>=1;i--)
    {
        f=f*i;
    if(i>1)
        printf("%d*",i);
    else
        printf("%d = %d",i,f);
}
}

#Program to display the annual scoresheet of 10 students with name and marks obtained along with total and average scored by each student

#include <stdio.h>
int main()
{
    char n[10][20];
    int p[10],c[10],m[10];
    int avg[10],i,tot[10];
    for(i=0;i<10;i++)
    {
        printf("Enter your name:- \n");
        scanf("%s",n[i]);
        fflush(stdin);
        printf("Enter your marks:- \n");
        scanf("%d%d%d",&p[i],&c[i],&m[i]);
        tot[i]=p[i]+c[i]+m[i];
        avg[i]=tot[i]/3;
        fflush(stdin);
    }
    for(i=0;i<10;i++)
        printf("%s\n%d\n%d\n%d\n%d\n%d\n",n[i],p[i],c[i],m[i],tot[i],avg[i]);
}

#Program to demonstrate the function getchar()

This is an input function through which we can take single character input but the input character will not be displayed in the screen.
    
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character:- \n");
    ch=getchar();
    printf("Input character is:- %c",ch);
    return 0;
}   

#Program to demonstrate the function fgetchar()

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character:- \n");
    ch=fgetchar();
    printf("Input character is:- %c",ch);
    return 0;
}

#Program to print the ASCII value of each character we're pressing in the keyboard.

#include <stdio.h>
int main()
{
   char ch;
   do
   {
       printf("Enter the character:- \n");
       ch=getchar();
       printf("%c = %d\n",ch,ch);
   }
   while(ch!=27);
    return 0;
}

#Program to print the ASCII value of all the characters in the keyboard

#include <stdio.h>
int main()
{
   char ch;
   int i;
   do
   {
       printf("Enter the character:- \n");
       ch=getchar();
       printf("%c = %d\n",ch,ch);
   }
   while(ch!=27);
   while(i<=255)
   {
       printf("%c %d",i,i);
       i++;
   }
    return 0;
}

#Program to input any multiword string and print each word in different line

#include <stdio.h>
int main()
{
    char n[' '];
    int i;
    printf("Enter the string:- \n");
    gets(n);
    for(i=0;n[i]!='\0';i++)
    {
        printf("%c",n[i]);
        if(n[i]==' ')
        printf("\n");
    }
    return 0;
}

#Program to print the following pattern:-

          1
        1 2 3
      1 2 3 4 5
    1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8 9 
              
#include <stdio.h>
int main()
{
    int n,x,y,k;
    printf("Enter the number of rows to show the number pattern:- \n");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(y=x;y<=n;y++)
        {
            printf(" ");
        }
        for(k=1;k<(x*2);k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(x=4;x>=1;x--)
    {
        for(y=n;y>x;y--)
        {
            printf("\n");
        }
        for(k=1;k<(x*2);k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
    }

#Program to input any number and check whether the number is armstrong or not using call by value return

#include <stdio.h>
#include<math.h>
int abc(int a,int b)
{
    int c,s=0;
    while(a>0)
    {
        c=a%10;
        s=s+pow(c,b);
        a=a/10;
    }
    return s;
}
int main()
{
    int n,m,i=0;
    printf("Enter any integer:- \n");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        i++;
        m/=10;
    }
    m=abc(n,i);

    if(m==n)
        printf("It's an Armstrong number");
    else
        printf("It's not an Armstrong number");
}

#Program to display the sum of two integers using functions and without using call by value and return

#include<stdio.h>
void abc();
void main()
{
	abc();
}
void abc()
{
	int a,b,c;
	printf("Enter two integers:- \n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d",c);
}

#Program to interchange the values of two integer variables using function call by value 

void abc (int,int);
int main()
{
	int a=5,b=10;
	printf("a=%d b=%d\n",a,b);
	abc(a,b);
	printf("a=%d b=%d",a,b);
	return 0;
}
void abc (int p, int q)
{
	p=p+q;
	q=p-q;
	p=p-q;
}

#Program to interchange the values of two integer variables using function call by reference

void abc (int*,int*);
int main()
{
	int a=10,b=20;
	printf("a=%d b=%d\n",a,b);
	abc(&a,&b);
	printf("a=%d b=%d",a,b);
	return 0;
}
void abc (int *p, int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
}

#Program to input any number and check whether it is odd or even using call by reference function

void abc (int*);
main()
{
	int n;
	printf("Enter Integers:- \n");
	scanf("%d",&n);
	abc(&n);
	if(n)
	printf("It's Odd");
	else
	printf("It's Even");
	return 0;
}
void abc (int*p)
{
	*p%=2;
}

program to print all leap years from 1 to N.
 
#include <stdio.h>
 
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("Leap years from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(checkLeapYear(i))
            printf("%d\t",i);
    }
     
    return 0;
}

Program to reverse a number using functions

#include<stdio.h>
int reverse(int num,int i,int rev);
void main()
{
  int num,i,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int result=reverse(num,i,rev);
  printf("The reversed number=%d",result);
}
int reverse(int num,int i,int rev)
{
  for(i=num;i>0;i=i/10)
    rev=rev*10+i%10;
  return rev;
}
