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

Question:- program to check whether a character is vowel or consonant using switch case.
  
  Ans:- 
    
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:- ");
    scanf("%c",&ch);
    switch(ch)
    {
    case'A':
        printf("Vowel");
        break;
    case'E':
        printf("Vowel");
        break;
    case'I':
        printf("Vowel");
        break;
    case'O':
        printf("Vowel");
        break;
    case'U':
        printf("Vowel");
        break;
    case'a':
        printf("Vowel");
        break;
    case'e':
        printf("Vowel");
        break;
    case'i':
        printf("Vowel");
        break;
    case'o':
        printf("Vowel");
        break;
    case'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }
    return 0;
}    

Question:- Program to input any character and print the ASCII value of the character.
  
Ans:-
  
#include <stdio.h>
int main()
{
   char ch;
   int n;
   printf("Enter any character:- ");
   scanf("%c",&ch);
   n=ch;
   printf("%c = %d",ch, n);
    return 0;
}  

Question:- Input any float number and if it has any fractional part then print the square root of the number or else print the square of the number.
  
Ans:- 

#include <stdio.h>
#include <math.h>

int main()
{
   float n,s,d;
   int m,p;
   printf("Enter the float number:- ");
   scanf("%f",&n);
   m=n;
   s=n-m;
   if(s>=0)
   {
       d=sqrt(s);
       printf("%f",d);
   }
   else
   {
       p=pow(n,s);
       printf("%d",p);
   }
    return 0;
}  

Question:- Program to check whether a character is vowel or not

#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    printf("Enter the Character:- %c\n",ch);
    scanf("%c",&ch);
    if(((ch>='a') && (ch<='z')) || ((ch>='A') && (ch<='Z')))
    {
        switch(ch)
        {
        	
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Entered character %c is vowel.",ch);
            break;
        default:
            printf("Entered character %c is not vowel",ch);
    }

    }
         else
            printf("Entered character %c is not valid character",ch);
}
