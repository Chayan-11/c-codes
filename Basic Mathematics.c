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
