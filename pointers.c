What is a Pointer?

➡ A pointer is a type of variable which can store the address of another object or a function.
A pointer is essentially a simple integer variable which holds a memory address that points to a value, instead of holding the actual value itself.
The computer memory is a sequential store of data and a pointer points to a specific part of the memory.
Our program can use pointers in such a way that the pointers point to a large amount of memory, depending on how much we decide to read from that point on.

Demo:- 
  char * name = "John";

It does three things:-

It allocates a local (stack) variable called 'name' which is a pointer to a single character.
It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).


Program to demonstrate pointers
   
#include <stdio.h>
#include <math.h>
void times(int *j)    //Created a function times 
{
    *j = pow(*j, 10);
}
int main()
{
    int i = 4, *j;
    j = &i;
    times(j);
    printf("%d\n", i);
    return 0;
}

Program to add two numbers using pointers

#include <stdio.h>
int main()
{
   int f,s,*p,*q,sum;
   
   printf("\n\n Pointer : Add two numbers :\n"); 
   printf("--------------------------------\n");   
   printf(" Input the first number : ");
   scanf("%d", &f);
   printf(" Input the second  number : ");
   scanf("%d", &s);  
   p = &f;
   q = &s;
   sum = *p + *q;
   printf(" The sum of the entered numbers is : %d\n\n",sum);
   return 0;
}
