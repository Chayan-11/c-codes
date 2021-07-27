//Output of the following snippet:- 
 
#include<stdio.h>
void fun(int, int);
int main()
{
	int i=5,j=2;
	fun(i,j);
	printf("%d %d\n",i,j);
	return 0;
}
void fun(int i, int j)
{
	i=i*i;
	j=j*j;
}

Output:- 5 2
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
//Output of the following snippet:- 

#include<stdio.h>
void fun(int*, int*);
int main()
{
	int i=5,j=2;
	fun(&i,&j);
	printf("%d %d\n",i,j);
	return 0;
}
void fun(int *i, int *j)
{
	*i=*i**i;
	*j=*j**j;
}

output:- 25 4
  
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------  

// Output of the following snippet:- 
	
#include<stdio.h>
int main()
{
	float a=13.5;
	float *b,*c; 
	b=&a; //suppose adress of a is 1006
	c=b;
	printf("%u %u %u\n",&a,b,c);
	printf("%f %f %f %f %f\n",a,*(&a),*&a,*b,*c);
	return 0;
}

Output:- 
	
6684156 6684156 6684156
13.500000 13.500000 13.500000 13.500000 13.500000
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
