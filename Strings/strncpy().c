Demonstrate strncpy() function

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100]={"Chayan is a student"};
	char m[100]={"He is learning to program"};
	strncpy(n,m,10);
	puts(n);
	return 0;
}
