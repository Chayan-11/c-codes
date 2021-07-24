Demonstrate fgets() and puts() function

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100];
	printf("Enter any string:- \n");
	fgets(n,sizeof(n),stdin);
	puts(n);
	return 0;
}
