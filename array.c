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

#Program to enter 10 integers in an 1D array and count the number of positive, negative, zero, odd and even numbers present inside

#include <stdio.h>
int main()
{
    int a[10],p=0,n=0,z=0,ev=0,odd=0,i;
    for(i=0;i<10;i++)
    {
        printf("Enter the Integers:- \n");
        scanf("%d",&a[i]);
        if(a[i]>0)
            p++;
        else
            if(a[i]<0)
            n++;
        else
            z++;
        if(a[i]%2==1)
            odd++;
        else
            if(a[i]%2==0)
            ev++;
        printf("%d%d%d%d%d\n",p,n,z,odd,ev);
    }
    return 0;
}

#Program to input any 10 integers in an 1D array and find the sum of even and odd integers separately

#include <stdio.h>
int main()
{
    int a[10],i,ev=0,od=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the Integers:- \n");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            ev=ev+a[i];
        else
            if(a[i]%2==1)
            od=od+a[i];
    }
    printf("\nThe sum of even and odd numbers are %d %d\n",ev,od);
    return 0;
}

#Program to input 10 float in an 1D array and print the sum of integers and fractional part separately

#include <stdio.h>
int main()
{
    int i,a,s=0;
    float n[10],b=0;
    for(i=0;i<10;i++)
    {
        printf("Enter float numbers:- \n");
        scanf("%f",&n[i]);
        a=n[i];
        b=b+n[i]-a;
        s=s+a;
    }
    printf("%d and %f\n",s,b);
    return 0;
}

#Program to input 10 float numbers in 1D array and extract the integers and fractional part from each number and store inside to a different float and integers array and print all the arrays

#include <stdio.h>
int main()
{
    int n[10],i;
    float m[10],p[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the Integers:- \n");
        scanf("%f",&m[i]);
        n[i]=m[i];
        p[i]=m[i]-n[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d %f %f",n[i],m[i],p[i]);
    }
    return 0;
}

#Program to input 10 integers in an 1D array and find the smallest one

#include <stdio.h>
int main()
{
    int n[10],i,s=32767;
    for(i=0;i<10;i++)
    {
        printf("Enter the integers:- \n");
        scanf("%d",n[i]);
        if(n[i]<s)
            s=n[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",n[i]);
        printf("%d\n",s);
    }
    return 0;
}

#Progam to input 10 integers in an 1D array and interchange the contents of two 1D array

#include <stdio.h>
int main()
{
   int a[10],b[10],c[10],i;
   printf("Enter 1st group array:- \n");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
       printf("Enter the 2nd group array:- \n");
       for(i=0;i<10;i++)
       {
           scanf("%d",&b[i]);
           printf("Enter the 3rd group array:- \n");
           scanf("%d",&c[i]);
           a[i]=b[i];
           b[i]=c[i];
           c[i]=a[i];
           printf("First group of array is:- ",a[i]);
           printf("Second group of array is:- ",b[i]);
       }
   }
    return 0;
}

#Program to input 10 integers in an 1D array but all the input integers should be positive integers

#include <stdio.h>
int main()
{
    int n[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter the Integers:- \n");
        scanf("%d",&n[i]);
        if(n[i]<0)
            i--;
    }
    for(i=0;i<10;i++)
        printf("%d\n",n[i]);
    return 0;
}

#Program to input 10 integers in an 1D array and print the multiplication table of each number

#include <stdio.h>
int main()
{
    int n[10],i,j;
    for(i=0;i<10;i++)
    {
    printf("Enter any Integer:- \n");
    scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Table of %d\n",n[i]);
        for(j=1;j<=10;j++)
            printf("%d*%d=%d\n",n[i],j,n[i]*j);
    }
    return 0;
}

#Program to input 10 integers in an 1D array and search for 1 number where multiple occurence may be there. If not found then print the number is not found

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10],i,p=0,item;
    for(i=0;i<10;i++)
    {
        printf("Enter any integers:- \n");
        scanf("%d",&n[i]);
    }
    printf("Enter Item:- ");
    scanf("%d",&item);
    for(i=0;i<10;i++)
        if(n[i]==item)
    {
        printf("%d found at location n[%d]\n",item,i);
        p++;
    }
    if(p==0)
        printf("%d number not found",item);
    return 0;
}

#Program to print all the unique elements in an array

#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}
