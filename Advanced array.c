Program to input 20 integrs in a 4x5 matrix of 1D array and count the number of positive, negative, zeroes, even and odd numbers

#include <stdio.h>
int main()
{
    int a[4][5],i,j,p=0,n=0,z=0,ev=0,od=0;
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
    {
        printf("Enter any integers:- \n");
        scanf("%d",&a[i][j]);
        if(a[i][j]>0)
            p++;
        else
            if(a[i][j]<0)
            n++;
        else
            z++;
        if(a[i][j]%2==0)
            ev++;
        else
            if(a[i][j]%2==1)
            od++;
    }
    printf("\n%d %d %d %d %d\n",p,n,z,ev,od);
    return 0;
}

Program to input 10 integers in 1D array and print the numbers from behind and also copy the numbers from another array from reverse using array and pointers

#include<stdio.h>
int main()
{
	int n[10],m[10],*p,*q,i;                                                            
	p=n;
	q=m;
	for(i=0;i<10;i++)
	{
		printf("Enter the integrs:- \n");
		scanf("%d",p+i);
		*(q+9-i) = *(p+i);
	}
	for(i=0;i<10;i++)
	printf("%d %d\n",*(p+i),*(q+i));
	return 0;
}

/*Sample Output:- 
12 44
45 23
55 26
65 95
13 78
78 13
95 65
26 55
23 45
44 12
*/

Program to input 10 float numbers in 1D array and extract integers and fractional part separately from each number and store inside two different integer and float number
using array and pointers. Print all the arrays.
	
#include<stdio.h>
int main()
{
	int n[10],*p,i;
	float m[10],s[10],*q,*r;
	p=n;
	q=m;
	r=s;
	for(i=0;i<10;i++)
	{
		printf("Enter the float numbers:- \n");
		scanf("%f",q+i);
		*(p+i) = *(q+i);
		*(r+i) = *(q+i) - *(p+i);
	}
	for(i=0;i<10;i++)
	printf("%.2f %d %.2f\n",*(q+i),*(p+i),*(r+i));
	
}	
