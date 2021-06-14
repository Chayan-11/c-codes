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
    int a,b,c,n;
    printf("For Sum press 1, For Sub press 2, For Multiplication press 3, For Div press 4");
    scanf("%d",&n);
    printf("Enter any two integers:- ");
    scanf("%d %d",&a, &b);
    switch(n)
    {
    case 1:
        c=a+b;
        printf("Sum = %d\n",c);
        break;
    case 2:
        c=a-b;
        printf("Subtraction = %d",c);
        break;
    case 3:
        c=a*b;
        printf("Multiplication = %d",c);
        break;
    case 4:
        c=a/b;
        printf("Division = %d",c);
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;
}
