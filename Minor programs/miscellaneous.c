Explain prototype function in c.
  
➡ Prototype is nothing but an indication to the compiler at in the test of body is define with the following information to the compiler:- 
  i) Name of the function
  ii) Return type of the function
  iii) List of the parameters of the function
  
What is cyclic nature of data type?

➡ Some of the data types containing special characteristics while assigning values beyond the range of data types. No compiler error will occur 
for run, this will occur in cyclic order for only char, int, long int datatypes.
  
What are Modifiers in c?
  
➡ Modifier is a prefix to the basic datatype which is used to indicate the modification of storage space. 
  In a 32-bit processor, the storage space for int is 4 byte, but for long int the storage space is 8 byte and for short int it is 2 bytes. 
  There are 5 modifiers in c namely:- short, long, signed, unsigned, long long.   

    
Program to generate 10 random integers 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;                    //b[10];
	for(a=1;a<11;a++)          //a=0; a<10;
	{
		b=rand();              //b[a];
		printf("%d\n",b);     //b[a];  
	}
	return 0;
}


Program to demonstrate input restriction

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any number:- \n");
	scanf("%3d",&a);                     // Input:- 1234
	scanf("%2d",&b);                    // Output:- 123
	printf("%d %d\n", a,b);            //           4
	return 0;
}

Program to demonstrate input restrictions_Part II

#include <math.h>
int main()
{
	char n[]={"Chayan is in NITA"};
	printf("%.5s\n",n);       // Output:- Chaya
	printf("%40.3s\n",n);
	printf("%40.7s",n);
	return 0;
}
