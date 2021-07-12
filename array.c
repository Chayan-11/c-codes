Program to input 10 float numbers in an 1-D array and print the numbers in forward and reverse direction
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

program to enter 10 intgers in an 1D array and find sum of the numbers

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

Program to enter 10 integers in an 1D array and count the number of positive, negative, zero, odd and even numbers present inside

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

Program to input any 10 integers in an 1D array and find the sum of even and odd integers separately

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

Program to input 10 float in an 1D array and print the sum of integers and fractional part separately

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

Program to input 10 float numbers in 1D array and extract the integers and fractional part from each number and store inside to a different float
and integers array and print all the arrays

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

Program to input 10 integers in an 1D array and find the smallest one

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

Progam to input 10 integers in an 1D array and interchange the contents of two 1D array

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

Program to input 10 integers in an 1D array but all the input integers should be positive integers

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

Program to input 10 integers in an 1D array and print the multiplication table of each number

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

Program to input 10 integers in an 1D array and search for 1 number where multiple occurence may be there. If not found then print the number is not found

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

Program to print all the unique elements in an array

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

Program to count the frequency of each element of an array

#include <stdio.h>

void main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;
	
	
       printf("\n\nCount frequency of each element of an array:\n");
       printf("------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
		  fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}

Program to print all the negative elements in an array

 #include <stdio.h>
 int main()
{
    int a[1000],i,n;

    printf("Enter size of the array :- \n");
    scanf("%d",&n);

    printf("Enter elements in array :- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nAll the negative elements in array are :- \n");
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            printf("%d\t", a[i]);
        }
    }

    return 0;
}

Program to initialize 20 integers in a 4x5 matrix and print the numbers in matrix format

output:-
	
12345
54321
12345
54321

#include <stdio.h>
int main()
{
    int n[4][5]= {{1,2,3,4,5},
                 {5,4,3,2,1},
                 {1,2,3,4,5},
                 {5,4,3,2,1}};
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        printf("%d",n[i][j]);
        printf("\n");
    }
    return 0;
}	

Program to input 15 integers in a 5x3 matrix and print the sum of the numbers

#include <stdio.h>
int main()
{
    int n[5][3],i,j,s=0;
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
    {
        printf("Enter the integers:- \n");
        scanf("%d",&n[i][j]);
        s=s+n[i][j];
    }
    printf("Total sum is:- %d\n",s);
    return 0;
}

Program to enter the records of 10 students and sort them in descending order

#include <stdio.h>
#include <math.h>
int main()
{
    char n[10][20], ch[20];
    int p[10],c[10],m[10],tot[10],ave[10],i,s,j;
    for(i=0;i<10;i++)
    {
        printf("Enter the name:- \n");
        gets(n[i]);
        fflush(stdin);
        printf("Enter the marks:- \n");
        scanf("%d %d %d",&p[i],&c[i],&m[i]);
        tot[i]=p[i]+c[i]+m[i];
        ave[i]=tot[i]/3;
        fflush(stdin);
    }
    for(i=0;i<10;i++)
        for(j=1;j<9;j++)
        if(ave[i]<ave[j+1])
    {
        s=ave[i];
        ave[i]=ave[j+1];
        ave[j+1]=s;
        s=tot[i];
        tot[i]=tot[j+1];
        tot[j+1]=s;
        s=p[i];
        p[i]=p[j+1];
        p[j+1]=s;
        s=c[i];
        c[i]=c[j+1];
        c[j+1]=s;
        s=m[i];
        m[i]=m[j+1];
        m[j+1]=s;
        strcpy(ch,n[i]);
        strcpy(n[i],n[j+1]);
        strcpy(n[j+1],ch);
    }
    for(i=0;i<10;i++)
        printf("%s %d %d %d %d %d\n",n[i],p[i],c[i],m[i],tot[i],ave[i]);
        return 0;
}

Program to input 10 numbers and print them in array

#include<stdio.h>
int main()
{
  int a[10],i;
  printf("Enter 10 numbers:- \n");

  for(i=0;i<=9;i++)
  scanf("%d",&a[i]);
  for(i=0;i<=9;i++)
  printf("%d\t",a[i]);
   
}

Program to enter subject marks and find the sum of the total marks obtained

#include<stdio.h>
void main()
{
  int sub[5],i,sum=0;
  printf("Enter marks of 5 subjects:- \n");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&sub[i]);
    sum=sum+sub[i];
  }
  
  printf("Elements are:- \n");
  for(i=0;i<=4;i++)
    printf("%d\t",sub[i]);
  printf("Sum is =%d",sum);
}
