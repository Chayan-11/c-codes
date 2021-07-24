#include<stdio.h>
#include<string.h>
void abc(char[]);
int main()
{
	char n[1000];
	printf("Enter the string:- \n");
	fgets(n,sizeof(n),stdin);
	abc(n);
	return 0;
}
void abc(char ch[])
{
	puts(ch);
}
