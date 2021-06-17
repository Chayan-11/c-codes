#Program to input 10 float numbers in an 1-D array and print the numbers in forward and reverse direction
Output:- 
  
1.000000
2.000000
3.000000
4.000000
5.000000
6.000000
7.000000
8.000000
9.000000
10.000000
10.000000
9.000000
8.000000
7.000000
6.000000
5.000000
4.000000
3.000000
2.000000
1.000000
  
#include <stdio.h>
int main()
{
   int i;
   float n[10];
   for(i=0;i<10;i++)
   {
       printf("Enter the float number:- \n");
       scanf("%f",&n[i]);
   }
   for(i=0;i<10;i++)
    printf("%f\n",n[i]);
   for(i=9;i>=0;i--)
    printf("%f\n",n[i]);
    return 0;
}  

#program to enter 10 intgers in an 1D array and find sum of the numbers

#include <stdio.h>
int main()
{
   int i,s=0;
   int n[10];
   for(i=0;i<10;i++)
   {
       printf("Enter the integers:- \n");
       scanf("%d",&n[i]);
       s=s+n[i];
       printf("The sum of the integers is %d\n",s);
   }
    return 0;
}
