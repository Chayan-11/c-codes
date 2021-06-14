Question: Program to input any number and print corresponding day of the week.
  
Ans:- 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- \n");
    scanf("%d",&n);
    switch(n)
    {

    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;
}

Question:- Program to enter any two integers and find their sum, subtraction, multiplication and division depending on users choice.
  
  Ans:-
    
#include <stdio.h>
int main()
{
    int m,n,a,b,c,d;
    printf("Enter any two integers:- ");
    scanf("%d %d",&m, &n);
    switch(m,n)
    {
    case 1:
        a=m+n;
        printf("Sum = %d\n",a);
        break;
    case 2:
        b=m-n;
        printf("Subtraction = %d",b);
        break;
    case 3:
        c=m*n;
        printf("Multiplication = %d",c);
        break;
    case 4:
        d=m/n;
        printf("Division = %d",d);
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;
}
