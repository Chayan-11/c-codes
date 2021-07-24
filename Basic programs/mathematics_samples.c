Armstrong Number:- Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        i=n%10;
        sum= sum + i*i*i;
        n=n/10;

    }
    if(sum==a)
        printf("%d Number is Armstrong",a);
    else
        printf("%d is NOT Armstrong",a);
}

Program to input any number and reverse the number

#include<stdio.h>
int main()
{
  int n,i,r=0;
  printf("Enter a number:");
  scanf("%d",&n);

  for(i=n;i>0;i=i/10)
    r=r*10+i%10;
   printf("Reverse of a number=%d",r);
}

Program to find the roots of quadratic equation

#include<stdio.h>
void main()
{
  int a,b,c,d;
  float r1,r2;
  printf("Enter coefficients of three integers:");
  scanf("%d%d%d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0)
  {
    printf("Roots are real and unequal");
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("r1=%f,r2=%f",r1,r2);
  }
  else if(d==0)
  {
    printf("Roots are real and equal");
    r1=r2=(-b)/(2*a);
    printf("r1=%f,r2=%f",r1,r2);
  }
  else
  {
    printf("Roots are imaginary and can not be found");
  }
}


Strong number:- A number is said to be strong number when the sum of the factorial of the individual digits is equal to the number. e.g:- 145 is a strong number.
    
Program to print strong number in given range

#include<stdio.h>
int main()
{
int n,i,fact,r,sum=0,temp;
printf("Enter the number:- \n");
scanf("%d",&n);
temp = n;
while(n)
{
i=1,fact=1;
r=n%10;
while(i<=r)
{
fact=fact*i;
i++;
}
sum=sum+fact;
n=n/10;
}
if(sum == temp)
printf("%d is a strong number\n",temp);
else
printf("%d is not a strong number\n",temp);
return 0;
}
    
