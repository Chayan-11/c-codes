Demonstrate strncat() function

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100]={"Chayan"};
	char m[100]={"is learning to program"};
	strncat(n,m,4);
	puts(n);
	return 0;
}
