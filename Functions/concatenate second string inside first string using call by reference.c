// Program to input two different strings and concatenate the second string inside the first string using functions call by reference

#include<stdio.h>

void abc (char *p, char *q)
{
	int i,j;
	for(i=0; *(p+i); i++){};
	for(j=0; *(q+j); j++,i++)
		*(p+i) = *(q+j);
	*(p+i) = '\0';
}

int main() 
{
	char n[' '];
	char m[' '];
	printf("Enter string: ");
	scanf("%[^\n]",&n);
	fflush(stdin);
	printf("Enter string: ");
	scanf("%[^\n]",&m);
	printf("%s\n%s",n,m);
	abc(n, m);
	printf("\n%s",n);
	return 0;
}
