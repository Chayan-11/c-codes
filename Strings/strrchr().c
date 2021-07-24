Demonstrate strrchr() function

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100]={"Chayan is a student and he's learning to code in c and cpp"};
	printf("%s",strrchr(n,'c'));
	return 0;
}
