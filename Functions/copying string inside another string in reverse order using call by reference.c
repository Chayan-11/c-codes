// Program to input any number and copy the string in reverse order inside another string

#include<stdio.h>
void abc (char *p, char *q)
{
	int i, j;
	for(i=0; *(p+i); i++);
	for(j=0; j<i; j++)
	*(q+j) = *(p+i-j-1);
	*(q+j) = '\0';
	// printf(q);
}

int main()
{
	char n[] = "Coding is Fun";
	char m[' '];
	abc(n,m);
	printf("%s\n %s",n,m);
}
