#Program to input any string and find the length of the string without using library functions

#include <stdio.h>
int main()
{
    char n[100];
    int i,l=0;
    printf("Enter the string:- \n");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
        l++;
    printf("Length of the string %s is %d",n,l);
    return 0;
}
