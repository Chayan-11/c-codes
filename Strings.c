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

#Program to input any string and find the length of the string without blank spaces in case of alpha numeric and special characters

#include <stdio.h>
int main()
{
   char n[100];
   int i,l=0,b=0;
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++){
    if((n[i]>=65 && n[i]<=90) || (n[i]>=97 && n[i]<=122))
   l++;
   else
    if(n[i]==' ')
    b++;
}
   printf("%d %d",l,b);
    return 0;
}

#Program to input any string and find the length of the string without blank spaces

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char n[100];
   int i,lwb=0,b=0;
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
    if(n[i]==' ')
   b++;
   else
    lwb++;

   printf("%d %d",lwb,b);
    return 0;
}
